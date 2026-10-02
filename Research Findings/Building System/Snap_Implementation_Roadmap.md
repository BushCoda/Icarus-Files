# Icarus Snap Mod - Complete Implementation Roadmap

**Project Scope:** Full Multiplayer Snap System  
**Target:** All Building Pieces with Vanilla Integration  
**Date:** 2026-10-01

---

## 🎯 Your Requirements Summary

| Requirement | Selection | Complexity |
|-------------|-----------|-----------|
| Networking | Multiplayer (Server Authority) | 🔴 High |
| Piece Support | All Pieces (50+ types) | 🔴 High |
| Validation | Stability + Collision Checks | 🔴 High |
| Configuration | Load from D_BuildingPieces Table | 🟡 Medium |
| Visual Feedback | Full (World + Network + Blueprint) | 🔴 High |

**Total Scope:** Large, well-defined project requiring phased approach

---

## 📐 Architecture Overview

```
┌─────────────────────────────────────────────────────────────┐
│                    MULTIPLAYER SNAP SYSTEM                  │
├─────────────────────────────────────────────────────────────┤
│                                                               │
│  CLIENT SIDE                          SERVER SIDE           │
│  ─────────────────                    ────────────           │
│                                                               │
│  Raycast/Trace                        RPC Receives Request   │
│  ↓                                     ↓                      │
│  FindBestSnapCandidate                ValidateSnapPlacement  │
│  ↓                                     ├─ Collision Check    │
│  Visualize Preview                    ├─ Stability Check     │
│  ↓                                     ├─ Role Compatibility  │
│  Player Clicks                        ├─ Material Tier Check │
│  ↓                                     └─ Occupancy Check     │
│  Send RPC to Server                   ↓                      │
│                                       Approve/Reject         │
│                                       ↓                       │
│                                       Register with Grid      │
│                                       ↓                       │
│                                       Replicate to Clients    │
│                                       ↓                       │
│  ← ← ← ← ← ← Multicast Update ← ← ← ← ← ← ←                 │
│  ↓                                                            │
│  Update Local Preview → Final Piece                          │
│                                                               │
└─────────────────────────────────────────────────────────────┘
```

---

## 📊 D_BuildingPieces Table Integration

Your snap data needs to be **embedded in or referenced from** D_BuildingPieces.

### **Current Vanilla Structure:**
```cpp
struct BuildingPiece {
    FName Type;           // Floor, Wall, etc.
    FString Icon;
    FString Blueprint;
    FRowHandle Audio;
    FRowHandle Skin;
}
```

### **Extended Structure (Your Mod):**
```cpp
struct BuildingPiece {
    FName Type;
    FString Icon;
    FString Blueprint;
    FRowHandle Audio;
    FRowHandle Skin;
    
    // NEW: Snap Configuration
    FRowHandle SnapData;  // Points to D_BuildingSnapConfigs table
    // OR
    TArray<FBuildingSnapPoint> InlineSnapPoints;  // Embedded
}
```

### **Two Implementation Options:**

#### **Option A: Separate D_BuildingSnapConfigs Table (RECOMMENDED)**

```
D_BuildingPieces:
  Name: Wood_Floor
  Type: Floor
  Blueprint: BP_Building_Floor_Wood_C
  SnapData: Wood_Floor_Snaps  ← Reference

D_BuildingSnapConfigs:
  Name: Wood_Floor_Snaps
  PieceType: Floor
  SnapPoints: [
    { Role: FloorSurface, ... },
    { Role: FloorEdge_Front, ... },
    { Role: FloorEdge_Back, ... },
    { Role: FloorEdge_Left, ... },
    { Role: FloorEdge_Right, ... }
  ]
```

**Pros:**
- Clean separation of concerns
- Easy to reuse snap configs across materials
- Designers can edit independently

**Cons:**
- Extra table lookup

#### **Option B: Inline in D_BuildingPieces**

```cpp
// Modify BuildingPiece struct to include SnapPoints array directly
struct BuildingPiece {
    // ... existing fields ...
    TArray<FBuildingSnapPoint> SnapPoints;
}
```

