# Phase 1 Implementation Guide - Step by Step

**Objective:** Add data structures for snap role system  
**Time Required:** 1-2 hours  
**Difficulty:** Beginner-Intermediate

---

## 📋 Overview: What You're Adding

You have **3 new files** to create:

```
Your Project Structure:
Source/Icarus/Public/Building/
├── WorldGridFrame.h                  (existing)
├── BuildingSnapPoint.h               (EXISTING - you'll UPDATE)
├── BuildingPieceSnapData.h           (EXISTING - you'll REFERENCE)
│
├── BuildingSnapRole.h                ← NEW FILE #1
├── D_BuildingSnapConfigs.h           ← NEW FILE #2
└── [Updated BuildingSnapPoint.h]    ← MODIFY EXISTING FILE
```

**cpp files:** None yet! Phase 1 is header-only (just data structures).

---

## 🎯 Step 1: Create BuildingSnapRole.h

### What It Does
Defines all 24 possible snap roles (FloorSurface, WallBottom, BeamEnd, etc.) as an enum that both C++ and Blueprints can use.

### Where to Create It
```
Source/Icarus/Public/Building/BuildingSnapRole.h
```

### How to Create It

**1. In Visual Studio (or UE Editor):**
   - Right-click `Source/Icarus/Public/Building/` folder
   - New → C++ Header File
   - Name it: `BuildingSnapRole.h`

**2. Copy the entire content from:**
   ```
   Research Findings/Building System/Code_Phase1_BuildingSnapRole.h
   ```

**3. Paste into your new file**

### What Changed from Original
- ✅ Added `UENUM` macro with `BlueprintType` for Blueprint access
- ✅ Added 24 snap roles organized by category
- ✅ Added utility namespace `FBuildingSnapRoleUtils` with `ToString()` function
- ✅ Full documentation comments

### Verify It Works
```cpp
// This should compile without errors
EBuildingSnapRole TestRole = EBuildingSnapRole::FloorEdge_Front;
FString RoleName = FBuildingSnapRoleUtils::ToString(TestRole);  // "FloorEdge_Front"
```

---

## 🎯 Step 2: Update BuildingSnapPoint.h

### What It Does
Extends your existing `FBuildingSnapPoint` struct to use the new SnapRole enum instead of the old FName-based role system.

### Where to Update It
```
Source/Icarus/Public/Building/BuildingSnapPoint.h
```

### What to Replace

**REMOVE this from your existing struct:**
```cpp
/** Role of this point, for example: FloorEdge, WallTop, WallBottom, BeamEnd, FoundationSide. */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
    FName Role;

/**
 * Roles that are accepted by this point.
 * Example: a FloorEdge may accept WallBottom.
 */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
    TArray<FName> CompatibleRoles;
```

**ADD this instead:**
```cpp
/** Role/type of this snap point. */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
    EBuildingSnapRole SnapRole = EBuildingSnapRole::Custom;

/** Roles that are accepted by this snap point. */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
    TArray<EBuildingSnapRole> CompatibleRoles;
```

**ADD these new fields:**
```cpp
/** Minimum stability the target piece must have to support an attachment. */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
    meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float MinimumSupportStability = 0.0f;

/** Optional rotation constraint in degrees. */
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
    meta = (ClampMin = "0.0", ClampMax = "180.0"))
    float RotationConstraint = 0.0f;
```

**ADD these helper functions:**
```cpp
/** Check if this snap point accepts a specific role. */
bool AcceptsRole(const EBuildingSnapRole InRole) const
{
    return CompatibleRoles.Contains(InRole);
}

/** Check if this snap point has a rotation constraint. */
bool HasRotationConstraint() const
{
    return RotationConstraint > 0.0f;
}

/** Get the world position of this snap point. */
FVector GetWorldLocation(const FTransform& OwnerTransform) const
{
    return OwnerTransform.TransformPosition(LocalTransform.GetLocation());
}

/** Get the world rotation of this snap point. */
FRotator GetWorldRotation(const FTransform& OwnerTransform) const
{
    return (OwnerTransform * LocalTransform).Rotator();
}

/** Get the world transform of this snap point. */
FTransform GetWorldTransform(const FTransform& OwnerTransform) const
{
    return OwnerTransform * LocalTransform;
}
```