**Pros:**
- Everything in one place
- No extra table lookups

**Cons:**
- More complex struct editing in UE
- Duplicate snap configs for same type across materials

### **🎯 Recommendation: Option A (Separate Table)**

**Why:** Vanilla uses this pattern (D_Buildable → D_BuildingStability, etc.)

---

## 🗂️ Implementation Phases

### **Phase 0: Data Structure (Week 1)**

#### **File 1: BuildingSnapRole.h** (New)
```cpp
#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapRole.generated.h"

/**
 * Categorizes snap points by their function.
 * Used to validate compatible attachments.
 */
UENUM(BlueprintType)
enum class EBuildingSnapRole : uint8
{
    // ===== HORIZONTAL SURFACES =====
    FloorSurface UMETA(DisplayName = "Floor Surface"),
    FloorEdge_Front UMETA(DisplayName = "Floor Edge (Front)"),
    FloorEdge_Back UMETA(DisplayName = "Floor Edge (Back)"),
    FloorEdge_Left UMETA(DisplayName = "Floor Edge (Left)"),
    FloorEdge_Right UMETA(DisplayName = "Floor Edge (Right)"),
    FloorCorner UMETA(DisplayName = "Floor Corner"),

    // ===== VERTICAL SURFACES =====
    WallBottom UMETA(DisplayName = "Wall Bottom"),
    WallTop UMETA(DisplayName = "Wall Top"),
    WallSide_Front UMETA(DisplayName = "Wall Side (Front)"),
    WallSide_Back UMETA(DisplayName = "Wall Side (Back)"),
    WallCorner UMETA(DisplayName = "Wall Corner"),

    // ===== STRUCTURAL =====
    BeamEnd UMETA(DisplayName = "Beam End"),
    BeamMid UMETA(DisplayName = "Beam Mid Point"),
    BeamCorner UMETA(DisplayName = "Beam Corner"),
    FrameCorner UMETA(DisplayName = "Frame Corner"),
    FrameCenter UMETA(DisplayName = "Frame Center"),
    PillarTop UMETA(DisplayName = "Pillar Top"),
    PillarBottom UMETA(DisplayName = "Pillar Bottom"),

    // ===== RAMPS =====
    RampBase UMETA(DisplayName = "Ramp Base"),
    RampTop UMETA(DisplayName = "Ramp Top"),
    RampEdge UMETA(DisplayName = "Ramp Edge"),

    // ===== OPENINGS =====
    DoorOpening UMETA(DisplayName = "Door Opening"),
    WindowOpening UMETA(DisplayName = "Window Opening"),

    // ===== CATCHALL =====
    Custom UMETA(DisplayName = "Custom Role"),
    Max UMETA(Hidden)
};
```

#### **File 2: BuildingSnapPoint.h** (Extend)
```cpp
// Modify existing BuildingSnapPoint.h

#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapRole.h"
#include "BuildingSnapPoint.generated.h"

/**
 * Defines a local attachment point on a building piece.
 * 
 * The transform is relative to the owning building actor.
 * The forward direction controls valid approach directions.
 */
USTRUCT(BlueprintType)
struct FBuildingSnapPoint
{
    GENERATED_BODY()

public:
    FBuildingSnapPoint()
        : SnapRole(EBuildingSnapRole::Custom)
        , SnapDistance(150.0f)
        , bAllowMultipleAttachments(false)
        , MinimumSupportStability(0.0f)
    {
    }

    // ===== REQUIRED FIELDS =====

    /** Local transform relative to the building piece actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
        FTransform LocalTransform = FTransform::Identity;

    /** Role of this snap point (defines what can attach). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
        EBuildingSnapRole SnapRole = EBuildingSnapRole::Custom;

    /** Roles that are accepted by this point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
        TArray<EBuildingSnapRole> CompatibleRoles;

    // ===== OPTIONAL FIELDS =====

    /** Maximum preview distance at which this point may be selected. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
        meta = (ClampMin = "0.0", ClampMax = "1000.0"))
        float SnapDistance = 150.0f;

    /** Allows multiple pieces to use this point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
        bool bAllowMultipleAttachments = false;

    /** Minimum stability the target piece must have. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
        float MinimumSupportStability = 0.0f;

    /** Optional rotation constraint (in degrees). 0 = no constraint. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
        meta = (ClampMin = "0.0", ClampMax = "360.0"))
        float RotationConstraint = 0.0f;

    /** Editor/debug description. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
        FString Description;

    // ===== HELPER FUNCTIONS =====

    bool AcceptsRole(const EBuildingSnapRole InRole) const
    {
        return CompatibleRoles.Contains(InRole);
    }

    bool HasRotationConstraint() const
    {
        return RotationConstraint > 0.0f;
    }
};
```

---

### **Phase 1: Server Validation (Week 2-3)**

#### **File 3: BuildingSnapValidator.h** (New)

```cpp
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldGridPlacementComponent.h"
#include "BuildingSnapValidator.generated.h"

/**
 * Validates snap placement requests on the server.
 * Checks collision, stability, occupancy, and compatibility.
 */
UENUM(BlueprintType)
enum class ESnapValidationResult : uint8
{
    Valid UMETA(DisplayName = "Valid - Can Place"),
    InvalidCollision UMETA(DisplayName = "Invalid - Collision Detected"),
    InvalidStability UMETA(DisplayName = "Invalid - Insufficient Support"),
    InvalidRole UMETA(DisplayName = "Invalid - Role Incompatible"),
    InvalidOccupancy UMETA(DisplayName = "Invalid - Snap Point Occupied"),
    InvalidMaterial UMETA(DisplayName = "Invalid - Material Tier Mismatch"),
    InvalidDistance UMETA(DisplayName = "Invalid - Too Far"),
    ErrorUnknown UMETA(DisplayName = "Error - Unknown Issue")
};

USTRUCT(BlueprintType)
struct FSnapValidationInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
        ESnapValidationResult Result = ESnapValidationResult::Valid;

    UPROPERTY(BlueprintReadOnly)
        FText Message;

    UPROPERTY(BlueprintReadOnly)
        float SupportStability = 0.0f;

    UPROPERTY(BlueprintReadOnly)
        TArray<AActor*> CollidingActors;

    bool IsValid() const
    {
        return Result == ESnapValidationResult::Valid;
    }
};

UCLASS()
class ICARUS_API UBuildingSnapValidator : public UObject
{
    GENERATED_BODY()

public:
    /**
     * Validates a snap placement candidate on the server.
     * Performs all checks needed before confirming placement.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Validation")
        static FSnapValidationInfo ValidateSnapPlacement(
            AActor* SourceActor,
            AActor* TargetActor,
            int32 SourceSnapIndex,
            int32 TargetSnapIndex,
            const FTransform& ProposedTransform);

    /**
     * Checks for collision overlap with existing pieces.
     * Returns all colliding actors.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Validation")
        static bool CheckCollisionOverlap(
            AActor* SourceActor,
            const FTransform& ProposedTransform,
            TArray<AActor*>& OutCollidingActors);

    /**
     * Checks if target actor has sufficient stability to support source.
     * Uses vanilla D_BuildingStability data.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Validation")
        static bool CheckStabilitySupport(
            AActor* TargetActor,
            float& OutStability,
            FText& OutReason);

    /**
     * Checks if material tiers are compatible.
     * Lower tier cannot rest on same/lower tier.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Validation")
        static bool CheckMaterialTierCompatibility(
            AActor* SourceActor,
            AActor* TargetActor,
            FText& OutReason);

    /**
     * Checks if snap points are still available.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Validation")
        static bool CheckSnapPointOccupancy(
            AActor* TargetActor,
            int32 TargetSnapIndex,
            bool bAllowMultiple,
            FText& OutReason);

private:
    static int32 GetMaterialTier(AActor* BuildingActor);
    static float GetActorStability(AActor* BuildingActor);
};
```