**UPDATE the constructor:**
```cpp
FBuildingSnapPoint()
    : SnapRole(EBuildingSnapRole::Custom)
    , SnapDistance(150.0f)
    , bAllowMultipleAttachments(false)
    , MinimumSupportStability(0.0f)
    , RotationConstraint(0.0f)
{
}
```

### Include Statement
Add this at the top of BuildingSnapPoint.h:
```cpp
#include "BuildingSnapRole.h"
```

### Verify It Works
```cpp
// This should compile
FBuildingSnapPoint TestSnap;
TestSnap.SnapRole = EBuildingSnapRole::FloorEdge_Front;
TestSnap.CompatibleRoles.Add(EBuildingSnapRole::WallBottom);

bool bAccepts = TestSnap.AcceptsRole(EBuildingSnapRole::WallBottom);  // true
```

---

## 🎯 Step 3: Create D_BuildingSnapConfigs.h

### What It Does
Defines a DataTable row structure so designers can create snap configurations in the editor and reference them from `D_BuildingPieces`.

### Where to Create It
```
Source/Icarus/Public/Building/D_BuildingSnapConfigs.h
```

### How to Create It

**1. In Visual Studio:**
   - Right-click `Source/Icarus/Public/Building/` folder
   - New → C++ Header File
   - Name it: `D_BuildingSnapConfigs.h`

**2. Copy the entire content from:**
   ```
   Research Findings/Building System/Code_Phase1_D_BuildingSnapConfigs.h
   ```

**3. Paste into your new file**

### What It Includes
- `FBuildingSnapConfig` struct (the DataTable row)
- 8 utility functions for designers
- Full documentation

### Verify It Works
```cpp
// This should compile without errors
// You'll test it properly in Step 4 (in editor)
```

---

## 🔄 Step 4: Update Include Files

### Update WorldGridPlacementComponent.h

Add this include at the top:
```cpp
#include "BuildingSnapRole.h"
```

### Update BuildingPieceSnapData.h

Add this include:
```cpp
#include "BuildingSnapRole.h"
```

Also, optionally add reference to D_BuildingSnapConfigs:
```cpp
#include "D_BuildingSnapConfigs.h"
```

---

## 🔨 Step 5: Compile Your Project

**In Visual Studio:**
```
Build → Build Solution (F7)
```

Or in Unreal Editor:
```
Tools → Compile → Recompile
```

### Expected Warnings/Errors
None! If you see errors, check:
- ✅ `#include "BuildingSnapRole.h"` is at top of BuildingSnapPoint.h
- ✅ File names match exactly (case-sensitive on Linux/Mac)
- ✅ You're using `EBuildingSnapRole`, not `BuildingSnapRole`
- ✅ You updated the existing struct, not created a new one

---

## ✅ Step 6: Test in Editor

### Test 1: Blueprint Access
1. Open Unreal Editor
2. Create a Blueprint based on your building actor
3. Add `WorldGridPlacementComponent`
4. Look at `Piece Snap Data` details
5. Create a new `BuildingPieceSnapData` asset
6. Click "Add" to add a snap point
7. **You should see a dropdown for `Snap Role`** with all 24 options!

### Test 2: DataTable Creation
1. Content Browser → New → Data Table
2. Choose Row Structure → Search for "BuildingSnapConfig"
3. Click "BuildingSnapConfig"
4. Add a new row
5. Name it "Floor_Default"
6. Fill in:
   - Display Name: "Floor Snap Points"
   - PieceTypeName: "Floor"
   - Description: "Standard floor snap configuration"
7. Click the "+" to add snap points