#### **File 4: BuildingSnapValidator.cpp** (New)

```cpp
#include "BuildingSnapValidator.h"
#include "WorldGridPlacementComponent.h"
#include "BuildingPieceSnapData.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"

// TODO: Include vanilla building system headers
// #include "BuildingSubsystem.h"
// #include "BuildingStabilityData.h"

FSnapValidationInfo UBuildingSnapValidator::ValidateSnapPlacement(
    AActor* SourceActor,
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& ProposedTransform)
{
    FSnapValidationInfo ValidationInfo;

    // Validate inputs
    if (!SourceActor || !TargetActor)
    {
        ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
        ValidationInfo.Message = FText::FromString("Invalid actor references");
        return ValidationInfo;
    }

    // Get components
    UWorldGridPlacementComponent* SourceComponent =
        SourceActor->FindComponentByClass<UWorldGridPlacementComponent>();
    UWorldGridPlacementComponent* TargetComponent =
        TargetActor->FindComponentByClass<UWorldGridPlacementComponent>();

    if (!SourceComponent || !TargetComponent ||
        !SourceComponent->PieceSnapData || !TargetComponent->PieceSnapData)
    {
        ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
        ValidationInfo.Message = FText::FromString("Missing placement components");
        return ValidationInfo;
    }

    // Verify snap indices are valid
    if (!SourceComponent->PieceSnapData->GetSnapPoint(SourceSnapIndex) ||
        !TargetComponent->PieceSnapData->GetSnapPoint(TargetSnapIndex))
    {
        ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
        ValidationInfo.Message = FText::FromString("Invalid snap point indices");
        return ValidationInfo;
    }

    // CHECK 1: Role Compatibility
    const FBuildingSnapPoint* TargetSnap =
        TargetComponent->PieceSnapData->GetSnapPoint(TargetSnapIndex);
    const FBuildingSnapPoint* SourceSnap =
        SourceComponent->PieceSnapData->GetSnapPoint(SourceSnapIndex);

    if (!TargetSnap->AcceptsRole(SourceSnap->SnapRole))
    {
        ValidationInfo.Result = ESnapValidationResult::InvalidRole;
        ValidationInfo.Message = FText::FromString(
            FString::Printf(TEXT("Role %d not accepted by target snap"),
                static_cast<int32>(SourceSnap->SnapRole)));
        return ValidationInfo;
    }

    // CHECK 2: Occupancy
    FText OccupancyReason;
    if (!CheckSnapPointOccupancy(TargetActor, TargetSnapIndex,
        TargetSnap->bAllowMultipleAttachments, OccupancyReason))
    {
        ValidationInfo.Result = ESnapValidationResult::InvalidOccupancy;
        ValidationInfo.Message = OccupancyReason;
        return ValidationInfo;
    }

    // CHECK 3: Collision
    TArray<AActor*> CollidingActors;
    if (!CheckCollisionOverlap(SourceActor, ProposedTransform, CollidingActors))
    {
        ValidationInfo.Result = ESnapValidationResult::InvalidCollision;
        ValidationInfo.Message = FText::FromString(
            FString::Printf(TEXT("Collision detected with %d actors"),
                CollidingActors.Num()));
        ValidationInfo.CollidingActors = CollidingActors;
        return ValidationInfo;
    }

    // CHECK 4: Stability
    float TargetStability = 0.0f;
    FText StabilityReason;
    if (!CheckStabilitySupport(TargetActor, TargetStability, StabilityReason))
    {
        // If target stability is below snap requirement, fail
        if (TargetStability < TargetSnap->MinimumSupportStability)
        {
            ValidationInfo.Result = ESnapValidationResult::InvalidStability;
            ValidationInfo.Message = FText::FromString(
                FString::Printf(TEXT("Support stability %.1f < required %.1f"),
                    TargetStability, TargetSnap->MinimumSupportStability));
            ValidationInfo.SupportStability = TargetStability;
            return ValidationInfo;
        }
    }

    // CHECK 5: Material Tier
    FText MaterialReason;
    if (!CheckMaterialTierCompatibility(SourceActor, TargetActor, MaterialReason))
    {
        ValidationInfo.Result = ESnapValidationResult::InvalidMaterial;
        ValidationInfo.Message = MaterialReason;
        return ValidationInfo;
    }

    // All checks passed!
    ValidationInfo.Result = ESnapValidationResult::Valid;
    ValidationInfo.Message = FText::FromString("Placement valid");
    ValidationInfo.SupportStability = TargetStability;
    return ValidationInfo;
}

bool UBuildingSnapValidator::CheckCollisionOverlap(
    AActor* SourceActor,
    const FTransform& ProposedTransform,
    TArray<AActor*>& OutCollidingActors)
{
    if (!SourceActor || !SourceActor->GetWorld())
    {
        return true; // No world, assume valid
    }

    // TODO: Get collision shape from source actor
    // For now, use a sphere trace at proposed location
    const FVector TraceLocation = ProposedTransform.GetLocation();
    const float TraceRadius = 200.0f; // Should get from actor bounds

    TArray<FOverlapResult> Overlaps;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(SourceActor);

    const bool bHit = SourceActor->GetWorld()->OverlapMultiByChannel(
        Overlaps,
        TraceLocation,
        FQuat::Identity,
        ECC_WorldStatic,
        FCollisionShape::MakeSphere(TraceRadius),
        QueryParams);

    if (bHit && Overlaps.Num() > 0)
    {
        for (const FOverlapResult& Overlap : Overlaps)
        {
            if (Overlap.GetActor() && Overlap.GetActor() != SourceActor)
            {
                OutCollidingActors.Add(Overlap.GetActor());
            }
        }
        return false; // Collision detected
    }

    return true; // No collision
}

bool UBuildingSnapValidator::CheckStabilitySupport(
    AActor* TargetActor,
    float& OutStability,
    FText& OutReason)
{
    if (!TargetActor)
    {
        OutReason = FText::FromString("Target actor invalid");
        return false;
    }

    // TODO: Query vanilla BuildingSubsystem for stability data
    // For now, return a placeholder
    OutStability = 10.0f;
    OutReason = FText::FromString("Stability check not yet implemented");
    return true;
}

bool UBuildingSnapValidator::CheckMaterialTierCompatibility(
    AActor* SourceActor,
    AActor* TargetActor,
    FText& OutReason)
{
    if (!SourceActor || !TargetActor)
    {
        return false;
    }

    int32 SourceTier = GetMaterialTier(SourceActor);
    int32 TargetTier = GetMaterialTier(TargetActor);

    // Lower tier (e.g., Thatch = 1) cannot rest on lower/equal tier
    // Example: Wood (3) can rest on Stone (6), but not vice versa
    if (SourceTier < TargetTier)
    {
        OutReason = FText::FromString("Source material tier too low for target support");
        return false;
    }

    OutReason = FText::FromString("Materials compatible");
    return true;
}

bool UBuildingSnapValidator::CheckSnapPointOccupancy(
    AActor* TargetActor,
    int32 TargetSnapIndex,
    bool bAllowMultiple,
    FText& OutReason)
{
    if (!TargetActor)
    {
        return false;
    }

    UWorldGridPlacementComponent* TargetComponent =
        TargetActor->FindComponentByClass<UWorldGridPlacementComponent>();

    if (!TargetComponent)
    {
        return true; // No component, assume available
    }

    // TODO: Query occupancy tracking
    // For now, return true (available)
    OutReason = FText::FromString("Snap point available");
    return true;
}

int32 UBuildingSnapValidator::GetMaterialTier(AActor* BuildingActor)
{
    if (!BuildingActor)
    {
        return 0;
    }

    // TODO: Query D_BuildingStability table to get piece's material tier
    // For now, return placeholder
    return 3;
}

float UBuildingSnapValidator::GetActorStability(AActor* BuildingActor)
{
    if (!BuildingActor)
    {
        return 0.0f;
    }

    // TODO: Query BuildingSubsystem for piece stability
    return 10.0f;
}
```

---

### **Phase 2: RPC & Replication (Week 3-4)**

#### **File 5: WorldGridPlacementComponent.h** (Extend)

Add to existing file:

```cpp
// Add to class declaration:

/**
 * Server-side RPC to request snap placement.
 * Client sends placement request, server validates and broadcasts result.
 */
UFUNCTION(Server, Reliable, WithValidation)
void Server_RequestSnapPlacement(
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& ProposedTransform);

/**
 * Multicast RPC to notify all clients of successful placement.
 */
UFUNCTION(NetMulticast, Reliable)
void Multicast_OnSnapPlacementConfirmed(
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& FinalTransform);

/**
 * Client RPC to notify of placement rejection.
 */
UFUNCTION(Client, Reliable)
void Client_OnSnapPlacementRejected(
    const FText& RejectionReason);

// Private helper for server processing
private:
    void ProcessSnapPlacement_Server(
        AActor* TargetActor,
        int32 SourceSnapIndex,
        int32 TargetSnapIndex,
        const FTransform& ProposedTransform);
```

#### **File 6: WorldGridPlacementComponent.cpp** (Extend)

```cpp
void UWorldGridPlacementComponent::Server_RequestSnapPlacement_Implementation(
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& ProposedTransform)
{
    AActor* SourceActor = GetOwner();
    if (!SourceActor)
    {
        return;
    }

    // Validate the placement
    FSnapValidationInfo ValidationInfo =
        UBuildingSnapValidator::ValidateSnapPlacement(
            SourceActor,
            TargetActor,
            SourceSnapIndex,
            TargetSnapIndex,
            ProposedTransform);

    if (!ValidationInfo.IsValid())
    {
        // Send rejection to client
        if (APlayerController* PC = Cast<APlayerController>(
            SourceActor->GetInstigatorController()))
        {
            Client_OnSnapPlacementRejected(ValidationInfo.Message);
        }
        return;
    }

    // Placement approved! Mark snap point as occupied
    MarkSnapPointOccupied(TargetActor, TargetSnapIndex);

    // Set source actor to final transform
    SourceActor->SetActorTransform(ProposedTransform);

    // Notify all clients
    Multicast_OnSnapPlacementConfirmed(
        TargetActor,
        SourceSnapIndex,
        TargetSnapIndex,
        ProposedTransform);

    // TODO: Register with BuildingSubsystem
    // TODO: Register with Grid
}

bool UWorldGridPlacementComponent::Server_RequestSnapPlacement_Validate(
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& ProposedTransform)
{
    // Basic sanity checks
    return TargetActor != nullptr &&
        SourceSnapIndex >= 0 &&
        TargetSnapIndex >= 0;
}

void UWorldGridPlacementComponent::Multicast_OnSnapPlacementConfirmed_Implementation(
    AActor* TargetActor,
    int32 SourceSnapIndex,
    int32 TargetSnapIndex,
    const FTransform& FinalTransform)
{
    // On all clients: update visual, play sound, etc.
    // This is called after server validation passes
    UE_LOG(LogTemp, Log, TEXT("Snap placement confirmed on all clients"));
}

void UWorldGridPlacementComponent::Client_OnSnapPlacementRejected_Implementation(
    const FText& RejectionReason)
{
    // On client: show error feedback to player
    UE_LOG(LogTemp, Warning, TEXT("Snap placement rejected: %s"),
        *RejectionReason.ToString());

    // TODO: Play rejection sound
    // TODO: Show UI message
    // TODO: Remove preview actor
}
```