### Test 3: Snap Points Editor
1. Expand the "Snap Points" array in your DataTable row
2. Add 5 entries for floors:
   - **Point 1 (Floor Center)**
     - Snap Role: Floor Surface
     - Local Transform: Identity (0,0,0)
     - Compatible Roles: WallBottom, BeamEnd, FrameCorner
     - Snap Distance: 100
     - Allow Multiple: Checked
     
   - **Point 2 (Front Edge)**
     - Snap Role: Floor Edge_Front
     - Local Transform: (150, 0, 0)
     - Compatible Roles: WallBottom
     - Snap Distance: 100
     - Allow Multiple: Unchecked
     
   - **Point 3 (Back Edge)**
     - Snap Role: Floor Edge_Back
     - Local Transform: (-150, 0, 0)
     - Compatible Roles: WallBottom
     - Snap Distance: 100
     - Allow Multiple: Unchecked
     
   - **Point 4 (Left Edge)**
     - Snap Role: Floor Edge_Left
     - Local Transform: (0, -150, 0)
     - Compatible Roles: WallBottom
     - Snap Distance: 100
     - Allow Multiple: Unchecked
     
   - **Point 5 (Right Edge)**
     - Snap Role: Floor Edge_Right
     - Local Transform: (0, 150, 0)
     - Compatible Roles: WallBottom
     - Snap Distance: 100
     - Allow Multiple: Unchecked

3. Save the DataTable

---

## 📝 Summary: What You Now Have

```
✅ BuildingSnapRole.h
   └─ 24 snap role enum values
   └─ Utility functions for debugging

✅ Updated BuildingSnapPoint.h
   └─ EBuildingSnapRole SnapRole field
   └─ TArray<EBuildingSnapRole> CompatibleRoles
   └─ MinimumSupportStability field
   └─ RotationConstraint field
   └─ 5 helper functions (GetWorldLocation, etc.)

✅ D_BuildingSnapConfigs.h
   └─ FBuildingSnapConfig DataTable struct
   └─ 8 utility functions for designers

✅ Editable in Unreal Editor
   └─ Create snap configurations via DataTable
   └─ Assign to building pieces
   └─ Full Blueprint support
```

---

## 🎮 Next: Using It in Blueprints

### Create a Floor Snap Data Asset

1. Content Browser → New → Data Asset
2. Choose `BuildingPieceSnapData`
3. Name it: "Floor_SnapData_Wood"
4. Set DisplayName: "Wood Floor Snap Points"
5. Leave SnapPoints empty for now (or populate manually)
6. Save

### Create a Floor Blueprint

1. Content Browser → New → Blueprint Class
2. Choose `Character` or your building base class
3. Name it: "BP_Building_Floor_Wood"
4. Open it
5. Add `WorldGridPlacementComponent`
6. Set its `Piece Snap Data` → "Floor_SnapData_Wood"
7. Set `bUseWorldGrid` → True
8. Compile & Save

### Test in Level

1. Drag "BP_Building_Floor_Wood" into level
2. Use your placement system to find snap points
3. Should see snap point detection working!

---

## ⚠️ Common Issues & Solutions

### Issue: "EBuildingSnapRole not found"
**Solution:** Add `#include "BuildingSnapRole.h"` to BuildingSnapPoint.h

### Issue: "Snap Role dropdown not showing in Blueprint"
**Solution:** 
- Recompile project
- Close and reopen the Blueprint
- Check that `EBuildingSnapRole` has `BlueprintType` meta

### Issue: "Can't create D_BuildingSnapConfigs DataTable"
**Solution:**
- Make sure `FBuildingSnapConfig` inherits from `FTableRowBase`
- Recompile and restart editor
- Try creating the DataTable again

### Issue: "SnapPoint World helpers not working"
**Solution:**
- Make sure you added all 5 helper functions to BuildingSnapPoint.h
- Check that they're not in a private section

---

## 🎯 Success Criteria

You've completed Phase 1 when:

- ✅ Project compiles without errors
- ✅ BuildingSnapRole.h exists with 24 enum values
- ✅ BuildingSnapPoint.h updated with SnapRole field
- ✅ D_BuildingSnapConfigs.h created with FBuildingSnapConfig struct
- ✅ Can create a DataTable with BuildingSnapConfig rows
- ✅ Snap Role dropdown works in Blueprint editor
- ✅ Can add 5+ snap points to a floor configuration
- ✅ Snap distances are editable
- ✅ Compatible roles are selectable

---

## 📞 If You Get Stuck

Common places to check:
1. Includes at top of files
2. Spelling of enum values
3. File naming (case-sensitive)
4. Make sure you're updating existing files, not creating new ones
5. Try: `Edit → Editor Preferences → Search "Compile" → Enable live coding`

**Next Phase:** Once this compiles and works, we'll add **BuildingSnapValidator** (the validation logic).