---

### **Phase 3: D_BuildingPieces Integration (Week 4)**

#### **File 7: Create D_BuildingSnapConfigs.h** (New)

```cpp
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuildingSnapPoint.h"
#include "D_BuildingSnapConfigs.generated.h"

/**
 * DataTable entry defining all snap points for a building piece type.
 * 
 * Usage:
 * - Create one entry per piece type (Floor, Wall_Solid, Beam_Vertical, etc.)
 * - Each entry contains the snap points for that piece
 * - Reference this from D_BuildingPieces table
 */
USTRUCT(BlueprintType)
struct ICARUS_API FBuildingSnapConfig : public FTableRowBase
{
    GENERATED_BODY()

    /** Display name for debugging. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FText DisplayName;

    /** Building piece type this config applies to (Floor, Wall_Solid, etc.). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FName PieceTypeName;

    /** All snap points for this piece type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config")
        TArray<FBuildingSnapPoint> SnapPoints;

    /** Allow designers to override snap distance globally. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config")
        float GlobalSnapDistanceMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FString Description;

    int32 GetSnapPointCount() const { return SnapPoints.Num(); }

    const FBuildingSnapPoint* GetSnapPoint(int32 Index) const
    {
        return SnapPoints.IsValidIndex(Index) ? &SnapPoints[Index] : nullptr;
    }
};
```

#### **Modify BuildingPieceSnapData.h to Load from DataTable**

```cpp
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "BuildingSnapPoint.h"
#include "BuildingPieceSnapData.generated.h"

UCLASS(BlueprintType)
class ICARUS_API UBuildingPieceSnapData : public UDataAsset
{
    GENERATED_BODY()

public:
    /** Display name used while debugging. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Data")
        FText DisplayName;

    /** Snap points belonging to this piece (can be loaded from DataTable). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Data")
        TArray<FBuildingSnapPoint> SnapPoints;

    /** Optional: Reference to D_BuildingSnapConfigs row for data-driven snap setup. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Data",
        meta = (RowType = "BuildingSnapConfig"))
        FDataTableRowHandle SnapConfigDataTable;

    /**
     * Loads snap points from the referenced DataTable row.
     * Call this to populate SnapPoints from D_BuildingSnapConfigs.
     */
    UFUNCTION(BlueprintCallable, Category = "Snap Data")
        void LoadSnapPointsFromDataTable();

    UFUNCTION(BlueprintPure, Category = "Snap Data")
        int32 GetSnapPointCount() const
    {
        return SnapPoints.Num();
    }

    const FBuildingSnapPoint* GetSnapPoint(const int32 Index) const
    {
        return SnapPoints.IsValidIndex(Index)
            ? &SnapPoints[Index]
            : nullptr;
    }

private:
    friend class UBuildingPieceSnapData;
};
```

---

### **Phase 4: Content Setup (Week 4-5)**

**In Editor:**

1. **Create D_BuildingSnapConfigs Table**
   - New DataTable asset
   - Row type: BuildingSnapConfig
   - Add rows for each piece type:
     - Floor_SnapConfig
     - Wall_Solid_SnapConfig
     - Beam_Vertical_SnapConfig
     - etc.

2. **Example Floor_SnapConfig Entry:**
   ```
   Name: Floor_SnapConfig
   DisplayName: Floor Snap Points
   PieceTypeName: Floor
   SnapPoints: [
     {
       Role: FloorSurface,
       LocalTransform: Identity,
       CompatibleRoles: [WallBottom, BeamEnd, FrameCorner],
       SnapDistance: 150,
       MinimumSupportStability: 0,
       Description: "Main floor surface"
     },
     {
       Role: FloorEdge_Front,
       LocalTransform: (X=150, Y=0, Z=0),
       CompatibleRoles: [WallBottom],
       SnapDistance: 100,
       MinimumSupportStability: 2.0,
       Description: "Front edge for wall attachment"
     },
     // ... more edges ...
   ]
   ```

3. **Update Building Blueprints**
   - Add WorldGridPlacementComponent
   - Set GridFrame reference
   - Set SnapData or SnapConfigDataTable

---

## 🚀 Phased Development Timeline

```
WEEK 1: Data Structures
├─ BuildingSnapRole.h (enum)
├─ BuildingSnapPoint.h (extend with SnapRole)
└─ D_BuildingSnapConfigs.h (DataTable entry)

WEEK 2-3: Server Validation
├─ BuildingSnapValidator.h/cpp (all checks)
└─ Integration tests

WEEK 3-4: RPCs & Networking
├─ Server_RequestSnapPlacement RPC
├─ Multicast_OnSnapPlacementConfirmed RPC
├─ Client_OnSnapPlacementRejected RPC
└─ Network tests (local + remote)

WEEK 4-5: Content & Integration
├─ Create D_BuildingSnapConfigs table
├─ Define snap points for all piece types
├─ Update building blueprints
└─ Vanilla BuildingSubsystem integration

WEEK 5+: Polish & Testing
├─ Visual feedback (snap guides)
├─ Performance optimization
├─ Edge case handling
└─ Multiplayer testing
```

---

## 📋 Implementation Checklist

### **Phase 1: Data Structures**
- [ ] Create BuildingSnapRole.h with EBuildingSnapRole enum
- [ ] Extend BuildingSnapPoint.h with SnapRole field
- [ ] Create D_BuildingSnapConfigs.h DataTable struct
- [ ] Compile and test

### **Phase 2: Validation Logic**
- [ ] Create BuildingSnapValidator.h
- [ ] Implement ValidateSnapPlacement()
- [ ] Implement CheckCollisionOverlap()
- [ ] Implement CheckStabilitySupport()
- [ ] Implement CheckMaterialTierCompatibility()
- [ ] Implement CheckSnapPointOccupancy()
- [ ] Unit test each validation function

### **Phase 3: Networking**
- [ ] Add Server_RequestSnapPlacement RPC
- [ ] Add Multicast_OnSnapPlacementConfirmed RPC
- [ ] Add Client_OnSnapPlacementRejected RPC
- [ ] Implement RPC handlers
- [ ] Test with multiple players (PIE)

### **Phase 4: Content Setup**
- [ ] Create D_BuildingSnapConfigs DataTable
- [ ] Define snap points for:
     - [ ] Floor pieces
     - [ ] Wall pieces
     - [ ] Beam pieces
     - [ ] Frame pieces
     - [ ] Ramp pieces
- [ ] Update all building blueprints
- [ ] Test placement in editor

### **Phase 5: Vanilla Integration**
- [ ] Query BuildingSubsystem for piece stability
- [ ] Register placed pieces with grid
- [ ] Sync with vanilla save/load
- [ ] Test with vanilla building system

### **Phase 6: Polish & Testing**
- [ ] Add visual snap guides
- [ ] Add rejection feedback UI
- [ ] Optimize collision queries
- [ ] Test edge cases
- [ ] Full multiplayer testing

---

## 🎯 Critical Integration Points

### **Must Connect To:**

1. **BuildingSubsystem** (vanilla)
   - Query piece stability
   - Register placements
   - Query grid occupancy

2. **D_BuildingStability** (vanilla)
   - Get material tier for source/target
   - Get stability requirements

3. **BuildingGrid** (vanilla)
   - Check occupancy
   - Get nearby pieces
   - Register with grid

4. **BuildingInfo** (vanilla)
   - Save snap attachment data
   - Load on level restart
   - Track relationships

---

## 📝 Key Questions Still Open

1. **Vanilla Integration:**
   - Do placed pieces need to work with vanilla building destruction?
   - Should snapped pieces support vanilla "unzipping"?
   - Do you need to save/load snap relationships?

2. **Validation Strictness:**
   - Should all placements require stability support?
   - Can pieces snap to the ground without a support piece?
   - Should material tiers block placement or just warn?

3. **Visual Feedback:**
   - Show snap guides in real-time?
   - Show validation errors on client before sending RPC?
   - Animate snap connections?

4. **Performance:**
   - Max snap points per piece? (Suggest: 8-16)
   - Max simultaneous searches? (Suggest: 10)
   - Distance query optimization needed?

---

**Ready to start Phase 1? I can create all the header files with full documentation next!**

