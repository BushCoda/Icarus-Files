// Class Engine.Actor
struct AActor : UObject {
	struct FActorTickFunction PrimaryActorTick; 
	char bNetTemporary : 1; 
	char bNetStartup : 1; 
	char bOnlyRelevantToOwner : 1; 
	char bAlwaysRelevant : 1; 
	char bReplicateMovement : 1; 
	char bHidden : 1; 
	char bTearOff : 1; 
	char bForceNetAddressable : 1; 
	char bExchangedRoles : 1; 
	char bNetLoadOnClient : 1; 
	char bNetUseOwnerRelevancy : 1; 
	char bRelevantForNetworkReplays : 1; 
	char bRelevantForLevelBounds : 1; 
	char bReplayRewindable : 1; 
	char bAllowTickBeforeBeginPlay : 1; 
	char bAutoDestroyWhenFinished : 1; 
	char bCanBeDamaged : 1; 
	char bBlockInput : 1; 
	char bCollideWhenPlacing : 1; 
	char bFindCameraComponentWhenViewTarget : 1; 
	char bGenerateOverlapEventsDuringLevelStreaming : 1; 
	char bIgnoresOriginShifting : 1; 
	char bEnableAutoLODGeneration : 1; 
	char bIsEditorOnlyActor : 1; 
	char bActorSeamlessTraveled : 1; 
	char bReplicates : 1; 
	char bCanBeInCluster : 1; 
	char bAllowReceiveTickEventOnDedicatedServer : 1; 
	char bActorEnableCollision : 1; 
	char bActorIsBeingDestroyed : 1; 
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; 
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; 
	enum class ENetRole RemoteRole; 
	struct FRepMovement ReplicatedMovement; 
	float InitialLifeSpan; 
	float CustomTimeDilation; 
	struct FRepAttachment AttachmentReplication; 
	struct AActor* Owner; 
	struct FName NetDriverName; 
	enum class ENetRole Role; 
	enum class ENetDormancy NetDormancy; 
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; 
	enum class EAutoReceiveInput AutoReceiveInput; 
	int32_t InputPriority; 
	struct UInputComponent* InputComponent; 
	float NetCullDistanceSquared; 
	int32_t NetTag; 
	float NetUpdateFrequency; 
	float MinNetUpdateFrequency; 
	float NetPriority; 
	struct APawn* Instigator; 
	struct TArray<struct AActor*> Children; 
	struct USceneComponent* RootComponent; 
	struct TArray<struct AMatineeActor*> ControllingMatineeActors; 
	struct TArray<struct FName> Layers; 
	struct TWeakObjectPtr<struct UChildActorComponent> ParentComponent; 
	struct TArray<struct FName> Tags; 
	struct FMulticastSparseDelegate OnTakeAnyDamage; 
	struct FMulticastSparseDelegate OnTakePointDamage; 
	struct FMulticastSparseDelegate OnTakeRadialDamage; 
	struct FMulticastSparseDelegate OnActorBeginOverlap; 
	struct FMulticastSparseDelegate OnActorEndOverlap; 
	struct FMulticastSparseDelegate OnBeginCursorOver; 
	struct FMulticastSparseDelegate OnEndCursorOver; 
	struct FMulticastSparseDelegate OnClicked; 
	struct FMulticastSparseDelegate OnReleased; 
	struct FMulticastSparseDelegate OnInputTouchBegin; 
	struct FMulticastSparseDelegate OnInputTouchEnd; 
	struct FMulticastSparseDelegate OnInputTouchEnter; 
	struct FMulticastSparseDelegate OnInputTouchLeave; 
	struct FMulticastSparseDelegate OnActorHit; 
	struct FMulticastSparseDelegate OnDestroyed; 
	struct FMulticastSparseDelegate OnEndPlay; 
	struct TArray<struct UActorComponent*> InstanceComponents; 
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; 

	bool WasRecentlyRendered(float Tolerance); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void UserConstructionScript(); // (Event|Public|BlueprintEvent)
	void TearOff(); // (Native|Public|BlueprintCallable)
	void SnapRootComponentTo(struct AActor* InParentActor, struct FName InSocketName); // (Final|Native|Public|BlueprintCallable)
	void SetTickGroup(enum class ETickingGroup NewTickGroup); // (Final|Native|Public|BlueprintCallable)
	void SetTickableWhenPaused(bool bTickableWhenPaused); // (Final|Native|Public|BlueprintCallable)
	void SetReplicates(bool bInReplicates); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetReplicateMovement(bool bInReplicateMovement); // (Native|Public|BlueprintCallable)
	void SetOwner(struct AActor* NewOwner); // (Native|Public|BlueprintCallable)
	void SetNetDormancy(enum class ENetDormancy NewDormancy); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetLifeSpan(float InLifespan); // (Native|Public|BlueprintCallable)
	void SetAutoDestroyWhenFinished(bool bVal); // (Final|Native|Public|BlueprintCallable)
	void SetActorTickInterval(float TickInterval); // (Final|Native|Public|BlueprintCallable)
	void SetActorTickEnabled(bool bEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetActorScale3D(struct FVector NewScale3D); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetActorRelativeScale3D(struct FVector NewRelativeScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetActorHiddenInGame(bool bNewHidden); // (Native|Public|BlueprintCallable)
	void SetActorEnableCollision(bool bNewActorEnableCollision); // (Final|Native|Public|BlueprintCallable)
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // (Native|Public|BlueprintCallable)
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // (Native|Public|BlueprintCallable)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult& HitInfo); // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveDestroyed(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // (Event|Public|BlueprintEvent)
	void ReceiveActorOnInputTouchLeave(enum class ETouchIndex FingerIndex); // (Event|Public|BlueprintEvent)
	void ReceiveActorOnInputTouchEnter(enum class ETouchIndex FingerIndex); // (Event|Public|BlueprintEvent)
	void ReceiveActorOnInputTouchEnd(enum class ETouchIndex FingerIndex); // (Event|Public|BlueprintEvent)
	void ReceiveActorOnInputTouchBegin(enum class ETouchIndex FingerIndex); // (Event|Public|BlueprintEvent)
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // (Event|Public|BlueprintEvent)
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // (Event|Public|BlueprintEvent)
	void ReceiveActorEndCursorOver(); // (Event|Public|BlueprintEvent)
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // (Event|Public|BlueprintEvent)
	void ReceiveActorBeginCursorOver(); // (Event|Public|BlueprintEvent)
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // (Native|Public|BlueprintCallable)
	void OnRep_ReplicateMovement(); // (Native|Public)
	void OnRep_ReplicatedMovement(); // (Native|Public)
	void OnRep_Owner(); // (Native|Protected)
	void OnRep_Instigator(); // (Native|Public)
	void OnRep_AttachmentReplication(); // (Native|Public)
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag); // (Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable)
	struct UMaterialInstanceDynamic* MakeMIDForMaterial(struct UMaterialInterface* Parent); // (Final|Native|Public|BlueprintCallable)
	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool K2_SetActorTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_SetActorRelativeTransform(struct FTransform& NewRelativeTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_OnReset(); // (Event|Public|BlueprintEvent)
	void K2_OnEndViewTarget(struct APlayerController* PC); // (Event|Public|BlueprintEvent)
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // (Event|Public|BlueprintEvent)
	struct USceneComponent* K2_GetRootComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UActorComponent*> K2_GetComponentsByClass(struct UActorComponent* ComponentClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FRotator K2_GetActorRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector K2_GetActorLocation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void K2_DetachFromActor(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule); // (Final|Native|Public|BlueprintCallable)
	void K2_DestroyComponent(struct UActorComponent* Component); // (Final|Native|Public|BlueprintCallable)
	void K2_DestroyActor(); // (Native|Public|BlueprintCallable)
	void K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	void K2_AttachToActor(struct AActor* ParentActor, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	void K2_AttachRootComponentToActor(struct AActor* InParentActor, struct FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	void K2_AddActorWorldTransformKeepScale(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorWorldTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorLocalTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool IsOverlappingActor(struct AActor* Other); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsChildActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsActorTickEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsActorBeingDestroyed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAuthority(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetVerticalDistanceTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetVelocity(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetTickableWhenPaused(); // (Final|Native|Public|BlueprintCallable)
	float GetSquaredHorizontalDistanceTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSquaredDistanceTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ENetRole GetRemoteRole(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UChildActorComponent* GetParentComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetParentActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetOwner(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OverlappingComponents); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetOverlappingActors(struct TArray<struct AActor*>& OverlappingActors, struct AActor* ClassFilter); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	enum class ENetRole GetLocalRole(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetLifeSpan(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AController* GetInstigatorController(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APawn* GetInstigator(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetInputAxisValue(struct FName InputAxisName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetInputAxisKeyValue(struct FKey InputAxisKey); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetHorizontalDotProductTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetHorizontalDistanceTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetGameTimeSinceCreation(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDotProductTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDistanceTo(struct AActor* OtherActor); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UActorComponent*> GetComponentsByTag(struct UActorComponent* ComponentClass, struct FName Tag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UActorComponent*> GetComponentsByInterface(struct UInterface* Interface); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UActorComponent* GetComponentByClass(struct UActorComponent* ComponentClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetAttachParentSocketName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetAttachParentActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetAttachedActors(struct TArray<struct AActor*>& OutActors, bool bResetArray); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetAllChildActors(struct TArray<struct AActor*>& ChildActors, bool bIncludeDescendants); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetActorUpVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetActorTimeDilation(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetActorTickInterval(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetActorScale3D(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetActorRightVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetActorRelativeScale3D(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetActorForwardVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetActorEnableCollision(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ForceNetUpdate(); // (Native|Public|BlueprintCallable)
	void FlushNetDormancy(); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void FinishAddComponent(struct UActorComponent* Component, bool bManualAttachment, struct FTransform& RelativeTransform); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void EnableInput(struct APlayerController* PlayerController); // (Native|Public|BlueprintCallable)
	void DisableInput(struct APlayerController* PlayerController); // (Native|Public|BlueprintCallable)
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // (Final|Native|Public|BlueprintCallable)
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // (Native|Public|BlueprintCallable)
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // (Native|Public|BlueprintCallable)
	struct UActorComponent* AddComponentByClass(struct UActorComponent* Class, bool bManualAttachment, struct FTransform& RelativeTransform, bool bDeferredFinish); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform& RelativeTransform, struct UObject* ComponentTemplateContext, bool bDeferredFinish); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool ActorHasTag(struct FName Tag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.ActorComponent
struct UActorComponent : UObject {
	struct FActorComponentTickFunction PrimaryComponentTick; 
	struct TArray<struct FName> ComponentTags; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
	int32_t UCSSerializationIndex; 
	char bNetAddressable : 1; 
	char bReplicates : 1; 
	char bAutoActivate : 1; 
	char bIsActive : 1; 
	char bEditableWhenInherited : 1; 
	char bCanEverAffectNavigation : 1; 
	char bIsEditorOnly : 1; 
	enum class EComponentCreationMethod CreationMethod; 
	struct FMulticastSparseDelegate OnComponentActivated; 
	struct FMulticastSparseDelegate OnComponentDeactivated; 
	struct TArray<struct FSimpleMemberReference> UCSModifiedProperties; 

	void ToggleActive(); // (Native|Public|BlueprintCallable)
	void SetTickGroup(enum class ETickingGroup NewTickGroup); // (Final|Native|Public|BlueprintCallable)
	void SetTickableWhenPaused(bool bTickableWhenPaused); // (Final|Native|Public|BlueprintCallable)
	void SetIsReplicated(bool ShouldReplicate); // (Final|Native|Public|BlueprintCallable)
	void SetComponentTickIntervalAndCooldown(float TickInterval); // (Final|Native|Public|BlueprintCallable)
	void SetComponentTickInterval(float TickInterval); // (Final|Native|Public|BlueprintCallable)
	void SetComponentTickEnabled(bool bEnabled); // (Native|Public|BlueprintCallable)
	void SetAutoActivate(bool bNewAutoActivate); // (Native|Public|BlueprintCallable)
	void SetActive(bool bNewActive, bool bReset); // (Native|Public|BlueprintCallable)
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // (Native|Public|BlueprintCallable)
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // (Native|Public|BlueprintCallable)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnRep_IsActive(); // (Native|Public)
	void K2_DestroyComponent(struct UObject* Object); // (Final|Native|Public|BlueprintCallable)
	bool IsComponentTickEnabled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsBeingDestroyed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsActive(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetOwner(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetComponentTickInterval(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void Deactivate(); // (Native|Public|BlueprintCallable)
	bool ComponentHasTag(struct FName Tag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // (Native|Public|BlueprintCallable)
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // (Native|Public|BlueprintCallable)
	void Activate(bool bReset); // (Native|Public|BlueprintCallable)
};

// Class Engine.SceneComponent
struct USceneComponent : UActorComponent {
	struct TWeakObjectPtr<struct APhysicsVolume> PhysicsVolume; 
	struct USceneComponent* AttachParent; 
	struct FName AttachSocketName; 
	struct TArray<struct USceneComponent*> AttachChildren; 
	struct TArray<struct USceneComponent*> ClientAttachedChildren; 
	struct FVector RelativeLocation; 
	struct FRotator RelativeRotation; 
	struct FVector RelativeScale3D; 
	struct FVector ComponentVelocity; 
	char bComponentToWorldUpdated : 1; 
	char bAbsoluteLocation : 1; 
	char bAbsoluteRotation : 1; 
	char bAbsoluteScale : 1; 
	char bVisible : 1; 
	char bShouldBeAttached : 1; 
	char bShouldSnapLocationWhenAttached : 1; 
	char bShouldSnapRotationWhenAttached : 1; 
	char bShouldUpdatePhysicsVolume : 1; 
	char bHiddenInGame : 1; 
	char bBoundsChangeTriggersStreamingDataRebuild : 1; 
	char bUseAttachParentBound : 1; 
	enum class EComponentMobility Mobility; 
	enum class EDetailMode DetailMode; 
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; 

	void ToggleVisibility(bool bPropagateToChildren); // (Final|Native|Public|BlueprintCallable)
	bool SnapTo(struct USceneComponent* InParent, struct FName InSocketName); // (Final|Native|Public|BlueprintCallable)
	void SetWorldScale3D(struct FVector NewScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // (Final|Native|Public|BlueprintCallable)
	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume); // (Final|Native|Public|BlueprintCallable)
	void SetRelativeScale3D(struct FVector NewScale3D); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetMobility(enum class EComponentMobility NewMobility); // (Native|Public|BlueprintCallable)
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren); // (Final|Native|Public|BlueprintCallable)
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale); // (Final|Native|Public|BlueprintCallable)
	void ResetRelativeTransform(); // (Final|Native|Public|BlueprintCallable)
	void OnRep_Visibility(bool OldValue); // (Final|Native|Private)
	void OnRep_Transform(); // (Final|Native|Private)
	void OnRep_AttachSocketName(); // (Final|Native|Private)
	void OnRep_AttachParent(); // (Final|Native|Private)
	void OnRep_AttachChildren(); // (Final|Native|Private)
	void K2_SetWorldTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetRelativeTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FTransform K2_GetComponentToWorld(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector K2_GetComponentScale(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator K2_GetComponentRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector K2_GetComponentLocation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void K2_DetachFromComponent(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule, bool bCallModify); // (Final|Native|Public|BlueprintCallable)
	bool K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	bool K2_AttachTo(struct USceneComponent* InParent, struct FName InSocketName, enum class EAttachLocation AttachType, bool bWeldSimulatedBodies); // (Final|Native|Public|BlueprintCallable)
	void K2_AddWorldTransformKeepScale(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddWorldTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddLocalTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool IsVisible(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsSimulatingPhysics(struct FName BoneName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsAnySimulatingPhysics(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUpVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetSocketTransform(struct FName InSocketName, enum class ERelativeTransformSpace TransformSpace); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetSocketRotation(struct FName InSocketName); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FQuat GetSocketQuaternion(struct FName InSocketName); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetSocketLocation(struct FName InSocketName); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetShouldUpdatePhysicsVolume(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRightVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetRelativeTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct APhysicsVolume* GetPhysicsVolume(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetParentComponents(struct TArray<struct USceneComponent*>& Parents); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumChildrenComponents(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetForwardVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetComponentVelocity(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<struct USceneComponent*>& Children); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct USceneComponent* GetChildComponent(int32_t ChildIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetAttachSocketName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USceneComponent* GetAttachParent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FName> GetAllSocketNames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool DoesSocketExist(struct FName InSocketName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify); // (Native|Public|BlueprintCallable)
};

// Class Engine.PrimitiveComponent
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; 
	float LDMaxDrawDistance; 
	float CachedMaxDrawDistance; 
	enum class ESceneDepthPriorityGroup DepthPriorityGroup; 
	enum class ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; 
	enum class EIndirectLightingCacheQuality IndirectLightingCacheQuality; 
	enum class ELightmapType LightmapType; 
	char bUseMaxLODAsImposter : 1; 
	char bBatchImpostersAsInstances : 1; 
	char bNeverDistanceCull : 1; 
	char bAlwaysCreatePhysicsState : 1; 
	char bGenerateOverlapEvents : 1; 
	char bMultiBodyOverlap : 1; 
	char bTraceComplexOnMove : 1; 
	char bReturnMaterialOnMove : 1; 
	char bUseViewOwnerDepthPriorityGroup : 1; 
	char bAllowCullDistanceVolume : 1; 
	char bHasMotionBlurVelocityMeshes : 1; 
	char bVisibleInReflectionCaptures : 1; 
	char bVisibleInRealTimeSkyCaptures : 1; 
	char bVisibleInRayTracing : 1; 
	char bRenderInMainPass : 1; 
	char bRenderInDepthPass : 1; 
	char bReceivesDecals : 1; 
	char bOwnerNoSee : 1; 
	char bOnlyOwnerSee : 1; 
	char bTreatAsBackgroundForOcclusion : 1; 
	char bUseAsOccluder : 1; 
	char bSelectable : 1; 
	char bForceMipStreaming : 1; 
	char bHasPerInstanceHitProxies : 1; 
	char CastShadow : 1; 
	char bAffectDynamicIndirectLighting : 1; 
	char bAffectDistanceFieldLighting : 1; 
	char bCastDynamicShadow : 1; 
	char bCastStaticShadow : 1; 
	char bCastVolumetricTranslucentShadow : 1; 
	char bCastContactShadow : 1; 
	char bSelfShadowOnly : 1; 
	char bCastFarShadow : 1; 
	char bCastInsetShadow : 1; 
	char bCastCinematicShadow : 1; 
	char bCastHiddenShadow : 1; 
	char bCastShadowAsTwoSided : 1; 
	char bLightAsIfStatic : 1; 
	char bLightAttachmentsAsGroup : 1; 
	char bExcludeFromLightAttachmentGroup : 1; 
	char bReceiveMobileCSMShadows : 1; 
	char bSingleSampleShadowFromStationaryLights : 1; 
	char bIgnoreRadialImpulse : 1; 
	char bIgnoreRadialForce : 1; 
	char bApplyImpulseOnDamage : 1; 
	char bReplicatePhysicsToAutonomousProxy : 1; 
	char bFillCollisionUnderneathForNavmesh : 1; 
	char AlwaysLoadOnClient : 1; 
	char AlwaysLoadOnServer : 1; 
	char bUseEditorCompositing : 1; 
	char bRenderCustomDepth : 1; 
	char bVisibleInSceneCaptureOnly : 1; 
	char bHiddenInSceneCapture : 1; 
	enum class EHasCustomNavigableGeometry bHasCustomNavigableGeometry; 
	enum class ECanBeCharacterBase CanCharacterStepUpOn; 
	struct FLightingChannels LightingChannels; 
	enum class ERendererStencilMask CustomDepthStencilWriteMask; 
	int32_t CustomDepthStencilValue; 
	struct FCustomPrimitiveData CustomPrimitiveData; 
	struct FCustomPrimitiveData CustomPrimitiveDataInternal; 
	int32_t TranslucencySortPriority; 
	float TranslucencySortDistanceOffset; 
	int32_t VisibilityId; 
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; 
	int8_t VirtualTextureLodBias; 
	int8_t VirtualTextureCullMips; 
	int8_t VirtualTextureMinCoverage; 
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; 
	float LpvBiasMultiplier; 
	float BoundsScale; 
	struct TArray<struct AActor*> MoveIgnoreActors; 
	struct TArray<struct UPrimitiveComponent*> MoveIgnoreComponents; 
	struct FBodyInstance BodyInstance; 
	struct FMulticastSparseDelegate OnComponentHit; 
	struct FMulticastSparseDelegate OnComponentBeginOverlap; 
	struct FMulticastSparseDelegate OnComponentEndOverlap; 
	struct FMulticastSparseDelegate OnComponentWake; 
	struct FMulticastSparseDelegate OnComponentSleep; 
	struct FMulticastSparseDelegate OnBeginCursorOver; 
	struct FMulticastSparseDelegate OnEndCursorOver; 
	struct FMulticastSparseDelegate OnClicked; 
	struct FMulticastSparseDelegate OnReleased; 
	struct FMulticastSparseDelegate OnInputTouchBegin; 
	struct FMulticastSparseDelegate OnInputTouchEnd; 
	struct FMulticastSparseDelegate OnInputTouchEnter; 
	struct FMulticastSparseDelegate OnInputTouchLeave; 
	struct UPrimitiveComponent* LODParentPrimitive; 

	bool WasRecentlyRendered(float Tolerance); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void WakeRigidBody(struct FName BoneName); // (Native|Public|BlueprintCallable)
	void WakeAllRigidBodies(); // (Native|Public|BlueprintCallable)
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride& NewOverride); // (Native|Public|HasOutParms|BlueprintCallable)
	void SetVisibleInSceneCaptureOnly(bool bValue); // (Final|Native|Public|BlueprintCallable)
	void SetUseCCD(bool InUseCCD, struct FName BoneName); // (Native|Public|BlueprintCallable)
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority); // (Final|Native|Public|BlueprintCallable)
	void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset); // (Final|Native|Public|BlueprintCallable)
	void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights); // (Final|Native|Public|BlueprintCallable)
	void SetSimulatePhysics(bool bSimulate); // (Native|Public|BlueprintCallable)
	void SetRenderInMainPass(bool bValue); // (Final|Native|Public|BlueprintCallable)
	void SetRenderCustomDepth(bool bValue); // (Final|Native|Public|BlueprintCallable)
	void SetReceivesDecals(bool bNewReceivesDecals); // (Final|Native|Public|BlueprintCallable)
	void SetPhysMaterialOverride(struct UPhysicalMaterial* NewPhysMaterial); // (Native|Public|BlueprintCallable)
	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetOwnerNoSee(bool bNewOwnerNoSee); // (Final|Native|Public|BlueprintCallable)
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee); // (Final|Native|Public|BlueprintCallable)
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision); // (Native|Public|BlueprintCallable)
	void SetMaterialByName(struct FName MaterialSlotName, struct UMaterialInterface* Material); // (Native|Public|BlueprintCallable)
	void SetMaterial(int32_t ElementIndex, struct UMaterialInterface* Material); // (Native|Public|BlueprintCallable)
	void SetMassScale(struct FName BoneName, float InMassScale); // (Native|Public|BlueprintCallable)
	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass); // (Native|Public|BlueprintCallable)
	void SetLinearDamping(float InDamping); // (Native|Public|BlueprintCallable)
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // (Final|Native|Public|BlueprintCallable)
	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup); // (Final|Native|Public|BlueprintCallable)
	void SetHiddenInSceneCapture(bool bValue); // (Final|Native|Public|BlueprintCallable)
	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents); // (Final|Native|Public|BlueprintCallable)
	void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup); // (Final|Native|Public|BlueprintCallable)
	void SetEnableGravity(bool bGravityEnabled); // (Native|Public|BlueprintCallable)
	void SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // (Final|Native|Public|BlueprintCallable)
	void SetCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // (Final|Native|Public|BlueprintCallable)
	void SetCustomDepthStencilWriteMask(enum class ERendererStencilMask WriteMaskBit); // (Final|Native|Public|BlueprintCallable)
	void SetCustomDepthStencilValue(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetCullDistance(float NewCullDistance); // (Final|Native|Public|BlueprintCallable)
	void SetConstraintMode(enum class EDOFMode ConstraintMode); // (Native|Public|BlueprintCallable)
	void SetCollisionResponseToChannel(enum class ECollisionChannel Channel, enum class ECollisionResponse NewResponse); // (Native|Public|BlueprintCallable)
	void SetCollisionResponseToAllChannels(enum class ECollisionResponse NewResponse); // (Native|Public|BlueprintCallable)
	void SetCollisionProfileName(struct FName InCollisionProfileName, bool bUpdateOverlaps); // (Native|Public|BlueprintCallable)
	void SetCollisionObjectType(enum class ECollisionChannel Channel); // (Native|Public|BlueprintCallable)
	void SetCollisionEnabled(enum class ECollisionEnabled NewType); // (Native|Public|BlueprintCallable)
	void SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetCastShadow(bool NewCastShadow); // (Final|Native|Public|BlueprintCallable)
	void SetCastInsetShadow(bool bInCastInsetShadow); // (Final|Native|Public|BlueprintCallable)
	void SetCastHiddenShadow(bool NewCastHiddenShadow); // (Final|Native|Public|BlueprintCallable)
	void SetBoundsScale(float NewBoundsScale); // (Final|Native|Public|BlueprintCallable)
	void SetAngularDamping(float InDamping); // (Native|Public|BlueprintCallable)
	void SetAllUseCCD(bool InUseCCD); // (Native|Public|BlueprintCallable)
	void SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetAllPhysicsAngularVelocityInRadians(struct FVector& NewAngVel, bool bAddToCurrent); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetAllPhysicsAngularVelocityInDegrees(struct FVector& NewAngVel, bool bAddToCurrent); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetAllMassScale(float InMassScale); // (Native|Public|BlueprintCallable)
	struct FVector ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void PutRigidBodyToSleep(struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	bool K2_SphereTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_SphereOverlapComponent(struct FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_IsQueryCollisionEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool K2_IsPhysicsCollisionEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool K2_IsCollisionEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool K2_BoxOverlapComponent(struct FVector InBoxCentre, struct FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool IsOverlappingComponent(struct UPrimitiveComponent* OtherComp); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsOverlappingActor(struct AActor* Other); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsGravityEnabled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsAnyRigidBodyAwake(); // (Native|Public|BlueprintCallable|BlueprintPure)
	void IgnoreComponentWhenMoving(struct UPrimitiveComponent* Component, bool bShouldIgnore); // (Final|Native|Public|BlueprintCallable)
	void IgnoreActorWhenMoving(struct AActor* Actor, bool bShouldIgnore); // (Final|Native|Public|BlueprintCallable)
	struct FWalkableSlopeOverride GetWalkableSlopeOverride(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetPhysicsLinearVelocity(struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetPhysicsAngularVelocityInRadians(struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPhysicsAngularVelocity(struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OutOverlappingComponents); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetOverlappingActors(struct TArray<struct AActor*>& OverlappingActors, struct AActor* ClassFilter); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumMaterials(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInterface* GetMaterial(int32_t ElementIndex); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMassScale(struct FName BoneName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMass(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetLinearDamping(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetInertiaTensor(struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetGenerateOverlapEvents(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ECollisionResponse GetCollisionResponseToChannel(enum class ECollisionChannel Channel); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetCollisionProfileName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ECollisionChannel GetCollisionObjectType(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ECollisionEnabled GetCollisionEnabled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetClosestPointOnCollision(struct FVector& Point, struct FVector& OutPointOnBody, struct FName BoneName); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetCenterOfMass(struct FName BoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetAngularDamping(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, struct UMaterialInterface* SourceMaterial, struct FName OptionalName); // (Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, struct UMaterialInterface* Parent); // (Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex); // (Native|Public|BlueprintCallable)
	struct TArray<struct UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // (Final|Native|Public|BlueprintCallable)
	void ClearMoveIgnoreComponents(); // (Final|Native|Public|BlueprintCallable)
	void ClearMoveIgnoreActors(); // (Final|Native|Public|BlueprintCallable)
	bool CanCharacterStepUp(struct APawn* Pawn); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddTorqueInRadians(struct FVector Torque, struct FName BoneName, bool bAccelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddTorqueInDegrees(struct FVector Torque, struct FName BoneName, bool bAccelChange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddRadialImpulse(struct FVector Origin, float Radius, float Strength, enum class ERadialImpulseFalloff Falloff, bool bVelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddRadialForce(struct FVector Origin, float Radius, float Strength, enum class ERadialImpulseFalloff Falloff, bool bAccelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddForceAtLocationLocal(struct FVector Force, struct FVector Location, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddForceAtLocation(struct FVector Force, struct FVector Location, struct FName BoneName); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddForce(struct FVector Force, struct FName BoneName, bool bAccelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddAngularImpulseInRadians(struct FVector Impulse, struct FName BoneName, bool bVelChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddAngularImpulseInDegrees(struct FVector Impulse, struct FName BoneName, bool bVelChange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.MeshComponent
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; 
	char bEnableMaterialParameterCaching : 1; 

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FVector ParameterValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue); // (Final|Native|Public|BlueprintCallable)
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups); // (Native|Public|BlueprintCallable)
	bool IsMaterialSlotNameValid(struct FName MaterialSlotName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FName> GetMaterialSlotNames(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UMaterialInterface*> GetMaterials(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.SkinnedMeshComponent
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; 
	struct TWeakObjectPtr<struct USkinnedMeshComponent> MasterPoseComponent; 
	struct TArray<enum class ESkinCacheUsage> SkinCacheUsage; 
	struct TArray<struct FVertexOffsetUsage> VertexOffsetUsage; 
	struct UPhysicsAsset* PhysicsAssetOverride; 
	int32_t ForcedLodModel; 
	int32_t MinLodModel; 
	float StreamingDistanceMultiplier; 
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo; 
	enum class EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; 
	char bOverrideMinLod : 1; 
	char bUseBoundsFromMasterPoseComponent : 1; 
	char bForceWireframe : 1; 
	char bDisplayBones : 1; 
	char bDisableMorphTarget : 1; 
	char bHideSkin : 1; 
	char bPerBoneMotionBlur : 1; 
	char bComponentUseFixedSkelBounds : 1; 
	char bConsiderAllBodiesForBounds : 1; 
	char bSyncAttachParentLOD : 1; 
	char bCanHighlightSelectedSections : 1; 
	char bRecentlyRendered : 1; 
	char bCastCapsuleDirectShadow : 1; 
	char bCastCapsuleIndirectShadow : 1; 
	char bCPUSkinning : 1; 
	char bEnableUpdateRateOptimizations : 1; 
	char bDisplayDebugUpdateRateOptimizations : 1; 
	char bRenderStatic : 1; 
	char bIgnoreMasterPoseComponentLOD : 1; 
	char bCachedLocalBoundsUpToDate : 1; 
	char bForceMeshObjectUpdate : 1; 
	float CapsuleIndirectShadowMinVisibility; 
	struct FBoxSphereBounds CachedWorldSpaceBounds; 
	struct FMatrix CachedWorldToLocalTransform; 

	void UnloadSkinWeightProfile(struct FName InProfileName); // (Final|Native|Public|BlueprintCallable)
	void UnHideBoneByName(struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	void ShowAllMaterialSections(int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	void SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage); // (Final|Native|Public|BlueprintCallable)
	void SetVertexColorOverride_LinearColor(int32_t LODIndex, struct TArray<struct FLinearColor>& VertexColors); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool SetSkinWeightProfile(struct FName InProfileName); // (Final|Native|Public|BlueprintCallable)
	void SetSkinWeightOverride(int32_t LODIndex, struct TArray<struct FSkelMeshSkinWeightInfo>& SkinWeights); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSkeletalMesh(struct USkeletalMesh* NewMesh, bool bReinitPose); // (Native|Public|BlueprintCallable)
	void SetRenderStatic(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetPreSkinningOffsets(int32_t LODIndex, struct TArray<struct FVector> Offsets); // (Final|Native|Public|BlueprintCallable)
	void SetPostSkinningOffsets(int32_t LODIndex, struct TArray<struct FVector> Offsets); // (Final|Native|Public|BlueprintCallable)
	void SetPhysicsAsset(struct UPhysicsAsset* NewPhysicsAsset, bool bForceReInit); // (Native|Public|BlueprintCallable)
	void SetMinLOD(int32_t InNewMinLOD); // (Final|Native|Public|BlueprintCallable)
	void SetMasterPoseComponent(struct USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate); // (Final|Native|Public|BlueprintCallable)
	void SetForcedLOD(int32_t InNewForcedLOD); // (Final|Native|Public|BlueprintCallable)
	void SetCastCapsuleIndirectShadow(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCastCapsuleDirectShadow(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCapsuleIndirectShadowMinVisibility(float NewValue); // (Final|Native|Public|BlueprintCallable)
	bool IsUsingSkinWeightProfile(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	bool IsBoneHiddenByName(struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void HideBoneByName(struct FName BoneName, enum class EPhysBodyOp PhysBodyOption); // (Final|Native|Public|BlueprintCallable)
	int32_t GetVertexOffsetUsage(int32_t LODIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float& OutTwistAngle, float& OutSwingAngle); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FName GetSocketBoneName(struct FName InSocketName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRefPosePosition(int32_t BoneIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FName GetParentBone(struct FName BoneName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumLODs(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumBones(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetForcedLOD(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FName GetCurrentSkinWeightProfileName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetBoneName(int32_t BoneIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetBoneIndex(struct FName BoneName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName FindClosestBone_K2(struct FVector TestLocation, struct FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ClearVertexColorOverride(int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	void ClearSkinWeightProfile(); // (Final|Native|Public|BlueprintCallable)
	void ClearSkinWeightOverride(int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.StreamableRenderAsset
struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; 
	int32_t NumCinematicMipLevels; 
	int32_t StreamingIndex; 
	int32_t CachedCombinedLODBias; 
	char NeverStream : 1; 
	char bGlobalForceMipLevelsToBeResident : 1; 
	char bHasStreamingUpdatePending : 1; 
	char bForceMiplevelsToBeResident : 1; 
	char bIgnoreStreamingMipBias : 1; 
	char bUseCinematicMipLevels : 1; 
};

// Class Engine.SkeletalMesh
struct USkeletalMesh : UStreamableRenderAsset {
	struct USkeleton* Skeleton; 
	struct FBoxSphereBounds ImportedBounds; 
	struct FBoxSphereBounds ExtendedBounds; 
	struct FVector PositiveBoundsExtension; 
	struct FVector NegativeBoundsExtension; 
	struct TArray<struct FSkeletalMaterial> Materials; 
	struct TArray<struct FBoneMirrorInfo> SkelMirrorTable; 
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; 
	struct FPerPlatformInt MinLOD; 
	struct FPerPlatformBool DisableBelowMinLodStripping; 
	enum class EAxis SkelMirrorAxis; 
	enum class EAxis SkelMirrorFlipAxis; 
	char bUseFullPrecisionUVs : 1; 
	char bUseHighPrecisionTangentBasis : 1; 
	char bHasBeenSimplified : 1; 
	char bHasVertexColors : 1; 
	char bEnablePerPolyCollision : 1; 
	struct UBodySetup* BodySetup; 
	struct UPhysicsAsset* PhysicsAsset; 
	struct UPhysicsAsset* ShadowPhysicsAsset; 
	struct TArray<struct UNodeMappingContainer*> NodeMappingData; 
	char bSupportRayTracing : 1; 
	struct TArray<struct UMorphTarget*> MorphTargets; 
	struct UAnimInstance* PostProcessAnimBlueprint; 
	struct TArray<struct UClothingAssetBase*> MeshClothingAssets; 
	struct FSkeletalMeshSamplingInfo SamplingInfo; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
	struct TArray<struct USkeletalMeshSocket*> Sockets; 
	struct TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles; 

	void SetMorphTargets(struct TArray<struct UMorphTarget*>& InMorphTargets); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMeshClothingAssets(struct TArray<struct UClothingAssetBase*>& InMeshClothingAssets); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMaterials(struct TArray<struct FSkeletalMaterial>& InMaterials); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetLODSettings(struct USkeletalMeshLODSettings* InLODSettings); // (Final|Native|Public|BlueprintCallable)
	void SetDefaultAnimatingRig(struct TSoftObjectPtr<UObject> InAnimatingRig); // (Final|Native|Public|BlueprintCallable)
	int32_t NumSockets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FString> K2_GetAllMorphTargetNames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshSocket* GetSocketByIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USkeleton* GetSkeleton(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPhysicsAsset* GetShadowPhysicsAsset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPhysicsAsset* GetPhysicsAsset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UNodeMappingContainer*> GetNodeMappingData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UNodeMappingContainer* GetNodeMappingContainer(struct UBlueprint* SourceAsset); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UMorphTarget*> GetMorphTargets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UClothingAssetBase*> GetMeshClothingAssets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FSkeletalMaterial> GetMaterials(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshLODSettings* GetLODSettings(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FBoxSphereBounds GetImportedBounds(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct TSoftObjectPtr<UObject> GetDefaultAnimatingRig(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FBoxSphereBounds GetBounds(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshSocket* FindSocketInfo(struct FName InSocketName, struct FTransform& OutTransform, int32_t& OutBoneIndex, int32_t& OutIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshSocket* FindSocketAndIndex(struct FName InSocketName, int32_t& OutIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshSocket* FindSocket(struct FName InSocketName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.BlueprintFunctionLibrary
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.ReverbEffect
struct UReverbEffect : UObject {
	bool bBypassEarlyReflections; 
	float ReflectionsDelay; 
	float GainHF; 
	float ReflectionsGain; 
	bool bBypassLateReflections; 
	float LateDelay; 
	float DecayTime; 
	float Density; 
	float Diffusion; 
	float AirAbsorptionGainHF; 
	float DecayHFRatio; 
	float LateGain; 
	float Gain; 
	float RoomRolloffFactor; 
};

// Class Engine.ReplicationDriver
struct UReplicationDriver : UObject {
};

// Class Engine.ReplicationConnectionDriver
struct UReplicationConnectionDriver : UObject {
};

// Class Engine.GameInstance
struct UGameInstance : UObject {
	struct TArray<struct ULocalPlayer*> LocalPlayers; 
	struct UOnlineSession* OnlineSession; 
	struct TArray<struct UObject*> ReferencedObjects; 
	struct FMulticastInlineDelegate OnPawnControllerChangedDelegates; 

	void ReceiveShutdown(); // (Event|Public|BlueprintEvent)
	void ReceiveInit(); // (Event|Public|BlueprintEvent)
	void HandleTravelError(enum class ETravelFailure FailureType); // (Event|Public|BlueprintEvent)
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // (Event|Public|BlueprintEvent)
	void DebugRemovePlayer(int32_t ControllerId); // (Exec|Native|Public)
	void DebugCreatePlayer(int32_t ControllerId); // (Exec|Native|Public)
};

// Class Engine.Info
struct AInfo : AActor {
};

// Class Engine.GameSession
struct AGameSession : AInfo {
	int32_t MaxSpectators; 
	int32_t MaxPlayers; 
	int32_t MaxPartySize; 
	char MaxSplitscreensPerConnection; 
	bool bRequiresPushToTalk; 
	struct FName SessionName; 
};

// Class Engine.BlueprintAsyncActionBase
struct UBlueprintAsyncActionBase : UObject {

	void Activate(); // (Native|Public|BlueprintCallable)
};

// Class Engine.OnlineBlueprintCallProxyBase
struct UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase {
};

// Class Engine.Player
struct UPlayer : UObject {
	struct APlayerController* PlayerController; 
	int32_t CurrentNetSpeed; 
	int32_t ConfiguredInternetSpeed; 
	int32_t ConfiguredLanSpeed; 
};

// Class Engine.NetConnection
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; 
	struct UNetDriver* Driver; 
	struct UPackageMap* PackageMapClass; 
	struct UPackageMap* PackageMap; 
	struct TArray<struct UChannel*> OpenChannels; 
	struct TArray<struct AActor*> SentTemporaries; 
	struct AActor* ViewTarget; 
	struct AActor* OwningActor; 
	int32_t MaxPacket; 
	char InternalAck : 1; 
	struct FUniqueNetIdRepl PlayerID; 
	double LastReceiveTime; 
	struct TArray<struct UChannel*> ChannelsToTick; 
};

// Class Engine.NetDriver
struct UNetDriver : UObject {
	struct FString NetConnectionClassName; 
	struct FString ReplicationDriverClassName; 
	int32_t MaxDownloadSize; 
	char bClampListenServerTickRate : 1; 
	int32_t NetServerMaxTickRate; 
	int32_t MaxNetTickRate; 
	int32_t MaxInternetClientRate; 
	int32_t MaxClientRate; 
	float ServerTravelPause; 
	float SpawnPrioritySeconds; 
	float RelevantTimeout; 
	float KeepAliveTime; 
	float InitialConnectTimeout; 
	float ConnectionTimeout; 
	float TimeoutMultiplierForUnoptimizedBuilds; 
	bool bNoTimeouts; 
	bool bNeverApplyNetworkEmulationSettings; 
	struct UNetConnection* ServerConnection; 
	struct TArray<struct UNetConnection*> ClientConnections; 
	int32_t RecentlyDisconnectedTrackingTime; 
	struct UWorld* World; 
	struct UPackage* WorldPackage; 
	struct UObject* NetConnectionClass; 
	struct UObject* ReplicationDriverClass; 
	struct FName NetDriverName; 
	struct TArray<struct FChannelDefinition> ChannelDefinitions; 
	struct TMap<struct FName, struct FChannelDefinition> ChannelDefinitionMap; 
	struct TArray<struct UChannel*> ActorChannelPool; 
	float Time; 
	struct UReplicationDriver* ReplicationDriver; 
};

// Class Engine.OnlineEngineInterface
struct UOnlineEngineInterface : UObject {
};

// Class Engine.OnlineSession
struct UOnlineSession : UObject {
};

// Class Engine.Texture
struct UTexture : UStreamableRenderAsset {
	struct FGuid LightingGuid; 
	int32_t LODBias; 
	enum class TextureCompressionSettings CompressionSettings; 
	enum class TextureFilter Filter; 
	enum class ETextureMipLoadOptions MipLoadOptions; 
	enum class TextureGroup LODGroup; 
	struct FPerPlatformFloat Downscale; 
	enum class ETextureDownscaleOptions DownscaleOptions; 
	char sRGB : 1; 
	char bNoTiling : 1; 
	char VirtualTextureStreaming : 1; 
	char CompressionYCoCg : 1; 
	char bNotOfflineProcessed : 1; 
	char bAsyncResourceReleaseHasBeenStarted : 1; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
};

// Class Engine.Texture2DDynamic
struct UTexture2DDynamic : UTexture {
	enum class EPixelFormat Format; 
};

// Class Engine.MaterialExpression
struct UMaterialExpression : UObject {
	struct UMaterial* Material; 
	struct UMaterialFunction* Function; 
	char bIsParameterExpression : 1; 
};

// Class Engine.AssetImportData
struct UAssetImportData : UObject {
};

// Class Engine.FXSystemComponent
struct UFXSystemComponent : UPrimitiveComponent {

	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetUseAutoManageAttachment(bool bAutoManage); // (Native|Public|BlueprintCallable)
	void SetIntParameter(struct FName ParameterName, int32_t Param); // (Native|Public|BlueprintCallable)
	void SetFloatParameter(struct FName ParameterName, float Param); // (Native|Public|BlueprintCallable)
	void SetEmitterEnable(struct FName EmitterName, bool bNewEnableState); // (Native|Public|BlueprintCallable)
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetBoolParameter(struct FName ParameterName, bool Param); // (Native|Public|BlueprintCallable)
	void SetAutoAttachmentParameters(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule); // (Native|Public|BlueprintCallable)
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // (Native|Public|BlueprintCallable)
	void ReleaseToPool(); // (Native|Public|BlueprintCallable)
	struct UFXSystemAsset* GetFXSystemAsset(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.FXSystemAsset
struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; 
	uint32_t PoolPrimeSize; 
};

// Class Engine.AnimNotify
struct UAnimNotify : UObject {

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|BlueprintEvent|Const)
	struct FString GetNotifyName(); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class Engine.AnimNotifyState
struct UAnimNotifyState : UObject {

	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // (Event|Public|BlueprintEvent|Const)
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|BlueprintEvent|Const)
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // (Event|Public|BlueprintEvent|Const)
	struct FString GetNotifyName(); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class Engine.SkeletalMeshComponent
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UObject* AnimBlueprintGeneratedClass; 
	struct UAnimInstance* AnimClass; 
	struct UAnimInstance* AnimScriptInstance; 
	struct UAnimInstance* PostProcessAnimInstance; 
	struct FSingleAnimationPlayData AnimationData; 
	struct FVector RootBoneTranslation; 
	struct FVector LineCheckBoundsScale; 
	struct TArray<struct UAnimInstance*> LinkedInstances; 
	struct TArray<struct FTransform> CachedBoneSpaceTransforms; 
	struct TArray<struct FTransform> CachedComponentSpaceTransforms; 
	float GlobalAnimRateScale; 
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; 
	enum class EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; 
	enum class EAnimationMode AnimationMode; 
	char bDisablePostProcessBlueprint : 1; 
	char bUpdateOverlapsOnAnimationFinalize : 1; 
	char bHasValidBodies : 1; 
	char bBlendPhysics : 1; 
	char bEnablePhysicsOnDedicatedServer : 1; 
	char bUpdateJointsFromAnimation : 1; 
	char bDisableClothSimulation : 1; 
	char bDisableRigidBodyAnimNode : 1; 
	char bAllowAnimCurveEvaluation : 1; 
	char bDisableAnimCurves : 1; 
	char bCollideWithEnvironment : 1; 
	char bCollideWithAttachedChildren : 1; 
	char bLocalSpaceSimulation : 1; 
	char bResetAfterTeleport : 1; 
	char bDeferKinematicBoneUpdate : 1; 
	char bNoSkeletonUpdate : 1; 
	char bPauseAnims : 1; 
	char bUseRefPoseOnInitAnim : 1; 
	char bEnablePerPolyCollision : 1; 
	char bForceRefpose : 1; 
	char bOnlyAllowAutonomousTickPose : 1; 
	char bIsAutonomousTickPose : 1; 
	char bOldForceRefPose : 1; 
	char bShowPrePhysBones : 1; 
	char bRequiredBonesUpToDate : 1; 
	char bAnimTreeInitialised : 1; 
	char bIncludeComponentLocationIntoBounds : 1; 
	char bEnableLineCheckWithBounds : 1; 
	char bPropagateCurvesToSlaves : 1; 
	char bSkipKinematicUpdateWhenInterpolating : 1; 
	char bSkipBoundsUpdateWhenInterpolating : 1; 
	char bNeedsQueuedAnimEventsDispatched : 1; 
	uint16_t CachedAnimCurveUidVersion; 
	float ClothBlendWeight; 
	bool bWaitForParallelClothTask; 
	struct TArray<struct FName> DisallowedAnimCurves; 
	struct UBodySetup* BodySetup; 
	struct FMulticastInlineDelegate OnConstraintBroken; 
	struct UClothingSimulationFactory* ClothingSimulationFactory; 
	float TeleportDistanceThreshold; 
	float TeleportRotationThreshold; 
	uint32_t LastPoseTickFrame; 
	struct UClothingSimulationInteractor* ClothingInteractor; 
	struct FMulticastInlineDelegate OnAnimInitialized; 

	void UnlinkAnimClassLayers(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace); // (Final|Native|Public|BlueprintCallable)
	void ToggleDisablePostProcessBlueprint(); // (Final|Native|Public|BlueprintCallable)
	void TermBodiesBelow(struct FName ParentBoneName); // (Final|Native|Public|BlueprintCallable)
	void SuspendClothingSimulation(); // (Final|Native|Public|BlueprintCallable)
	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetUpdateClothInEditor(bool NewUpdateState); // (Final|Native|Public|BlueprintCallable)
	void SetUpdateAnimationInEditor(bool NewUpdateState); // (Final|Native|Public|BlueprintCallable)
	void SetTeleportRotationThreshold(float Threshold); // (Final|Native|Public|BlueprintCallable)
	void SetTeleportDistanceThreshold(float Threshold); // (Final|Native|Public|BlueprintCallable)
	void SetPosition(float InPos, bool bFireNotifies); // (Final|Native|Public|BlueprintCallable)
	void SetPlayRate(float Rate); // (Final|Native|Public|BlueprintCallable)
	void SetPhysicsBlendWeight(float PhysicsBlendWeight); // (Final|Native|Public|BlueprintCallable)
	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, struct FName BoneName, bool bIncludeSelf); // (Native|Public|BlueprintCallable)
	void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight); // (Final|Native|Public|BlueprintCallable)
	void SetEnablePhysicsBlending(bool bNewBlendPhysics); // (Final|Native|Public|BlueprintCallable)
	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, struct FName BoneName, bool bIncludeSelf); // (Final|Native|Public|BlueprintCallable)
	void SetEnableBodyGravity(bool bEnableGravity, struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	void SetDisablePostProcessBlueprint(bool bInDisablePostProcess); // (Final|Native|Public|BlueprintCallable)
	void SetDisableAnimCurves(bool bInDisableAnimCurves); // (Final|Native|Public|BlueprintCallable)
	void SetConstraintProfileForAll(struct FName ProfileName, bool bDefaultIfNotFound); // (Final|Native|Public|BlueprintCallable)
	void SetConstraintProfile(struct FName JointName, struct FName ProfileName, bool bDefaultIfNotFound); // (Final|Native|Public|BlueprintCallable)
	void SetClothMaxDistanceScale(float Scale); // (Final|Native|Public|BlueprintCallable)
	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, struct FName BoneName); // (Native|Public|BlueprintCallable)
	void SetAnimClass(struct UObject* NewClass); // (Native|Public|BlueprintCallable)
	void SetAnimationMode(enum class EAnimationMode InAnimationMode); // (Final|Native|Public|BlueprintCallable)
	void SetAnimation(struct UAnimationAsset* NewAnimToPlay); // (Final|Native|Public|BlueprintCallable)
	void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle); // (Final|Native|Public|BlueprintCallable)
	void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim); // (Final|Native|Public|BlueprintCallable)
	void SetAllowedAnimCurvesEvaluation(struct TArray<struct FName>& List, bool bAllow); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAllowAnimCurveEvaluation(bool bInAllow); // (Final|Native|Public|BlueprintCallable)
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // (Final|Native|Public|BlueprintCallable)
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // (Final|Native|Public|BlueprintCallable)
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType); // (Final|Native|Public|BlueprintCallable)
	void SetAllBodiesSimulatePhysics(bool bNewSimulate); // (Final|Native|Public|BlueprintCallable)
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType); // (Final|Native|Public|BlueprintCallable)
	void SetAllBodiesBelowSimulatePhysics(struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResumeClothingSimulation(); // (Final|Native|Public|BlueprintCallable)
	void ResetClothTeleportMode(); // (Final|Native|Public|BlueprintCallable)
	void ResetAnimInstanceDynamics(enum class ETeleportType InTeleportType); // (Final|Native|Public|BlueprintCallable)
	void ResetAllowedAnimCurveEvaluation(); // (Final|Native|Public|BlueprintCallable)
	void ResetAllBodiesSimulatePhysics(); // (Final|Native|Public|BlueprintCallable)
	void PlayAnimation(struct UAnimationAsset* NewAnimToPlay, bool bLooping); // (Final|Native|Public|BlueprintCallable)
	void Play(bool bLooping); // (Final|Native|Public|BlueprintCallable)
	void OverrideAnimationData(struct UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float position, float PlayRate); // (Final|Native|Public|BlueprintCallable)
	void LinkAnimGraphByTag(struct FName InTag, struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	void LinkAnimClassLayers(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	bool K2_GetClosestPointOnPhysicsAsset(struct FVector& WorldPosition, struct FVector& ClosestWorldPosition, struct FVector& Normal, struct FName& BoneName, float& Distance); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsClothingSimulationSuspended(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsBodyGravityEnabled(struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	bool HasValidAnimationInstance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetTeleportRotationThreshold(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetTeleportDistanceThreshold(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetStringAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, struct FString& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetStringAttribute(struct FName& BoneName, struct FName& AttributeName, struct FString DefaultValue, struct FString& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FVector GetSkeletalCenterOfMass(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetPostProcessInstance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPosition(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlayRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMorphTarget(struct FName MorphTargetName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetIntegerAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, int32_t& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetIntegerAttribute(struct FName& BoneName, struct FName& AttributeName, int32_t DefaultValue, int32_t& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetFloatAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, float& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetFloatAttribute(struct FName& BoneName, struct FName& AttributeName, float DefaultValue, float& OutValue, enum class ECustomBoneAttributeLookup LookupType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetDisablePostProcessBlueprint(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetDisableAnimCurves(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetCurrentJointAngles(struct FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetClothMaxDistanceScale(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UClothingSimulationInteractor* GetClothingSimulationInteractor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetBoneMass(struct FName BoneName, bool bScaleMass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetAnimInstance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UObject* GetAnimClass(); // (Final|Native|Public)
	enum class EAnimationMode GetAnimationMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetAllowRigidBodyAnimNode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetAllowedAnimCurveEvaluate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ForceClothNextUpdateTeleportAndReset(); // (Final|Native|Public|BlueprintCallable)
	void ForceClothNextUpdateTeleport(); // (Final|Native|Public|BlueprintCallable)
	struct FName FindConstraintBoneName(int32_t ConstraintIndex); // (Final|Native|Public|BlueprintCallable)
	void ClearMorphTargets(); // (Final|Native|Public|BlueprintCallable)
	void BreakConstraint(struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void BindClothToMasterPoseComponent(); // (Final|Native|Public|BlueprintCallable)
	void AllowAnimCurveEvaluation(struct FName NameOfCurve, bool bAllow); // (Final|Native|Public|BlueprintCallable)
	void AddImpulseToAllBodiesBelow(struct FVector Impulse, struct FName BoneName, bool bVelChange, bool bIncludeSelf); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddForceToAllBodiesBelow(struct FVector Force, struct FName BoneName, bool bAccelChange, bool bIncludeSelf); // (Native|Public|HasDefaults|BlueprintCallable)
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AnimInstance
struct UAnimInstance : UObject {
	struct USkeleton* CurrentSkeleton; 
	enum class ERootMotionMode RootMotionMode; 
	char bUseMultiThreadedAnimationUpdate : 1; 
	char bUsingCopyPoseFromMesh : 1; 
	char bReceiveNotifiesFromLinkedInstances : 1; 
	char bPropagateNotifiesToLinkedInstances : 1; 
	char bQueueMontageEvents : 1; 
	struct FMulticastInlineDelegate OnMontageBlendingOut; 
	struct FMulticastInlineDelegate OnMontageStarted; 
	struct FMulticastInlineDelegate OnMontageEnded; 
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; 
	struct FAnimNotifyQueue NotifyQueue; 
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; 

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void UnlinkAnimClassLayers(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	struct APawn* TryGetPawnOwner(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName); // (Final|Native|Public|BlueprintCallable)
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // (Native|Public|HasOutParms|BlueprintCallable)
	void SetRootMotionMode(enum class ERootMotionMode Value); // (Final|Native|Public|BlueprintCallable)
	void SetReceiveNotifiesFromLinkedInstances(bool bSet); // (Final|Native|Public|BlueprintCallable)
	void SetPropagateNotifiesToLinkedInstances(bool bSet); // (Final|Native|Public|BlueprintCallable)
	void SetMorphTarget(struct FName MorphTargetName, float Value); // (Final|Native|Public|BlueprintCallable)
	void SavePoseSnapshot(struct FName SnapshotName); // (Native|Public|BlueprintCallable)
	void ResetDynamics(enum class ETeleportType InTeleportType); // (Final|Native|Public|BlueprintCallable)
	struct UAnimMontage* PlaySlotAnimationAsDynamicMontage(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt); // (Final|Native|Public|BlueprintCallable)
	float PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount); // (Final|Native|Public|BlueprintCallable)
	void Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName); // (Final|Native|Public|BlueprintCallable)
	void Montage_Stop(float InBlendOutTime, struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	void Montage_SetPosition(struct UAnimMontage* Montage, float NewPosition); // (Final|Native|Public|BlueprintCallable)
	void Montage_SetPlayRate(struct UAnimMontage* Montage, float NewPlayRate); // (Final|Native|Public|BlueprintCallable)
	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	void Montage_Resume(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	float Montage_Play(struct UAnimMontage* MontageToPlay, float InPlayRate, enum class EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages); // (Final|Native|Public|BlueprintCallable)
	void Montage_Pause(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	void Montage_JumpToSectionsEnd(struct FName SectionName, struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	void Montage_JumpToSection(struct FName SectionName, struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable)
	bool Montage_IsPlaying(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool Montage_IsActive(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float Montage_GetPosition(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float Montage_GetPlayRate(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool Montage_GetIsStopped(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName Montage_GetCurrentSection(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float Montage_GetBlendTime(struct UAnimMontage* Montage); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void LockAIResources(bool bLockMovement, bool LockAILogic); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void LinkAnimGraphByTag(struct FName InTag, struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	void LinkAnimClassLayers(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable)
	bool IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlayingSlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsAnyMontagePlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float& OutMarkerTime); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName InSyncGroupName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	bool GetReceiveNotifiesFromLinkedInstances(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetPropagateNotifiesToLinkedInstances(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USkeletalMeshComponent* GetOwningComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetOwningActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetLinkedAnimLayerInstancesByGroup(struct FName InGroup, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(struct FName InGroup, struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(struct UAnimInstance* InClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceMachineWeight(int32_t MachineIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetCurveValue(struct FName CurveName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetCurrentStateName(int32_t MachineIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct UAnimMontage* GetCurrentActiveMontage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetAllCurveNames(struct TArray<struct FName>& OutNames); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetActiveCurveNames(enum class EAnimCurveType CurveType, struct TArray<struct FName>& OutNames); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void ClearMorphTargets(); // (Final|Native|Public|BlueprintCallable)
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void BlueprintPostEvaluateAnimation(); // (Event|Public|BlueprintEvent)
	void BlueprintLinkedAnimationLayersInitialized(); // (Event|Public|BlueprintEvent)
	void BlueprintInitializeAnimation(); // (Event|Public|BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
};

// Class Engine.BlueprintGeneratedClass
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; 
	char bHasNativizedParent : 1; 
	char bHasCookedComponentInstancingData : 1; 
	struct TArray<struct UDynamicBlueprintBinding*> DynamicBindingObjects; 
	struct TArray<struct UActorComponent*> ComponentTemplates; 
	struct TArray<struct UTimelineTemplate*> Timelines; 
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; 
	struct USimpleConstructionScript* SimpleConstructionScript; 
	struct UInheritableComponentHandler* InheritableComponentHandler; 
	struct UStructProperty* UberGraphFramePointerProperty; 
	struct UFunction* UberGraphFunction; 
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; 
};

// Class Engine.TimecodeProvider
struct UTimecodeProvider : UObject {
	float FrameDelay; 

	struct FTimecode GetTimecode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ETimecodeProviderSynchronizationState GetSynchronizationState(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FQualifiedFrameTime GetQualifiedFrameTime(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FFrameRate GetFrameRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTimecode GetDelayedTimecode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FQualifiedFrameTime GetDelayedQualifiedFrameTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool FetchTimecode(struct FQualifiedFrameTime& OutFrameTime); // (Native|Public|HasOutParms|BlueprintCallable)
	void FetchAndUpdate(); // (Native|Public|BlueprintCallable)
};

// Class Engine.CameraShakeBase
struct UCameraShakeBase : UObject {
	bool bSingleInstance; 
	float ShakeScale; 
	struct UCameraShakePattern* RootShakePattern; 
	struct APlayerCameraManager* CameraManager; 

	void SetRootShakePattern(struct UCameraShakePattern* InPattern); // (Final|Native|Public|BlueprintCallable)
	struct UCameraShakePattern* GetRootShakePattern(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CameraShakePattern
struct UCameraShakePattern : UObject {
};

// Class Engine.Subsystem
struct USubsystem : UObject {
};

// Class Engine.GameInstanceSubsystem
struct UGameInstanceSubsystem : USubsystem {
};

// Class Engine.MaterialExpressionTextureBase
struct UMaterialExpressionTextureBase : UMaterialExpression {
	struct UTexture* Texture; 
};

// Class Engine.MaterialExpressionTextureSample
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	struct FExpressionInput Coordinates; 
};

// Class Engine.MaterialExpressionTextureSampleParameter
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	struct FName ParameterName; 
	struct FGuid ExpressionGUID; 
	struct FName Group; 
};

// Class Engine.MaterialExpressionTextureSampleParameter2D
struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.Pawn
struct APawn : AActor {
	char bUseControllerRotationPitch : 1; 
	char bUseControllerRotationYaw : 1; 
	char bUseControllerRotationRoll : 1; 
	char bCanAffectNavigationGeneration : 1; 
	float BaseEyeHeight; 
	enum class EAutoReceiveInput AutoPossessPlayer; 
	enum class EAutoPossessAI AutoPossessAI; 
	char RemoteViewPitch; 
	struct AController* AIControllerClass; 
	struct APlayerState* PlayerState; 
	struct AController* LastHitBy; 
	struct AController* Controller; 
	struct FVector ControlInputVector; 
	struct FVector LastControlInputVector; 

	void SpawnDefaultController(); // (Native|Public|BlueprintCallable)
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate); // (Final|Native|Public|BlueprintCallable)
	void ReceiveUnpossessed(struct AController* OldController); // (Event|Public|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, struct AActor* NoiseMaker); // (Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable)
	void OnRep_PlayerState(); // (Native|Public)
	void OnRep_Controller(); // (Native|Public)
	void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector K2_GetMovementInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool IsPlayerControlled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPawnControlled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsMoveInputIgnored(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLocallyControlled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsControlled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsBotControlled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPendingMovementInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetNavAgentLocation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UPawnMovementComponent* GetMovementComponent(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetMovementBaseActor(struct APawn* Pawn); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector GetLastMovementInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetControlRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct AController* GetController(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetBaseAimRotation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void DetachFromControllerPendingDestroy(); // (Native|Public|BlueprintCallable)
	struct FVector ConsumeMovementInputVector(); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddControllerYawInput(float Val); // (Native|Public|BlueprintCallable)
	void AddControllerRollInput(float Val); // (Native|Public|BlueprintCallable)
	void AddControllerPitchInput(float Val); // (Native|Public|BlueprintCallable)
};

// Class Engine.Character
struct ACharacter : APawn {
	struct USkeletalMeshComponent* Mesh; 
	struct UCharacterMovementComponent* CharacterMovement; 
	struct UCapsuleComponent* CapsuleComponent; 
	struct FBasedMovementInfo BasedMovement; 
	struct FBasedMovementInfo ReplicatedBasedMovement; 
	float AnimRootMotionTranslationScale; 
	struct FVector BaseTranslationOffset; 
	struct FQuat BaseRotationOffset; 
	float ReplicatedServerLastTransformUpdateTimeStamp; 
	float ReplayLastTransformUpdateTimeStamp; 
	char ReplicatedMovementMode; 
	bool bInBaseReplication; 
	float CrouchedEyeHeight; 
	char bIsCrouched : 1; 
	char bProxyIsJumpForceApplied : 1; 
	char bPressedJump : 1; 
	char bClientUpdating : 1; 
	char bClientWasFalling : 1; 
	char bClientResimulateRootMotion : 1; 
	char bClientResimulateRootMotionSources : 1; 
	char bSimGravityDisabled : 1; 
	char bClientCheckEncroachmentOnNetUpdate : 1; 
	char bServerMoveIgnoreRootMotion : 1; 
	char bWasJumping : 1; 
	float JumpKeyHoldTime; 
	float JumpForceTimeRemaining; 
	float ProxyJumpForceStartedTime; 
	float JumpMaxHoldTime; 
	int32_t JumpMaxCount; 
	int32_t JumpCurrentCount; 
	int32_t JumpCurrentCountPreJump; 
	struct FMulticastInlineDelegate OnReachedJumpApex; 
	struct FMulticastInlineDelegate MovementModeChangedDelegate; 
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; 
	struct FRootMotionSourceGroup SavedRootMotion; 
	struct FRootMotionMovementParams ClientRootMotionParams; 
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; 
	struct FRepRootMotionMontage RepRootMotion; 

	void UnCrouch(bool bClientSimulation); // (Native|Public|BlueprintCallable)
	void StopJumping(); // (Native|Public|BlueprintCallable)
	void StopAnimMontage(struct UAnimMontage* AnimMontage); // (Native|Public|BlueprintCallable)
	void ServerMovePacked(struct FCharacterServerMovePackedBits PackedBits); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, char OldMoveFlags); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // (Net|Native|Event|Public|NetServer|NetValidate)
	void RootMotionDebugClientPrintOnScreen(struct FString inString); // (Net|NetReliableNative|Event|Public|NetClient)
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // (Native|Public|BlueprintCallable)
	void OnWalkingOffLedge(struct FVector& PreviousFloorImpactNormal, struct FVector& PreviousFloorContactNormal, struct FVector& PreviousLocation, float TimeDelta); // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void OnRep_RootMotion(); // (Final|Native|Public)
	void OnRep_ReplicatedBasedMovement(); // (Native|Public)
	void OnRep_ReplayLastTransformUpdateTimeStamp(); // (Final|Native|Public)
	void OnRep_IsCrouched(); // (Native|Public)
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // (Event|Public|HasDefaults|BlueprintEvent)
	void OnLanded(struct FHitResult& Hit); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnJumped(); // (Native|Event|Public|BlueprintEvent)
	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // (Native|Public|HasDefaults|BlueprintCallable)
	void K2_UpdateCustomMovement(float DeltaTime); // (Event|Public|BlueprintEvent)
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // (Event|Public|BlueprintEvent)
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // (Event|Public|BlueprintEvent)
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // (Event|Public|BlueprintEvent)
	void Jump(); // (Native|Public|BlueprintCallable)
	bool IsPlayingRootMotion(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlayingNetworkedRootMotionMontage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsJumpProvidingForce(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAnyRootMotion(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UAnimMontage* GetCurrentMontage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetBaseTranslationOffset(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetBaseRotationOffsetRotator(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetAnimRootMotionTranslationScale(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void Crouch(bool bClientSimulation); // (Native|Public|BlueprintCallable)
	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // (Net|Native|Event|Public|HasDefaults|NetClient)
	void ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits PackedBits); // (Net|Native|Event|Public|NetClient|NetValidate)
	void ClientCheatWalk(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCheatGhost(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCheatFly(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // (Net|Native|Event|Public|HasDefaults|NetClient)
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // (Net|Native|Event|Public|HasDefaults|NetClient)
	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // (Net|Native|Event|Public|HasDefaults|NetClient)
	void ClientAckGoodMove(float Timestamp); // (Net|Native|Event|Public|NetClient)
	bool CanJumpInternal(); // (Native|Event|Protected|BlueprintEvent|Const)
	bool CanJump(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool CanCrouch(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.DataAsset
struct UDataAsset : UObject {
	struct UDataAsset* NativeClass; 
};

// Class Engine.SplineComponent
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves SplineCurves; 
	struct FInterpCurveVector SplineInfo; 
	struct FInterpCurveQuat SplineRotInfo; 
	struct FInterpCurveVector SplineScaleInfo; 
	struct FInterpCurveFloat SplineReparamTable; 
	bool bAllowSplineEditingPerInstance; 
	int32_t ReparamStepsPerSegment; 
	float Duration; 
	bool bStationaryEndpoints; 
	bool bSplineHasBeenEdited; 
	bool bModifiedByConstructionScript; 
	bool bInputSplinePointsToConstructionScript; 
	bool bDrawDebug; 
	bool bClosedLoop; 
	bool bLoopPositionOverride; 
	float LoopPosition; 
	struct FVector DefaultUpVector; 

	void UpdateSpline(); // (Native|Public|BlueprintCallable)
	void SetWorldLocationAtSplinePoint(int32_t PointIndex, struct FVector& InLocation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetUpVectorAtSplinePoint(int32_t PointIndex, struct FVector& InUpVector, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetUnselectedSplineSegmentColor(struct FLinearColor& SegmentColor); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetTangentsAtSplinePoint(int32_t PointIndex, struct FVector& InArriveTangent, struct FVector& InLeaveTangent, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetTangentColor(struct FLinearColor& TangentColor); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetTangentAtSplinePoint(int32_t PointIndex, struct FVector& InTangent, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetSplineWorldPoints(struct TArray<struct FVector>& Points); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSplinePointType(int32_t PointIndex, enum class ESplinePointType Type, bool bUpdateSpline); // (Final|Native|Public|BlueprintCallable)
	void SetSplinePoints(struct TArray<struct FVector>& Points, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSplineLocalPoints(struct TArray<struct FVector>& Points); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSelectedSplineSegmentColor(struct FLinearColor& SegmentColor); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetScaleAtSplinePoint(int32_t PointIndex, struct FVector& InScaleVector, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetRotationAtSplinePoint(int32_t PointIndex, struct FRotator& InRotation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetLocationAtSplinePoint(int32_t PointIndex, struct FVector& InLocation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetDrawDebug(bool bShow); // (Final|Native|Public|BlueprintCallable)
	void SetDefaultUpVector(struct FVector& UpVector, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline); // (Final|Native|Public|BlueprintCallable)
	void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline); // (Final|Native|Public|BlueprintCallable)
	void RemoveSplinePoint(int32_t Index, bool bUpdateSpline); // (Final|Native|Public|BlueprintCallable)
	bool IsClosedLoop(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldLocationAtSplinePoint(int32_t PointIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetVectorPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetVectorPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUpVectorAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUpVectorAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUpVectorAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetTransformAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, bool bUseScale); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetTransformAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetTransformAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTangentAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTangentAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class ESplinePointType GetSplinePointType(int32_t PointIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSplineLength(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetScaleAtSplinePoint(int32_t PointIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetScaleAtSplineInputKey(float InKey); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetScaleAtDistanceAlongSpline(float Distance); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetRotationAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetRotationAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetRotationAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetRollAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRollAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRollAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRollAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRightVectorAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRightVectorAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRightVectorAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumberOfSplineSegments(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumberOfSplinePoints(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLocationAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLocationAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLocationAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector& Location, struct FVector& Tangent, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector& LocalLocation, struct FVector& LocalTangent); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLeaveTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetInputKeyAtDistanceAlongSpline(float Distance); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFloatPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFloatPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDistanceAlongSplineAtSplineInputKey(float InKey); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetDirectionAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetDirectionAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetDirectionAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetDefaultUpVector(enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetArriveTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindUpVectorClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform FindTransformClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindTangentClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindScaleClosestToWorldLocation(struct FVector& WorldLocation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator FindRotationClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float FindRollClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindRightVectorClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindLocationClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float FindInputKeyClosestToWorldLocation(struct FVector& WorldLocation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector FindDirectionClosestToWorldLocation(struct FVector& WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ClearSplinePoints(bool bUpdateSpline); // (Final|Native|Public|BlueprintCallable)
	void AddSplineWorldPoint(struct FVector& position); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void AddSplinePointAtIndex(struct FVector& position, int32_t Index, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void AddSplinePoint(struct FVector& position, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void AddSplineLocalPoint(struct FVector& position); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void AddPoints(struct TArray<struct FSplinePoint>& Points, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddPoint(struct FSplinePoint& Point, bool bUpdateSpline); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.Commandlet
struct UCommandlet : UObject {
	struct FString HelpDescription; 
	struct FString HelpUsage; 
	struct FString HelpWebLink; 
	struct TArray<struct FString> HelpParamNames; 
	struct TArray<struct FString> HelpParamDescriptions; 
	char IsServer : 1; 
	char IsClient : 1; 
	char IsEditor : 1; 
	char LogToConsole : 1; 
	char ShowErrorCount : 1; 
	char ShowProgress : 1; 
};

// Class Engine.AudioComponent
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; 
	struct TArray<struct FAudioComponentParam> InstanceParameters; 
	struct USoundClass* SoundClassOverride; 
	char bAutoDestroy : 1; 
	char bStopWhenOwnerDestroyed : 1; 
	char bShouldRemainActiveIfDropped : 1; 
	char bAllowSpatialization : 1; 
	char bOverrideAttenuation : 1; 
	char bOverrideSubtitlePriority : 1; 
	char bIsUISound : 1; 
	char bEnableLowPassFilter : 1; 
	char bOverridePriority : 1; 
	char bSuppressSubtitles : 1; 
	char bAutoManageAttachment : 1; 
	struct FName AudioComponentUserID; 
	float PitchModulationMin; 
	float PitchModulationMax; 
	float VolumeModulationMin; 
	float VolumeModulationMax; 
	float VolumeMultiplier; 
	int32_t EnvelopeFollowerAttackTime; 
	int32_t EnvelopeFollowerReleaseTime; 
	float Priority; 
	float SubtitlePriority; 
	struct USoundEffectSourcePresetChain* SourceEffectChain; 
	float PitchMultiplier; 
	float LowPassFilterFrequency; 
	struct USoundAttenuation* AttenuationSettings; 
	struct FSoundAttenuationSettings AttenuationOverrides; 
	struct USoundConcurrency* ConcurrencySettings; 
	struct TSet<struct USoundConcurrency*> ConcurrencySet; 
	enum class EAttachmentRule AutoAttachLocationRule; 
	enum class EAttachmentRule AutoAttachRotationRule; 
	enum class EAttachmentRule AutoAttachScaleRule; 
	struct FSoundModulationDefaultRoutingSettings ModulationRouting; 
	struct FMulticastInlineDelegate OnAudioPlayStateChanged; 
	struct FMulticastInlineDelegate OnAudioVirtualizationChanged; 
	struct FMulticastInlineDelegate OnAudioFinished; 
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; 
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; 
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; 
	struct FDelegate OnQueueSubtitles; 
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; 
	struct FName AutoAttachSocketName; 

	void StopDelayed(float DelayTime); // (Final|Native|Public|BlueprintCallable)
	void Stop(); // (Native|Public|BlueprintCallable)
	void SetWaveParameter(struct FName InName, struct USoundWave* InWave); // (Final|Native|Public|BlueprintCallable)
	void SetVolumeMultiplier(float NewVolumeMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetUISound(bool bInUISound); // (Final|Native|Public|BlueprintCallable)
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // (Final|Native|Public|BlueprintCallable)
	void SetSourceBusSendPreEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // (Final|Native|Public|BlueprintCallable)
	void SetSourceBusSendPostEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // (Final|Native|Public|BlueprintCallable)
	void SetSound(struct USoundBase* NewSound); // (Final|Native|Public|BlueprintCallable)
	void SetPitchMultiplier(float NewPitchMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetPaused(bool bPause); // (Final|Native|Public|BlueprintCallable)
	void SetOutputToBusOnly(bool bInOutputToBusOnly); // (Final|Native|Public|BlueprintCallable)
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // (Final|Native|Public|BlueprintCallable)
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetIntParameter(struct FName InName, int32_t inInt); // (Final|Native|Public|BlueprintCallable)
	void SetFloatParameter(struct FName InName, float InFloat); // (Final|Native|Public|BlueprintCallable)
	void SetBoolParameter(struct FName InName, bool InBool); // (Final|Native|Public|BlueprintCallable)
	void SetAudioBusSendPreEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // (Final|Native|Public|BlueprintCallable)
	void SetAudioBusSendPostEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // (Final|Native|Public|BlueprintCallable)
	void PlayQuantized(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, enum class EAudioFaderCurve InFadeCurve); // (Native|Public|HasOutParms|BlueprintCallable)
	void Play(float StartTime); // (Native|Public|BlueprintCallable)
	bool IsVirtualized(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasCookedFFTData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasCookedAmplitudeEnvelopeData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EAudioComponentPlayState GetPlayState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetCookedFFTDataForAllPlayingSounds(struct TArray<struct FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetCookedFFTData(struct TArray<float>& FrequenciesToGet, struct TArray<struct FSoundWaveSpectralData>& OutSoundWaveSpectralData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetCookedEnvelopeDataForAllPlayingSounds(struct TArray<struct FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetCookedEnvelopeData(float& OutEnvelopeData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve); // (Native|Public|BlueprintCallable)
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve); // (Native|Public|BlueprintCallable)
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve); // (Final|Native|Public|BlueprintCallable)
	void AdjustAttenuation(struct FSoundAttenuationSettings& InAttenuationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AssetUserData
struct UAssetUserData : UObject {
};

// Class Engine.SaveGame
struct USaveGame : UObject {
};

// Class Engine.GameModeBase
struct AGameModeBase : AInfo {
	struct FString OptionsString; 
	struct AGameSession* GameSessionClass; 
	struct AGameStateBase* GameStateClass; 
	struct APlayerController* PlayerControllerClass; 
	struct APlayerState* PlayerStateClass; 
	struct AHUD* HUDClass; 
	struct APawn* DefaultPawnClass; 
	struct ASpectatorPawn* SpectatorClass; 
	struct APlayerController* ReplaySpectatorPlayerControllerClass; 
	struct AServerStatReplicator* ServerStatReplicatorClass; 
	struct AGameSession* GameSession; 
	struct AGameStateBase* GameState; 
	struct AServerStatReplicator* ServerStatReplicator; 
	struct FText DefaultPlayerName; 
	char bUseSeamlessTravel : 1; 
	char bStartPlayersAsSpectators : 1; 
	char bPauseable : 1; 

	void StartPlay(); // (Native|Public|BlueprintCallable)
	struct APawn* SpawnDefaultPawnFor(struct AController* NewPlayer, struct AActor* StartSpot); // (Native|Event|Public|BlueprintEvent)
	struct APawn* SpawnDefaultPawnAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	bool ShouldReset(struct AActor* ActorToReset); // (Native|Event|Public|BlueprintEvent)
	void ReturnToMainMenuHost(); // (Native|Public|BlueprintCallable)
	void RestartPlayerAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer, struct AActor* StartSpot); // (Native|Public|BlueprintCallable)
	void RestartPlayer(struct AController* NewPlayer); // (Native|Public|BlueprintCallable)
	void ResetLevel(); // (Native|Public|BlueprintCallable)
	bool PlayerCanRestart(struct APlayerController* Player); // (Native|Event|Public|BlueprintCallable|BlueprintEvent)
	bool MustSpectate(struct APlayerController* NewPlayerController); // (Native|Event|Public|BlueprintEvent|Const)
	void K2_PostLogin(struct APlayerController* NewPlayer); // (Event|Public|BlueprintEvent)
	void K2_OnSwapPlayerControllers(struct APlayerController* OldPC, struct APlayerController* NewPC); // (Event|Protected|BlueprintEvent)
	void K2_OnRestartPlayer(struct AController* NewPlayer); // (Event|Public|BlueprintEvent)
	void K2_OnLogout(struct AController* ExitingController); // (Event|Public|BlueprintEvent)
	void K2_OnChangeName(struct AController* Other, struct FString NewName, bool bNameChange); // (Event|Public|BlueprintEvent)
	struct AActor* K2_FindPlayerStart(struct AController* Player, struct FString IncomingName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	void InitStartSpot(struct AActor* StartSpot, struct AController* NewPlayer); // (Native|Event|Public|BlueprintEvent)
	void InitializeHUDForPlayer(struct APlayerController* NewPlayer); // (Native|Event|Protected|BlueprintEvent)
	bool HasMatchStarted(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMatchEnded(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void HandleStartingNewPlayer(struct APlayerController* NewPlayer); // (Native|Event|Public|BlueprintEvent)
	int32_t GetNumSpectators(); // (Native|Public|BlueprintCallable)
	int32_t GetNumPlayers(); // (Native|Public|BlueprintCallable)
	struct UObject* GetDefaultPawnClassForController(struct AController* InController); // (Native|Event|Public|BlueprintCallable|BlueprintEvent)
	struct AActor* FindPlayerStart(struct AController* Player, struct FString IncomingName); // (Native|Event|Public|BlueprintEvent)
	struct AActor* ChoosePlayerStart(struct AController* Player); // (Native|Event|Public|BlueprintEvent)
	void ChangeName(struct AController* Controller, struct FString NewName, bool bNameChange); // (Native|Public|BlueprintCallable)
	bool CanSpectate(struct APlayerController* Viewer, struct APlayerState* ViewTarget); // (Native|Event|Public|BlueprintEvent)
};

// Class Engine.GameMode
struct AGameMode : AGameModeBase {
	struct FName MatchState; 
	char bDelayedStart : 1; 
	int32_t NumSpectators; 
	int32_t NumPlayers; 
	int32_t NumBots; 
	float MinRespawnDelay; 
	int32_t NumTravellingPlayers; 
	struct ULocalMessage* EngineMessageClass; 
	struct TArray<struct APlayerState*> InactivePlayerArray; 
	float InactivePlayerStateLifeSpan; 
	int32_t MaxInactivePlayers; 
	bool bHandleDedicatedServerReplays; 

	void StartMatch(); // (Native|Public|BlueprintCallable)
	void SetBandwidthLimit(float AsyncIOBandwidthLimit); // (Exec|Native|Public)
	void Say(struct FString Msg); // (Exec|Native|Public|BlueprintCallable)
	void RestartGame(); // (Native|Public|BlueprintCallable)
	bool ReadyToStartMatch(); // (Native|Event|Protected|BlueprintEvent)
	bool ReadyToEndMatch(); // (Native|Event|Protected|BlueprintEvent)
	void K2_OnSetMatchState(struct FName NewState); // (Event|Protected|BlueprintEvent)
	bool IsMatchInProgress(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetMatchState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EndMatch(); // (Native|Public|BlueprintCallable)
	void AbortMatch(); // (Native|Public|BlueprintCallable)
};

// Class Engine.GameStateBase
struct AGameStateBase : AInfo {
	struct AGameModeBase* GameModeClass; 
	struct AGameModeBase* AuthorityGameMode; 
	struct ASpectatorPawn* SpectatorClass; 
	struct TArray<struct APlayerState*> PlayerArray; 
	bool bReplicatedHasBegunPlay; 
	float ReplicatedWorldTimeSeconds; 
	float ServerWorldTimeSecondsDelta; 
	float ServerWorldTimeSecondsUpdateFrequency; 

	void OnRep_SpectatorClass(); // (Native|Protected)
	void OnRep_ReplicatedWorldTimeSeconds(); // (Native|Protected)
	void OnRep_ReplicatedHasBegunPlay(); // (Native|Protected)
	void OnRep_GameModeClass(); // (Native|Protected)
	bool HasMatchStarted(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMatchEnded(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasBegunPlay(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetServerWorldTimeSeconds(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlayerStartTime(struct AController* Controller); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlayerRespawnDelay(struct AController* Controller); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.GameState
struct AGameState : AGameStateBase {
	struct FName MatchState; 
	struct FName PreviousMatchState; 
	int32_t ElapsedTime; 

	void OnRep_MatchState(); // (Native|Public)
	void OnRep_ElapsedTime(); // (Native|Public)
};

// Class Engine.Controller
struct AController : AActor {
	struct APlayerState* PlayerState; 
	struct FMulticastInlineDelegate OnInstigatedAnyDamage; 
	struct FName StateName; 
	struct APawn* Pawn; 
	struct ACharacter* Character; 
	struct USceneComponent* TransformComponent; 
	struct FRotator ControlRotation; 
	char bAttachToPawn : 1; 

	void UnPossess(); // (Final|Native|Public|BlueprintCallable)
	void StopMovement(); // (Native|Public|BlueprintCallable)
	void SetInitialLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetIgnoreMoveInput(bool bNewMoveInput); // (Native|Public|BlueprintCallable)
	void SetIgnoreLookInput(bool bNewLookInput); // (Native|Public|BlueprintCallable)
	void SetControlRotation(struct FRotator& NewRotation); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void ResetIgnoreMoveInput(); // (Native|Public|BlueprintCallable)
	void ResetIgnoreLookInput(); // (Native|Public|BlueprintCallable)
	void ResetIgnoreInputFlags(); // (Native|Public|BlueprintCallable)
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // (Event|Protected|BlueprintEvent)
	void ReceivePossess(struct APawn* PossessedPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveInstigatedAnyDamage(float Damage, struct UDamageType* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent)
	void Possess(struct APawn* InPawn); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void OnRep_PlayerState(); // (Native|Public)
	void OnRep_Pawn(); // (Native|Public)
	bool LineOfSightTo(struct AActor* Other, struct FVector ViewPoint, bool bAlternateChecks); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct APawn* K2_GetPawn(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlayerController(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsMoveInputIgnored(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLookInputIgnored(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLocalPlayerController(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLocalController(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetViewTarget(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetDesiredRotation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetControlRotation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ClientSetRotation(struct FRotator NewRotation, bool bResetCamera); // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient|NetValidate)
	void ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation); // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient|NetValidate)
	struct APlayerController* CastToPlayerController(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PlayerController
struct APlayerController : AController {
	struct UPlayer* Player; 
	struct APawn* AcknowledgedPawn; 
	struct UInterpTrackInstDirector* ControllingDirTrackInst; 
	struct AHUD* MyHUD; 
	struct APlayerCameraManager* PlayerCameraManager; 
	struct APlayerCameraManager* PlayerCameraManagerClass; 
	bool bAutoManageActiveCameraTarget; 
	struct FRotator TargetViewRotation; 
	float SmoothTargetViewRotationSpeed; 
	struct TArray<struct AActor*> HiddenActors; 
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> HiddenPrimitiveComponents; 
	float LastSpectatorStateSynchTime; 
	struct FVector LastSpectatorSyncLocation; 
	struct FRotator LastSpectatorSyncRotation; 
	int32_t ClientCap; 
	struct UCheatManager* CheatManager; 
	struct UCheatManager* CheatClass; 
	struct UPlayerInput* PlayerInput; 
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; 
	char bPlayerIsWaiting : 1; 
	char NetPlayerIndex; 
	struct UNetConnection* PendingSwapConnection; 
	struct UNetConnection* NetConnection; 
	float InputYawScale; 
	float InputPitchScale; 
	float InputRollScale; 
	char bShowMouseCursor : 1; 
	char bEnableClickEvents : 1; 
	char bEnableTouchEvents : 1; 
	char bEnableMouseOverEvents : 1; 
	char bEnableTouchOverEvents : 1; 
	char bForceFeedbackEnabled : 1; 
	float ForceFeedbackScale; 
	struct TArray<struct FKey> ClickEventKeys; 
	enum class EMouseCursor DefaultMouseCursor; 
	enum class EMouseCursor CurrentMouseCursor; 
	enum class ECollisionChannel DefaultClickTraceChannel; 
	enum class ECollisionChannel CurrentClickTraceChannel; 
	float HitResultTraceDistance; 
	uint16_t SeamlessTravelCount; 
	uint16_t LastCompletedSeamlessTravelCount; 
	struct UInputComponent* InactiveStateInputComponent; 
	char bShouldPerformFullTickWhenPaused : 1; 
	struct UTouchInterface* CurrentTouchInterface; 
	struct ASpectatorPawn* SpectatorPawn; 
	bool bIsLocalPlayerController; 
	struct FVector SpawnLocation; 
	bool bFreezeWorldComposition; 
	struct FVector CachedCameraLocation; 
	struct FRotator CachedCameraRotation; 

	bool WasInputKeyJustReleased(struct FKey Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool WasInputKeyJustPressed(struct FKey Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ToggleSpeaking(bool bInSpeaking); // (Exec|Native|Public)
	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename); // (Final|Exec|Native|Private)
	void SwitchLevel(struct FString URL); // (Exec|Native|Public)
	void StopHapticEffect(enum class EControllerHand Hand); // (Final|Native|Public|BlueprintCallable)
	void StartFire(char FireModeNum); // (Exec|Native|Public)
	void SetVirtualJoystickVisibility(bool bVisible); // (Native|Public|BlueprintCallable)
	void SetViewTargetWithBlend(struct AActor* NewViewTarget, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing); // (Native|Public|BlueprintCallable)
	void SetName(struct FString S); // (Exec|Native|Public)
	void SetMouseLocation(int32_t X, int32_t Y); // (Final|Native|Public|BlueprintCallable)
	void SetMouseCursorWidget(enum class EMouseCursor Cursor, struct UUserWidget* CursorWidget); // (Final|Native|Public|BlueprintCallable)
	void SetHapticsByValue(float Frequency, float Amplitude, enum class EControllerHand Hand); // (Final|Native|Public|BlueprintCallable)
	void SetDisableHaptics(bool bNewDisabled); // (Native|Public|BlueprintCallable)
	void SetControllerLightColor(struct FColor Color); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // (Native|Public|BlueprintCallable)
	void SetAudioListenerOverride(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetAudioListenerAttenuationOverride(struct USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerViewPrevPlayer(); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerViewNextPlayer(); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerVerifyViewTarget(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // (Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // (Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerID); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerToggleAILogging(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerShortTimeout(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerSetSpectatorWaiting(bool bWaiting); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // (Net|Native|Event|Public|NetServer|HasDefaults|NetValidate)
	void ServerRestartPlayer(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerPause(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // (Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerID); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerExecRPC(struct FString Msg); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerExec(struct FString Msg); // (Final|Exec|Native|Public)
	void ServerCheckClientPossessionReliable(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerCheckClientPossession(); // (Net|Native|Event|Public|NetServer|NetValidate)
	void ServerChangeName(struct FString S); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerCamera(struct FName NewMode); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ServerAcknowledgePossession(struct APawn* P); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void SendToConsole(struct FString Command); // (Exec|Native|Public)
	void RestartLevel(); // (Exec|Native|Public)
	void ResetControllerLightColor(); // (Final|Native|Public|BlueprintCallable)
	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D& ScreenLocation, bool bPlayerViewportRelative); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void PlayHapticEffect(struct UHapticFeedbackEffect_Base* HapticEffect, enum class EControllerHand Hand, float Scale, bool bLoop); // (Final|Native|Public|BlueprintCallable)
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, enum class EDynamicForceFeedbackAction Action, struct FLatentActionInfo LatentInfo); // (Final|Native|Private|BlueprintCallable)
	void Pause(); // (Exec|Native|Public)
	void OnServerStartedVisualLogger(bool bIsLogging); // (Net|NetReliableNative|Event|Public|NetClient)
	void LocalTravel(struct FString URL); // (Exec|Native|Public)
	void K2_ClientPlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // (Final|Native|Public|BlueprintCallable)
	bool IsWorldCompositionLevelStreamingEnabled(); // (Native|Event|Public|BlueprintCallable|BlueprintEvent)
	bool IsInputKeyDown(struct FKey Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetViewportSize(int32_t& SizeX, int32_t& SizeY); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct ASpectatorPawn* GetSpectatorPawn(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetMousePosition(float& LocationX, float& LocationY); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetInputVectorKeyState(struct FKey Key); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetInputTouchState(enum class ETouchIndex FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetInputMouseDelta(float& DeltaX, float& DeltaY); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetInputMotionState(struct FVector& Tilt, struct FVector& RotationRate, struct FVector& Gravity, struct FVector& Acceleration); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetInputKeyTimeDown(struct FKey Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetInputAnalogStickState(enum class EControllerAnalogStick WhichStick, float& StickX, float& StickY); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetInputAnalogKeyState(struct FKey Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AHUD* GetHUD(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderFingerForObjects(enum class ETouchIndex FingerIndex, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderFingerByChannel(enum class ETouchIndex FingerIndex, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderFinger(enum class ETouchIndex FingerIndex, enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderCursorForObjects(struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderCursorByChannel(enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetHitResultUnderCursor(enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetFocalLocation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void FOV(float NewFOV); // (Exec|Native|Public)
	void EnableCheats(); // (Exec|Native|Public)
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector& WorldLocation, struct FVector& WorldDirection); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool DeprojectMousePositionToWorld(struct FVector& WorldLocation, struct FVector& WorldDirection); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ConsoleKey(struct FKey Key); // (Exec|Native|Public)
	void ClientWasKicked(struct FText KickReason); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientVoiceHandshakeComplete(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerID); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientTravelInternal(struct FString URL, enum class ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient)
	void ClientTravel(struct FString URL, enum class ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // (Final|Native|Public|HasDefaults)
	void ClientTeamMessage(struct APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientStopForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag); // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable)
	void ClientStopCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // (Final|Native|Public|BlueprintCallable)
	void ClientStopCameraShake(struct UCameraShakeBase* Shake, bool bImmediately); // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable)
	void ClientStopCameraAnim(struct UCameraAnim* AnimToStop); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientStartOnlineSession(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientStartCameraShakeFromSource(struct UCameraShakeBase* Shake, struct UCameraShakeSourceComponent* SourceComponent); // (Final|Native|Public|BlueprintCallable)
	void ClientStartCameraShake(struct UCameraShakeBase* Shake, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable)
	void ClientSpawnCameraLensEffect(struct AEmitterCameraLensEffectBase* LensEffectEmitterClass); // (Net|Native|Event|Public|NetClient|BlueprintCallable)
	void ClientSetViewTarget(struct AActor* A, struct FViewTargetTransitionParams TransitionParams); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSetSpectatorWaiting(bool bWaiting); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSetHUD(struct AHUD* NewHUDClass); // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable)
	void ClientSetForceMipLevelsToBeResident(struct UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSetCameraMode(struct FName NewCamMode); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished); // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient)
	void ClientSetBlockOnAsyncLoading(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReturnToMainMenuWithTextReason(struct FText ReturnReason); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReturnToMainMenu(struct FString ReturnReason); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientRetryClientRestart(struct APawn* NewPawn); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientRestart(struct APawn* NewPawn); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReset(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientRepObjRef(struct UObject* Object); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReceiveLocalizedMessage(struct ULocalMessage* Message, int32_t SWITCH, struct APlayerState* RelatedPlayerState_2, struct APlayerState* RelatedPlayerState_3, struct UObject* OptionalObject); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientPrestreamTextures(struct AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientPlaySoundAtLocation(struct USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier); // (Net|Native|Event|Public|HasDefaults|NetClient)
	void ClientPlaySound(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // (Net|Native|Event|Public|NetClient)
	void ClientPlayForceFeedback_Internal(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params); // (Final|Net|Native|Event|Private|NetClient)
	void ClientPlayCameraAnim(struct UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum class ECameraShakePlaySpace Space, struct FRotator CustomPlaySpace); // (Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable)
	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerID); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientIgnoreMoveInput(bool bIgnore); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientIgnoreLookInput(bool bIgnore); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientGotoState(struct FName NewState); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientGameEnded(struct AActor* EndGameFocus, bool bIsWinner); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientForceGarbageCollection(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientFlushLevelStreaming(); // (Final|Net|NetReliableNative|Event|Public|NetClient)
	void ClientEndOnlineSession(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientEnableNetworkVoice(bool bEnable); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCommitMapChange(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientClearCameraLensEffects(); // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable)
	void ClientCapBandwidth(int32_t Cap); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCancelPendingMapChange(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation); // (Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient)
	void ClearAudioListenerOverride(); // (Final|Native|Public|BlueprintCallable)
	void ClearAudioListenerAttenuationOverride(); // (Final|Native|Public|BlueprintCallable)
	bool CanRestartPlayer(); // (Native|Public|BlueprintCallable)
	void Camera(struct FName NewMode); // (Exec|Native|Public)
	void AddYawInput(float Val); // (Native|Public|BlueprintCallable)
	void AddRollInput(float Val); // (Native|Public|BlueprintCallable)
	void AddPitchInput(float Val); // (Native|Public|BlueprintCallable)
	void ActivateTouchInterface(struct UTouchInterface* NewTouchInterface); // (Native|Public|BlueprintCallable)
};

// Class Engine.MovementComponent
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; 
	struct UPrimitiveComponent* UpdatedPrimitive; 
	struct FVector Velocity; 
	struct FVector PlaneConstraintNormal; 
	struct FVector PlaneConstraintOrigin; 
	char bUpdateOnlyIfRendered : 1; 
	char bAutoUpdateTickRegistration : 1; 
	char bTickBeforeOwner : 1; 
	char bAutoRegisterUpdatedComponent : 1; 
	char bConstrainToPlane : 1; 
	char bSnapToPlaneAtStart : 1; 
	char bAutoRegisterPhysicsVolumeUpdates : 1; 
	char bComponentShouldUpdatePhysicsVolume : 1; 
	enum class EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; 

	void StopMovementImmediately(); // (Native|Public|BlueprintCallable)
	void SnapUpdatedComponentToPlane(); // (Native|Public|BlueprintCallable)
	void SetUpdatedComponent(struct USceneComponent* NewUpdatedComponent); // (Native|Public|BlueprintCallable)
	void SetPlaneConstraintOrigin(struct FVector PlaneOrigin); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetPlaneConstraintNormal(struct FVector PlaneNormal); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetPlaneConstraintFromVectors(struct FVector Forward, struct FVector Up); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetPlaneConstraintEnabled(bool bEnabled); // (Native|Public|BlueprintCallable)
	void SetPlaneConstraintAxisSetting(enum class EPlaneConstraintAxisSetting NewAxisSetting); // (Native|Public|BlueprintCallable)
	void PhysicsVolumeChanged(struct APhysicsVolume* NewVolume); // (Native|Public)
	bool K2_MoveUpdatedComponent(struct FVector Delta, struct FRotator NewRotation, struct FHitResult& OutHit, bool bSweep, bool bTeleport); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float K2_GetModifiedMaxSpeed(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float K2_GetMaxSpeedModifier(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsExceedingMaxSpeed(float MaxSpeed); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPlaneConstraintOrigin(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPlaneConstraintNormal(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APhysicsVolume* GetPhysicsVolume(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxSpeed(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetGravityZ(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector ConstrainNormalToPlane(struct FVector Normal); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector ConstrainLocationToPlane(struct FVector Location); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector ConstrainDirectionToPlane(struct FVector Direction); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.NavMovementComponent
struct UNavMovementComponent : UMovementComponent {
	struct FNavAgentProperties NavAgentProps; 
	float FixedPathBrakingDistance; 
	char bUpdateNavAgentWithOwnersCollision : 1; 
	char bUseAccelerationForPaths : 1; 
	char bUseFixedBrakingDistanceForPaths : 1; 
	struct FMovementProperties MovementState; 
	struct UObject* PathFollowingComp; 

	void StopMovementKeepPathing(); // (Final|Native|Public|BlueprintCallable)
	void StopActiveMovement(); // (Native|Public|BlueprintCallable)
	bool IsSwimming(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsMovingOnGround(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsFlying(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsFalling(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsCrouching(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.PawnMovementComponent
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* PawnOwner; 

	struct FVector K2_GetInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool IsMoveInputIgnored(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetPendingInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct APawn* GetPawnOwner(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLastInputVector(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector ConsumeInputVector(); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddInputVector(struct FVector WorldVector, bool bForce); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.CharacterMovementComponent
struct UCharacterMovementComponent : UPawnMovementComponent {
	struct ACharacter* CharacterOwner; 
	float GravityScale; 
	float MaxStepHeight; 
	float JumpZVelocity; 
	float JumpOffJumpZFactor; 
	float WalkableFloorAngle; 
	float WalkableFloorZ; 
	enum class EMovementMode MovementMode; 
	char CustomMovementMode; 
	enum class ENetworkSmoothingMode NetworkSmoothingMode; 
	float GroundFriction; 
	float MaxWalkSpeed; 
	float MaxWalkSpeedCrouched; 
	float MaxSwimSpeed; 
	float MaxFlySpeed; 
	float MaxCustomMovementSpeed; 
	float MaxAcceleration; 
	float MinAnalogWalkSpeed; 
	float BrakingFrictionFactor; 
	float BrakingFriction; 
	float BrakingSubStepTime; 
	float BrakingDecelerationWalking; 
	float BrakingDecelerationFalling; 
	float BrakingDecelerationSwimming; 
	float BrakingDecelerationFlying; 
	float AirControl; 
	float AirControlBoostMultiplier; 
	float AirControlBoostVelocityThreshold; 
	float FallingLateralFriction; 
	float CrouchedHalfHeight; 
	float Buoyancy; 
	float PerchRadiusThreshold; 
	float PerchAdditionalHeight; 
	struct FRotator RotationRate; 
	char bUseSeparateBrakingFriction : 1; 
	char bApplyGravityWhileJumping : 1; 
	char bUseControllerDesiredRotation : 1; 
	char bOrientRotationToMovement : 1; 
	char bSweepWhileNavWalking : 1; 
	char bMovementInProgress : 1; 
	char bEnableScopedMovementUpdates : 1; 
	char bEnableServerDualMoveScopedMovementUpdates : 1; 
	char bForceMaxAccel : 1; 
	char bRunPhysicsWithNoController : 1; 
	char bForceNextFloorCheck : 1; 
	char bShrinkProxyCapsule : 1; 
	char bCanWalkOffLedges : 1; 
	char bCanWalkOffLedgesWhenCrouching : 1; 
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; 
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; 
	char bDeferUpdateMoveComponent : 1; 
	char bEnablePhysicsInteraction : 1; 
	char bTouchForceScaledToMass : 1; 
	char bPushForceScaledToMass : 1; 
	char bPushForceUsingZOffset : 1; 
	char bScalePushForceToVelocity : 1; 
	struct USceneComponent* DeferredUpdatedMoveComponent; 
	float MaxOutOfWaterStepHeight; 
	float OutofWaterZ; 
	float Mass; 
	float StandingDownwardForceScale; 
	float InitialPushForceFactor; 
	float PushForceFactor; 
	float PushForcePointZOffsetFactor; 
	float TouchForceFactor; 
	float MinTouchForce; 
	float MaxTouchForce; 
	float RepulsionForce; 
	struct FVector Acceleration; 
	struct FQuat LastUpdateRotation; 
	struct FVector LastUpdateLocation; 
	struct FVector LastUpdateVelocity; 
	float ServerLastTransformUpdateTimeStamp; 
	float ServerLastClientGoodMoveAckTime; 
	float ServerLastClientAdjustmentTime; 
	struct FVector PendingImpulseToApply; 
	struct FVector PendingForceToApply; 
	float AnalogInputModifier; 
	float MaxSimulationTimeStep; 
	int32_t MaxSimulationIterations; 
	int32_t MaxJumpApexAttemptsPerSimulation; 
	float MaxDepenetrationWithGeometry; 
	float MaxDepenetrationWithGeometryAsProxy; 
	float MaxDepenetrationWithPawn; 
	float MaxDepenetrationWithPawnAsProxy; 
	float NetworkSimulatedSmoothLocationTime; 
	float NetworkSimulatedSmoothRotationTime; 
	float ListenServerNetworkSimulatedSmoothLocationTime; 
	float ListenServerNetworkSimulatedSmoothRotationTime; 
	float NetProxyShrinkRadius; 
	float NetProxyShrinkHalfHeight; 
	float NetworkMaxSmoothUpdateDistance; 
	float NetworkNoSmoothUpdateDistance; 
	float NetworkMinTimeBetweenClientAckGoodMoves; 
	float NetworkMinTimeBetweenClientAdjustments; 
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; 
	float NetworkLargeClientCorrectionDistance; 
	float LedgeCheckThreshold; 
	float JumpOutOfWaterPitch; 
	struct FFindFloorResult CurrentFloor; 
	enum class EMovementMode DefaultLandMovementMode; 
	enum class EMovementMode DefaultWaterMovementMode; 
	enum class EMovementMode GroundMovementMode; 
	char bMaintainHorizontalGroundVelocity : 1; 
	char bImpartBaseVelocityX : 1; 
	char bImpartBaseVelocityY : 1; 
	char bImpartBaseVelocityZ : 1; 
	char bImpartBaseAngularVelocity : 1; 
	char bJustTeleported : 1; 
	char bNetworkUpdateReceived : 1; 
	char bNetworkMovementModeChanged : 1; 
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; 
	char bServerAcceptClientAuthoritativePosition : 1; 
	char bNotifyApex : 1; 
	char bCheatFlying : 1; 
	char bWantsToCrouch : 1; 
	char bCrouchMaintainsBaseLocation : 1; 
	char bIgnoreBaseRotation : 1; 
	char bFastAttachedMove : 1; 
	char bAlwaysCheckFloor : 1; 
	char bUseFlatBaseForFloorChecks : 1; 
	char bPerformingJumpOff : 1; 
	char bWantsToLeaveNavWalking : 1; 
	char bUseRVOAvoidance : 1; 
	char bRequestedMoveUseAcceleration : 1; 
	char bWasSimulatingRootMotion : 1; 
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; 
	char bHasRequestedVelocity : 1; 
	char bRequestedMoveWithMaxSpeed : 1; 
	char bWasAvoidanceUpdated : 1; 
	char bProjectNavMeshWalking : 1; 
	char bProjectNavMeshOnBothWorldChannels : 1; 
	float AvoidanceConsiderationRadius; 
	struct FVector RequestedVelocity; 
	int32_t AvoidanceUID; 
	struct FNavAvoidanceMask AvoidanceGroup; 
	struct FNavAvoidanceMask GroupsToAvoid; 
	struct FNavAvoidanceMask GroupsToIgnore; 
	float AvoidanceWeight; 
	struct FVector PendingLaunchVelocity; 
	float NavMeshProjectionInterval; 
	float NavMeshProjectionTimer; 
	float NavMeshProjectionInterpSpeed; 
	float NavMeshProjectionHeightScaleUp; 
	float NavMeshProjectionHeightScaleDown; 
	float NavWalkingFloorDistTolerance; 
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; 
	float MinTimeBetweenTimeStampResets; 
	struct FRootMotionSourceGroup CurrentRootMotion; 
	struct FRootMotionSourceGroup ServerCorrectionRootMotion; 
	struct FRootMotionMovementParams RootMotionParams; 
	struct FVector AnimRootMotionVelocity; 

	void SetWalkableFloorZ(float InWalkableFloorZ); // (Final|Native|Public|BlueprintCallable)
	void SetWalkableFloorAngle(float InWalkableFloorAngle); // (Final|Native|Public|BlueprintCallable)
	void SetMovementMode(enum class EMovementMode NewMovementMode, char NewCustomMode); // (Native|Public|BlueprintCallable)
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetGroupsToIgnore(int32_t GroupFlags); // (Final|Native|Public|BlueprintCallable)
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetGroupsToAvoid(int32_t GroupFlags); // (Final|Native|Public|BlueprintCallable)
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAvoidanceGroup(int32_t GroupFlags); // (Final|Native|Public|BlueprintCallable)
	void SetAvoidanceEnabled(bool bEnable); // (Final|Native|Public|BlueprintCallable)
	float K2_GetWalkableFloorZ(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float K2_GetWalkableFloorAngle(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float K2_GetModifiedMaxAcceleration(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void K2_FindFloor(struct FVector CapsuleLocation, struct FFindFloorResult& FloorResult); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void K2_ComputeFloorDist(struct FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult& FloorResult); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool IsWalking(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsWalkable(struct FHitResult& Hit); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetValidPerchRadius(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPerchRadiusThreshold(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPrimitiveComponent* GetMovementBase(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMinAnalogSpeed(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxJumpHeightWithJumpTime(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxJumpHeight(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxBrakingDeceleration(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxAcceleration(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLastUpdateVelocity(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetLastUpdateRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetLastUpdateLocation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetImpartedMovementBaseVelocity(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetCurrentAcceleration(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct ACharacter* GetCharacterOwner(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAnalogInputModifier(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DisableMovement(); // (Native|Public|BlueprintCallable)
	void ClearAccumulatedForces(); // (Native|Public|BlueprintCallable)
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Native|Protected|HasOutParms)
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration); // (Native|Public|BlueprintCallable)
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // (Native|Public|HasDefaults|BlueprintCallable)
	void AddForce(struct FVector Force); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.DynamicSubsystem
struct UDynamicSubsystem : USubsystem {
};

// Class Engine.EngineSubsystem
struct UEngineSubsystem : UDynamicSubsystem {
};

// Class Engine.SoundEffectPreset
struct USoundEffectPreset : UObject {
};

// Class Engine.SoundEffectSourcePreset
struct USoundEffectSourcePreset : USoundEffectPreset {
};

// Class Engine.SoundEffectSubmixPreset
struct USoundEffectSubmixPreset : USoundEffectPreset {
};

// Class Engine.DataTable
struct UDataTable : UObject {
	struct UScriptStruct* RowStruct; 
	char bStripFromClientBuilds : 1; 
	char bIgnoreExtraFields : 1; 
	char bIgnoreMissingFields : 1; 
	struct FString ImportKeyField; 
};

// Class Engine.WorldSubsystem
struct UWorldSubsystem : USubsystem {
};

// Class Engine.ShapeComponent
struct UShapeComponent : UPrimitiveComponent {
	struct UBodySetup* ShapeBodySetup; 
	struct UNavAreaBase* AreaClass; 
	struct FColor ShapeColor; 
	char bDrawOnlyIfSelected : 1; 
	char bShouldCollideWhenPlacing : 1; 
	char bDynamicObstacle : 1; 
};

// Class Engine.SphereComponent
struct USphereComponent : UShapeComponent {
	float SphereRadius; 

	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps); // (Final|Native|Public|BlueprintCallable)
	float GetUnscaledSphereRadius(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetShapeScale(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetScaledSphereRadius(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.BoxComponent
struct UBoxComponent : UShapeComponent {
	struct FVector BoxExtent; 
	float LineThickness; 

	void SetBoxExtent(struct FVector InBoxExtent, bool bUpdateOverlaps); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetUnscaledBoxExtent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetScaledBoxExtent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.TickableWorldSubsystem
struct UTickableWorldSubsystem : UWorldSubsystem {
};

// Class Engine.StaticMeshComponent
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; 
	int32_t PreviousLODLevel; 
	int32_t MinLOD; 
	int32_t SubDivisionStepSize; 
	struct UStaticMesh* StaticMesh; 
	struct FColor WireframeColorOverride; 
	char bEvaluateWorldPositionOffset : 1; 
	char bOverrideWireframeColor : 1; 
	char bOverrideMinLod : 1; 
	char bOverrideNavigationExport : 1; 
	char bForceNavigationObstacle : 1; 
	char bDisallowMeshPaintPerInstance : 1; 
	char bIgnoreInstanceForTextureStreaming : 1; 
	char bOverrideLightMapRes : 1; 
	char bCastDistanceFieldIndirectShadow : 1; 
	char bOverrideDistanceFieldSelfShadowBias : 1; 
	char bUseSubDivisions : 1; 
	char bUseDefaultCollision : 1; 
	char bReverseCulling : 1; 
	int32_t OverriddenLightMapRes; 
	float DistanceFieldIndirectShadowMinVisibility; 
	float DistanceFieldSelfShadowBias; 
	float StreamingDistanceMultiplier; 
	struct TArray<struct FStaticMeshComponentLODInfo> LODData; 
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; 
	struct FLightmassPrimitiveSettings LightmassSettings; 

	bool SetStaticMesh(struct UStaticMesh* NewMesh); // (Native|Public|BlueprintCallable)
	void SetReverseCulling(bool ReverseCulling); // (Final|Native|Public|BlueprintCallable)
	void SetForcedLodModel(int32_t NewForcedLodModel); // (Final|Native|Public|BlueprintCallable)
	void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetDistanceFieldSelfShadowBias(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void OnRep_StaticMesh(struct UStaticMesh* OldStaticMesh); // (Final|Native|Public)
	void GetLocalBounds(struct FVector& Min, struct FVector& Max); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.InstancedStaticMeshComponent
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; 
	int32_t NumCustomDataFloats; 
	struct TArray<float> PerInstanceSMCustomData; 
	int32_t InstancingRandomSeed; 
	int32_t InstanceStartCullDistance; 
	int32_t InstanceEndCullDistance; 
	struct TArray<int32_t> InstanceReorderTable; 
	int32_t NumPendingLightmaps; 
	struct TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings; 

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // (Native|Public|BlueprintCallable)
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance); // (Final|Native|Public|BlueprintCallable)
	bool RemoveInstance(int32_t InstanceIndex); // (Native|Public|BlueprintCallable)
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct TArray<int32_t> GetInstancesOverlappingSphere(struct FVector& Center, float Radius, bool bSphereInWorldSpace); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct TArray<int32_t> GetInstancesOverlappingBox(struct FBox& Box, bool bBoxInWorldSpace); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	int32_t GetInstanceCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearInstances(); // (Native|Public|BlueprintCallable)
	bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, struct TArray<struct FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // (Native|Public|HasOutParms|BlueprintCallable)
	bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, struct FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t AddInstanceWorldSpace(struct FTransform& WorldTransform); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct TArray<int32_t> AddInstances(struct TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices); // (Native|Public|HasOutParms|BlueprintCallable)
	int32_t AddInstance(struct FTransform& InstanceTransform); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	struct TArray<int32_t> SortedInstances; 
	int32_t NumBuiltInstances; 
	struct FBox BuiltInstanceBounds; 
	struct FBox UnbuiltInstanceBounds; 
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; 
	char bEnableDensityScaling : 1; 
	int32_t OcclusionLayerNumNodes; 
	struct FBoxSphereBounds CacheMeshExtendedBounds; 
	bool bDisableCollision; 
	int32_t InstanceCountToRender; 

	bool RemoveInstances(struct TArray<int32_t>& InstancesToRemove); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AnimMetaData
struct UAnimMetaData : UObject {
};

// Class Engine.SpringArmComponent
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; 
	struct FVector SocketOffset; 
	struct FVector TargetOffset; 
	float ProbeSize; 
	enum class ECollisionChannel ProbeChannel; 
	char bDoCollisionTest : 1; 
	char bUsePawnControlRotation : 1; 
	char bInheritPitch : 1; 
	char bInheritYaw : 1; 
	char bInheritRoll : 1; 
	char bEnableCameraLag : 1; 
	char bEnableCameraRotationLag : 1; 
	char bUseCameraLagSubstepping : 1; 
	char bDrawDebugLagMarkers : 1; 
	float CameraLagSpeed; 
	float CameraRotationLagSpeed; 
	float CameraLagMaxTimeStep; 
	float CameraLagMaxDistance; 

	bool IsCollisionFixApplied(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetUnfixedCameraPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetTargetRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CheatManager
struct UCheatManager : UObject {
	struct ADebugCameraController* DebugCameraControllerRef; 
	struct ADebugCameraController* DebugCameraControllerClass; 
	struct TArray<struct UCheatManagerExtension*> CheatManagerExtensions; 

	void Walk(); // (Exec|Native|Public|BlueprintCallable)
	void ViewSelf(); // (Exec|Native|Public)
	void ViewPlayer(struct FString S); // (Exec|Native|Public)
	void ViewClass(struct AActor* DesiredClass); // (Exec|Native|Public)
	void ViewActor(struct FName ActorName); // (Exec|Native|Public)
	void UpdateSafeArea(); // (Final|Exec|Native|Public)
	void ToggleServerStatReplicatorUpdateStatNet(); // (Final|Exec|Native|Public)
	void ToggleServerStatReplicatorClientOverwrite(); // (Final|Exec|Native|Public)
	void ToggleDebugCamera(); // (Exec|Native|Public)
	void ToggleAILogging(); // (Exec|Native|Public)
	void TestCollisionDistance(); // (Exec|Native|Public)
	void teleport(); // (Exec|Native|Public|BlueprintCallable)
	void Summon(struct FString ClassName); // (Exec|Native|Public)
	void StreamLevelOut(struct FName PackageName); // (Exec|Native|Public)
	void StreamLevelIn(struct FName PackageName); // (Exec|Native|Public)
	void SpawnServerStatReplicator(); // (Final|Exec|Native|Public)
	void Slomo(float NewTimeDilation); // (Exec|Native|Public|BlueprintCallable)
	void SetWorldOrigin(); // (Final|Exec|Native|Public)
	void SetMouseSensitivityToDefault(); // (Exec|Native|Public)
	void ServerToggleAILogging(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ReceiveInitCheatManager(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(); // (Event|Public|BlueprintEvent)
	void PlayersOnly(); // (Exec|Native|Public|BlueprintCallable)
	void OnlyLoadLevel(struct FName PackageName); // (Exec|Native|Public)
	void LogLoc(); // (Exec|Native|Public)
	void InvertMouse(); // (Exec|Native|Public)
	void God(); // (Exec|Native|Public|BlueprintCallable)
	void Ghost(); // (Exec|Native|Public|BlueprintCallable)
	void FreezeFrame(float Delay); // (Exec|Native|Public|BlueprintCallable)
	void Fly(); // (Exec|Native|Public|BlueprintCallable)
	void FlushLog(); // (Exec|Native|Public)
	void EnableDebugCamera(); // (Native|Protected|BlueprintCallable)
	void DumpVoiceMutingState(); // (Exec|Native|Public)
	void DumpPartyState(); // (Exec|Native|Public)
	void DumpOnlineSessionState(); // (Exec|Native|Public)
	void DumpChatState(); // (Exec|Native|Public)
	void DisableDebugCamera(); // (Native|Protected|BlueprintCallable)
	void DestroyTarget(); // (Exec|Native|Public|BlueprintCallable)
	void DestroyServerStatReplicator(); // (Final|Exec|Native|Public)
	void DestroyPawns(struct APawn* aClass); // (Exec|Native|Public)
	void DestroyAllPawnsExceptTarget(); // (Exec|Native|Public)
	void DestroyAll(struct AActor* aClass); // (Exec|Native|Public)
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // (Exec|Native|Public)
	void DebugCapsuleSweepPawn(); // (Exec|Native|Public)
	void DebugCapsuleSweepComplex(bool bTraceComplex); // (Exec|Native|Public)
	void DebugCapsuleSweepClear(); // (Exec|Native|Public)
	void DebugCapsuleSweepChannel(enum class ECollisionChannel Channel); // (Exec|Native|Public)
	void DebugCapsuleSweepCapture(); // (Exec|Native|Public)
	void DebugCapsuleSweep(); // (Exec|Native|Public)
	void DamageTarget(float DamageAmount); // (Exec|Native|Public|BlueprintCallable)
	void CheatScript(struct FString ScriptName); // (Final|Exec|Native|Public)
	void ChangeSize(float F); // (Exec|Native|Public|BlueprintCallable)
	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString& GoString, struct FString& LocString); // (Exec|Native|Public|HasOutParms|HasDefaults)
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // (Exec|Native|Public)
	void BugIt(struct FString ScreenShotDescription); // (Exec|Native|Public)
};

// Class Engine.DamageType
struct UDamageType : UObject {
	char bCausedByWorld : 1; 
	char bScaleMomentumByMass : 1; 
	char bRadialDamageVelChange : 1; 
	float DamageImpulse; 
	float DestructibleImpulse; 
	float DestructibleDamageSpreadScale; 
	float DamageFalloff; 
};

// Class Engine.Engine
struct UEngine : UObject {
	struct UFont* TinyFont; 
	struct FSoftObjectPath TinyFontName; 
	struct UFont* SmallFont; 
	struct FSoftObjectPath SmallFontName; 
	struct UFont* MediumFont; 
	struct FSoftObjectPath MediumFontName; 
	struct UFont* LargeFont; 
	struct FSoftObjectPath LargeFontName; 
	struct UFont* SubtitleFont; 
	struct FSoftObjectPath SubtitleFontName; 
	struct TArray<struct UFont*> AdditionalFonts; 
	struct TArray<struct FString> AdditionalFontNames; 
	struct UConsole* ConsoleClass; 
	struct FSoftClassPath ConsoleClassName; 
	struct UGameViewportClient* GameViewportClientClass; 
	struct FSoftClassPath GameViewportClientClassName; 
	struct ULocalPlayer* LocalPlayerClass; 
	struct FSoftClassPath LocalPlayerClassName; 
	struct AWorldSettings* WorldSettingsClass; 
	struct FSoftClassPath WorldSettingsClassName; 
	struct FSoftClassPath NavigationSystemClassName; 
	struct UNavigationSystemBase* NavigationSystemClass; 
	struct FSoftClassPath NavigationSystemConfigClassName; 
	struct UNavigationSystemConfig* NavigationSystemConfigClass; 
	struct FSoftClassPath AvoidanceManagerClassName; 
	struct UAvoidanceManager* AvoidanceManagerClass; 
	struct FSoftClassPath AIControllerClassName; 
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; 
	struct FSoftClassPath PhysicsCollisionHandlerClassName; 
	struct FSoftClassPath GameUserSettingsClassName; 
	struct UGameUserSettings* GameUserSettingsClass; 
	struct UGameUserSettings* GameUserSettings; 
	struct ALevelScriptActor* LevelScriptActorClass; 
	struct FSoftClassPath LevelScriptActorClassName; 
	struct FSoftClassPath DefaultBlueprintBaseClassName; 
	struct FSoftClassPath GameSingletonClassName; 
	struct UObject* GameSingleton; 
	struct FSoftClassPath AssetManagerClassName; 
	struct UAssetManager* AssetManager; 
	struct UTexture2D* DefaultTexture; 
	struct FSoftObjectPath DefaultTextureName; 
	struct UTexture* DefaultDiffuseTexture; 
	struct FSoftObjectPath DefaultDiffuseTextureName; 
	struct UTexture2D* DefaultBSPVertexTexture; 
	struct FSoftObjectPath DefaultBSPVertexTextureName; 
	struct UTexture2D* HighFrequencyNoiseTexture; 
	struct FSoftObjectPath HighFrequencyNoiseTextureName; 
	struct UTexture2D* DefaultBokehTexture; 
	struct FSoftObjectPath DefaultBokehTextureName; 
	struct UTexture2D* DefaultBloomKernelTexture; 
	struct FSoftObjectPath DefaultBloomKernelTextureName; 
	struct UMaterial* WireframeMaterial; 
	struct FString WireframeMaterialName; 
	struct UMaterial* DebugMeshMaterial; 
	struct FSoftObjectPath DebugMeshMaterialName; 
	struct UMaterial* EmissiveMeshMaterial; 
	struct FSoftObjectPath EmissiveMeshMaterialName; 
	struct UMaterial* LevelColorationLitMaterial; 
	struct FString LevelColorationLitMaterialName; 
	struct UMaterial* LevelColorationUnlitMaterial; 
	struct FString LevelColorationUnlitMaterialName; 
	struct UMaterial* LightingTexelDensityMaterial; 
	struct FString LightingTexelDensityName; 
	struct UMaterial* ShadedLevelColorationLitMaterial; 
	struct FString ShadedLevelColorationLitMaterialName; 
	struct UMaterial* ShadedLevelColorationUnlitMaterial; 
	struct FString ShadedLevelColorationUnlitMaterialName; 
	struct UMaterial* RemoveSurfaceMaterial; 
	struct FSoftObjectPath RemoveSurfaceMaterialName; 
	struct UMaterial* VertexColorMaterial; 
	struct FString VertexColorMaterialName; 
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly; 
	struct FString VertexColorViewModeMaterialName_ColorOnly; 
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor; 
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; 
	struct UMaterial* VertexColorViewModeMaterial_RedOnly; 
	struct FString VertexColorViewModeMaterialName_RedOnly; 
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly; 
	struct FString VertexColorViewModeMaterialName_GreenOnly; 
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly; 
	struct FString VertexColorViewModeMaterialName_BlueOnly; 
	struct FSoftObjectPath DebugEditorMaterialName; 
	struct UMaterial* ConstraintLimitMaterial; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; 
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; 
	struct UMaterial* InvalidLightmapSettingsMaterial; 
	struct FSoftObjectPath InvalidLightmapSettingsMaterialName; 
	struct UMaterial* PreviewShadowsIndicatorMaterial; 
	struct FSoftObjectPath PreviewShadowsIndicatorMaterialName; 
	struct UMaterial* ArrowMaterial; 
	struct UMaterialInstanceDynamic* ArrowMaterialYellow; 
	struct FSoftObjectPath ArrowMaterialName; 
	struct FLinearColor LightingOnlyBrightness; 
	struct TArray<struct FLinearColor> ShaderComplexityColors; 
	struct TArray<struct FLinearColor> QuadComplexityColors; 
	struct TArray<struct FLinearColor> LightComplexityColors; 
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; 
	struct TArray<struct FLinearColor> LODColorationColors; 
	struct TArray<struct FLinearColor> HLODColorationColors; 
	struct TArray<struct FLinearColor> StreamingAccuracyColors; 
	float MaxPixelShaderAdditiveComplexityCount; 
	float MaxES3PixelShaderAdditiveComplexityCount; 
	float MinLightMapDensity; 
	float IdealLightMapDensity; 
	float MaxLightMapDensity; 
	char bRenderLightMapDensityGrayscale : 1; 
	float RenderLightMapDensityGrayscaleScale; 
	float RenderLightMapDensityColorScale; 
	struct FLinearColor LightMapDensityVertexMappedColor; 
	struct FLinearColor LightMapDensitySelectedColor; 
	struct TArray<struct FStatColorMapping> StatColorMappings; 
	struct UPhysicalMaterial* DefaultPhysMaterial; 
	struct FSoftObjectPath DefaultPhysMaterialName; 
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects; 
	struct TArray<struct FClassRedirect> ActiveClassRedirects; 
	struct TArray<struct FPluginRedirect> ActivePluginRedirects; 
	struct TArray<struct FStructRedirect> ActiveStructRedirects; 
	struct UTexture2D* PreIntegratedSkinBRDFTexture; 
	struct FSoftObjectPath PreIntegratedSkinBRDFTextureName; 
	struct UTexture2D* BlueNoiseTexture; 
	struct FSoftObjectPath BlueNoiseTextureName; 
	struct UTexture2D* MiniFontTexture; 
	struct FSoftObjectPath MiniFontTextureName; 
	struct UTexture* WeightMapPlaceholderTexture; 
	struct FSoftObjectPath WeightMapPlaceholderTextureName; 
	struct UTexture2D* LightMapDensityTexture; 
	struct FSoftObjectPath LightMapDensityTextureName; 
	struct UGameViewportClient* GameViewport; 
	struct TArray<struct FString> DeferredCommands; 
	float NearClipPlane; 
	char bSubtitlesEnabled : 1; 
	char bSubtitlesForcedOff : 1; 
	int32_t MaximumLoopIterationCount; 
	char bCanBlueprintsTickByDefault : 1; 
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; 
	char bAllowMultiThreadedAnimationUpdate : 1; 
	char bEnableEditorPSysRealtimeLOD : 1; 
	char bSmoothFrameRate : 1; 
	char bUseFixedFrameRate : 1; 
	float FixedFrameRate; 
	struct FFloatRange SmoothedFrameRateRange; 
	struct UEngineCustomTimeStep* CustomTimeStep; 
	struct FSoftClassPath CustomTimeStepClassName; 
	struct UTimecodeProvider* TimecodeProvider; 
	struct FSoftClassPath TimecodeProviderClassName; 
	bool bGenerateDefaultTimecode; 
	struct FFrameRate GenerateDefaultTimecodeFrameRate; 
	float GenerateDefaultTimecodeFrameDelay; 
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; 
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; 
	char bShouldGenerateLowQualityLightmaps : 1; 
	struct FColor C_WorldBox; 
	struct FColor C_BrushWire; 
	struct FColor C_AddWire; 
	struct FColor C_SubtractWire; 
	struct FColor C_SemiSolidWire; 
	struct FColor C_NonSolidWire; 
	struct FColor C_WireBackground; 
	struct FColor C_ScaleBoxHi; 
	struct FColor C_VolumeCollision; 
	struct FColor C_BSPCollision; 
	struct FColor C_OrthoBackground; 
	struct FColor C_Volume; 
	struct FColor C_BrushShape; 
	float StreamingDistanceFactor; 
	struct FDirectoryPath GameScreenshotSaveDirectory; 
	enum class ETransitionType TransitionType; 
	struct FString TransitionDescription; 
	struct FString TransitionGameMode; 
	char bAllowMatureLanguage : 1; 
	float CameraRotationThreshold; 
	float CameraTranslationThreshold; 
	float PrimitiveProbablyVisibleTime; 
	float MaxOcclusionPixelsFraction; 
	char bPauseOnLossOfFocus : 1; 
	int32_t MaxParticleResize; 
	int32_t MaxParticleResizeWarn; 
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes; 
	float NetClientTicksPerSecond; 
	float DisplayGamma; 
	float MinDesiredFrameRate; 
	struct FLinearColor DefaultSelectedMaterialColor; 
	struct FLinearColor SelectedMaterialColor; 
	struct FLinearColor SelectionOutlineColor; 
	struct FLinearColor SubduedSelectionOutlineColor; 
	struct FLinearColor SelectedMaterialColorOverride; 
	bool bIsOverridingSelectedColor; 
	char bEnableOnScreenDebugMessages : 1; 
	char bEnableOnScreenDebugMessagesDisplay : 1; 
	char bSuppressMapWarnings : 1; 
	char bDisableAILogging : 1; 
	uint32_t bEnableVisualLogRecordingOnStart; 
	int32_t ScreenSaverInhibitorSemaphore; 
	char bLockReadOnlyLevels : 1; 
	struct FString ParticleEventManagerClassPath; 
	float SelectionHighlightIntensity; 
	float BSPSelectionHighlightIntensity; 
	float SelectionHighlightIntensityBillboards; 
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions; 
	struct TArray<struct FString> ServerActors; 
	struct TArray<struct FString> RuntimeServerActors; 
	float NetErrorLogInterval; 
	char bStartedLoadMapMovie : 1; 
	int32_t NextWorldContextHandle; 
};

// Class Engine.GameEngine
struct UGameEngine : UEngine {
	float MaxDeltaTime; 
	float ServerFlushLogInterval; 
	struct UGameInstance* GameInstance; 
};

// Class Engine.GameUserSettings
struct UGameUserSettings : UObject {
	bool bUseVSync; 
	bool bUseDynamicResolution; 
	uint32_t ResolutionSizeX; 
	uint32_t ResolutionSizeY; 
	uint32_t LastUserConfirmedResolutionSizeX; 
	uint32_t LastUserConfirmedResolutionSizeY; 
	int32_t WindowPosX; 
	int32_t WindowPosY; 
	int32_t FullscreenMode; 
	int32_t LastConfirmedFullscreenMode; 
	int32_t PreferredFullscreenMode; 
	uint32_t Version; 
	int32_t AudioQualityLevel; 
	int32_t LastConfirmedAudioQualityLevel; 
	float FrameRateLimit; 
	int32_t DesiredScreenWidth; 
	bool bUseDesiredScreenHeight; 
	int32_t DesiredScreenHeight; 
	int32_t LastUserConfirmedDesiredScreenWidth; 
	int32_t LastUserConfirmedDesiredScreenHeight; 
	float LastRecommendedScreenWidth; 
	float LastRecommendedScreenHeight; 
	float LastCPUBenchmarkResult; 
	float LastGPUBenchmarkResult; 
	struct TArray<float> LastCPUBenchmarkSteps; 
	struct TArray<float> LastGPUBenchmarkSteps; 
	float LastGPUBenchmarkMultiplier; 
	bool bUseHDRDisplayOutput; 
	int32_t HDRDisplayOutputNits; 
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; 

	void ValidateSettings(); // (Native|Public|BlueprintCallable)
	bool SupportsHDRDisplayOutput(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void SetVSyncEnabled(bool bEnable); // (Final|Native|Public|BlueprintCallable)
	void SetVisualEffectQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetViewDistanceQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetToDefaults(); // (Native|Public|BlueprintCallable)
	void SetTextureQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetShadowQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetShadingQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetScreenResolution(struct FIntPoint Resolution); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetResolutionScaleValueEx(float NewScaleValue); // (Final|Native|Public|BlueprintCallable)
	void SetResolutionScaleValue(int32_t NewScaleValue); // (Final|Native|Public|BlueprintCallable)
	void SetResolutionScaleNormalized(float NewScaleNormalized); // (Final|Native|Public|BlueprintCallable)
	void SetPostProcessingQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetOverallScalabilityLevel(int32_t Value); // (Native|Public|BlueprintCallable)
	void SetFullscreenMode(enum class EWindowMode InFullscreenMode); // (Final|Native|Public|BlueprintCallable)
	void SetFrameRateLimit(float NewLimit); // (Final|Native|Public|BlueprintCallable)
	void SetFoliageQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetDynamicResolutionEnabled(bool bEnable); // (Final|Native|Public|BlueprintCallable)
	void SetBenchmarkFallbackValues(); // (Final|Native|Public|BlueprintCallable)
	void SetAudioQualityLevel(int32_t QualityLevel); // (Final|Native|Public|BlueprintCallable)
	void SetAntiAliasingQuality(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SaveSettings(); // (Native|Public|BlueprintCallable)
	void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier); // (Native|Public|BlueprintCallable)
	void RevertVideoMode(); // (Final|Native|Public|BlueprintCallable)
	void ResetToCurrentSettings(); // (Native|Public|BlueprintCallable)
	void LoadSettings(bool bForceReload); // (Native|Public|BlueprintCallable)
	bool IsVSyncEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsVSyncDirty(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsScreenResolutionDirty(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsHDREnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsFullscreenModeDirty(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsDynamicResolutionEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsDynamicResolutionDirty(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsDirty(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetVisualEffectQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetViewDistanceQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTextureQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetSyncInterval(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetShadowQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetShadingQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FIntPoint GetScreenResolution(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetResolutionScaleNormalized(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetRecommendedResolutionScale(); // (Native|Public|BlueprintCallable)
	enum class EWindowMode GetPreferredFullscreenMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPostProcessingQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetOverallScalabilityLevel(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FIntPoint GetLastConfirmedScreenResolution(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class EWindowMode GetLastConfirmedFullscreenMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UGameUserSettings* GetGameUserSettings(); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EWindowMode GetFullscreenMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFrameRateLimit(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetFramePace(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetFoliageQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FIntPoint GetDesktopResolution(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FIntPoint GetDefaultWindowPosition(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	enum class EWindowMode GetDefaultWindowMode(); // (Final|Native|Static|Public|BlueprintCallable)
	float GetDefaultResolutionScale(); // (Native|Public|BlueprintCallable)
	struct FIntPoint GetDefaultResolution(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	int32_t GetCurrentHDRDisplayNits(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetAudioQualityLevel(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetAntiAliasingQuality(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits); // (Final|Native|Public|BlueprintCallable)
	void ConfirmVideoMode(); // (Native|Public|BlueprintCallable)
	void ApplySettings(bool bCheckForCommandLineOverrides); // (Native|Public|BlueprintCallable)
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides); // (Final|Native|Public|BlueprintCallable)
	void ApplyNonResolutionSettings(); // (Native|Public|BlueprintCallable)
	void ApplyHardwareBenchmarkResults(); // (Native|Public|BlueprintCallable)
};

// Class Engine.ScriptViewportClient
struct UScriptViewportClient : UObject {
};

// Class Engine.GameViewportClient
struct UGameViewportClient : UScriptViewportClient {
	struct UConsole* ViewportConsole; 
	struct TArray<struct FDebugDisplayProperty> DebugProperties; 
	int32_t MaxSplitscreenPlayers; 
	struct UWorld* World; 
	struct UGameInstance* GameInstance; 

	void SSSwapControllers(); // (Exec|Native|Public)
	void ShowTitleSafeArea(); // (Exec|Native|Public)
	void SetConsoleTarget(int32_t PlayerIndex); // (Exec|Native|Public)
};

// Class Engine.HUD
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; 
	char bLostFocusPaused : 1; 
	char bShowHUD : 1; 
	char bShowDebugInfo : 1; 
	int32_t CurrentTargetIndex; 
	char bShowHitBoxDebugInfo : 1; 
	char bShowOverlays : 1; 
	char bEnableDebugTextShadow : 1; 
	struct TArray<struct AActor*> PostRenderedActors; 
	struct TArray<struct FName> DebugDisplay; 
	struct TArray<struct FName> ToggledDebugCategories; 
	struct UCanvas* Canvas; 
	struct UCanvas* DebugCanvas; 
	struct TArray<struct FDebugTextInfo> DebugTextList; 
	struct AActor* ShowDebugTargetDesiredClass; 
	struct AActor* ShowDebugTargetActor; 

	void ShowHUD(); // (Exec|Native|Public)
	void ShowDebugToggleSubCategory(struct FName Category); // (Final|Exec|Native|Public)
	void ShowDebugForReticleTargetToggle(struct AActor* DesiredClass); // (Final|Exec|Native|Public)
	void ShowDebug(struct FName DebugType); // (Exec|Native|Public)
	void RemoveDebugText(struct AActor* SrcActor, bool bLeaveDurationText); // (Final|Net|NetReliableNative|Event|Public|NetClient)
	void RemoveAllDebugStrings(); // (Final|Net|NetReliableNative|Event|Public|NetClient)
	void ReceiveHitBoxRelease(struct FName BoxName); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReceiveHitBoxEndCursorOver(struct FName BoxName); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReceiveHitBoxClick(struct FName BoxName); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FVector Project(struct FVector Location); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void PreviousDebugTarget(); // (Exec|Native|Public)
	void NextDebugTarget(); // (Exec|Native|Public)
	void GetTextSize(struct FString Text, float& OutWidth, float& OutHeight, struct UFont* Font, float Scale); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct APlayerController* GetOwningPlayerController(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APawn* GetOwningPawn(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetActorsInSelectionRectangle(struct AActor* ClassFilter, struct FVector2D& FirstPoint, struct FVector2D& SecondPoint, struct TArray<struct AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void DrawTextureSimple(struct UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition); // (Final|Native|Public|BlueprintCallable)
	void DrawTexture(struct UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor TintColor, enum class EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void DrawText(struct FString Text, struct FLinearColor TextColor, float ScreenX, float ScreenY, struct UFont* Font, float Scale, bool bScalePosition); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void DrawRect(struct FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void DrawMaterialTriangle(struct UMaterialInterface* Material, struct FVector2D V0_Pos, struct FVector2D V1_Pos, struct FVector2D V2_Pos, struct FVector2D V0_UV, struct FVector2D V1_UV, struct FVector2D V2_UV, struct FLinearColor V0_Color, struct FLinearColor V1_Color, struct FLinearColor V2_Color); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void DrawMaterialSimple(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition); // (Final|Native|Public|BlueprintCallable)
	void DrawMaterial(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, struct FLinearColor LineColor, float LineThickness); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void Deproject(float ScreenX, float ScreenY, struct FVector& WorldPosition, struct FVector& WorldDirection); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void AddHitBox(struct FVector2D position, struct FVector2D Size, struct FName InName, bool bConsumesInput, int32_t Priority); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddDebugText(struct FString DebugText, struct AActor* SrcActor, float Duration, struct FVector Offset, struct FVector DesiredOffset, struct FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, struct UFont* InFont, float FontScale, bool bDrawShadow); // (Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient)
};

// Class Engine.World
struct UWorld : UObject {
	struct ULevel* PersistentLevel; 
	struct UNetDriver* NetDriver; 
	struct ULineBatchComponent* LineBatcher; 
	struct ULineBatchComponent* PersistentLineBatcher; 
	struct ULineBatchComponent* ForegroundLineBatcher; 
	struct AGameNetworkManager* NetworkManager; 
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; 
	struct TArray<struct UObject*> ExtraReferencedObjects; 
	struct TArray<struct UObject*> PerModuleDataObjects; 
	struct TArray<struct ULevelStreaming*> StreamingLevels; 
	struct FStreamingLevelsToConsider StreamingLevelsToConsider; 
	struct FString StreamingLevelsPrefix; 
	struct ULevel* CurrentLevelPendingVisibility; 
	struct ULevel* CurrentLevelPendingInvisibility; 
	struct UDemoNetDriver* DemoNetDriver; 
	struct AParticleEventManager* MyParticleEventManager; 
	struct APhysicsVolume* DefaultPhysicsVolume; 
	char bAreConstraintsDirty : 1; 
	struct UNavigationSystemBase* NavigationSystem; 
	struct AGameModeBase* AuthorityGameMode; 
	struct AGameStateBase* GameState; 
	struct UAISystemBase* AISystem; 
	struct UAvoidanceManager* AvoidanceManager; 
	struct TArray<struct ULevel*> Levels; 
	struct TArray<struct FLevelCollection> LevelCollections; 
	struct UGameInstance* OwningGameInstance; 
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances; 
	struct UCanvas* CanvasForRenderingToTarget; 
	struct UCanvas* CanvasForDrawMaterialToRenderTarget; 
	struct UPhysicsFieldComponent* PhysicsField; 
	struct TSet<struct UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; 
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; 
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; 
	struct UWorldComposition* WorldComposition; 
	struct FWorldPSCPool PSCPool; 

	struct AWorldSettings* K2_GetWorldSettings(); // (Final|Native|Public|BlueprintCallable)
	void HandleTimelineScrubbed(); // (Final|Native|Public)
};

// Class Engine.NavigationSystemBase
struct UNavigationSystemBase : UObject {
};

// Class Engine.NavigationSystemConfig
struct UNavigationSystemConfig : UObject {
	struct FSoftClassPath NavigationSystemClass; 
	struct FNavAgentSelector SupportedAgentsMask; 
	struct FName DefaultAgentName; 
	char bIsOverriden : 1; 
};

// Class Engine.PlayerCameraManager
struct APlayerCameraManager : AActor {
	struct APlayerController* PCOwner; 
	struct USceneComponent* TransformComponent; 
	float DefaultFOV; 
	float DefaultOrthoWidth; 
	float DefaultAspectRatio; 
	struct FCameraCacheEntry CameraCache; 
	struct FCameraCacheEntry LastFrameCameraCache; 
	struct FTViewTarget ViewTarget; 
	struct FTViewTarget PendingViewTarget; 
	struct FCameraCacheEntry CameraCachePrivate; 
	struct FCameraCacheEntry LastFrameCameraCachePrivate; 
	struct TArray<struct UCameraModifier*> ModifierList; 
	struct TArray<struct UCameraModifier*> DefaultModifiers; 
	float FreeCamDistance; 
	struct FVector FreeCamOffset; 
	struct FVector ViewTargetOffset; 
	struct FMulticastInlineDelegate OnAudioFadeChangeEvent; 
	struct TArray<struct AEmitterCameraLensEffectBase*> CameraLensEffects; 
	struct UCameraModifier_CameraShake* CachedCameraShakeMod; 
	struct UCameraAnimInst* AnimInstPool[0x8]; 
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache; 
	struct TArray<struct UCameraAnimInst*> ActiveAnims; 
	struct TArray<struct UCameraAnimInst*> FreeAnims; 
	struct ACameraActor* AnimCameraActor; 
	char bIsOrthographic : 1; 
	char bDefaultConstrainAspectRatio : 1; 
	char bClientSimulatingViewTarget : 1; 
	char bUseClientSideCameraUpdates : 1; 
	char bGameCameraCutThisFrame : 1; 
	float ViewPitchMin; 
	float ViewPitchMax; 
	float ViewYawMin; 
	float ViewYawMax; 
	float ViewRollMin; 
	float ViewRollMax; 
	float ServerUpdateCameraTimeout; 

	void SwapPendingViewTargetWhenUsingClientSideCameraUpdates(); // (Final|Native|Protected)
	void StopCameraShake(struct UCameraShakeBase* ShakeInstance, bool bImmediately); // (Native|Public|BlueprintCallable)
	void StopCameraFade(); // (Native|Public|BlueprintCallable)
	void StopCameraAnimInst(struct UCameraAnimInst* AnimInst, bool bImmediate); // (Native|Public|BlueprintCallable)
	void StopAllInstancesOfCameraShakeFromSource(struct UCameraShakeBase* Shake, struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // (Native|Public|BlueprintCallable)
	void StopAllInstancesOfCameraShake(struct UCameraShakeBase* Shake, bool bImmediately); // (Native|Public|BlueprintCallable)
	void StopAllInstancesOfCameraAnim(struct UCameraAnim* Anim, bool bImmediate); // (Native|Public|BlueprintCallable)
	void StopAllCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // (Native|Public|BlueprintCallable)
	void StopAllCameraShakes(bool bImmediately); // (Native|Public|BlueprintCallable)
	void StopAllCameraAnims(bool bImmediate); // (Native|Public|BlueprintCallable)
	struct UCameraShakeBase* StartCameraShakeFromSource(struct UCameraShakeBase* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Native|Public|HasDefaults|BlueprintCallable)
	struct UCameraShakeBase* StartCameraShake(struct UCameraShakeBase* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Native|Public|HasDefaults|BlueprintCallable)
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetGameCameraCutThisFrame(); // (Final|Native|Public|BlueprintCallable)
	bool RemoveCameraModifier(struct UCameraModifier* ModifierToRemove); // (Native|Public|BlueprintCallable)
	void RemoveCameraLensEffect(struct AEmitterCameraLensEffectBase* Emitter); // (Native|Public|BlueprintCallable)
	struct UCameraAnimInst* PlayCameraAnim(struct UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Native|Public|HasDefaults|BlueprintCallable)
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector& ResultCameraLocation); // (BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void OnPhotographySessionStart(); // (BlueprintCosmetic|Native|Event|Public|BlueprintEvent)
	void OnPhotographySessionEnd(); // (BlueprintCosmetic|Native|Event|Public|BlueprintEvent)
	void OnPhotographyMultiPartCaptureStart(); // (BlueprintCosmetic|Native|Event|Public|BlueprintEvent)
	void OnPhotographyMultiPartCaptureEnd(); // (BlueprintCosmetic|Native|Event|Public|BlueprintEvent)
	struct APlayerController* GetOwningPlayerController(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFOVAngle(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetCameraRotation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetCameraLocation(); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UCameraModifier* FindCameraModifierByClass(struct UCameraModifier* ModifierClass); // (Native|Public|BlueprintCallable)
	void ClearCameraLensEffects(); // (Native|Public|BlueprintCallable)
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	struct UCameraModifier* AddNewCameraModifier(struct UCameraModifier* ModifierClass); // (Native|Public|BlueprintCallable)
	struct AEmitterCameraLensEffectBase* AddCameraLensEffect(struct AEmitterCameraLensEffectBase* LensEffectEmitterClass); // (Native|Public|BlueprintCallable)
};

// Class Engine.PlayerInput
struct UPlayerInput : UObject {
	struct TArray<struct FKeyBind> DebugExecBindings; 
	struct TArray<struct FName> InvertedAxis; 

	void SetMouseSensitivity(float Sensitivity); // (Final|Exec|Native|Public)
	void SetBind(struct FName BindName, struct FString Command); // (Final|Exec|Native|Public)
	void InvertAxisKey(struct FKey AxisKey); // (Final|Exec|Native|Public)
	void InvertAxis(struct FName AxisName); // (Final|Exec|Native|Public)
	void ClearSmoothing(); // (Final|Exec|Native|Public)
};

// Class Engine.PlayerState
struct APlayerState : AInfo {
	float Score; 
	int32_t PlayerID; 
	char Ping; 
	char bShouldUpdateReplicatedPing : 1; 
	char bIsSpectator : 1; 
	char bOnlySpectator : 1; 
	char bIsABot : 1; 
	char bIsInactive : 1; 
	char bFromPreviousLevel : 1; 
	int32_t StartTime; 
	struct ULocalMessage* EngineMessageClass; 
	struct FString SavedNetworkAddress; 
	struct FUniqueNetIdRepl UniqueId; 
	struct APawn* PawnPrivate; 
	struct FString PlayerNamePrivate; 

	void ReceiveOverrideWith(struct APlayerState* OldPlayerState); // (Event|Protected|BlueprintEvent)
	void ReceiveCopyProperties(struct APlayerState* NewPlayerState); // (Event|Protected|BlueprintEvent)
	void OnRep_UniqueId(); // (Native|Public)
	void OnRep_Score(); // (Native|Public)
	void OnRep_PlayerName(); // (Native|Public)
	void OnRep_PlayerId(); // (Native|Public)
	void OnRep_bIsInactive(); // (Native|Public)
	bool IsOnlyASpectator(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetPlayerName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.ProjectileMovementComponent
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; 
	float MaxSpeed; 
	char bRotationFollowsVelocity : 1; 
	char bRotationRemainsVertical : 1; 
	char bShouldBounce : 1; 
	char bInitialVelocityInLocalSpace : 1; 
	char bForceSubStepping : 1; 
	char bSimulationEnabled : 1; 
	char bSweepCollision : 1; 
	char bIsHomingProjectile : 1; 
	char bBounceAngleAffectsFriction : 1; 
	char bIsSliding : 1; 
	char bInterpMovement : 1; 
	char bInterpRotation : 1; 
	float PreviousHitTime; 
	struct FVector PreviousHitNormal; 
	float ProjectileGravityScale; 
	float Buoyancy; 
	float Bounciness; 
	float Friction; 
	float BounceVelocityStopSimulatingThreshold; 
	float MinFrictionFraction; 
	struct FMulticastInlineDelegate OnProjectileBounce; 
	struct FMulticastInlineDelegate OnProjectileStop; 
	float HomingAccelerationMagnitude; 
	struct TWeakObjectPtr<struct USceneComponent> HomingTargetComponent; 
	float MaxSimulationTimeStep; 
	int32_t MaxSimulationIterations; 
	int32_t BounceAdditionalIterations; 
	float InterpLocationTime; 
	float InterpRotationTime; 
	float InterpLocationMaxLagDistance; 
	float InterpLocationSnapToTargetDistance; 

	void StopSimulating(struct FHitResult& HitResult); // (Native|Public|HasOutParms|BlueprintCallable)
	void SetVelocityInLocalSpace(struct FVector NewVelocity); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetInterpolatedComponent(struct USceneComponent* Component); // (Native|Public|BlueprintCallable)
	void ResetInterpolation(); // (Native|Public|BlueprintCallable)
	void OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) 
	void MoveInterpolationTarget(struct FVector& NewLocation, struct FRotator& NewRotation); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector LimitVelocity(struct FVector NewVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool IsVelocityUnderSimulationThreshold(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsInterpolationComplete(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.DefaultPawn
struct ADefaultPawn : APawn {
	float BaseTurnRate; 
	float BaseLookUpRate; 
	struct UPawnMovementComponent* MovementComponent; 
	struct USphereComponent* CollisionComponent; 
	struct UStaticMeshComponent* MeshComponent; 
	char bAddDefaultMovementBindings : 1; 

	void TurnAtRate(float Rate); // (Native|Public|BlueprintCallable)
	void MoveUp_World(float Val); // (Native|Public|BlueprintCallable)
	void MoveRight(float Val); // (Native|Public|BlueprintCallable)
	void MoveForward(float Val); // (Native|Public|BlueprintCallable)
	void LookUpAtRate(float Rate); // (Native|Public|BlueprintCallable)
};

// Class Engine.SpectatorPawn
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.WorldSettings
struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; 
	enum class EVisibilityAggressiveness VisibilityAggressiveness; 
	char bPrecomputeVisibility : 1; 
	char bPlaceCellsOnlyAlongCameraTracks : 1; 
	char bEnableWorldBoundsChecks : 1; 
	char bEnableNavigationSystem : 1; 
	char bEnableAISystem : 1; 
	char bEnableWorldComposition : 1; 
	char bUseClientSideLevelStreamingVolumes : 1; 
	char bEnableWorldOriginRebasing : 1; 
	char bWorldGravitySet : 1; 
	char bGlobalGravitySet : 1; 
	char bMinimizeBSPSections : 1; 
	char bForceNoPrecomputedLighting : 1; 
	char bHighPriorityLoading : 1; 
	char bHighPriorityLoadingLocal : 1; 
	char bOverrideDefaultBroadphaseSettings : 1; 
	struct UNavigationSystemConfig* NavigationSystemConfig; 
	struct UNavigationSystemConfig* NavigationSystemConfigOverride; 
	float WorldToMeters; 
	float KillZ; 
	struct UDamageType* KillZDamageType; 
	float WorldGravityZ; 
	float GlobalGravityZ; 
	struct ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; 
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; 
	struct AGameModeBase* DefaultGameMode; 
	struct AGameNetworkManager* GameNetworkManagerClass; 
	int32_t PackedLightAndShadowMapTextureSize; 
	struct FVector DefaultColorScale; 
	float DefaultMaxDistanceFieldOcclusionDistance; 
	float GlobalDistanceFieldViewDistance; 
	float DynamicIndirectShadowsSelfShadowingIntensity; 
	struct FReverbSettings DefaultReverbSettings; 
	struct FInteriorSettings DefaultAmbientZoneSettings; 
	struct USoundMix* DefaultBaseSoundMix; 
	float TimeDilation; 
	float MatineeTimeDilation; 
	float DemoPlayTimeDilation; 
	float MinGlobalTimeDilation; 
	float MaxGlobalTimeDilation; 
	float MinUndilatedFrameTime; 
	float MaxUndilatedFrameTime; 
	struct FBroadphaseSettings BroadphaseSettings; 
	struct APlayerState* Pauser; 
	struct TArray<struct FNetViewer> ReplicationViewers; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
	struct APlayerState* PauserPlayerState; 
	int32_t MaxNumberOfBookmarks; 
	struct UBookmarkBase* DefaultBookmarkClass; 
	struct TArray<struct UBookmarkBase*> BookmarkArray; 
	struct UBookmarkBase* LastBookmarkClass; 

	void OnRep_WorldGravityZ(); // (Native|Public)
};

// Class Engine.LevelBounds
struct ALevelBounds : AActor {
	struct UBoxComponent* BoxComponent; 
	bool bAutoUpdateBounds; 
};

// Class Engine.TriggerBase
struct ATriggerBase : AActor {
	struct UShapeComponent* CollisionComponent; 
};

// Class Engine.TriggerBox
struct ATriggerBox : ATriggerBase {
};

// Class Engine.Brush
struct ABrush : AActor {
	enum class EBrushType BrushType; 
	struct FColor BrushColor; 
	int32_t PolyFlags; 
	char bColored : 1; 
	char bSolidWhenSelected : 1; 
	char bPlaceableFromClassBrowser : 1; 
	char bNotForClientOrServer : 1; 
	struct UModel* Brush; 
	struct UBrushComponent* BrushComponent; 
	char bInManipulation : 1; 
	struct TArray<struct FGeomSelection> SavedSelections; 
};

// Class Engine.Volume
struct AVolume : ABrush {
};

// Class Engine.PhysicsVolume
struct APhysicsVolume : AVolume {
	float TerminalVelocity; 
	int32_t Priority; 
	float FluidFriction; 
	char bWaterVolume : 1; 
	char bPhysicsOnContact : 1; 
};

// Class Engine.SkyLight
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; 
	char bEnabled : 1; 

	void OnRep_bEnabled(); // (Native|Public)
};

// Class Engine.TextureCube
struct UTextureCube : UTexture {
};

// Class Engine.StaticMeshActor
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; 
	bool bStaticMeshReplicateMovement; 
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; 

	void SetMobility(enum class EComponentMobility InMobility); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.MaterialInterface
struct UMaterialInterface : UObject {
	struct USubsurfaceProfile* SubsurfaceProfile; 
	struct FLightmassMaterialInterfaceSettings LightmassSettings; 
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; 
	struct TArray<struct UAssetUserData*> AssetUserData; 

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse); // (RequiredAPI|Native|Public|BlueprintCallable)
	struct UPhysicalMaterialMask* GetPhysicalMaterialMask(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPhysicalMaterial* GetPhysicalMaterial(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FMaterialParameterInfo GetParameterInfo(enum class EMaterialParameterAssociation Association, struct FName ParameterName, struct UMaterialFunctionInterface* LayerFunction); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterial* GetBaseMaterial(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.MaterialInstance
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; 
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; 
	struct UMaterialInterface* Parent; 
	char bHasStaticPermutationResource : 1; 
	char bOverrideSubsurfaceProfile : 1; 
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; 
	struct TArray<struct FVectorParameterValue> VectorParameterValues; 
	struct TArray<struct FTextureParameterValue> TextureParameterValues; 
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; 
	struct TArray<struct FFontParameterValue> FontParameterValues; 
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; 
	struct FStaticParameterSet StaticParameters; 
	struct FMaterialCachedParameters CachedLayerParameters; 
	struct TArray<struct UObject*> CachedReferencedTextures; 
};

// Class Engine.MaterialInstanceConstant
struct UMaterialInstanceConstant : UMaterialInstance {
	struct UPhysicalMaterialMask* PhysMaterialMask; 

	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // (Final|Native|Public|BlueprintCallable)
	float K2_GetScalarParameterValue(struct FName ParameterName); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.MaterialExpressionCustomOutput
struct UMaterialExpressionCustomOutput : UMaterialExpression {
};

// Class Engine.EngineCustomTimeStep
struct UEngineCustomTimeStep : UObject {
};

// Class Engine.DynamicBlueprintBinding
struct UDynamicBlueprintBinding : UObject {
};

// Class Engine.CameraActor
struct ACameraActor : AActor {
	enum class EAutoReceiveInput AutoActivateForPlayer; 
	struct UCameraComponent* CameraComponent; 
	struct USceneComponent* SceneComponent; 
	char bConstrainAspectRatio : 1; 
	float AspectRatio; 
	float FOVAngle; 
	float PostProcessBlendWeight; 
	struct FPostProcessSettings PostProcessSettings; 

	int32_t GetAutoActivatePlayerIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CameraComponent
struct UCameraComponent : USceneComponent {
	float FieldOfView; 
	float OrthoWidth; 
	float OrthoNearClipPlane; 
	float OrthoFarClipPlane; 
	float AspectRatio; 
	char bConstrainAspectRatio : 1; 
	char bUseFieldOfViewForLOD : 1; 
	char bLockToHmd : 1; 
	char bUsePawnControlRotation : 1; 
	enum class ECameraProjectionMode ProjectionMode; 
	float PostProcessBlendWeight; 
	struct FPostProcessSettings PostProcessSettings; 

	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD); // (Final|Native|Public|BlueprintCallable)
	void SetProjectionMode(enum class ECameraProjectionMode InProjectionMode); // (Final|Native|Public|BlueprintCallable)
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight); // (Final|Native|Public|BlueprintCallable)
	void SetOrthoWidth(float InOrthoWidth); // (Final|Native|Public|BlueprintCallable)
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane); // (Final|Native|Public|BlueprintCallable)
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane); // (Final|Native|Public|BlueprintCallable)
	void SetFieldOfView(float InFieldOfView); // (Native|Public|BlueprintCallable)
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio); // (Final|Native|Public|BlueprintCallable)
	void SetAspectRatio(float InAspectRatio); // (Final|Native|Public|BlueprintCallable)
	void RemoveBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject); // (Final|Native|Public|BlueprintCallable)
	void OnCameraMeshHiddenChanged(); // (Final|Native|Protected|BlueprintCallable)
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo& DesiredView); // (Native|Public|HasOutParms|BlueprintCallable)
	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SoundBase
struct USoundBase : UObject {
	struct USoundClass* SoundClassObject; 
	char bDebug : 1; 
	char bOverrideConcurrency : 1; 
	char bEnableBusSends : 1; 
	char bEnableBaseSubmix : 1; 
	char bEnableSubmixSends : 1; 
	char bHasDelayNode : 1; 
	char bHasConcatenatorNode : 1; 
	char bBypassVolumeScaleForPriority : 1; 
	enum class EVirtualizationMode VirtualizationMode; 
	struct TSet<struct USoundConcurrency*> ConcurrencySet; 
	struct FSoundConcurrencySettings ConcurrencyOverrides; 
	float Duration; 
	float MaxDistance; 
	float TotalSamples; 
	float Priority; 
	struct USoundAttenuation* AttenuationSettings; 
	struct USoundSubmixBase* SoundSubmixObject; 
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; 
	struct USoundEffectSourcePresetChain* SourceEffectChain; 
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; 
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
};

// Class Engine.SoundWave
struct USoundWave : USoundBase {
	int32_t CompressionQuality; 
	int32_t StreamingPriority; 
	enum class ESoundwaveSampleRateSettings SampleRateQuality; 
	enum class ESoundGroup SoundGroup; 
	char bLooping : 1; 
	char bStreaming : 1; 
	char bSeekableStreaming : 1; 
	enum class ESoundWaveLoadingBehavior LoadingBehavior; 
	char bMature : 1; 
	char bManualWordWrap : 1; 
	char bSingleLine : 1; 
	char bIsAmbisonics : 1; 
	struct FSoundModulationDefaultRoutingSettings ModulationSettings; 
	struct TArray<float> FrequenciesToAnalyze; 
	struct TArray<struct FSoundWaveSpectralTimeData> CookedSpectralTimeData; 
	struct TArray<struct FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; 
	int32_t InitialChunkSize; 
	struct FString SpokenText; 
	float SubtitlePriority; 
	float Volume; 
	float Pitch; 
	int32_t NumChannels; 
	int32_t SampleRate; 
	struct TArray<struct FSubtitleCue> Subtitles; 
	struct UCurveTable* Curves; 
	struct UCurveTable* InternalCurves; 
};

// Class Engine.SoundWaveProcedural
struct USoundWaveProcedural : USoundWave {
};

// Class Engine.BlueprintCore
struct UBlueprintCore : UObject {
	struct UObject* SkeletonGeneratedClass; 
	struct UObject* GeneratedClass; 
	bool bLegacyNeedToPurgeSkelRefs; 
	struct FGuid BlueprintGuid; 
};

// Class Engine.Blueprint
struct UBlueprint : UBlueprintCore {
	struct UObject* ParentClass; 
	enum class EBlueprintType BlueprintType; 
	char bRecompileOnLoad : 1; 
	char bHasBeenRegenerated : 1; 
	char bIsRegeneratingOnLoad : 1; 
	int32_t BlueprintSystemVersion; 
	struct USimpleConstructionScript* SimpleConstructionScript; 
	struct TArray<struct UActorComponent*> ComponentTemplates; 
	struct TArray<struct UTimelineTemplate*> Timelines; 
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; 
	struct UInheritableComponentHandler* InheritableComponentHandler; 
};

// Class Engine.Model
struct UModel : UObject {
};

// Class Engine.Channel
struct UChannel : UObject {
	struct UNetConnection* Connection; 
};

// Class Engine.ActorChannel
struct UActorChannel : UChannel {
	struct AActor* Actor; 
	struct TArray<struct UObject*> CreateSubObjects; 
};

// Class Engine.AnimationAsset
struct UAnimationAsset : UObject {
	struct USkeleton* Skeleton; 
	struct TArray<struct UAnimMetaData*> MetaData; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
};

// Class Engine.BlendSpaceBase
struct UBlendSpaceBase : UAnimationAsset {
	bool bRotationBlendInMeshSpace; 
	float AnimLength; 
	struct FInterpolationParameter InterpolationParam[0x3]; 
	float TargetWeightInterpolationSpeedPerSec; 
	enum class ENotifyTriggerMode NotifyTriggerMode; 
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend; 
	int32_t SampleIndexWithMarkers; 
	struct TArray<struct FBlendSample> SampleData; 
	struct TArray<struct FEditorElement> GridSamples; 
	struct FBlendParameter BlendParameters[0x3]; 
};

// Class Engine.BlendSpace
struct UBlendSpace : UBlendSpaceBase {
	enum class EBlendSpaceAxis AxisToScaleAnimation; 
};

// Class Engine.AimOffsetBlendSpace
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; 
};

// Class Engine.AimOffsetBlendSpace1D
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.AISystemBase
struct UAISystemBase : UObject {
	struct FSoftClassPath AISystemClassName; 
	struct FName AISystemModuleName; 
	bool bInstantiateAISystemOnClient; 
};

// Class Engine.AmbientSound
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; 

	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void Play(float StartTime); // (Final|Native|Public|BlueprintCallable)
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // (Final|Native|Public|BlueprintCallable)
	void FadeIn(float FadeInDuration, float FadeVolumeLevel); // (Final|Native|Public|BlueprintCallable)
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.AnimationSettings
struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; 
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; 
	bool ForceRecompression; 
	bool bForceBelowThreshold; 
	bool bFirstRecompressUsingCurrentOrDefault; 
	bool bRaiseMaxErrorToExisting; 
	bool bEnablePerformanceLog; 
	bool bStripAnimationDataOnDedicatedServer; 
	bool bTickAnimationOnSkeletalMeshInit; 
	struct TArray<struct FCustomAttributeSetting> BoneCustomAttributesNames; 
	struct TArray<struct FString> BoneNamesWithCustomAttributes; 
	struct TMap<struct FName, enum class ECustomAttributeBlendType> AttributeBlendModes; 
	enum class ECustomAttributeBlendType DefaultAttributeBlendMode; 
};

// Class Engine.AnimBlueprint
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; 
	struct TArray<struct FAnimGroupInfo> Groups; 
	bool bUseMultiThreadedAnimationUpdate; 
	bool bWarnAboutBlueprintUsage; 
};

// Class Engine.AnimBlueprintGeneratedClass
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; 
	struct USkeleton* TargetSkeleton; 
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; 
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; 
	struct TArray<struct FName> SyncGroupNames; 
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; 
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation; 
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; 
	struct FPropertyAccessLibrary PropertyAccessLibrary; 
};

// Class Engine.AnimBoneCompressionCodec
struct UAnimBoneCompressionCodec : UObject {
	struct FString Description; 
};

// Class Engine.AnimBoneCompressionSettings
struct UAnimBoneCompressionSettings : UObject {
	struct TArray<struct UAnimBoneCompressionCodec*> Codecs; 
};

// Class Engine.AnimClassData
struct UAnimClassData : UObject {
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; 
	struct USkeleton* TargetSkeleton; 
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; 
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; 
	struct TArray<struct FAnimBlueprintFunction> AnimBlueprintFunctions; 
	struct TArray<struct FAnimBlueprintFunctionData> AnimBlueprintFunctionData; 
	struct TArray<struct TFieldPath<FStructProperty>> AnimNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> PreUpdateNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> DynamicResetNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> StateMachineNodeProperties; 
	struct TArray<struct TFieldPath<FStructProperty>> InitializationNodeProperties; 
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphNameAssetPlayers; 
	struct TArray<struct FName> SyncGroupNames; 
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; 
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; 
	struct FPropertyAccessLibrary PropertyAccessLibrary; 
};

// Class Engine.AnimClassInterface
struct UAnimClassInterface : UInterface {
};

// Class Engine.AnimSequenceBase
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; 
	float SequenceLength; 
	float RateScale; 
	struct FRawCurveTracks RawCurveData; 

	float GetPlayLength(); // (Native|Public|BlueprintCallable)
};

// Class Engine.AnimCompositeBase
struct UAnimCompositeBase : UAnimSequenceBase {
};

// Class Engine.AnimComposite
struct UAnimComposite : UAnimCompositeBase {
	struct FAnimTrack AnimationTrack; 
};

// Class Engine.AnimCompress
struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; 
	enum class AnimationCompressionFormat TranslationCompressionFormat; 
	enum class AnimationCompressionFormat RotationCompressionFormat; 
	enum class AnimationCompressionFormat ScaleCompressionFormat; 
};

// Class Engine.AnimCompress_BitwiseCompressOnly
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
struct UAnimCompress_LeastDestructive : UAnimCompress_BitwiseCompressOnly {
};

// Class Engine.AnimCompress_RemoveLinearKeys
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; 
	float MaxAngleDiff; 
	float MaxScaleDiff; 
	float MaxEffectorDiff; 
	float MinEffectorDiff; 
	float EffectorDiffSocket; 
	float ParentKeyScale; 
	char bRetarget : 1; 
	char bActuallyFilterLinearKeys : 1; 
};

// Class Engine.AnimCompress_PerTrackCompression
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; 
	float MaxPosDiffBitwise; 
	float MaxAngleDiffBitwise; 
	float MaxScaleDiffBitwise; 
	struct TArray<enum class AnimationCompressionFormat> AllowedRotationFormats; 
	struct TArray<enum class AnimationCompressionFormat> AllowedTranslationFormats; 
	struct TArray<enum class AnimationCompressionFormat> AllowedScaleFormats; 
	char bResampleAnimation : 1; 
	float ResampledFramerate; 
	int32_t MinKeysForResampling; 
	char bUseAdaptiveError : 1; 
	char bUseOverrideForEndEffectors : 1; 
	int32_t TrackHeightBias; 
	float ParentingDivisor; 
	float ParentingDivisorExponent; 
	char bUseAdaptiveError2 : 1; 
	float RotationErrorSourceRatio; 
	float TranslationErrorSourceRatio; 
	float ScaleErrorSourceRatio; 
	float MaxErrorPerTrackRatio; 
	float PerturbationProbeSize; 
};

// Class Engine.AnimCompress_RemoveEverySecondKey
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; 
	char bStartAtSecondKey : 1; 
};

// Class Engine.AnimCompress_RemoveTrivialKeys
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; 
	float MaxAngleDiff; 
	float MaxScaleDiff; 
};

// Class Engine.AnimCurveCompressionCodec
struct UAnimCurveCompressionCodec : UObject {
};

// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
struct UAnimCurveCompressionCodec_CompressedRichCurve : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformIndexable
struct UAnimCurveCompressionCodec_UniformIndexable : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformlySampled
struct UAnimCurveCompressionCodec_UniformlySampled : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionSettings
struct UAnimCurveCompressionSettings : UObject {
	struct UAnimCurveCompressionCodec* Codec; 
};

// Class Engine.AnimLayerInterface
struct UAnimLayerInterface : UInterface {
};

// Class Engine.AnimMontage
struct UAnimMontage : UAnimCompositeBase {
	struct FAlphaBlend BlendIn; 
	float BlendInTime; 
	struct FAlphaBlend BlendOut; 
	float BlendOutTime; 
	float BlendOutTriggerTime; 
	struct FName SyncGroup; 
	int32_t SyncSlotIndex; 
	struct FMarkerSyncData MarkerData; 
	struct TArray<struct FCompositeSection> CompositeSections; 
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks; 
	struct TArray<struct FBranchingPoint> BranchingPoints; 
	bool bEnableRootMotionTranslation; 
	bool bEnableRootMotionRotation; 
	bool bEnableAutoBlendOut; 
	enum class ERootMotionRootLock RootMotionRootLock; 
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers; 
	struct TArray<int32_t> BranchingPointStateNotifyIndices; 
	struct FTimeStretchCurve TimeStretchCurve; 
	struct FName TimeStretchCurveName; 

	float GetDefaultBlendOutTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.AnimNotify_PauseClothingSimulation
struct UAnimNotify_PauseClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_PlayParticleEffect
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; 
	struct FVector LocationOffset; 
	struct FRotator RotationOffset; 
	struct FVector Scale; 
	char Attached : 1; 
	struct FName SocketName; 
};

// Class Engine.AnimNotify_PlaySound
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; 
	float VolumeMultiplier; 
	float PitchMultiplier; 
	char bFollow : 1; 
	struct FName AttachName; 
};

// Class Engine.AnimNotify_ResetClothingSimulation
struct UAnimNotify_ResetClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_ResetDynamics
struct UAnimNotify_ResetDynamics : UAnimNotify {
};

// Class Engine.AnimNotify_ResumeClothingSimulation
struct UAnimNotify_ResumeClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotifyState_DisableRootMotion
struct UAnimNotifyState_DisableRootMotion : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; 
	struct FName SocketName; 
	struct FVector LocationOffset; 
	struct FRotator RotationOffset; 
	bool bDestroyAtEnd; 
};

// Class Engine.AnimNotifyState_Trail
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; 
	struct FName FirstSocketName; 
	struct FName SecondSocketName; 
	enum class ETrailWidthMode WidthScaleMode; 
	struct FName WidthScaleCurve; 
	char bRecycleSpawnedSystems : 1; 

	struct UParticleSystem* OverridePSTemplate(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|BlueprintEvent|Const)
};

// Class Engine.AnimSequence
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; 
	struct TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable; 
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; 
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; 
	enum class EAdditiveAnimationType AdditiveAnimType; 
	enum class EAdditiveBasePoseType RefPoseType; 
	struct UAnimSequence* RefPoseSeq; 
	int32_t RefFrameIndex; 
	struct FName RetargetSource; 
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose; 
	enum class EAnimInterpolationType Interpolation; 
	bool bEnableRootMotion; 
	enum class ERootMotionRootLock RootMotionRootLock; 
	bool bForceRootLock; 
	bool bUseNormalizedRootMotionScale; 
	bool bRootMotionSettingsCopiedFromMontage; 
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; 
	struct TArray<struct FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; 
};

// Class Engine.AnimSet
struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; 
	struct TArray<struct FName> TrackBoneNames; 
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache; 
	struct TArray<char> BoneUseAnimTranslation; 
	struct TArray<char> ForceUseMeshTranslation; 
	struct TArray<struct FName> UseTranslationBoneNames; 
	struct TArray<struct FName> ForceMeshTranslationBoneNames; 
	struct FName PreviewSkelMeshName; 
	struct FName BestRatioSkelMeshName; 
};

// Class Engine.AnimSingleNodeInstance
struct UAnimSingleNodeInstance : UAnimInstance {
	struct UAnimationAsset* CurrentAsset; 
	struct FDelegate PostEvaluateAnimEvent; 

	void StopAnim(); // (Final|Native|Public|BlueprintCallable)
	void SetReverse(bool bInReverse); // (Final|Native|Public|BlueprintCallable)
	void SetPreviewCurveOverride(struct FName& PoseName, float Value, bool bRemoveIfZero); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies); // (Final|Native|Public|BlueprintCallable)
	void SetPosition(float InPosition, bool bFireNotifies); // (Final|Native|Public|BlueprintCallable)
	void SetPlayRate(float InPlayRate); // (Final|Native|Public|BlueprintCallable)
	void SetPlaying(bool bIsPlaying); // (Final|Native|Public|BlueprintCallable)
	void SetLooping(bool bIsLooping); // (Final|Native|Public|BlueprintCallable)
	void SetBlendSpaceInput(struct FVector& InBlendInput); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetAnimationAsset(struct UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate); // (Native|Public|BlueprintCallable)
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition); // (Final|Native|Public|BlueprintCallable)
	float GetLength(); // (Final|Native|Public|BlueprintCallable)
	struct UAnimationAsset* GetAnimationAsset(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.AnimStateMachineTypes
struct UAnimStateMachineTypes : UObject {
};

// Class Engine.AnimStreamable
struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; 
	enum class EAnimInterpolationType Interpolation; 
	struct FName RetargetSource; 
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; 
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; 
	bool bEnableRootMotion; 
	enum class ERootMotionRootLock RootMotionRootLock; 
	bool bForceRootLock; 
	bool bUseNormalizedRootMotionScale; 
};

// Class Engine.ApplicationLifecycleComponent
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; 
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; 
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; 
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; 
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; 
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; 
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; 
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; 
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; 
};

// Class Engine.ArrowComponent
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; 
	float ArrowSize; 
	float ArrowLength; 
	float ScreenSize; 
	char bIsScreenSizeScaled : 1; 
	char bTreatAsASprite : 1; 

	void SetArrowColor(struct FLinearColor NewColor); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.AssetExportTask
struct UAssetExportTask : UObject {
	struct UObject* Object; 
	struct UExporter* Exporter; 
	struct FString Filename; 
	bool bSelected; 
	bool bReplaceIdentical; 
	bool bPrompt; 
	bool bAutomated; 
	bool bUseFileArchive; 
	bool bWriteEmptyFiles; 
	struct TArray<struct UObject*> IgnoreObjectList; 
	struct UObject* Options; 
	struct TArray<struct FString> Errors; 
};

// Class Engine.AssetManager
struct UAssetManager : UObject {
	struct TArray<struct UObject*> ObjectReferenceList; 
	bool bIsGlobalAsyncScanEnvironment; 
	bool bShouldGuessTypeAndName; 
	bool bShouldUseSynchronousLoad; 
	bool bIsLoadingFromPakFiles; 
	bool bShouldAcquireMissingChunksOnLoad; 
	bool bOnlyCookProductionAssets; 
	bool bIsBulkScanning; 
	bool bIsPrimaryAssetDirectoryCurrent; 
	bool bIsManagementDatabaseCurrent; 
	bool bUpdateManagementDatabaseAfterScan; 
	bool bIncludeOnlyOnDiskAssets; 
	bool bHasCompletedInitialScan; 
	int32_t NumberOfSpawnedNotifications; 
};

// Class Engine.AssetManagerSettings
struct UAssetManagerSettings : UDeveloperSettings {
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; 
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; 
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; 
	struct TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; 
	bool bOnlyCookProductionAssets; 
	bool bShouldManagerDetermineTypeAndName; 
	bool bShouldGuessTypeAndNameInEditor; 
	bool bShouldAcquireMissingChunksOnLoad; 
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; 
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; 
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects; 
	struct TSet<struct FName> MetaDataTagsForAssetRegistry; 
};

// Class Engine.AssetMappingTable
struct UAssetMappingTable : UObject {
	struct TArray<struct FAssetMapping> MappedAssets; 
};

// Class Engine.AsyncActionHandleSaveGame
struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; 
	struct USaveGame* SaveGameObject; 

	struct UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(struct UObject* WorldContextObject, struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(struct UObject* WorldContextObject, struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.AsyncActionLoadPrimaryAssetBase
struct UAsyncActionLoadPrimaryAssetBase : UBlueprintAsyncActionBase {
};

// Class Engine.AsyncActionLoadPrimaryAsset
struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; 

	struct UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName>& LoadBundles); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; 

	struct UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName>& LoadBundles); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.AsyncActionLoadPrimaryAssetList
struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; 

	struct UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; 

	struct UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; 

	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& AddBundles, struct TArray<struct FName>& RemoveBundles); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(struct UObject* WorldContextObject, struct TArray<struct FName>& NewBundles, struct TArray<struct FName>& OldBundles); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.AtmosphericFog
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; 
};

// Class Engine.AtmosphericFogComponent
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; 
	float FogMultiplier; 
	float DensityMultiplier; 
	float DensityOffset; 
	float DistanceScale; 
	float AltitudeScale; 
	float DistanceOffset; 
	float GroundOffset; 
	float StartDistance; 
	float SunDiscScale; 
	float DefaultBrightness; 
	struct FColor DefaultLightColor; 
	char bDisableSunDisk : 1; 
	char bAtmosphereAffectsSunIlluminance : 1; 
	char bDisableGroundScattering : 1; 
	struct FAtmospherePrecomputeParameters PrecomputeParams; 
	struct UTexture2D* TransmittanceTexture; 
	struct UTexture2D* IrradianceTexture; 

	void StartPrecompute(); // (Final|Native|Public|BlueprintCallable)
	void SetSunMultiplier(float NewSunMultiplier); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetStartDistance(float NewStartDistance); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetFogMultiplier(float NewFogMultiplier); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetDistanceScale(float NewDistanceScale); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetDistanceOffset(float NewDistanceOffset); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetDensityOffset(float NewDensityOffset); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetDensityMultiplier(float NewDensityMultiplier); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetDefaultLightColor(struct FLinearColor NewLightColor); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultBrightness(float NewBrightness); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetAltitudeScale(float NewAltitudeScale); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void DisableSunDisk(bool NewSunDisk); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void DisableGroundScattering(bool NewGroundScattering); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.AudioBus
struct UAudioBus : UObject {
	enum class EAudioBusChannels AudioBusChannels; 
};

// Class Engine.AudioSettings
struct UAudioSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultSoundClassName; 
	struct FSoftObjectPath DefaultMediaSoundClassName; 
	struct FSoftObjectPath DefaultSoundConcurrencyName; 
	struct FSoftObjectPath DefaultBaseSoundMix; 
	struct FSoftObjectPath VoiPSoundClass; 
	struct FSoftObjectPath MasterSubmix; 
	struct FSoftObjectPath BaseDefaultSubmix; 
	struct FSoftObjectPath ReverbSubmix; 
	struct FSoftObjectPath EQSubmix; 
	enum class EVoiceSampleRate VoiPSampleRate; 
	float DefaultReverbSendLevel; 
	int32_t MaximumConcurrentStreams; 
	float GlobalMinPitchScale; 
	float GlobalMaxPitchScale; 
	struct TArray<struct FAudioQualitySettings> QualityLevels; 
	char bAllowPlayWhenSilent : 1; 
	char bDisableMasterEQ : 1; 
	char bAllowCenterChannel3DPanning : 1; 
	uint32_t NumStoppingSources; 
	enum class EPanningMethod PanningMethod; 
	enum class EMonoChannelUpmixMethod MonoChannelUpmixMethod; 
	struct FString DialogueFilenameFormat; 
	struct TArray<struct FSoundDebugEntry> DebugSounds; 
	struct TArray<struct FDefaultAudioBusSettings> DefaultAudioBuses; 
	struct USoundClass* DefaultSoundClass; 
	struct USoundClass* DefaultMediaSoundClass; 
	struct USoundConcurrency* DefaultSoundConcurrency; 
};

// Class Engine.AudioVolume
struct AAudioVolume : AVolume {
	float Priority; 
	char bEnabled : 1; 
	struct FReverbSettings Settings; 
	struct FInteriorSettings AmbientZoneSettings; 
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings; 
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; 

	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSubmixOverrideSettings(struct TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetReverbSettings(struct FReverbSettings& NewReverbSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetPriority(float NewPriority); // (Final|Native|Public|BlueprintCallable)
	void SetInteriorSettings(struct FInteriorSettings& NewInteriorSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEnabled(bool bNewEnabled); // (Final|Native|Public|BlueprintCallable)
	void OnRep_bEnabled(); // (Final|Native|Private)
};

// Class Engine.AutoDestroySubsystem
struct UAutoDestroySubsystem : UTickableWorldSubsystem {
	struct TArray<struct AActor*> ActorsToPoll; 

	void OnActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Final|Native|Private)
};

// Class Engine.AutomationTestSettings
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; 
	struct TArray<struct FString> EditorTestModules; 
	struct FSoftObjectPath AutomationTestmap; 
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; 
	struct TArray<struct FSoftObjectPath> AssetsToOpen; 
	struct TArray<struct FString> MapsToPIETest; 
	struct FBuildPromotionTestSettings BuildPromotionTest; 
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; 
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; 
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; 
	struct TArray<struct FString> TestLevelFolders; 
	struct TArray<struct FExternalToolDefinition> ExternalTools; 
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; 
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; 
	struct FIntPoint DefaultScreenshotResolution; 
	float PIETestDuration; 
};

// Class Engine.AvoidanceManager
struct UAvoidanceManager : UObject {
	float DefaultTimeToLive; 
	float LockTimeAfterAvoid; 
	float LockTimeAfterClean; 
	float DeltaTimeToPredict; 
	float ArtificialRadiusExpansion; 
	float TestHeightDifference; 
	float HeightCheckMargin; 

	bool RegisterMovementComponent(struct UMovementComponent* MovementComp, float AvoidanceWeight); // (Final|Native|Public|BlueprintCallable)
	int32_t GetObjectCount(); // (Final|Native|Public|BlueprintCallable)
	int32_t GetNewAvoidanceUID(); // (Final|Native|Public|BlueprintCallable)
	struct FVector GetAvoidanceVelocityForComponent(struct UMovementComponent* MovementComp); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.BandwidthTestActor
struct ABandwidthTestActor : AActor {
	struct FBandwidthTestGenerator BandwidthGenerator; 
};

// Class Engine.BillboardComponent
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; 
	char bIsScreenSizeScaled : 1; 
	float ScreenSize; 
	float U; 
	float UL; 
	float V; 
	float VL; 

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // (Native|Public|BlueprintCallable)
	void SetSpriteAndUV(struct UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // (Native|Public|BlueprintCallable)
	void SetSprite(struct UTexture2D* NewSprite); // (Native|Public|BlueprintCallable)
};

// Class Engine.BlendableInterface
struct UBlendableInterface : UInterface {
};

// Class Engine.Skeleton
struct USkeleton : UObject {
	struct TArray<struct FBoneNode> BoneTree; 
	struct TArray<struct FTransform> RefLocalPoses; 
	struct FGuid VirtualBoneGuid; 
	struct TArray<struct FVirtualBone> VirtualBones; 
	struct TArray<struct USkeletalMeshSocket*> Sockets; 
	struct FSmartNameContainer SmartNames; 
	struct TArray<struct UBlendProfile*> BlendProfiles; 
	struct TArray<struct FAnimSlotGroup> SlotGroups; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
};

// Class Engine.BlendProfile
struct UBlendProfile : UObject {
	struct USkeleton* OwningSkeleton; 
	struct TArray<struct FBlendProfileBoneEntry> ProfileEntries; 
};

// Class Engine.BlockingVolume
struct ABlockingVolume : AVolume {
};

// Class Engine.BlueprintExtension
struct UBlueprintExtension : UObject {
};

// Class Engine.BlueprintMapLibrary
struct UBlueprintMapLibrary : UBlueprintFunctionLibrary {

	void SetMapPropertyByName(struct UObject* Object, struct FName PropertyName, struct TMap<int32_t, int32_t>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Map_Values(struct TMap<int32_t, int32_t>& TargetMap, struct TArray<int32_t>& Values); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Map_Remove(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t Map_Length(struct TMap<int32_t, int32_t>& TargetMap); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Map_Keys(struct TMap<int32_t, int32_t>& TargetMap, struct TArray<int32_t>& Keys); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Map_Find(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key, int32_t& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Map_Contains(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Map_Clear(struct TMap<int32_t, int32_t>& TargetMap); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Map_Add(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key, int32_t& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.BlueprintPathsLibrary
struct UBlueprintPathsLibrary : UBlueprintFunctionLibrary {

	struct FString VideoCaptureDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ValidatePath(struct FString InPath, bool& bDidSucceed, struct FText& OutReason); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Split(struct FString InPath, struct FString& PathPart, struct FString& FilenamePart, struct FString& ExtensionPart); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString SourceConfigDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool ShouldSaveToUserDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ShaderWorkingDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void SetProjectFilePath(struct FString NewGameProjectFilePath); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString SetExtension(struct FString InPath, struct FString InNewExtension); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ScreenShotDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString SandboxesDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString RootDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void RemoveDuplicateSlashes(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString ProjectUserDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectSavedDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectPluginsDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectPersistentDownloadDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectModsDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectLogDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectIntermediateDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectContentDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProjectConfigDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ProfilingDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void NormalizeFilename(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void NormalizeDirectoryName(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString MakeValidFileName(struct FString inString, struct FString InReplacementChar); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void MakeStandardFilename(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void MakePlatformFilename(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool MakePathRelativeTo(struct FString InPath, struct FString InRelativeTo, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString LaunchDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsSamePath(struct FString PathA, struct FString PathB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsRestrictedPath(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsRelative(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsProjectFilePathSet(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDrive(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool HasProjectPersistentDownloadDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetToolTipLocalizationPaths(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetRestrictedFolderNames(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetRelativePathToRoot(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetPropertyNameLocalizationPaths(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetProjectFilePath(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetPath(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetInvalidFileSystemChars(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetGameLocalizationPaths(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetExtension(struct FString InPath, bool bIncludeDot); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetEngineLocalizationPaths(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetEditorLocalizationPaths(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCleanFilename(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetBaseFilename(struct FString InPath, bool bRemovePath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GeneratedConfigDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GameUserDeveloperDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GameSourceDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GameDevelopersDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GameAgnosticSavedDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool FileExists(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString FeaturePackDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EnterprisePluginsDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EnterpriseFeaturePackDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EnterpriseDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineVersionAgnosticUserDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineUserDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineSourceDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineSavedDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EnginePluginsDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineIntermediateDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineContentDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EngineConfigDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool DirectoryExists(struct FString InPath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString DiffDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString CreateTempFilename(struct FString Path, struct FString Prefix, struct FString Extension); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ConvertToSandboxPath(struct FString InPath, struct FString InSandboxName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ConvertRelativePathToFull(struct FString InPath, struct FString InBasePath); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ConvertFromSandboxPath(struct FString InPath, struct FString InSandboxName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Combine(struct TArray<struct FString>& InPaths); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool CollapseRelativeDirectories(struct FString InPath, struct FString& OutPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString CloudDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ChangeExtension(struct FString InPath, struct FString InNewExtension); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BugItDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString AutomationTransientDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString AutomationLogDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString AutomationDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.PlatformGameInstance
struct UPlatformGameInstance : UGameInstance {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; 
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; 
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; 
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; 
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; 
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; 
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; 
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; 
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; 
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; 
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; 
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; 
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; 
};

// Class Engine.BlueprintPlatformLibrary
struct UBlueprintPlatformLibrary : UBlueprintFunctionLibrary {

	int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, struct FText& Title, struct FText& Body, struct FText& Action, struct FString ActivationEvent); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, struct FString ActivationEvent); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t ScheduleLocalNotificationBadgeAtTime(struct FDateTime& FireDateTime, bool LocalTime, struct FString ActivationEvent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t ScheduleLocalNotificationAtTime(struct FDateTime& FireDateTime, bool LocalTime, struct FText& Title, struct FText& Body, struct FText& Action, struct FString ActivationEvent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void GetLaunchNotification(bool& NotificationLaunchedApp, struct FString& ActivationEvent, int32_t& FireDate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EScreenOrientation GetDeviceOrientation(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ClearAllLocalNotifications(); // (Final|Native|Static|Public|BlueprintCallable)
	void CancelLocalNotificationById(int32_t NotificationID); // (Final|Native|Static|Public|BlueprintCallable)
	void CancelLocalNotification(struct FString ActivationEvent); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.BlueprintSetLibrary
struct UBlueprintSetLibrary : UBlueprintFunctionLibrary {

	void SetSetPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSet<int32_t>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_Union(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_ToArray(struct TSet<int32_t>& A, struct TArray<int32_t>& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_RemoveItems(struct TSet<int32_t>& TargetSet, struct TArray<int32_t>& Items); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Set_Remove(struct TSet<int32_t>& TargetSet, int32_t& Item); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t Set_Length(struct TSet<int32_t>& TargetSet); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Set_Intersection(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_Difference(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Set_Contains(struct TSet<int32_t>& TargetSet, int32_t& ItemToFind); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Set_Clear(struct TSet<int32_t>& TargetSet); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_AddItems(struct TSet<int32_t>& TargetSet, struct TArray<int32_t>& NewItems); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Set_Add(struct TSet<int32_t>& TargetSet, int32_t& NewItem); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.BodySetup
struct UBodySetup : UBodySetupCore {
	struct FKAggregateGeom AggGeom; 
	char bAlwaysFullAnimWeight : 1; 
	char bConsiderForBounds : 1; 
	char bMeshCollideAll : 1; 
	char bDoubleSidedGeometry : 1; 
	char bGenerateNonMirroredCollision : 1; 
	char bSharedCookedData : 1; 
	char bGenerateMirroredCollision : 1; 
	char bSupportUVsAndFaceRemap : 1; 
	struct UPhysicalMaterial* PhysMaterial; 
	struct FWalkableSlopeOverride WalkableSlopeOverride; 
	struct FBodyInstance DefaultInstance; 
	struct FVector BuildScale3D; 
};

// Class Engine.BoneMaskFilter
struct UBoneMaskFilter : UObject {
	struct TArray<struct FInputBlendPose> BlendPoses; 
};

// Class Engine.BookmarkBase
struct UBookmarkBase : UObject {
};

// Class Engine.Bookmark
struct UBookmark : UBookmarkBase {
	struct FVector Location; 
	struct FRotator Rotation; 
	struct TArray<struct FString> HiddenLevels; 
};

// Class Engine.BookMark2D
struct UBookMark2D : UBookmarkBase {
	float Zoom2D; 
	struct FIntPoint Location; 
};

// Class Engine.BoundsCopyComponent
struct UBoundsCopyComponent : UActorComponent {
	struct TSoftObjectPtr<AActor> BoundsSourceActor; 
	bool bUseCollidingComponentsForSourceBounds; 
	bool bKeepOwnBoundsScale; 
	bool bUseCollidingComponentsForOwnBounds; 
	struct FTransform PostTransform; 
	bool bCopyXBounds; 
	bool bCopyYBounds; 
	bool bCopyZBounds; 
};

// Class Engine.ReflectionCapture
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; 
};

// Class Engine.BoxReflectionCapture
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.ReflectionCaptureComponent
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* CaptureOffsetComponent; 
	enum class EReflectionSourceType ReflectionSourceType; 
	enum class EMobileReflectionCompression MobileReflectionCompression; 
	struct UTextureCube* Cubemap; 
	float SourceCubemapAngle; 
	float Brightness; 
	bool bModifyMaxValueRGBM; 
	float MaxValueRGBM; 
	struct FVector CaptureOffset; 
	struct FGuid MapBuildDataId; 
	struct UTextureCube* CachedEncodedHDRCubemap; 
};

// Class Engine.BoxReflectionCaptureComponent
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; 
	struct UBoxComponent* PreviewInfluenceBox; 
	struct UBoxComponent* PreviewCaptureBox; 
};

// Class Engine.Breakpoint
struct UBreakpoint : UObject {
	char bEnabled : 1; 
	struct UEdGraphNode* Node; 
	char bStepOnce : 1; 
	char bStepOnce_WasPreviouslyDisabled : 1; 
	char bStepOnce_RemoveAfterHit : 1; 
};

// Class Engine.BrushBuilder
struct UBrushBuilder : UObject {
	struct FString BitmapFilename; 
	struct FString Tooltip; 
	char NotifyBadParams : 1; 
	struct TArray<struct FVector> Vertices; 
	struct TArray<struct FBuilderPoly> Polys; 
	struct FName Layer; 
	char MergeCoplanars : 1; 
};

// Class Engine.BrushComponent
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; 
	struct UBodySetup* BrushBodySetup; 
};

// Class Engine.BrushShape
struct ABrushShape : ABrush {
};

// Class Engine.ButtonStyleAsset
struct UButtonStyleAsset : UObject {
	struct FButtonStyle ButtonStyle; 
};

// Class Engine.CameraAnim
struct UCameraAnim : UObject {
	struct UInterpGroup* CameraInterpGroup; 
	float AnimLength; 
	struct FBox BoundingBox; 
	char bRelativeToInitialTransform : 1; 
	char bRelativeToInitialFOV : 1; 
	float BaseFOV; 
	struct FPostProcessSettings BasePostProcessSettings; 
	float BasePostProcessBlendWeight; 
};

// Class Engine.CameraAnimInst
struct UCameraAnimInst : UObject {
	struct UCameraAnim* CamAnim; 
	struct UInterpGroupInst* InterpGroupInst; 
	float PlayRate; 
	struct UInterpTrackMove* MoveTrack; 
	struct UInterpTrackInstMove* MoveInst; 
	enum class ECameraShakePlaySpace PlaySpace; 

	void Stop(bool bImmediate); // (Final|Native|Public|BlueprintCallable)
	void SetScale(float NewDuration); // (Final|Native|Public|BlueprintCallable)
	void SetDuration(float NewDuration); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.CameraBlockingVolume
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CameraModifier
struct UCameraModifier : UObject {
	char bDebug : 1; 
	char bExclusive : 1; 
	char Priority; 
	struct APlayerCameraManager* CameraOwner; 
	float AlphaInTime; 
	float AlphaOutTime; 
	float Alpha; 

	bool IsDisabled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetViewTarget(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EnableModifier(); // (Native|Public|BlueprintCallable)
	void DisableModifier(bool bImmediate); // (Native|Public|BlueprintCallable)
	void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, struct FPostProcessSettings& PostProcessSettings); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
};

// Class Engine.CameraModifier_CameraShake
struct UCameraModifier_CameraShake : UCameraModifier {
	struct TArray<struct FActiveCameraShakeInfo> ActiveShakes; 
	struct TMap<struct UCameraShakeBase*, struct FPooledCameraShakes> ExpiredPooledShakesMap; 
	float SplitScreenShakeScale; 
};

// Class Engine.CameraShakeSourceActor
struct ACameraShakeSourceActor : AActor {
	struct UCameraShakeSourceComponent* CameraShakeSourceComponent; 
};

// Class Engine.CameraShakeSourceComponent
struct UCameraShakeSourceComponent : USceneComponent {
	enum class ECameraShakeAttenuation Attenuation; 
	float InnerAttenuationRadius; 
	float OuterAttenuationRadius; 
	struct UCameraShakeBase* CameraShake; 
	bool bAutoStart; 

	void StopAllCameraShakesOfType(struct UCameraShakeBase* InCameraShake, bool bImmediately); // (Final|Native|Public|BlueprintCallable)
	void StopAllCameraShakes(bool bImmediately); // (Final|Native|Public|BlueprintCallable)
	void StartCameraShake(struct UCameraShakeBase* InCameraShake, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void Start(); // (Final|Native|Public|BlueprintCallable)
	float GetAttenuationFactor(struct FVector& Location); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.Canvas
struct UCanvas : UObject {
	float OrgX; 
	float OrgY; 
	float ClipX; 
	float ClipY; 
	struct FColor DrawColor; 
	char bCenterX : 1; 
	char bCenterY : 1; 
	char bNoSmooth : 1; 
	int32_t SizeX; 
	int32_t SizeY; 
	struct FPlane ColorModulate; 
	struct UTexture2D* DefaultTexture; 
	struct UTexture2D* GradientTexture0; 
	struct UReporterGraph* ReporterGraph; 

	struct FVector2D K2_TextSize(struct UFont* RenderFont, struct FString RenderText, struct FVector2D Scale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector2D K2_StrLen(struct UFont* RenderFont, struct FString RenderText); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector K2_Project(struct FVector WorldLocation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawTriangle(struct UTexture* RenderTexture, struct TArray<struct FCanvasUVTri> Triangles); // (Final|Native|Public|BlueprintCallable)
	void K2_DrawTexture(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, enum class EBlendMode BlendMode, float Rotation, struct FVector2D PivotPoint); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawText(struct UFont* RenderFont, struct FString RenderText, struct FVector2D ScreenPosition, struct FVector2D Scale, struct FLinearColor RenderColor, float Kerning, struct FLinearColor ShadowColor, struct FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, struct FLinearColor OutlineColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawPolygon(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D Radius, int32_t NumberOfSides, struct FLinearColor RenderColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawMaterialTriangle(struct UMaterialInterface* RenderMaterial, struct TArray<struct FCanvasUVTri> Triangles); // (Final|Native|Public|BlueprintCallable)
	void K2_DrawMaterial(struct UMaterialInterface* RenderMaterial, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, float Rotation, struct FVector2D PivotPoint); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawLine(struct FVector2D ScreenPositionA, struct FVector2D ScreenPositionB, float Thickness, struct FLinearColor RenderColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawBox(struct FVector2D ScreenPosition, struct FVector2D ScreenSize, float Thickness, struct FLinearColor RenderColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_DrawBorder(struct UTexture* BorderTexture, struct UTexture* BackgroundTexture, struct UTexture* LeftBorderTexture, struct UTexture* RightBorderTexture, struct UTexture* TopBorderTexture, struct UTexture* BottomBorderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, struct FVector2D BorderScale, struct FVector2D BackgroundScale, float Rotation, struct FVector2D PivotPoint, struct FVector2D CornerSize); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_Deproject(struct FVector2D ScreenPosition, struct FVector& WorldOrigin, struct FVector& WorldDirection); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.TextureRenderTarget
struct UTextureRenderTarget : UTexture {
	float TargetGamma; 
};

// Class Engine.TextureRenderTarget2D
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; 
	int32_t SizeY; 
	struct FLinearColor ClearColor; 
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
	char bForceLinearGamma : 1; 
	char bHDR : 1; 
	char bGPUSharedFlag : 1; 
	enum class ETextureRenderTargetFormat RenderTargetFormat; 
	char bAutoGenerateMips : 1; 
	enum class TextureFilter MipsSamplerFilter; 
	enum class TextureAddress MipsAddressU; 
	enum class TextureAddress MipsAddressV; 
	enum class EPixelFormat OverrideFormat; 
};

// Class Engine.CanvasRenderTarget2D
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; 
	struct TWeakObjectPtr<struct UWorld> World; 
	bool bShouldClearRenderTargetOnReceiveUpdate; 

	void UpdateResource(); // (Native|Public|BlueprintCallable)
	void ReceiveUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // (Event|Public|BlueprintEvent)
	void GetSize(int32_t& Width, int32_t& Height); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(struct UObject* WorldContextObject, struct UCanvasRenderTarget2D* CanvasRenderTarget2DClass, int32_t Width, int32_t Height); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.CapsuleComponent
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; 
	float CapsuleRadius; 

	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps); // (Final|Native|Public|BlueprintCallable)
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps); // (Final|Native|Public|BlueprintCallable)
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps); // (Final|Native|Public|BlueprintCallable)
	void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetUnscaledCapsuleRadius(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetUnscaledCapsuleHalfHeight(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetShapeScale(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetScaledCapsuleRadius(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetScaledCapsuleHalfHeight_WithoutHemisphere(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetScaledCapsuleHalfHeight(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CheatManagerExtension
struct UCheatManagerExtension : UObject {
};

// Class Engine.CheckBoxStyleAsset
struct UCheckBoxStyleAsset : UObject {
	struct FCheckBoxStyle CheckBoxStyle; 
};

// Class Engine.ChildActorComponent
struct UChildActorComponent : USceneComponent {
	struct AActor* ChildActorClass; 
	struct AActor* ChildActor; 
	struct AActor* ChildActorTemplate; 

	void SetChildActorClass(struct AActor* InClass); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.ChildConnection
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; 
};

// Class Engine.PlatformInterfaceBase
struct UPlatformInterfaceBase : UObject {
	struct TArray<struct FDelegateArray> AllDelegates; 
};

// Class Engine.CloudStorageBase
struct UCloudStorageBase : UPlatformInterfaceBase {
	struct TArray<struct FString> LocalCloudFiles; 
	char bSuppressDelegateCalls : 1; 
};

// Class Engine.CollisionProfile
struct UCollisionProfile : UDeveloperSettings {
	struct TArray<struct FCollisionResponseTemplate> Profiles; 
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses; 
	struct TArray<struct FCustomProfile> EditProfiles; 
	struct TArray<struct FRedirector> ProfileRedirects; 
	struct TArray<struct FRedirector> CollisionChannelRedirects; 
};

// Class Engine.ComponentDelegateBinding
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings; 
};

// Class Engine.ActorComponentInstanceDataTransientOuter
struct UActorComponentInstanceDataTransientOuter : UObject {
};

// Class Engine.CurveTable
struct UCurveTable : UObject {
};

// Class Engine.CompositeCurveTable
struct UCompositeCurveTable : UCurveTable {
	struct TArray<struct UCurveTable*> ParentTables; 
	struct TArray<struct UCurveTable*> OldParentTables; 
};

// Class Engine.CompositeDataTable
struct UCompositeDataTable : UDataTable {
	struct TArray<struct UDataTable*> ParentTables; 
	struct TArray<struct UDataTable*> OldParentTables; 
};

// Class Engine.Console
struct UConsole : UObject {
	struct ULocalPlayer* ConsoleTargetPlayer; 
	struct UTexture2D* DefaultTexture_Black; 
	struct UTexture2D* DefaultTexture_White; 
	struct TArray<struct FString> HistoryBuffer; 
};

// Class Engine.ControlChannel
struct UControlChannel : UChannel {
};

// Class Engine.StreamingSettings
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; 
	char WarnIfTimeLimitExceeded : 1; 
	float TimeLimitExceededMultiplier; 
	float TimeLimitExceededMinTime; 
	int32_t MinBulkDataSizeForAsyncLoading; 
	char UseBackgroundLevelStreaming : 1; 
	char AsyncLoadingUseFullTimeLimit : 1; 
	float AsyncLoadingTimeLimit; 
	float PriorityAsyncLoadingExtraTime; 
	float LevelStreamingActorsUpdateTimeLimit; 
	float PriorityLevelStreamingActorsUpdateExtraTime; 
	int32_t LevelStreamingComponentsRegistrationGranularity; 
	float LevelStreamingUnregisterComponentsTimeLimit; 
	int32_t LevelStreamingComponentsUnregistrationGranularity; 
	char FlushStreamingOnExit : 1; 
	char EventDrivenLoaderEnabled : 1; 
};

// Class Engine.GarbageCollectionSettings
struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; 
	char FlushStreamingOnGC : 1; 
	char AllowParallelGC : 1; 
	char IncrementalBeginDestroyEnabled : 1; 
	char MultithreadedDestructionEnabled : 1; 
	char CreateGCClusters : 1; 
	char AssetClusteringEnabled : 1; 
	char ActorClusteringEnabled : 1; 
	char BlueprintClusteringEnabled : 1; 
	char UseDisregardForGCOnDedicatedServers : 1; 
	int32_t MinGCClusterSize; 
	int32_t NumRetriesBeforeForcingGC; 
	int32_t MaxObjectsNotConsideredByGC; 
	int32_t SizeOfPermanentObjectPool; 
	int32_t MaxObjectsInGame; 
	int32_t MaxObjectsInEditor; 
};

// Class Engine.CullDistanceVolume
struct ACullDistanceVolume : AVolume {
	struct TArray<struct FCullDistanceSizePair> CullDistances; 
	char bEnabled : 1; 
};

// Class Engine.CurveBase
struct UCurveBase : UObject {

	void GetValueRange(float& MinValue, float& MaxValue); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetTimeRange(float& MinTime, float& MaxTime); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CurveEdPresetCurve
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.CurveFloat
struct UCurveFloat : UCurveBase {
	struct FRichCurve FloatCurve; 
	bool bIsEventCurve; 

	float GetFloatValue(float InTime); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CurveLinearColor
struct UCurveLinearColor : UCurveBase {
	struct FRichCurve FloatCurves[0x4]; 
	float AdjustHue; 
	float AdjustSaturation; 
	float AdjustBrightness; 
	float AdjustBrightnessCurve; 
	float AdjustVibrance; 
	float AdjustMinAlpha; 
	float AdjustMaxAlpha; 

	struct FLinearColor GetUnadjustedLinearColorValue(float InTime); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetLinearColorValue(float InTime); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetClampedLinearColorValue(float InTime); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.Texture2D
struct UTexture2D : UTexture {
	int32_t LevelIndex; 
	int32_t FirstResourceMemMip; 
	char bTemporarilyDisableStreaming : 1; 
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
	struct FIntPoint ImportedSize; 

	int32_t Blueprint_GetSizeY(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t Blueprint_GetSizeX(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.CurveLinearColorAtlas
struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; 
	char bSquareResolution : 1; 
	uint32_t TextureHeight; 
	struct TArray<struct UCurveLinearColor*> GradientCurves; 

	bool GetCurvePosition(struct UCurveLinearColor* InCurve, float& position); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.CurveSourceInterface
struct UCurveSourceInterface : UInterface {

	float GetCurveValue(struct FName CurveName); // (Native|Event|Public|BlueprintEvent|Const)
	void GetCurves(struct TArray<struct FNamedCurveValue>& OutValues); // (Native|Event|Public|HasOutParms|BlueprintEvent|Const)
	struct FName GetBindingName(); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class Engine.CurveVector
struct UCurveVector : UCurveBase {
	struct FRichCurve FloatCurves[0x3]; 

	struct FVector GetVectorValue(float InTime); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.PrimaryDataAsset
struct UPrimaryDataAsset : UDataAsset {
};

// Class Engine.DataDrivenCVarEngineSubsystem
struct UDataDrivenCVarEngineSubsystem : UEngineSubsystem {
	struct FMulticastInlineDelegate OnDataDrivenCVarDelegate; 
};

// Class Engine.DataDrivenConsoleVariableSettings
struct UDataDrivenConsoleVariableSettings : UDeveloperSettings {
	struct TArray<struct FDataDrivenConsoleVariable> CVarsArray; 
};

// Class Engine.DataTableFunctionLibrary
struct UDataTableFunctionLibrary : UBlueprintFunctionLibrary {

	void GetDataTableRowNames(struct UDataTable* Table, struct TArray<struct FName>& OutRowNames); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool GetDataTableRowFromName(struct UDataTable* Table, struct FName RowName, struct FTableRowBase& OutRow); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct TArray<struct FString> GetDataTableColumnAsString(struct UDataTable* DataTable, struct FName PropertyName); // (Final|Native|Static|Public|BlueprintCallable)
	void EvaluateCurveTableRow(struct UCurveTable* CurveTable, struct FName RowName, float InXY, enum class EEvaluateCurveTableResult& OutResult, float& OutXY, struct FString ContextString); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool DoesDataTableRowExist(struct UDataTable* Table, struct FName RowName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.DebugCameraController
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; 
	char bIsFrozenRendering : 1; 
	char bIsOrbitingSelectedActor : 1; 
	char bOrbitPivotUseCenter : 1; 
	char bEnableBufferVisualization : 1; 
	char bEnableBufferVisualizationFullMode : 1; 
	char bIsBufferVisualizationInputSetup : 1; 
	char bLastDisplayEnabled : 1; 
	struct UDrawFrustumComponent* DrawFrustum; 
	struct AActor* SelectedActor; 
	struct UPrimitiveComponent* SelectedComponent; 
	struct FHitResult SelectedHitPoint; 
	struct APlayerController* OriginalControllerRef; 
	struct UPlayer* OriginalPlayer; 
	float SpeedScale; 
	float InitialMaxSpeed; 
	float InitialAccel; 
	float InitialDecel; 

	void ToggleDisplay(); // (Final|Native|Public|BlueprintCallable)
	void ShowDebugSelectedInfo(); // (Exec|Native|Public)
	void SetPawnMovementSpeedScale(float NewSpeedScale); // (Final|Native|Public|BlueprintCallable)
	void ReceiveOnDeactivate(struct APlayerController* RestoredPC); // (Event|Public|BlueprintEvent)
	void ReceiveOnActorSelected(struct AActor* NewSelectedActor, struct FVector& SelectHitLocation, struct FVector& SelectHitNormal, struct FHitResult& Hit); // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent)
	void ReceiveOnActivate(struct APlayerController* OriginalPC); // (Event|Public|BlueprintEvent)
	struct AActor* GetSelectedActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.DebugCameraControllerSettings
struct UDebugCameraControllerSettings : UDeveloperSettings {
	struct TArray<struct FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; 
};

// Class Engine.DebugCameraHUD
struct ADebugCameraHUD : AHUD {
};

// Class Engine.DebugDrawService
struct UDebugDrawService : UBlueprintFunctionLibrary {
};

// Class Engine.DecalActor
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; 

	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInterface* GetDecalMaterial(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // (Native|Public|BlueprintCallable)
};

// Class Engine.DecalComponent
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; 
	int32_t SortOrder; 
	float FadeScreenSize; 
	float FadeStartDelay; 
	float FadeDuration; 
	float FadeInDuration; 
	float FadeInStartDelay; 
	char bDestroyOwnerAfterFade : 1; 
	struct FVector DecalSize; 

	void SetSortOrder(int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetFadeScreenSize(float NewFadeScreenSize); // (Final|Native|Public|BlueprintCallable)
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade); // (Final|Native|Public|BlueprintCallable)
	void SetFadeIn(float StartDelay, float Duaration); // (Final|Native|Public|BlueprintCallable)
	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // (Final|Native|Public|BlueprintCallable)
	float GetFadeStartDelay(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFadeInStartDelay(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFadeInDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFadeDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInterface* GetDecalMaterial(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // (Native|Public|BlueprintCallable)
};

// Class Engine.DefaultPhysicsVolume
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.DemoNetConnection
struct UDemoNetConnection : UNetConnection {
};

// Class Engine.DemoNetDriver
struct UDemoNetDriver : UNetDriver {
	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors; 
	float CheckpointSaveMaxMSPerFrame; 
	struct TArray<struct FMulticastRecordOptions> MulticastRecordOptions; 
	bool bIsLocalReplay; 
	struct TArray<struct APlayerController*> SpectatorControllers; 
};

// Class Engine.PendingNetGame
struct UPendingNetGame : UObject {
	struct UNetDriver* NetDriver; 
	struct UDemoNetDriver* DemoNetDriver; 
};

// Class Engine.DemoPendingNetGame
struct UDemoPendingNetGame : UPendingNetGame {
};

// Class Engine.DestructibleInterface
struct UDestructibleInterface : UInterface {
};

// Class Engine.TextureLODSettings
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; 
};

// Class Engine.DeviceProfile
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; 
	struct FString BaseProfileName; 
	struct UObject* Parent; 
	struct TArray<struct FString> CVars; 
};

// Class Engine.DeviceProfileFragment
struct UDeviceProfileFragment : UObject {
};

// Class Engine.DeviceProfileManager
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; 
};

// Class Engine.DialogueSoundWaveProxy
struct UDialogueSoundWaveProxy : USoundBase {
};

// Class Engine.DialogueVoice
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; 
	enum class EGrammaticalNumber Plurality; 
	struct FGuid LocalizationGUID; 
};

// Class Engine.DialogueWave
struct UDialogueWave : UObject {
	char bMature : 1; 
	char bOverride_SubtitleOverride : 1; 
	struct FString SpokenText; 
	struct FString SubtitleOverride; 
	struct TArray<struct FDialogueContextMapping> ContextMappings; 
	struct FGuid LocalizationGUID; 
};

// Class Engine.Light
struct ALight : AActor {
	struct ULightComponent* LightComponent; 
	char bEnabled : 1; 

	void ToggleEnabled(); // (Final|Native|Public|BlueprintCallable)
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // (Final|Native|Public|BlueprintCallable)
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // (Final|Native|Public|BlueprintCallable)
	void SetLightColor(struct FLinearColor NewLightColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetEnabled(bool bSetEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetCastShadows(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBrightness(float NewBrightness); // (Final|Native|Public|BlueprintCallable)
	void SetAffectTranslucentLighting(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void OnRep_bEnabled(); // (Native|Public)
	bool IsEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetLightColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetBrightness(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.DirectionalLight
struct ADirectionalLight : ALight {
};

// Class Engine.LightComponentBase
struct ULightComponentBase : USceneComponent {
	struct FGuid LightGuid; 
	float Brightness; 
	float Intensity; 
	struct FColor LightColor; 
	char bAffectsWorld : 1; 
	char CastShadows : 1; 
	char CastStaticShadows : 1; 
	char CastDynamicShadows : 1; 
	char bAffectTranslucentLighting : 1; 
	char bTransmission : 1; 
	char bCastVolumetricShadow : 1; 
	char bCastDeepShadow : 1; 
	char bCastRaytracedShadow : 1; 
	char bAffectReflection : 1; 
	char bAffectGlobalIllumination : 1; 
	float DeepShadowLayerDistribution; 
	float IndirectLightingIntensity; 
	float VolumetricScatteringIntensity; 
	int32_t SamplesPerPixel; 

	void SetSamplesPerPixel(int32_t NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCastVolumetricShadow(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCastShadows(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCastRaytracedShadow(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCastDeepShadow(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAffectReflection(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAffectGlobalIllumination(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	struct FLinearColor GetLightColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.LightComponent
struct ULightComponent : ULightComponentBase {
	float Temperature; 
	float MaxDrawDistance; 
	float MaxDistanceFadeRange; 
	char bUseTemperature : 1; 
	int32_t ShadowMapChannel; 
	float MinRoughness; 
	float SpecularScale; 
	float ShadowResolutionScale; 
	float ShadowBias; 
	float ShadowSlopeBias; 
	float ShadowSharpen; 
	float ContactShadowLength; 
	char ContactShadowLengthInWS : 1; 
	char InverseSquaredFalloff : 1; 
	char CastTranslucentShadows : 1; 
	char bCastShadowsFromCinematicObjectsOnly : 1; 
	char bAffectDynamicIndirectLighting : 1; 
	char bForceCachedShadowsForMovablePrimitives : 1; 
	struct FLightingChannels LightingChannels; 
	struct UMaterialInterface* LightFunctionMaterial; 
	struct FVector LightFunctionScale; 
	struct UTextureLightProfile* IESTexture; 
	char bUseIESBrightness : 1; 
	float IESBrightnessScale; 
	float LightFunctionFadeDistance; 
	float DisabledBrightness; 
	char bEnableLightShaftBloom : 1; 
	float BloomScale; 
	float BloomThreshold; 
	float BloomMaxBrightness; 
	struct FColor BloomTint; 
	bool bUseRayTracedDistanceFieldShadows; 
	float RayStartOffsetDepthScale; 

	void SetVolumetricScatteringIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetUseTemperature(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetUseIESBrightness(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetTransmission(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetTemperature(float NewTemperature); // (Final|Native|Public|BlueprintCallable)
	void SetSpecularScale(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetShadowSlopeBias(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetShadowBias(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // (Final|Native|Public|BlueprintCallable)
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // (Final|Native|Public|BlueprintCallable)
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // (Final|Native|Public|BlueprintCallable)
	void SetLightFunctionDisabledBrightness(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetLightColor(struct FLinearColor NewLightColor, bool bSRGB); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetIndirectLightingIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetIESTexture(struct UTextureLightProfile* NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetIESBrightnessScale(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetForceCachedShadowsForMovablePrimitives(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetEnableLightShaftBloom(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBloomTint(struct FColor NewValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBloomThreshold(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBloomScale(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBloomMaxBrightness(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAffectTranslucentLighting(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAffectDynamicIndirectLighting(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.DirectionalLightComponent
struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; 
	char bEnableLightShaftOcclusion : 1; 
	float OcclusionMaskDarkness; 
	float OcclusionDepthRange; 
	struct FVector LightShaftOverrideDirection; 
	float WholeSceneDynamicShadowRadius; 
	float DynamicShadowDistanceMovableLight; 
	float DynamicShadowDistanceStationaryLight; 
	int32_t DynamicShadowCascades; 
	float CascadeDistributionExponent; 
	float CascadeTransitionFraction; 
	float ShadowDistanceFadeoutFraction; 
	char bUseInsetShadowsForMovableObjects : 1; 
	int32_t FarShadowCascadeCount; 
	float FarShadowDistance; 
	float DistanceFieldShadowDistance; 
	float LightSourceAngle; 
	float LightSourceSoftAngle; 
	float ShadowSourceAngleFactor; 
	float TraceDistance; 
	char bUsedAsAtmosphereSunLight : 1; 
	int32_t AtmosphereSunLightIndex; 
	struct FLinearColor AtmosphereSunDiskColorScale; 
	char bPerPixelAtmosphereTransmittance : 1; 
	char bCastShadowsOnClouds : 1; 
	char bCastShadowsOnAtmosphere : 1; 
	char bCastCloudShadows : 1; 
	float CloudShadowStrength; 
	float CloudShadowOnAtmosphereStrength; 
	float CloudShadowOnSurfaceStrength; 
	float CloudShadowDepthBias; 
	float CloudShadowExtent; 
	float CloudShadowMapResolutionScale; 
	float CloudShadowRaySampleCountScale; 
	struct FLinearColor CloudScatteredLuminanceScale; 
	struct FLightmassDirectionalLightSettings LightmassSettings; 
	char bCastModulatedShadows : 1; 
	struct FColor ModulatedShadowColor; 
	float ShadowAmount; 

	void SetShadowDistanceFadeoutFraction(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetShadowAmount(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetOcclusionMaskDarkness(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetLightShaftOverrideDirection(struct FVector NewValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetEnableLightShaftOcclusion(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetDynamicShadowDistanceStationaryLight(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetDynamicShadowDistanceMovableLight(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetDynamicShadowCascades(int32_t NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCascadeTransitionFraction(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetCascadeDistributionExponent(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAtmosphereSunLightIndex(int32_t NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAtmosphereSunLight(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.Distribution
struct UDistribution : UObject {
};

// Class Engine.DistributionFloat
struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; 
	char bBakedDataSuccesfully : 1; 
};

// Class Engine.DistributionFloatConstant
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; 
};

// Class Engine.DistributionFloatConstantCurve
struct UDistributionFloatConstantCurve : UDistributionFloat {
	struct FInterpCurveFloat ConstantCurve; 
};

// Class Engine.DistributionFloatParameterBase
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	struct FName ParameterName; 
	float MinInput; 
	float MaxInput; 
	float MinOutput; 
	float MaxOutput; 
	enum class DistributionParamMode ParamMode; 
};

// Class Engine.DistributionFloatParticleParameter
struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase {
};

// Class Engine.DistributionFloatUniform
struct UDistributionFloatUniform : UDistributionFloat {
	float Min; 
	float Max; 
};

// Class Engine.DistributionFloatUniformCurve
struct UDistributionFloatUniformCurve : UDistributionFloat {
	struct FInterpCurveVector2D ConstantCurve; 
};

// Class Engine.DistributionVector
struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; 
	char bIsDirty : 1; 
	char bBakedDataSuccesfully : 1; 
};

// Class Engine.DistributionVectorConstant
struct UDistributionVectorConstant : UDistributionVector {
	struct FVector Constant; 
	char bLockAxes : 1; 
	enum class EDistributionVectorLockFlags LockedAxes; 
};

// Class Engine.DistributionVectorConstantCurve
struct UDistributionVectorConstantCurve : UDistributionVector {
	struct FInterpCurveVector ConstantCurve; 
	char bLockAxes : 1; 
	enum class EDistributionVectorLockFlags LockedAxes; 
};

// Class Engine.DistributionVectorParameterBase
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	struct FName ParameterName; 
	struct FVector MinInput; 
	struct FVector MaxInput; 
	struct FVector MinOutput; 
	struct FVector MaxOutput; 
	enum class DistributionParamMode ParamModes[0x3]; 
};

// Class Engine.DistributionVectorParticleParameter
struct UDistributionVectorParticleParameter : UDistributionVectorParameterBase {
};

// Class Engine.DistributionVectorUniform
struct UDistributionVectorUniform : UDistributionVector {
	struct FVector Max; 
	struct FVector Min; 
	char bLockAxes : 1; 
	enum class EDistributionVectorLockFlags LockedAxes; 
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; 
	char bUseExtremes : 1; 
};

// Class Engine.DistributionVectorUniformCurve
struct UDistributionVectorUniformCurve : UDistributionVector {
	struct FInterpCurveTwoVectors ConstantCurve; 
	char bLockAxes1 : 1; 
	char bLockAxes2 : 1; 
	enum class EDistributionVectorLockFlags LockedAxes[0x2]; 
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; 
	char bUseExtremes : 1; 
};

// Class Engine.DocumentationActor
struct ADocumentationActor : AActor {
};

// Class Engine.DPICustomScalingRule
struct UDPICustomScalingRule : UObject {
};

// Class Engine.DrawFrustumComponent
struct UDrawFrustumComponent : UPrimitiveComponent {
	struct FColor FrustumColor; 
	float FrustumAngle; 
	float FrustumAspectRatio; 
	float FrustumStartDist; 
	float FrustumEndDist; 
	struct UTexture* Texture; 
};

// Class Engine.DrawSphereComponent
struct UDrawSphereComponent : USphereComponent {
};

// Class Engine.EdGraph
struct UEdGraph : UObject {
	struct UEdGraphSchema* Schema; 
	struct TArray<struct UEdGraphNode*> Nodes; 
	char bEditable : 1; 
	char bAllowDeletion : 1; 
	char bAllowRenaming : 1; 
};

// Class Engine.GraphNodeContextMenuContext
struct UGraphNodeContextMenuContext : UObject {
	struct UBlueprint* Blueprint; 
	struct UEdGraph* Graph; 
	struct UEdGraphNode* Node; 
	bool bIsDebugging; 
};

// Class Engine.EdGraphNode
struct UEdGraphNode : UObject {
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; 
	int32_t NodePosX; 
	int32_t NodePosY; 
	int32_t NodeWidth; 
	int32_t NodeHeight; 
	enum class ENodeAdvancedPins AdvancedPinDisplay; 
	enum class ENodeEnabledState EnabledState; 
	char bDisplayAsDisabled : 1; 
	char bUserSetEnabledState : 1; 
	char bIsNodeEnabled : 1; 
	char bHasCompilerMessage : 1; 
	struct FString NodeComment; 
	int32_t ErrorType; 
	struct FString ErrorMsg; 
	struct FGuid NodeGuid; 
};

// Class Engine.EdGraphNode_Documentation
struct UEdGraphNode_Documentation : UEdGraphNode {
	struct FString Link; 
	struct FString Excerpt; 
};

// Class Engine.EdGraphPin_Deprecated
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; 
	struct FString PinToolTip; 
	enum class EEdGraphPinDirection Direction; 
	struct FEdGraphPinType PinType; 
	struct FString DefaultValue; 
	struct FString AutogeneratedDefaultValue; 
	struct UObject* DefaultObject; 
	struct FText DefaultTextValue; 
	struct TArray<struct UEdGraphPin_Deprecated*> LinkedTo; 
	struct TArray<struct UEdGraphPin_Deprecated*> SubPins; 
	struct UEdGraphPin_Deprecated* ParentPin; 
	struct UEdGraphPin_Deprecated* ReferencePassThroughConnection; 
};

// Class Engine.EdGraphSchema
struct UEdGraphSchema : UObject {
};

// Class Engine.Emitter
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; 
	char bDestroyOnSystemFinish : 1; 
	char bPostUpdateTickGroup : 1; 
	char bCurrentlyActive : 1; 
	struct FMulticastInlineDelegate OnParticleSpawn; 
	struct FMulticastInlineDelegate OnParticleBurst; 
	struct FMulticastInlineDelegate OnParticleDeath; 
	struct FMulticastInlineDelegate OnParticleCollide; 

	void ToggleActive(); // (Final|Native|Public|BlueprintCallable)
	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTemplate(struct UParticleSystem* NewTemplate); // (Native|Public|BlueprintCallable)
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // (Final|Native|Public|BlueprintCallable)
	void SetFloatParameter(struct FName ParameterName, float Param); // (Final|Native|Public|BlueprintCallable)
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // (Final|Native|Public|BlueprintCallable)
	void OnRep_bCurrentlyActive(); // (Native|Public)
	void OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent); // (Native|Public)
	bool IsActive(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void Deactivate(); // (Final|Native|Public|BlueprintCallable)
	void Activate(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.EmitterCameraLensEffectBase
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* PS_CameraEffect; 
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; 
	struct APlayerCameraManager* BaseCamera; 
	struct FTransform RelativeTransform; 
	float BaseFOV; 
	char bAllowMultipleInstances : 1; 
	char bResetWhenRetriggered : 1; 
	struct TArray<struct AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; 
	float DistFromCamera; 
};

// Class Engine.ViewModeUtils
struct UViewModeUtils : UObject {
};

// Class Engine.EngineBaseTypes
struct UEngineBaseTypes : UObject {
};

// Class Engine.EngineHandlerComponentFactory
struct UEngineHandlerComponentFactory : UHandlerComponentFactory {
};

// Class Engine.LocalMessage
struct ULocalMessage : UObject {
};

// Class Engine.EngineMessage
struct UEngineMessage : ULocalMessage {
	struct FString FailedPlaceMessage; 
	struct FString MaxedOutMessage; 
	struct FString EnteredMessage; 
	struct FString LeftMessage; 
	struct FString GlobalNameChange; 
	struct FString SpecEnteredMessage; 
	struct FString NewPlayerMessage; 
	struct FString NewSpecMessage; 
};

// Class Engine.EngineTypes
struct UEngineTypes : UObject {
};

// Class Engine.ExponentialHeightFog
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; 
	char bEnabled : 1; 

	void OnRep_bEnabled(); // (Native|Public)
};

// Class Engine.ExponentialHeightFogComponent
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; 
	float FogHeightFalloff; 
	struct FExponentialHeightFogData SecondFogData; 
	struct FLinearColor FogInscatteringColor; 
	struct UTextureCube* InscatteringColorCubemap; 
	float InscatteringColorCubemapAngle; 
	struct FLinearColor InscatteringTextureTint; 
	float FullyDirectionalInscatteringColorDistance; 
	float NonDirectionalInscatteringColorDistance; 
	float DirectionalInscatteringExponent; 
	float DirectionalInscatteringStartDistance; 
	struct FLinearColor DirectionalInscatteringColor; 
	float FogMaxOpacity; 
	float StartDistance; 
	float FogCutoffDistance; 
	bool bEnableVolumetricFog; 
	float VolumetricFogScatteringDistribution; 
	struct FColor VolumetricFogAlbedo; 
	struct FLinearColor VolumetricFogEmissive; 
	float VolumetricFogExtinctionScale; 
	float VolumetricFogDistance; 
	float VolumetricFogStaticLightingScatteringIntensity; 
	bool bOverrideLightColorsWithFogInscatteringColors; 

	void SetVolumetricFogScatteringDistribution(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetVolumetricFogExtinctionScale(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetVolumetricFogEmissive(struct FLinearColor NewValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVolumetricFogDistance(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetVolumetricFogAlbedo(struct FColor NewValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVolumetricFog(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetStartDistance(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetNonDirectionalInscatteringColorDistance(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetInscatteringTextureTint(struct FLinearColor Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetInscatteringColorCubemapAngle(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetInscatteringColorCubemap(struct UTextureCube* Value); // (Final|Native|Public|BlueprintCallable)
	void SetFullyDirectionalInscatteringColorDistance(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetFogMaxOpacity(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetFogInscatteringColor(struct FLinearColor Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetFogHeightFalloff(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetFogDensity(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetFogCutoffDistance(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetDirectionalInscatteringStartDistance(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetDirectionalInscatteringExponent(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetDirectionalInscatteringColor(struct FLinearColor Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.Exporter
struct UExporter : UObject {
	struct UObject* SupportedClass; 
	struct UObject* ExportRootScope; 
	struct TArray<struct FString> FormatExtension; 
	struct TArray<struct FString> FormatDescription; 
	int32_t PreferredFormatIndex; 
	int32_t TextIndent; 
	char bText : 1; 
	char bSelectedOnly : 1; 
	char bForceFileOperations : 1; 
	struct UAssetExportTask* ExportTask; 

	bool ScriptRunAssetExportTask(struct UAssetExportTask* Task); // (Event|Public|BlueprintEvent)
	bool RunAssetExportTasks(struct TArray<struct UAssetExportTask*>& ExportTasks); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool RunAssetExportTask(struct UAssetExportTask* Task); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
};

// Class Engine.FloatingPawnMovement
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; 
	float Acceleration; 
	float Deceleration; 
	float TurningBoost; 
	char bPositionCorrected : 1; 
};

// Class Engine.Font
struct UFont : UObject {
	enum class EFontCacheType FontCacheType; 
	struct TArray<struct FFontCharacter> Characters; 
	struct TArray<struct UTexture2D*> Textures; 
	int32_t IsRemapped; 
	float EmScale; 
	float Ascent; 
	float Descent; 
	float Leading; 
	int32_t Kerning; 
	struct FFontImportOptionsData ImportOptions; 
	int32_t NumCharacters; 
	struct TArray<int32_t> MaxCharHeight; 
	float ScalingFactor; 
	int32_t LegacyFontSize; 
	struct FName LegacyFontName; 
	struct FCompositeFont CompositeFont; 
};

// Class Engine.FontFace
struct UFontFace : UObject {
	struct FString SourceFilename; 
	enum class EFontHinting Hinting; 
	enum class EFontLoadingPolicy LoadingPolicy; 
	enum class EFontLayoutMethod LayoutMethod; 
};

// Class Engine.FontImportOptions
struct UFontImportOptions : UObject {
	struct FFontImportOptionsData Data; 
};

// Class Engine.ForceFeedbackAttenuation
struct UForceFeedbackAttenuation : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; 
};

// Class Engine.ForceFeedbackComponent
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; 
	char bAutoDestroy : 1; 
	char bStopWhenOwnerDestroyed : 1; 
	char bLooping : 1; 
	char bIgnoreTimeDilation : 1; 
	char bOverrideAttenuation : 1; 
	float IntensityMultiplier; 
	struct UForceFeedbackAttenuation* AttenuationSettings; 
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; 
	struct FMulticastInlineDelegate OnForceFeedbackFinished; 

	void Stop(); // (Native|Public|BlueprintCallable)
	void SetIntensityMultiplier(float NewIntensityMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetForceFeedbackEffect(struct UForceFeedbackEffect* NewForceFeedbackEffect); // (Final|Native|Public|BlueprintCallable)
	void Play(float StartTime); // (Native|Public|BlueprintCallable)
	bool BP_GetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings& OutAttenuationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void AdjustAttenuation(struct FForceFeedbackAttenuationSettings& InAttenuationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.ForceFeedbackEffect
struct UForceFeedbackEffect : UObject {
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; 
	float Duration; 
};

// Class Engine.GameNetworkManager
struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; 
	float SeverePacketLossThreshold; 
	int32_t BadPingThreshold; 
	int32_t SeverePingThreshold; 
	int32_t AdjustedNetSpeed; 
	float LastNetSpeedUpdateTime; 
	int32_t TotalNetBandwidth; 
	int32_t MinDynamicBandwidth; 
	int32_t MaxDynamicBandwidth; 
	char bIsStandbyCheckingEnabled : 1; 
	char bHasStandbyCheatTriggered : 1; 
	float StandbyRxCheatTime; 
	float StandbyTxCheatTime; 
	float PercentMissingForRxStandby; 
	float PercentMissingForTxStandby; 
	float PercentForBadPing; 
	float JoinInProgressStandbyWaitTime; 
	float MoveRepSize; 
	float MAXPOSITIONERRORSQUARED; 
	float MAXNEARZEROVELOCITYSQUARED; 
	float CLIENTADJUSTUPDATECOST; 
	float MAXCLIENTUPDATEINTERVAL; 
	float MaxClientForcedUpdateDuration; 
	float ServerForcedUpdateHitchThreshold; 
	float ServerForcedUpdateHitchCooldown; 
	float MaxMoveDeltaTime; 
	float MaxClientSmoothingDeltaTime; 
	float ClientNetSendMoveDeltaTime; 
	float ClientNetSendMoveDeltaTimeThrottled; 
	float ClientNetSendMoveDeltaTimeStationary; 
	int32_t ClientNetSendMoveThrottleAtNetSpeed; 
	int32_t ClientNetSendMoveThrottleOverPlayerCount; 
	bool ClientAuthorativePosition; 
	float ClientErrorUpdateRateLimit; 
	float ClientNetCamUpdateDeltaTime; 
	float ClientNetCamUpdatePositionLimit; 
	bool bMovementTimeDiscrepancyDetection; 
	bool bMovementTimeDiscrepancyResolution; 
	float MovementTimeDiscrepancyMaxTimeMargin; 
	float MovementTimeDiscrepancyMinTimeMargin; 
	float MovementTimeDiscrepancyResolutionRate; 
	float MovementTimeDiscrepancyDriftAllowance; 
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; 
	bool bUseDistanceBasedRelevancy; 
};

// Class Engine.GameplayStatics
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void UnRetainAllSoundsInSoundClass(struct USoundClass* InSoundClass); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadStreamLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload); // (Final|Native|Static|Public|BlueprintCallable)
	bool SuggestProjectileVelocity_CustomArc(struct UObject* WorldContextObject, struct FVector& OutLaunchVelocity, struct FVector StartPos, struct FVector EndPos, float OverrideGravityZ, float ArcParam); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnSoundAttached(struct USoundBase* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnSoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnSound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	struct UObject* SpawnObject(struct UObject* ObjectClass, struct UObject* Outer); // (Final|Native|Static|Public|BlueprintCallable)
	struct UForceFeedbackComponent* SpawnForceFeedbackAttached(struct UForceFeedbackEffect* ForceFeedbackEffect, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, struct UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UForceFeedbackComponent* SpawnForceFeedbackAtLocation(struct UObject* WorldContextObject, struct UForceFeedbackEffect* ForceFeedbackEffect, struct FVector Location, struct FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, struct UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UParticleSystemComponent* SpawnEmitterAttached(struct UParticleSystem* EmitterTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, struct FVector Scale, enum class EAttachLocation LocationType, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod, bool bAutoActivate); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UParticleSystemComponent* SpawnEmitterAtLocation(struct UObject* WorldContextObject, struct UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnDialogueAttached(struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, bool bAutoDestroy); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UAudioComponent* SpawnDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UDecalComponent* SpawnDecalAttached(struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, float LifeSpan); // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UDecalComponent* SpawnDecalAtLocation(struct UObject* WorldContextObject, struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan); // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetWorldOriginLocation(struct UObject* WorldContextObject, struct FIntVector NewLocation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetViewportMouseCaptureMode(struct UObject* WorldContextObject, enum class EMouseCaptureMode MouseCaptureMode); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSubtitlesEnabled(bool bEnabled); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSoundMixClassOverride(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier, struct USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSoundClassDistanceScale(struct UObject* WorldContextObject, struct USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetPlayerControllerID(struct APlayerController* Player, int32_t ControllerId); // (Final|Native|Static|Public|BlueprintCallable)
	void SetMaxAudioChannelsScaled(struct UObject* WorldContextObject, float MaxChannelCountScale); // (Final|Native|Static|Public|BlueprintCallable)
	void SetGlobalTimeDilation(struct UObject* WorldContextObject, float TimeDilation); // (Final|Native|Static|Public|BlueprintCallable)
	void SetGlobalPitchModulation(struct UObject* WorldContextObject, float PitchModulation, float TimeSec); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetGlobalListenerFocusParameters(struct UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	bool SetGamePaused(struct UObject* WorldContextObject, bool bPaused); // (Final|Native|Static|Public|BlueprintCallable)
	void SetForceDisableSplitscreen(struct UObject* WorldContextObject, bool bDisable); // (Final|Native|Static|Public|BlueprintCallable)
	void SetEnableWorldRendering(struct UObject* WorldContextObject, bool bEnable); // (Final|Native|Static|Public|BlueprintCallable)
	void SetBaseSoundMix(struct UObject* WorldContextObject, struct USoundMix* InSoundMix); // (Final|Native|Static|Public|BlueprintCallable)
	bool SaveGameToSlot(struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void RemovePlayer(struct APlayerController* Player, bool bDestroyPawn); // (Final|Native|Static|Public|BlueprintCallable)
	struct FVector RebaseZeroOriginOntoLocal(struct UObject* WorldContextObject, struct FVector WorldLocation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RebaseLocalOriginOntoZero(struct UObject* WorldContextObject, struct FVector WorldLocation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void PushSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // (Final|Native|Static|Public|BlueprintCallable)
	bool ProjectWorldToScreen(struct APlayerController* Player, struct FVector& WorldPosition, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void PrimeSound(struct USoundBase* InSound); // (Final|Native|Static|Public|BlueprintCallable)
	void PrimeAllSoundsInSoundClass(struct USoundClass* InSoundClass); // (Final|Native|Static|Public|BlueprintCallable)
	void PopSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // (Final|Native|Static|Public|BlueprintCallable)
	void PlayWorldCameraShake(struct UObject* WorldContextObject, struct UCameraShakeBase* Shake, struct FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void PlaySoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, struct AActor* OwningActor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void PlaySound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, struct AActor* OwningActor, bool bIsUISound); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void PlayDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void PlayDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FString ParseOption(struct FString Options, struct FString Key); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void OpenLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, bool bAbsolute, struct FString Options); // (Final|Native|Static|Public|BlueprintCallable)
	void OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString Options); // (Final|Native|Static|Public|BlueprintCallable)
	struct FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, struct FVector Location, struct FVector ImpactPoint, struct FVector Normal, struct FVector ImpactNormal, struct UPhysicalMaterial* PhysMat, struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, struct FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, struct FVector TraceStart, struct FVector TraceEnd); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void LoadStreamLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	struct USaveGame* LoadGameFromSlot(struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsSplitscreenForceDisabled(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsGamePaused(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool HasOption(struct FString Options, struct FString InKey); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool HasLaunchOption(struct FString OptionToCheck); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GrassOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FIntVector GetWorldOriginLocation(struct UObject* WorldContextObject); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetWorldDeltaSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetViewProjectionMatrix(struct FMinimalViewInfo DesiredView, struct FMatrix& ViewMatrix, struct FMatrix& ProjectionMatrix, struct FMatrix& ViewProjectionMatrix); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class EMouseCaptureMode GetViewportMouseCaptureMode(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetUnpausedTimeSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetTimeSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EPhysicalSurface GetSurfaceType(struct FHitResult& Hit); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct ULevelStreaming* GetStreamingLevel(struct UObject* WorldContextObject, struct FName PackageName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetRealTimeSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct APawn* GetPlayerPawn(struct UObject* WorldContextObject, int32_t PlayerIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetPlayerControllerID(struct APlayerController* Player); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct APlayerController* GetPlayerControllerFromID(struct UObject* WorldContextObject, int32_t ControllerId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct APlayerController* GetPlayerController(struct UObject* WorldContextObject, int32_t PlayerIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct ACharacter* GetPlayerCharacter(struct UObject* WorldContextObject, int32_t PlayerIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct APlayerCameraManager* GetPlayerCameraManager(struct UObject* WorldContextObject, int32_t PlayerIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetPlatformName(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UObject* GetObjectClass(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetMaxAudioChannelCount(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	void GetKeyValue(struct FString Pair, struct FString& Key, struct FString& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetGlobalTimeDilation(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct AGameStateBase* GetGameState(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct AGameModeBase* GetGameMode(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UGameInstance* GetGameInstance(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetEnableWorldRendering(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	struct UReverbEffect* GetCurrentReverbEffect(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetCurrentLevelName(struct UObject* WorldContextObject, bool bRemovePrefixString); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetClosestListenerLocation(struct UObject* WorldContextObject, struct FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, struct FVector& ListenerPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float GetAudioTimeSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetAllActorsWithTag(struct UObject* WorldContextObject, struct FName Tag, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetAllActorsWithInterface(struct UObject* WorldContextObject, struct UInterface* Interface, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetAllActorsOfClassWithTag(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetAllActorsOfClass(struct UObject* WorldContextObject, struct AActor* ActorClass, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct AActor* GetActorOfClass(struct UObject* WorldContextObject, struct AActor* ActorClass); // (Final|Native|Static|Public|BlueprintCallable)
	void GetActorArrayBounds(struct TArray<struct AActor*>& Actors, bool bOnlyCollidingComponents, struct FVector& Center, struct FVector& BoxExtent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector GetActorArrayAverageLocation(struct TArray<struct AActor*>& Actors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void GetAccurateRealTime(int32_t& Seconds, float& PartialSeconds); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void FlushLevelStreaming(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	struct AActor* FinishSpawningActor(struct AActor* Actor, struct FTransform& SpawnTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct AActor* FindNearestActor(struct FVector Origin, struct TArray<struct AActor*>& ActorsToCheck, float& Distance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool FindCollisionUV(struct FHitResult& Hit, int32_t UVChannel, struct FVector2D& UV); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void EnableLiveStreaming(bool enable); // (Final|Native|Static|Public|BlueprintCallable)
	bool DoesSaveGameExist(struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	bool DeprojectScreenToWorld(struct APlayerController* Player, struct FVector2D& ScreenPosition, struct FVector& WorldPosition, struct FVector& WorldDirection); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool DeleteGameInSlot(struct FString SlotName, int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void DeactivateReverbEffect(struct UObject* WorldContextObject, struct FName TagName); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAudioComponent* CreateSound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	struct USaveGame* CreateSaveGameObject(struct USaveGame* SaveGameClass); // (Final|Native|Static|Public|BlueprintCallable)
	struct APlayerController* CreatePlayer(struct UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	void ClearSoundMixModifiers(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	void ClearSoundMixClassOverride(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier, struct USoundClass* InSoundClass, float FadeOutTime); // (Final|Native|Static|Public|BlueprintCallable)
	void CancelAsyncLoading(); // (Final|Native|Static|Public|BlueprintCallable)
	void BreakHitResult(struct FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, struct FVector& Location, struct FVector& ImpactPoint, struct FVector& Normal, struct FVector& ImpactNormal, struct UPhysicalMaterial*& PhysMat, struct AActor*& HitActor, struct UPrimitiveComponent*& HitComponent, struct FName& HitBoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, struct FVector& TraceStart, struct FVector& TraceEnd); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool BlueprintSuggestProjectileVelocity(struct UObject* WorldContextObject, struct FVector& TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool Blueprint_PredictProjectilePath_ByTraceChannel(struct UObject* WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool Blueprint_PredictProjectilePath_ByObjectType(struct UObject* WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool Blueprint_PredictProjectilePath_Advanced(struct UObject* WorldContextObject, struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult& PredictResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct AActor* BeginSpawningActorFromClass(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FTransform& SpawnTransform, bool bNoCollisionFail, struct AActor* Owner); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct AActor* BeginSpawningActorFromBlueprint(struct UObject* WorldContextObject, struct UBlueprint* Blueprint, struct FTransform& SpawnTransform, bool bNoCollisionFail); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct AActor* BeginDeferredActorSpawnFromClass(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FTransform& SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool AreSubtitlesEnabled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool AreAnyListenersWithinRange(struct UObject* WorldContextObject, struct FVector& Location, float MaximumRange); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool ApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, float BaseDamage, float MinimumDamage, struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel); // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool ApplyRadialDamage(struct UObject* WorldContextObject, float BaseDamage, struct FVector& Origin, float DamageRadius, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, enum class ECollisionChannel DamagePreventionChannel); // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float ApplyPointDamage(struct AActor* DamagedActor, float BaseDamage, struct FVector& HitFromDirection, struct FHitResult& HitInfo, struct AController* EventInstigator, struct AActor* DamageCauser, struct UDamageType* DamageTypeClass); // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float ApplyDamage(struct AActor* DamagedActor, float BaseDamage, struct AController* EventInstigator, struct AActor* DamageCauser, struct UDamageType* DamageTypeClass); // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable)
	void AnnounceAccessibleString(struct FString AnnouncementString); // (Final|Native|Static|Public|BlueprintCallable)
	void ActivateReverbEffect(struct UObject* WorldContextObject, struct UReverbEffect* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.SpotLight
struct ASpotLight : ALight {
	struct USpotLightComponent* SpotLightComponent; 

	void SetOuterConeAngle(float NewOuterConeAngle); // (Final|Native|Public|BlueprintCallable)
	void SetInnerConeAngle(float NewInnerConeAngle); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.GeneratedMeshAreaLight
struct AGeneratedMeshAreaLight : ASpotLight {
};

// Class Engine.HapticFeedbackEffect_Base
struct UHapticFeedbackEffect_Base : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	struct TArray<char> Amplitudes; 
	int32_t SampleRate; 
};

// Class Engine.HapticFeedbackEffect_Curve
struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	struct FHapticFeedbackDetails_Curve HapticDetails; 
};

// Class Engine.HapticFeedbackEffect_SoundWave
struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	struct USoundWave* SoundWave; 
};

// Class Engine.HealthSnapshotBlueprintLibrary
struct UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary {

	void StopPerformanceSnapshots(); // (Final|Exec|Native|Static|Public|BlueprintCallable)
	void StartPerformanceSnapshots(); // (Final|Exec|Native|Static|Public|BlueprintCallable)
	void LogPerformanceSnapshot(struct FString SnapshotTitle, bool bResetStats); // (Final|Exec|Native|Static|Public|BlueprintCallable)
};

// Class Engine.HLODEngineSubsystem
struct UHLODEngineSubsystem : UEngineSubsystem {
};

// Class Engine.HLODProxy
struct UHLODProxy : UObject {
	struct TArray<struct FHLODProxyMesh> ProxyMeshes; 
	struct TMap<struct UHLODProxyDesc*, struct FHLODProxyMesh> HLODActors; 
};

// Class Engine.HLODProxyDesc
struct UHLODProxyDesc : UObject {
};

// Class Engine.ImportanceSamplingLibrary
struct UImportanceSamplingLibrary : UBlueprintFunctionLibrary {

	float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector RandomSobolCell3D(int32_t Index, int32_t NumCells, struct FVector Cell, struct FVector Seed); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D RandomSobolCell2D(int32_t Index, int32_t NumCells, struct FVector2D Cell, struct FVector2D Seed); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector NextSobolCell3D(int32_t Index, int32_t NumCells, struct FVector PreviousValue); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D NextSobolCell2D(int32_t Index, int32_t NumCells, struct FVector2D PreviousValue); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FImportanceTexture MakeImportanceTexture(struct UTexture2D* Texture, enum class EImportanceWeight WeightingFunc); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ImportanceSample(struct FImportanceTexture& Texture, struct FVector2D& Rand, int32_t Samples, float Intensity, struct FVector2D& SamplePosition, struct FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakImportanceTexture(struct FImportanceTexture& ImportanceTexture, struct UTexture2D*& Texture, enum class EImportanceWeight& WeightingFunc); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class Engine.ImportantToggleSettingInterface
struct UImportantToggleSettingInterface : UInterface {
};

// Class Engine.InGameAdManager
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; 
	struct TArray<struct FDelegate> ClickedBannerDelegates; 
	struct TArray<struct FDelegate> ClosedAdDelegates; 
};

// Class Engine.InheritableComponentHandler
struct UInheritableComponentHandler : UObject {
	struct TArray<struct FComponentOverrideRecord> Records; 
	struct TArray<struct UActorComponent*> UnnecessaryComponents; 
};

// Class Engine.InputDelegateBinding
struct UInputDelegateBinding : UDynamicBlueprintBinding {
};

// Class Engine.InputActionDelegateBinding
struct UInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; 
};

// Class Engine.InputAxisDelegateBinding
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; 
};

// Class Engine.InputAxisKeyDelegateBinding
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; 
};

// Class Engine.InputComponent
struct UInputComponent : UActorComponent {
	struct TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo; 

	bool WasControllerKeyJustReleased(struct FKey Key); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	bool WasControllerKeyJustPressed(struct FKey Key); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	bool IsControllerKeyDown(struct FKey Key); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	void GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetControllerVectorKeyState(struct FKey Key); // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetControllerMouseDelta(float& DeltaX, float& DeltaY); // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetControllerKeyTimeDown(struct FKey Key); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	void GetControllerAnalogStickState(enum class EControllerAnalogStick WhichStick, float& StickX, float& StickY); // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetControllerAnalogKeyState(struct FKey Key); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.InputKeyDelegateBinding
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; 
};

// Class Engine.InputSettings
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; 
	char bAltEnterTogglesFullscreen : 1; 
	char bF11TogglesFullscreen : 1; 
	char bUseMouseForTouch : 1; 
	char bEnableMouseSmoothing : 1; 
	char bEnableFOVScaling : 1; 
	char bCaptureMouseOnLaunch : 1; 
	char bDefaultViewportMouseLock : 1; 
	char bAlwaysShowTouchInterface : 1; 
	char bShowConsoleOnFourFingerTap : 1; 
	char bEnableGestureRecognizer : 1; 
	bool bUseAutocorrect; 
	struct TArray<struct FString> ExcludedAutocorrectOS; 
	struct TArray<struct FString> ExcludedAutocorrectCultures; 
	struct TArray<struct FString> ExcludedAutocorrectDeviceModels; 
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; 
	enum class EMouseLockMode DefaultViewportMouseLockMode; 
	float FOVScale; 
	float DoubleClickTime; 
	struct TArray<struct FInputActionKeyMapping> ActionMappings; 
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; 
	struct TArray<struct FInputActionSpeechMapping> SpeechMappings; 
	struct TSoftClassPtr<UObject> DefaultPlayerInputClass; 
	struct TSoftClassPtr<UObject> DefaultInputComponentClass; 
	struct FSoftObjectPath DefaultTouchInterface; 
	struct FKey ConsoleKey; 
	struct TArray<struct FKey> ConsoleKeys; 

	void SaveKeyMappings(); // (Final|Native|Public|BlueprintCallable)
	void RemoveAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RemoveActionMapping(struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UInputSettings* GetInputSettings(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetAxisNames(struct TArray<struct FName>& AxisNames); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetAxisMappingByName(struct FName InAxisName, struct TArray<struct FInputAxisKeyMapping>& OutMappings); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetActionNames(struct TArray<struct FName>& ActionNames); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetActionMappingByName(struct FName InActionName, struct TArray<struct FInputActionKeyMapping>& OutMappings); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void ForceRebuildKeymaps(); // (Final|Native|Public|BlueprintCallable)
	void AddAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddActionMapping(struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.InputTouchDelegateBinding
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; 
};

// Class Engine.InputVectorAxisDelegateBinding
struct UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding {
};

// Class Engine.Interface_ActorSubobject
struct UInterface_ActorSubobject : UInterface {
};

// Class Engine.Interface_AssetUserData
struct UInterface_AssetUserData : UInterface {
};

// Class Engine.BoneReferenceSkeletonProvider
struct UBoneReferenceSkeletonProvider : UInterface {
};

// Class Engine.Interface_CollisionDataProvider
struct UInterface_CollisionDataProvider : UInterface {
};

// Class Engine.Interface_PostProcessVolume
struct UInterface_PostProcessVolume : UInterface {
};

// Class Engine.Interface_PreviewMeshProvider
struct UInterface_PreviewMeshProvider : UInterface {
};

// Class Engine.InterpCurveEdSetup
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct FCurveEdTab> Tabs; 
	int32_t ActiveTab; 
};

// Class Engine.InterpData
struct UInterpData : UObject {
	float InterpLength; 
	float PathBuildTime; 
	struct TArray<struct UInterpGroup*> InterpGroups; 
	struct UInterpCurveEdSetup* CurveEdSetup; 
	float EdSectionStart; 
	float EdSectionEnd; 
	char bShouldBakeAndPrune : 1; 
	struct UInterpGroupDirector* CachedDirectorGroup; 
	struct TArray<struct FName> AllEventNames; 
};

// Class Engine.InterpFilter
struct UInterpFilter : UObject {
	struct FString Caption; 
};

// Class Engine.InterpFilter_Classes
struct UInterpFilter_Classes : UInterpFilter {
};

// Class Engine.InterpFilter_Custom
struct UInterpFilter_Custom : UInterpFilter {
};

// Class Engine.InterpGroup
struct UInterpGroup : UObject {
	struct TArray<struct UInterpTrack*> InterpTracks; 
	struct FName GroupName; 
	struct FColor GroupColor; 
	char bCollapsed : 1; 
	char bVisible : 1; 
	char bIsFolder : 1; 
	char bIsParented : 1; 
	char bIsSelected : 1; 
};

// Class Engine.InterpGroupCamera
struct UInterpGroupCamera : UInterpGroup {
	struct UCameraAnim* CameraAnimInst; 
	float CompressTolerance; 
};

// Class Engine.InterpGroupDirector
struct UInterpGroupDirector : UInterpGroup {
};

// Class Engine.InterpGroupInst
struct UInterpGroupInst : UObject {
	struct UInterpGroup* Group; 
	struct AActor* GroupActor; 
	struct TArray<struct UInterpTrackInst*> TrackInst; 
};

// Class Engine.InterpGroupInstCamera
struct UInterpGroupInstCamera : UInterpGroupInst {
};

// Class Engine.InterpGroupInstDirector
struct UInterpGroupInstDirector : UInterpGroupInst {
};

// Class Engine.InterpToMovementComponent
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; 
	char bPauseOnImpact : 1; 
	bool bSweep; 
	enum class ETeleportType TeleportType; 
	enum class EInterpToBehaviourType BehaviourType; 
	bool bCheckIfStillInWorld; 
	char bForceSubStepping : 1; 
	struct FMulticastInlineDelegate OnInterpToReverse; 
	struct FMulticastInlineDelegate OnInterpToStop; 
	struct FMulticastInlineDelegate OnWaitBeginDelegate; 
	struct FMulticastInlineDelegate OnWaitEndDelegate; 
	struct FMulticastInlineDelegate OnResetDelegate; 
	float MaxSimulationTimeStep; 
	int32_t MaxSimulationIterations; 
	struct TArray<struct FInterpControlPoint> ControlPoints; 

	void StopSimulating(struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RestartMovement(float InitialDirection); // (Final|Native|Public|BlueprintCallable)
	void ResetControlPoints(); // (Final|Native|Public|BlueprintCallable)
	void OnInterpToWaitEndDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnInterpToStopDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnInterpToReverseDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnInterpToResetDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void FinaliseControlPoints(); // (Final|Native|Public|BlueprintCallable)
	void AddControlPointPosition(struct FVector Pos, bool bPositionIsRelative); // (Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.InterpTrack
struct UInterpTrack : UObject {
	struct TArray<struct UInterpTrack*> SubTracks; 
	struct UInterpTrackInst* TrackInstClass; 
	enum class ETrackActiveCondition ActiveCondition; 
	struct FString TrackTitle; 
	char bOnePerGroup : 1; 
	char bDirGroupOnly : 1; 
	char bDisableTrack : 1; 
	char bIsSelected : 1; 
	char bIsAnimControlTrack : 1; 
	char bSubTrackOnly : 1; 
	char bVisible : 1; 
	char bIsRecording : 1; 
};

// Class Engine.InterpTrackFloatBase
struct UInterpTrackFloatBase : UInterpTrack {
	struct FInterpCurveFloat FloatTrack; 
	float CurveTension; 
};

// Class Engine.InterpTrackAnimControl
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	struct FName SlotName; 
	struct TArray<struct FAnimControlTrackKey> AnimSeqs; 
	char bSkipAnimNotifiers : 1; 
};

// Class Engine.InterpTrackVectorBase
struct UInterpTrackVectorBase : UInterpTrack {
	struct FInterpCurveVector VectorTrack; 
	float CurveTension; 
};

// Class Engine.InterpTrackAudioMaster
struct UInterpTrackAudioMaster : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackBoolProp
struct UInterpTrackBoolProp : UInterpTrack {
	struct TArray<struct FBoolTrackKey> BoolTrack; 
	struct FName PropertyName; 
};

// Class Engine.InterpTrackColorProp
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	struct FName PropertyName; 
};

// Class Engine.InterpTrackColorScale
struct UInterpTrackColorScale : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackDirector
struct UInterpTrackDirector : UInterpTrack {
	struct TArray<struct FDirectorTrackCut> CutTrack; 
	char bSimulateCameraCutsOnClients : 1; 
};

// Class Engine.InterpTrackEvent
struct UInterpTrackEvent : UInterpTrack {
	struct TArray<struct FEventTrackKey> EventTrack; 
	char bFireEventsWhenForwards : 1; 
	char bFireEventsWhenBackwards : 1; 
	char bFireEventsWhenJumpingForwards : 1; 
	char bUseCustomEventName : 1; 
};

// Class Engine.InterpTrackFade
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; 
	char bFadeAudio : 1; 
	struct FLinearColor FadeColor; 
};

// Class Engine.InterpTrackFloatAnimBPParam
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	struct UObject* AnimBlueprintClass; 
	struct UAnimInstance* AnimClass; 
	struct FName ParamName; 
};

// Class Engine.InterpTrackFloatMaterialParam
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; 
	struct FName ParamName; 
};

// Class Engine.InterpTrackFloatParticleParam
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	struct FName ParamName; 
};

// Class Engine.InterpTrackFloatProp
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	struct FName PropertyName; 
};

// Class Engine.InterpTrackInst
struct UInterpTrackInst : UObject {
};

// Class Engine.InterpTrackInstAnimControl
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; 
};

// Class Engine.InterpTrackInstAudioMaster
struct UInterpTrackInstAudioMaster : UInterpTrackInst {
};

// Class Engine.InterpTrackInstProperty
struct UInterpTrackInstProperty : UInterpTrackInst {
	struct TFieldPath<FProperty> InterpProperty; 
	struct UObject* PropertyOuterObjectInst; 
};

// Class Engine.InterpTrackInstBoolProp
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; 
};

// Class Engine.InterpTrackInstColorProp
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	struct FColor ResetColor; 
};

// Class Engine.InterpTrackInstColorScale
struct UInterpTrackInstColorScale : UInterpTrackInst {
};

// Class Engine.InterpTrackInstDirector
struct UInterpTrackInstDirector : UInterpTrackInst {
	struct AActor* OldViewTarget; 
};

// Class Engine.InterpTrackInstEvent
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; 
};

// Class Engine.InterpTrackInstFade
struct UInterpTrackInstFade : UInterpTrackInst {
};

// Class Engine.InterpTrackInstFloatAnimBPParam
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	struct UAnimInstance* AnimScriptInstance; 
	float ResetFloat; 
};

// Class Engine.InterpTrackInstFloatMaterialParam
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; 
	struct TArray<float> ResetFloats; 
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; 
	struct UInterpTrackFloatMaterialParam* InstancedTrack; 
};

// Class Engine.InterpTrackInstFloatParticleParam
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; 
};

// Class Engine.InterpTrackInstFloatProp
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; 
};

// Class Engine.InterpTrackInstLinearColorProp
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	struct FLinearColor ResetColor; 
};

// Class Engine.InterpTrackInstMove
struct UInterpTrackInstMove : UInterpTrackInst {
	struct FVector ResetLocation; 
	struct FRotator ResetRotation; 
};

// Class Engine.InterpTrackInstParticleReplay
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; 
};

// Class Engine.InterpTrackInstSlomo
struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; 
};

// Class Engine.InterpTrackInstSound
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; 
	struct UAudioComponent* PlayAudioComp; 
};

// Class Engine.InterpTrackInstToggle
struct UInterpTrackInstToggle : UInterpTrackInst {
	enum class ETrackToggleAction Action; 
	float LastUpdatePosition; 
	char bSavedActiveState : 1; 
};

// Class Engine.InterpTrackInstVectorMaterialParam
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; 
	struct TArray<struct FVector> ResetVectors; 
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; 
	struct UInterpTrackVectorMaterialParam* InstancedTrack; 
};

// Class Engine.InterpTrackInstVectorProp
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	struct FVector ResetVector; 
};

// Class Engine.InterpTrackInstVisibility
struct UInterpTrackInstVisibility : UInterpTrackInst {
	enum class EVisibilityTrackAction Action; 
	float LastUpdatePosition; 
};

// Class Engine.InterpTrackLinearColorBase
struct UInterpTrackLinearColorBase : UInterpTrack {
	struct FInterpCurveLinearColor LinearColorTrack; 
	float CurveTension; 
};

// Class Engine.InterpTrackLinearColorProp
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	struct FName PropertyName; 
};

// Class Engine.InterpTrackMove
struct UInterpTrackMove : UInterpTrack {
	struct FInterpCurveVector PosTrack; 
	struct FInterpCurveVector EulerTrack; 
	struct FInterpLookupTrack LookupTrack; 
	struct FName LookAtGroupName; 
	float LinCurveTension; 
	float AngCurveTension; 
	char bUseQuatInterpolation : 1; 
	char bShowArrowAtKeys : 1; 
	char bDisableMovement : 1; 
	char bShowTranslationOnCurveEd : 1; 
	char bShowRotationOnCurveEd : 1; 
	char bHide3DTrack : 1; 
	enum class EInterpTrackMoveRotMode RotMode; 
};

// Class Engine.InterpTrackMoveAxis
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	enum class EInterpMoveAxis MoveAxis; 
	struct FInterpLookupTrack LookupTrack; 
};

// Class Engine.InterpTrackParticleReplay
struct UInterpTrackParticleReplay : UInterpTrack {
	struct TArray<struct FParticleReplayTrackKey> TrackKeys; 
};

// Class Engine.InterpTrackSlomo
struct UInterpTrackSlomo : UInterpTrackFloatBase {
};

// Class Engine.InterpTrackSound
struct UInterpTrackSound : UInterpTrackVectorBase {
	struct TArray<struct FSoundTrackKey> Sounds; 
	char bPlayOnReverse : 1; 
	char bContinueSoundOnMatineeEnd : 1; 
	char bSuppressSubtitles : 1; 
	char bTreatAsDialogue : 1; 
	char bAttach : 1; 
};

// Class Engine.InterpTrackToggle
struct UInterpTrackToggle : UInterpTrack {
	struct TArray<struct FToggleTrackKey> ToggleTrack; 
	char bActivateSystemEachUpdate : 1; 
	char bActivateWithJustAttachedFlag : 1; 
	char bFireEventsWhenForwards : 1; 
	char bFireEventsWhenBackwards : 1; 
	char bFireEventsWhenJumpingForwards : 1; 
};

// Class Engine.InterpTrackVectorMaterialParam
struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; 
	struct FName ParamName; 
};

// Class Engine.InterpTrackVectorProp
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	struct FName PropertyName; 
};

// Class Engine.InterpTrackVisibility
struct UInterpTrackVisibility : UInterpTrack {
	struct TArray<struct FVisibilityTrackKey> VisibilityTrack; 
	char bFireEventsWhenForwards : 1; 
	char bFireEventsWhenBackwards : 1; 
	char bFireEventsWhenJumpingForwards : 1; 
};

// Class Engine.IntSerialization
struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; 
	uint32_t UnsignedInt32Variable; 
	uint64_t UnsignedInt64Variable; 
	int8_t SignedInt8Variable; 
	int16_t SignedInt16Variable; 
	int64_t SignedInt64Variable; 
	char UnsignedInt8Variable; 
	int32_t SignedInt32Variable; 
};

// Class Engine.KillZVolume
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.KismetArrayLibrary
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void SetArrayPropertyByName(struct UObject* Object, struct FName PropertyName, struct TArray<int32_t>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void FilterArray(struct TArray<struct AActor*>& TargetArray, struct AActor* FilterClass, struct TArray<struct AActor*>& FilteredArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Swap(struct TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Shuffle(struct TArray<int32_t>& TargetArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Set(struct TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Reverse(struct TArray<int32_t>& TargetArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Resize(struct TArray<int32_t>& TargetArray, int32_t Size); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Array_RemoveItem(struct TArray<int32_t>& TargetArray, int32_t& Item); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Remove(struct TArray<int32_t>& TargetArray, int32_t IndexToRemove); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_RandomFromStream(struct TArray<int32_t>& TargetArray, struct FRandomStream& RandomStream, int32_t& OutItem, int32_t& OutIndex); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Array_Random(struct TArray<int32_t>& TargetArray, int32_t& OutItem, int32_t& OutIndex); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t Array_Length(struct TArray<int32_t>& TargetArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t Array_LastIndex(struct TArray<int32_t>& TargetArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Array_IsValidIndex(struct TArray<int32_t>& TargetArray, int32_t IndexToTest); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Array_Insert(struct TArray<int32_t>& TargetArray, int32_t& NewItem, int32_t Index); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool Array_Identical(struct TArray<int32_t>& ArrayA, struct TArray<int32_t>& ArrayB); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Array_Get(struct TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t Array_Find(struct TArray<int32_t>& TargetArray, int32_t& ItemToFind); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Array_Contains(struct TArray<int32_t>& TargetArray, int32_t& ItemToFind); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void Array_Clear(struct TArray<int32_t>& TargetArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void Array_Append(struct TArray<int32_t>& TargetArray, struct TArray<int32_t>& SourceArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t Array_AddUnique(struct TArray<int32_t>& TargetArray, int32_t& NewItem); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t Array_Add(struct TArray<int32_t>& TargetArray, int32_t& NewItem); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.KismetGuidLibrary
struct UKismetGuidLibrary : UBlueprintFunctionLibrary {

	void Parse_StringToGuid(struct FString GuidString, struct FGuid& OutGuid, bool& Success); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_GuidGuid(struct FGuid& A, struct FGuid& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FGuid NewGuid(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValid_Guid(struct FGuid& InGuid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Invalidate_Guid(struct FGuid& InGuid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool EqualEqual_GuidGuid(struct FGuid& A, struct FGuid& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_GuidToString(struct FGuid& InGuid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class Engine.KismetInputLibrary
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	bool PointerEvent_IsTouchEvent(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool PointerEvent_IsMouseButtonDown(struct FPointerEvent& Input, struct FKey MouseButton); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float PointerEvent_GetWheelDelta(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t PointerEvent_GetUserIndex(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t PointerEvent_GetTouchpadIndex(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FVector2D PointerEvent_GetScreenSpacePosition(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t PointerEvent_GetPointerIndex(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FVector2D PointerEvent_GetLastScreenSpacePosition(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class ESlateGesture PointerEvent_GetGestureType(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FVector2D PointerEvent_GetGestureDelta(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FKey PointerEvent_GetEffectingButton(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FVector2D PointerEvent_GetCursorDelta(struct FPointerEvent& Input); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Key_IsVectorAxis(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsValid(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsMouseButton(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsModifierKey(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsKeyboardKey(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsGamepadKey(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsDigital(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsButtonAxis(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsAxis3D(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsAxis2D(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsAxis1D(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool Key_IsAnalog(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EUINavigation Key_GetNavigationDirectionFromKey(struct FKeyEvent& InKeyEvent); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EUINavigation Key_GetNavigationDirectionFromAnalog(struct FAnalogInputEvent& InAnalogEvent); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EUINavigationAction Key_GetNavigationActionFromKey(struct FKeyEvent& InKeyEvent); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EUINavigationAction Key_GetNavigationAction(struct FKey& InKey); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText Key_GetDisplayName(struct FKey& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsShiftDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsRightShiftDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsRightControlDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsRightCommandDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsRightAltDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsRepeat(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsLeftShiftDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsLeftControlDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsLeftCommandDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsLeftAltDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsControlDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsCommandDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool InputEvent_IsAltDown(struct FInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText InputChord_GetDisplayName(struct FInputChord& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetUserIndex(struct FKeyEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FKey GetKey(struct FKeyEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float GetAnalogValue(struct FAnalogInputEvent& Input); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_KeyKey(struct FKey A, struct FKey B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_InputChordInputChord(struct FInputChord A, struct FInputChord B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void CalibrateTilt(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.KismetInternationalizationLibrary
struct UKismetInternationalizationLibrary : UBlueprintFunctionLibrary {

	bool SetCurrentLocale(struct FString Culture, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
	bool SetCurrentLanguageAndLocale(struct FString Culture, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
	bool SetCurrentLanguage(struct FString Culture, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
	bool SetCurrentCulture(struct FString Culture, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
	bool SetCurrentAssetGroupCulture(struct FName AssetGroup, struct FString Culture, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetSuitableCulture(struct TArray<struct FString>& AvailableCultures, struct FString CultureToMatch, struct FString FallbackCulture); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString GetNativeCulture(enum class ELocalizedTextSourceCategory TextCategory); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCurrentLocale(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCurrentLanguage(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCurrentCulture(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCurrentAssetGroupCulture(struct FName AssetGroup); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetCultureDisplayName(struct FString Culture, bool Localized); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ClearCurrentAssetGroupCulture(struct FName AssetGroup, bool SaveToConfig); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.KismetMaterialLibrary
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, struct FLinearColor& ParameterValue); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, float ParameterValue); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct FLinearColor GetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	float GetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(struct UObject* WorldContextObject, struct UMaterialInterface* Parent, struct FName OptionalName, enum class EMIDCreationFlags CreationFlags); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
};

// Class Engine.KismetMathLibrary
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	int32_t Xor_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Xor_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Wrap(int32_t Value, int32_t Min, int32_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector WeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float Weight); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator WeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float Weight); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float VSizeXYSquared(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float VSizeXY(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float VSizeSquared(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float VSize2DSquared(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float VSize2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float VSize(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector VLerp(struct FVector A, struct FVector B, float Alpha); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector VInterpTo_Constant(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector VectorSpringInterp(struct FVector Current, struct FVector Target, struct FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector Vector_Zero(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Up(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector_UnwindEuler(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector2D Vector_UnitCartesianToSpherical(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ToRadians(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ToDegrees(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_SnappedToGrid(struct FVector InVect, float InGridSize); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector_Set(struct FVector& A, float X, float Y, float Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector Vector_Right(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Reciprocal(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ProjectOnToNormal(struct FVector V, struct FVector InNormal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_One(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_NormalUnsafe(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector_Normalize(struct FVector& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector Vector_Normal2D(struct FVector A, float Tolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_MirrorByPlane(struct FVector A, struct FPlane& InPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Left(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsZero(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsUnit(struct FVector& A, float SquaredLenthTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsUniform(struct FVector& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsNormal(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsNearlyZero(struct FVector& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector_IsNAN(struct FVector& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_HeadingAngle(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_GetSignVector(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_GetProjection(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_GetAbsMin(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_GetAbsMax(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_GetAbs(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Forward(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Down(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_DistanceSquared(struct FVector v1, struct FVector v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_Distance2DSquared(struct FVector v1, struct FVector v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_Distance2D(struct FVector v1, struct FVector v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_Distance(struct FVector v1, struct FVector v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector_CosineAngle2D(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ComponentMin(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ComponentMax(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ClampSizeMax2D(struct FVector A, float Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ClampSizeMax(struct FVector A, float Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_ClampSize2D(struct FVector A, float Min, float Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_BoundedToCube(struct FVector InVect, float InRadius); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_BoundedToBox(struct FVector InVect, struct FVector InBoxMin, struct FVector InBoxMax); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Vector_Backward(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector_Assign(struct FVector& A, struct FVector& InVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void Vector_AddBounded(struct FVector& A, struct FVector InAddVect, float InRadius); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector4 Vector4_Zero(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_SizeSquared3(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_SizeSquared(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_Size3(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_Size(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector4_Set(struct FVector4& A, float X, float Y, float Z, float W); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector4 Vector4_NormalUnsafe3(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector4_Normalize3(struct FVector4& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector4 Vector4_Normal3(struct FVector4& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Vector4_Negated(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Vector4_MirrorByVector3(struct FVector4& Direction, struct FVector4& SurfaceNormal); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector4_IsZero(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector4_IsUnit3(struct FVector4& A, float SquaredLenthTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector4_IsNormal3(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector4_IsNearlyZero3(struct FVector4& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Vector4_IsNAN(struct FVector4& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_DotProduct3(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Vector4_DotProduct(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Vector4_CrossProduct3(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Vector4_Assign(struct FVector4& A, struct FVector4& InVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector2D Vector2DInterpTo_Constant(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Vector2DInterpTo(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Vector2D_Zero(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Vector2D_Unit45Deg(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Vector2D_One(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector VEase(struct FVector A, struct FVector B, float Alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FDateTime UtcNow(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 TransformVector4(struct FMatrix& Matrix, struct FVector4& Vec4); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator TransformRotation(struct FTransform& T, struct FRotator Rotation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector TransformLocation(struct FTransform& T, struct FVector Location); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector TransformDirection(struct FTransform& T, struct FVector Direction); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Transform_Determinant(struct FTransform& Transform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D ToSign2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D ToRounded2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void ToDirectionAndLength2D(struct FVector2D A, struct FVector2D& OutDir, float& OutLength); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FDateTime Today(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform TLerp(struct FTransform& A, struct FTransform& B, float Alpha, enum class ELerpInterpolationMode InterpMode); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform TInterpTo(struct FTransform& Current, struct FTransform& Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan TimespanZeroValue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float TimespanRatio(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan TimespanMinValue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan TimespanMaxValue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool TimespanFromString(struct FString TimespanString, struct FTimespan& Result); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform TEase(struct FTransform& A, struct FTransform& B, float Alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Tan(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Subtract_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Subtract_VectorInt(struct FVector A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Subtract_VectorFloat(struct FVector A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Subtract_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Subtract_Vector2DFloat(struct FVector2D A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan Subtract_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Subtract_QuatQuat(struct FQuat& A, struct FQuat& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Subtract_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Subtract_IntPointInt(struct FIntPoint A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Subtract_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Subtract_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Subtract_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FDateTime Subtract_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan Subtract_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	char Subtract_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Square(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Sqrt(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Spherical2DToUnitCartesian(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Sin(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t SignOfInteger64(int64_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t SignOfInteger(int32_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float SignOfFloat(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void SetRandomStreamSeed(struct FRandomStream& Stream, int32_t NewSeed); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void Set2D(struct FVector2D& A, float X, float Y); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector SelectVector(struct FVector A, struct FVector B, bool bPickA); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform SelectTransform(struct FTransform& A, struct FTransform& B, bool bPickA); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString SelectString(struct FString A, struct FString B, bool bPickA); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FRotator SelectRotator(struct FRotator A, struct FRotator B, bool bPickA); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UObject* SelectObject(struct UObject* A, struct UObject* B, bool bSelectA); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t SelectInt(int32_t A, int32_t B, bool bPickA); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float SelectFloat(float A, float B, bool bPickA); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FLinearColor SelectColor(struct FLinearColor A, struct FLinearColor B, bool bPickA); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UObject* SelectClass(struct UObject* A, struct UObject* B, bool bSelectA); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void SeedRandomStream(struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float SafeDivide(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Round64(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Round(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FRotator RotatorFromAxisAndAngle(struct FVector Axis, float Angle); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RotateAngleAxis(struct FVector InVect, float AngleDeg, struct FVector Axis); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator RInterpTo_Constant(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void RGBToHSV_Vector(struct FLinearColor RGB, struct FLinearColor& HSV); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void RGBToHSV(struct FLinearColor InColor, float& H, float& S, float& V, float& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor RGBLinearToHSV(struct FLinearColor RGB); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void ResetVectorSpringState(struct FVectorSpringState& SpringState); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ResetRandomStream(struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void ResetFloatSpringState(struct FFloatSpringState& SpringState); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FRotator REase(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInEllipticalConeInRadians(struct FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInEllipticalConeInDegrees(struct FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInConeInRadiansFromStream(struct FVector& ConeDir, float ConeHalfAngleInRadians, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInConeInRadians(struct FVector ConeDir, float ConeHalfAngleInRadians); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInConeInDegreesFromStream(struct FVector& ConeDir, float ConeHalfAngleInDegrees, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorInConeInDegrees(struct FVector ConeDir, float ConeHalfAngleInDegrees); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVectorFromStream(struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomUnitVector(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator RandomRotatorFromStream(bool bRoll, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator RandomRotator(bool bRoll); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector RandomPointInBoundingBox(struct FVector Origin, struct FVector BoxExtent); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t RandomIntegerInRange(int32_t Min, int32_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t RandomIntegerFromStream(int32_t Max, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int64_t RandomInteger64InRange(int64_t Min, int64_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t RandomInteger64(int64_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t RandomInteger(int32_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float RandomFloatInRangeFromStream(float Min, float Max, struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float RandomFloatInRange(float Min, float Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float RandomFloatFromStream(struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float RandomFloat(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool RandomBoolWithWeightFromStream(float Weight, struct FRandomStream& RandomStream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool RandomBoolWithWeight(float Weight); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool RandomBoolFromStream(struct FRandomStream& Stream); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool RandomBool(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float RadiansToDegrees(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Quat_VectorUp(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_VectorRight(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_VectorForward(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_UnrotateVector(struct FQuat& Q, struct FVector& V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Quat_SizeSquared(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Quat_Size(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Quat_SetFromEuler(struct FQuat& Q, struct FVector& Euler); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void Quat_SetComponents(struct FQuat& Q, float X, float Y, float Z, float W); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FRotator Quat_Rotator(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_RotateVector(struct FQuat& Q, struct FVector& V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Quat_Normalized(struct FQuat& Q, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Quat_Normalize(struct FQuat& Q, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FQuat Quat_MakeFromEuler(struct FVector& Euler); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Quat_Log(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Quat_IsNormalized(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Quat_IsNonFinite(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Quat_IsIdentity(struct FQuat& Q, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Quat_IsFinite(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Quat_Inversed(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Quat_Identity(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_GetRotationAxis(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_GetAxisZ(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_GetAxisY(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_GetAxisX(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Quat_GetAngle(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Quat_Exp(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Quat_Euler(struct FQuat& Q); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Quat_EnforceShortestArcWith(struct FQuat& A, struct FQuat& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float Quat_AngularDistance(struct FQuat& A, struct FQuat& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector ProjectVectorOnToVector(struct FVector V, struct FVector Target); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector ProjectVectorOnToPlane(struct FVector V, struct FVector PlaneNormal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector ProjectPointOnToPlane(struct FVector Point, struct FVector PlaneBase, struct FVector PlaneNormal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool PointsAreCoplanar(struct TArray<struct FVector>& Points, float Tolerance); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float PerlinNoise1D(float Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Percent_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Percent_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Percent_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Or_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Or_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FDateTime Now(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqualExactly_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqualExactly_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_Vector4Vector4(struct FVector4& A, struct FVector4& B, float ErrorTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_QuatQuat(struct FQuat& A, struct FQuat& B, float ErrorTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_ObjectObject(struct UObject* A, struct UObject* B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_NameName(struct FName A, struct FName B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_MatrixMatrix(struct FMatrix& A, struct FMatrix& B, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_ClassClass(struct UObject* A, struct UObject* B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_BoolBool(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Not_PreBool(bool A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Not_Int64(int64_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Not_Int(int32_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector2D NormalSafe2D(struct FVector2D A, float Tolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float NormalizeToRange(float Value, float RangeMin, float RangeMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FRotator NormalizedDeltaRotator(struct FRotator A, struct FRotator B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float NormalizeAxis(float Angle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void Normalize2D(struct FVector2D& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector2D Normal2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Normal(struct FVector A, float Tolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector NegateVector(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator NegateRotator(struct FRotator A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Negated2D(struct FVector2D& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NearlyEqual_TransformTransform(struct FTransform& A, struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float MultiplyMultiply_FloatFloat(float Base, float Exp); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float MultiplyByPi(float Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Multiply_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Multiply_VectorInt(struct FVector A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Multiply_VectorFloat(struct FVector A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Multiply_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Multiply_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan Multiply_TimespanFloat(struct FTimespan A, float Scalar); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Multiply_RotatorInt(struct FRotator A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Multiply_RotatorFloat(struct FRotator A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Multiply_QuatQuat(struct FQuat& A, struct FQuat& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Multiply_MatrixMatrix(struct FMatrix& A, struct FMatrix& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Multiply_MatrixFloat(struct FMatrix& A, float B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Multiply_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Multiply_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Multiply_IntPointInt(struct FIntPoint A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Multiply_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Multiply_IntFloat(int32_t A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Multiply_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Multiply_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Multiply_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void MinOfIntArray(struct TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void MinOfFloatArray(struct TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void MinOfByteArray(struct TArray<char>& ByteArray, int32_t& IndexOfMinValue, char& MinValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int64_t MinInt64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void MinimumAreaRectangle(struct UObject* WorldContextObject, struct TArray<struct FVector>& InVerts, struct FVector& SampleSurfaceNormal, struct FVector& OutRectCenter, struct FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t Min(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void MaxOfIntArray(struct TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void MaxOfFloatArray(struct TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void MaxOfByteArray(struct TArray<char>& ByteArray, int32_t& IndexOfMaxValue, char& MaxValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int64_t MaxInt64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Max(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector4 Matrix_TransformVector4(struct FMatrix& M, struct FVector4 V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Matrix_TransformVector(struct FMatrix& M, struct FVector V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Matrix_TransformPosition(struct FMatrix& M, struct FVector V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Matrix_ToQuat(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Matrix_SetOrigin(struct FMatrix& M, struct FVector NewOrigin); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void Matrix_SetColumn(struct FMatrix& M, enum class EMatrixColumns Column, struct FVector Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void Matrix_SetAxis(struct FMatrix& M, enum class EAxis Axis, struct FVector AxisVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FMatrix Matrix_ScaleTranslation(struct FMatrix& M, struct FVector Scale3D); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_RemoveTranslation(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Matrix_RemoveScaling(struct FMatrix& M, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FMatrix Matrix_Mirror(struct FMatrix& M, enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_InverseTransformVector(struct FMatrix& M, struct FVector V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_InverseTransformPosition(struct FMatrix& M, struct FVector V); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_Identity(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_GetUnitAxis(struct FMatrix& M, enum class EAxis Axis); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Matrix_GetUnitAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_GetTransposed(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_GetTransposeAdjoint(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_GetScaleVector(struct FMatrix& M, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_GetScaledAxis(struct FMatrix& M, enum class EAxis Axis); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Matrix_GetScaledAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Matrix_GetRotDeterminant(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Matrix_GetRotator(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_GetOrigin(struct FMatrix& InMatrix); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Matrix_GetMaximumAxisScale(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_GetMatrixWithoutScale(struct FMatrix& M, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_GetInverse(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumTopPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumRightPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumNearPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumLeftPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumFarPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_GetFrustumBottomPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float Matrix_GetDeterminant(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Matrix_GetColumn(struct FMatrix& M, enum class EMatrixColumns Column); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Matrix_ContainsNaN(struct FMatrix& M); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_ConcatenateTranslation(struct FMatrix& M, struct FVector Translation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Matrix_ApplyScale(struct FMatrix& M, float Scale); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector4 MakeVector4(float X, float Y, float Z, float W); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D MakeVector2D(float X, float Y); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector MakeVector(float X, float Y, float Z); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform MakeTransform(struct FVector Location, struct FRotator Rotation, struct FVector Scale); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromZY(struct FVector& Z, struct FVector& Y); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromZX(struct FVector& Z, struct FVector& X); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromZ(struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromYZ(struct FVector& Y, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromYX(struct FVector& Y, struct FVector& X); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromY(struct FVector& Y); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromXZ(struct FVector& X, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromXY(struct FVector& X, struct FVector& Y); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotFromX(struct FVector& X); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotator(float Roll, float Pitch, float Yaw); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator MakeRotationFromAxes(struct FVector Forward, struct FVector Right, struct FVector Up); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform MakeRelativeTransform(struct FTransform& A, struct FTransform& RelativeTo); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRandomStream MakeRandomStream(int32_t InitialSeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQualifiedFrameTime MakeQualifiedFrameTime(struct FFrameNumber Frame, struct FFrameRate FrameRate, float SubFrame); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FPlane MakePlaneFromPointAndNormal(struct FVector Point, struct FVector Normal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FFrameRate MakeFrameRate(int32_t Numerator, int32_t Denominator); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FDateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor MakeColor(float R, float G, float B, float A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FBox2D MakeBox2D(struct FVector2D Min, struct FVector2D Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FBox MakeBox(struct FVector Min, struct FVector Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Loge(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Log(float A, float Base); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LinePlaneIntersection_OriginNormal(struct FVector& LineStart, struct FVector& LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, float& T, struct FVector& Intersection); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool LinePlaneIntersection(struct FVector& LineStart, struct FVector& LineEnd, struct FPlane& APlane, float& T, struct FVector& Intersection); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColorLerpUsingHSV(struct FLinearColor A, struct FLinearColor B, float Alpha); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColorLerp(struct FLinearColor A, struct FLinearColor B, float Alpha); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Yellow(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_White(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Transparent(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FColor LinearColor_ToRGBE(struct FLinearColor InLinearColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_ToNewOpacity(struct FLinearColor InColor, float InOpacity); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void LinearColor_SetTemperature(struct FLinearColor& InOutColor, float InTemperature); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_SetRGBA(struct FLinearColor& InOutColor, float R, float G, float B, float A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_SetRandomHue(struct FLinearColor& InOutColor); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_SetFromSRGB(struct FLinearColor& InOutColor, struct FColor& InSRGB); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_SetFromPow22(struct FLinearColor& InOutColor, struct FColor& InColor); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_SetFromHSV(struct FLinearColor& InOutColor, float H, float S, float V, float A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LinearColor_Set(struct FLinearColor& InOutColor, struct FLinearColor InColor); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FLinearColor LinearColor_Red(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FColor LinearColor_QuantizeRound(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FColor LinearColor_Quantize(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool LinearColor_IsNearEqual(struct FLinearColor A, struct FLinearColor B, float Tolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Green(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Gray(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float LinearColor_GetMin(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float LinearColor_GetMax(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float LinearColor_GetLuminance(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float LinearColor_Distance(struct FLinearColor C1, struct FLinearColor C2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Desaturated(struct FLinearColor InColor, float InDesaturation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Blue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor LinearColor_Black(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool LessEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool LessEqual_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LessEqual_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LessEqual_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LessEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool LessEqual_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Less_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Less_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Less_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Less_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Less_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Less_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Lerp(float A, float B, float Alpha); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsZero2D(struct FVector2D& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsPointInBoxWithTransform(struct FVector Point, struct FTransform& BoxWorldTransform, struct FVector BoxExtent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsPointInBox(struct FVector Point, struct FVector BoxOrigin, struct FVector BoxExtent); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsNearlyZero2D(struct FVector2D& A, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsMorning(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsLeapYear(int32_t Year); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsAfternoon(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform InvertTransform(struct FTransform& T); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator InverseTransformRotation(struct FTransform& T, struct FRotator Rotation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector InverseTransformLocation(struct FTransform& T, struct FVector Location); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector InverseTransformDirection(struct FTransform& T, struct FVector Direction); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_Zero(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_Up(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_Right(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_One(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_Left(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint IntPoint_Down(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool InRange_Int64Int64(int64_t Value, int64_t Min, int64_t Max, bool InclusiveMin, bool InclusiveMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Hypotenuse(float Width, float Height); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FLinearColor HSVToRGBLinear(struct FLinearColor HSV); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void HSVToRGB_Vector(struct FLinearColor HSV, struct FLinearColor& RGB); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor HSVToRGB(float H, float S, float V, float A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GridSnap_Float(float Location, float GridSize); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool GreaterEqual_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Greater_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Greater_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Greater_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Greater_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Greater_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool Greater_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetYear(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void GetYawPitchFromVector(struct FVector InVec, float& Yaw, float& Pitch); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetVectorArrayAverage(struct TArray<struct FVector>& Vectors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetUpVector(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTotalSeconds(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTotalMinutes(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTotalMilliseconds(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTotalHours(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTotalDays(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan GetTimeOfDay(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetTAU(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetSlopeDegreeAngles(struct FVector& MyRightYAxis, struct FVector& FloorNormal, struct FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetSeconds(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetSecond(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetRotated2D(struct FVector2D A, float AngleDeg); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetRightVector(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetReflectionVector(struct FVector Direction, struct FVector SurfaceNormal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetPointDistanceToSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetPointDistanceToLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetPI(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetMonth(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetMinutes(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetMinute(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetMinElement(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetMin2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetMilliseconds(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetMillisecond(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetMaxElement(struct FVector A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetMax2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetHours(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetHour12(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetHour(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetForwardVector(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan GetDuration(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetDirectionUnitVector(struct FVector From, struct FVector To); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetDays(struct FTimespan A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetDayOfYear(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetDay(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FDateTime GetDate(struct FDateTime A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void GetAzimuthAndElevation(struct FVector InDirection, struct FTransform& ReferenceFrame, float& Azimuth, float& Elevation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetAbsMax2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetAbs2D(struct FVector2D A); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float FWrap(float Value, float Min, float Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FIntVector FTruncVector(struct FVector& InVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int64_t FTrunc64(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t FTrunc(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTimespan FromSeconds(float Seconds); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan FromMinutes(float Minutes); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan FromMilliseconds(float Milliseconds); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan FromHours(float Hours); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan FromDays(float Days); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Fraction(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t FMod(float Dividend, float Divisor, float& Remainder); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float FMin(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FMax(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FloatSpringInterp(float Current, float Target, struct FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	float FixedTurn(float InCurrent, float InDesired, float InDeltaRate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FInterpEaseInOut(float A, float B, float Alpha, float Exponent); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void FindNearestPointsOnLineSegments(struct FVector Segment1Start, struct FVector Segment1End, struct FVector Segment2Start, struct FVector Segment2End, struct FVector& Segment1Point, struct FVector& Segment2Point); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator FindLookAtRotation(struct FVector& Start, struct FVector& Target); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector FindClosestPointOnSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector FindClosestPointOnLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int64_t FFloor64(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t FFloor(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float FClamp(float Value, float Min, float Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t FCeil64(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t FCeil(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Exp(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualExactly_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualExactly_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_Vector4Vector4(struct FVector4& A, struct FVector4& B, float ErrorTolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_TransformTransform(struct FTransform& A, struct FTransform& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_QuatQuat(struct FQuat& A, struct FQuat& B, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_ObjectObject(struct UObject* A, struct UObject* B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_NameName(struct FName A, struct FName B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_MatrixMatrix(struct FMatrix& A, struct FMatrix& B, float Tolerance); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_ClassClass(struct UObject* A, struct UObject* B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_BoolBool(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Equal_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Ease(float A, float B, float Alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector DynamicWeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator DynamicWeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DotProduct2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Dot_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Divide_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Divide_VectorInt(struct FVector A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Divide_VectorFloat(struct FVector A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Divide_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Divide_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan Divide_TimespanFloat(struct FTimespan A, float Scalar); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Divide_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Divide_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Divide_IntPointInt(struct FIntPoint A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Divide_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Divide_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Divide_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Divide_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DistanceSquared2D(struct FVector2D v1, struct FVector2D v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Distance2D(struct FVector2D v1, struct FVector2D v2); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float DegTan(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegSin(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegreesToRadians(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegCos(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegAtan2(float Y, float X); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegAtan(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegAsin(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float DegAcos(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t DaysInYear(int32_t Year); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t DaysInMonth(int32_t Year, int32_t Month); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FDateTime DateTimeMinValue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FDateTime DateTimeMaxValue(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool DateTimeFromString(struct FString DateTimeString, struct FDateTime& Result); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool DateTimeFromIsoString(struct FString IsoString, struct FDateTime& Result); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float CrossProduct2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Cross_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float Cos(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTransform ConvertTransformToRelative(struct FTransform& Transform, struct FTransform& ParentTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Conv_VectorToVector2D(struct FVector InVector); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform Conv_VectorToTransform(struct FVector InLocation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Conv_VectorToRotator(struct FVector InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Conv_VectorToQuaternion(struct FVector InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Conv_VectorToLinearColor(struct FVector InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Conv_Vector4ToVector(struct FVector4& InVector4); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Conv_Vector4ToRotator(struct FVector4& InVec); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Conv_Vector4ToQuaternion(struct FVector4& InVec); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Conv_Vector2DToVector(struct FVector2D InVector2D, float Z); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Conv_Vector2DToIntPoint(struct FVector2D InVector2D); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Conv_TransformToMatrix(struct FTransform& Transform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Conv_RotatorToVector(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform Conv_RotatorToTransform(struct FRotator& InRotator); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform Conv_MatrixToTransform(struct FMatrix& InMatrix); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator Conv_MatrixToRotator(struct FMatrix& InMatrix); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Conv_LinearColorToVector(struct FLinearColor InLinearColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FColor Conv_LinearColorToColor(struct FLinearColor InLinearColor, bool InUseSRGB); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Conv_IntVectorToVector(struct FIntVector& InIntVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntVector Conv_IntToIntVector(int32_t inInt); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int64_t Conv_IntToInt64(int32_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Conv_IntToFloat(int32_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Conv_IntToByte(int32_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Conv_IntToBool(int32_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector2D Conv_IntPointToVector2D(struct FIntPoint InIntPoint); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Conv_Int64ToInt(int64_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Conv_Int64ToByte(int64_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Conv_FloatToVector(float InFloat); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Conv_FloatToLinearColor(float InFloat); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Conv_ColorToLinearColor(struct FColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Conv_ByteToInt(char InByte); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Conv_ByteToFloat(char InByte); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Conv_BoolToInt(bool InBool); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Conv_BoolToFloat(bool InBool); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char Conv_BoolToByte(bool InBool); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTransform ComposeTransforms(struct FTransform& A, struct FTransform& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator ComposeRotators(struct FRotator A, struct FRotator B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool ClassIsChildOf(struct UObject* TestClass, struct UObject* ParentClass); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector ClampVectorSize(struct FVector A, float Min, float Max); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int64_t ClampInt64(int64_t Value, int64_t Min, int64_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float ClampAxis(float Angle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector2D ClampAxes2D(struct FVector2D A, float MinAxisVal, float MaxAxisVal); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Clamp(int32_t Value, int32_t Min, int32_t Max); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FLinearColor CInterpTo(struct FLinearColor Current, struct FLinearColor Target, float DeltaTime, float InterpSpeed); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakVector4(struct FVector4& InVec, float& X, float& Y, float& Z, float& W); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakVector2D(struct FVector2D InVec, float& X, float& Y); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakVector(struct FVector InVec, float& X, float& Y, float& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakTransform(struct FTransform& InTransform, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakTimespan2(struct FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& FractionNano); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakTimespan(struct FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& Milliseconds); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakRotIntoAxes(struct FRotator& InRot, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakRotator(struct FRotator InRot, float& Roll, float& Pitch, float& Yaw); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakRandomStream(struct FRandomStream& InRandomStream, int32_t& InitialSeed); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakQualifiedFrameTime(struct FQualifiedFrameTime& InFrameTime, struct FFrameNumber& Frame, struct FFrameRate& FrameRate, float& SubFrame); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakFrameRate(struct FFrameRate& InFrameRate, int32_t& Numerator, int32_t& Denominator); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void BreakDateTime(struct FDateTime InDateTime, int32_t& Year, int32_t& Month, int32_t& Day, int32_t& Hour, int32_t& Minute, int32_t& Second, int32_t& Millisecond); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakColor(struct FLinearColor InColor, float& R, float& G, float& B, float& A); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool BooleanXOR(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool BooleanOR(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool BooleanNOR(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool BooleanNAND(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool BooleanAND(bool A, bool B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char BMin(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char BMax(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Atan2(float Y, float X); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Atan(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Asin(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t And_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t And_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector Add_VectorVector(struct FVector A, struct FVector B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Add_VectorInt(struct FVector A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector Add_VectorFloat(struct FVector A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector4 Add_Vector4Vector4(struct FVector4& A, struct FVector4& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D Add_Vector2DFloat(struct FVector2D A, float B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTimespan Add_TimespanTimespan(struct FTimespan A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FQuat Add_QuatQuat(struct FQuat& A, struct FQuat& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FMatrix Add_MatrixMatrix(struct FMatrix& A, struct FMatrix& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FLinearColor Add_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Add_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FIntPoint Add_IntPointInt(struct FIntPoint A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t Add_IntInt(int32_t A, int32_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Add_Int64Int64(int64_t A, int64_t B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Add_FloatFloat(float A, float B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FDateTime Add_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FDateTime Add_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	char Add_ByteByte(char A, char B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Acos(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t Abs_Int64(int64_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Abs_Int(int32_t A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Abs(float A); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.KismetNodeHelperLibrary
struct UKismetNodeHelperLibrary : UBlueprintFunctionLibrary {

	void MarkBit(int32_t& Data, int32_t Index); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool HasUnmarkedBit(int32_t Data, int32_t NumBits); // (Final|Native|Static|Public|BlueprintCallable)
	bool HasMarkedBit(int32_t Data, int32_t NumBits); // (Final|Native|Static|Public|BlueprintCallable)
	char GetValidValue(struct UEnum* Enum, char EnumeratorValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // (Final|Native|Static|Public|BlueprintCallable)
	char GetEnumeratorValueFromIndex(struct UEnum* Enum, char EnumeratorIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetEnumeratorUserFriendlyName(struct UEnum* Enum, char EnumeratorValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName GetEnumeratorName(struct UEnum* Enum, char EnumeratorValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ClearBit(int32_t& Data, int32_t Index); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ClearAllBits(int32_t& Data); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool BitIsMarked(int32_t Data, int32_t Index); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.KismetRenderingLibrary
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	void SetCastInsetShadowForAllAttachments(struct UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(struct UTextureRenderTarget2D* RenderTarget, struct FString Name, enum class TextureCompressionSettings CompressionSettings, enum class TextureMipGenSettings MipSettings); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void ReleaseRenderTarget2D(struct UTextureRenderTarget2D* TextureRenderTarget); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct FColor ReadRenderTargetUV(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, float U, float V); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FLinearColor ReadRenderTargetRawUV(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, float U, float V); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FLinearColor ReadRenderTargetRawPixel(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FColor ReadRenderTargetPixel(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, char Weight0, int32_t Bone1, char Weight1, int32_t Bone2, char Weight2, int32_t Bone3, char Weight3); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UTexture2D* ImportFileAsTexture2D(struct UObject* WorldContextObject, struct FString Filename); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct UTexture2D* ImportBufferAsTexture2D(struct UObject* WorldContextObject, struct TArray<char>& Buffer); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ExportTexture2D(struct UObject* WorldContextObject, struct UTexture2D* Texture, struct FString FilePath, struct FString Filename); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void ExportRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct FString FilePath, struct FString Filename); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void EndDrawCanvasToRenderTarget(struct UObject* WorldContextObject, struct FDrawToRenderTargetContext& Context); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable)
	void DrawMaterialToRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct UMaterialInterface* Material); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct UTextureRenderTargetVolume* CreateRenderTargetVolume(struct UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, enum class ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UTextureRenderTarget2DArray* CreateRenderTarget2DArray(struct UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, enum class ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UTextureRenderTarget2D* CreateRenderTarget2D(struct UObject* WorldContextObject, int32_t Width, int32_t Height, enum class ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	void ConvertRenderTargetToTexture2DEditorOnly(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* RenderTarget, struct UTexture2D* Texture); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void ClearRenderTarget2D(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct FLinearColor ClearColor); // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable)
	void BreakSkinWeightInfo(struct FSkelMeshSkinWeightInfo InWeight, int32_t& Bone0, char& Weight0, int32_t& Bone1, char& Weight1, int32_t& Bone2, char& Weight2, int32_t& Bone3, char& Weight3); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void BeginDrawCanvasToRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct UCanvas*& Canvas, struct FVector2D& Size, struct FDrawToRenderTargetContext& Context); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.KismetStringLibrary
struct UKismetStringLibrary : UBlueprintFunctionLibrary {

	struct FString TrimTrailing(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Trim(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ToUpper(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ToLower(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString TimeSecondsToString(float InSeconds); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool StartsWith(struct FString SourceString, struct FString InPrefix, enum class ESearchCase SearchCase); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Split(struct FString SourceString, struct FString InStr, struct FString& LeftS, struct FString& RightS, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString RightPad(struct FString SourceString, int32_t ChCount); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString RightChop(struct FString SourceString, int32_t Count); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Right(struct FString SourceString, int32_t Count); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Reverse(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t ReplaceInline(struct FString& SourceString, struct FString SearchText, struct FString ReplacementText, enum class ESearchCase SearchCase); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FString Replace(struct FString SourceString, struct FString From, struct FString To, enum class ESearchCase SearchCase); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_StrStr(struct FString A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_StriStri(struct FString A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Mid(struct FString SourceString, int32_t Start, int32_t Count); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool MatchesWildcard(struct FString SourceString, struct FString Wildcard, enum class ESearchCase SearchCase); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Len(struct FString S); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString LeftPad(struct FString SourceString, int32_t ChCount); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString LeftChop(struct FString SourceString, int32_t Count); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Left(struct FString SourceString, int32_t Count); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString JoinStringArray(struct TArray<struct FString>& SourceArray, struct FString Separator); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsNumeric(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsEmpty(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetCharacterAsNumber(struct FString SourceString, int32_t Index); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetCharacterArrayFromString(struct FString SourceString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_StrStr(struct FString A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_StriStri(struct FString A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EndsWith(struct FString SourceString, struct FString InSuffix, enum class ESearchCase SearchCase); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t CullArray(struct FString SourceString, struct TArray<struct FString>& inArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString Conv_VectorToString(struct FVector InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_Vector2dToString(struct FVector2D InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_TransformToString(struct FTransform& InTrans); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Conv_StringToVector2D(struct FString inString, struct FVector2D& OutConvertedVector2D, bool& OutIsValid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Conv_StringToVector(struct FString inString, struct FVector& OutConvertedVector, bool& OutIsValid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void Conv_StringToRotator(struct FString inString, struct FRotator& OutConvertedRotator, bool& OutIsValid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FName Conv_StringToName(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t Conv_StringToInt(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float Conv_StringToFloat(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void Conv_StringToColor(struct FString inString, struct FLinearColor& OutConvertedColor, bool& OutIsValid); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_RotatorToString(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_ObjectToString(struct UObject* InObj); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Conv_NameToString(struct FName InName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Conv_MatrixToString(struct FMatrix& InMatrix); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_IntVectorToString(struct FIntVector InIntVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_IntToString(int32_t inInt); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Conv_IntPointToString(struct FIntPoint InIntPoint); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_FloatToString(float InFloat); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Conv_ColorToString(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_ByteToString(char InByte); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Conv_BoolToString(bool InBool); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool Contains(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString Concat_StrStr(struct FString A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, struct FVector2D InVector2D, struct FString Suffix); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Vector(struct FString AppendTo, struct FString Prefix, struct FVector InVector, struct FString Suffix); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Rotator(struct FString AppendTo, struct FString Prefix, struct FRotator InRot, struct FString Suffix); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Object(struct FString AppendTo, struct FString Prefix, struct UObject* InObj, struct FString Suffix); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BuildString_IntVector(struct FString AppendTo, struct FString Prefix, struct FIntVector InIntVector, struct FString Suffix); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t inInt, struct FString Suffix); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Color(struct FString AppendTo, struct FString Prefix, struct FLinearColor InColor, struct FString Suffix); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.KismetStringTableLibrary
struct UKismetStringTableLibrary : UBlueprintFunctionLibrary {

	bool IsRegisteredTableId(struct FName TableId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsRegisteredTableEntry(struct FName TableId, struct FString Key); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetTableNamespace(struct FName TableId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetTableEntrySourceString(struct FName TableId, struct FString Key); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetTableEntryMetaData(struct FName TableId, struct FString Key, struct FName MetaDataId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FName> GetRegisteredStringTables(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FName> GetMetaDataIdsFromStringTableEntry(struct FName TableId, struct FString Key); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetKeysFromStringTable(struct FName TableId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.KismetSystemLibrary
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void UnregisterForRemoteNotifications(); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadPrimaryAssetList(struct TArray<struct FPrimaryAssetId>& PrimaryAssetIdList); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void UnloadPrimaryAsset(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void TransactObject(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable)
	void StackTrace(); // (Final|Native|Static|Public|BlueprintCallable)
	bool SphereTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereOverlapComponents(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SphereOverlapActors(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SnapshotObject(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable)
	void ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName); // (Final|Native|Static|Public|BlueprintCallable)
	void ShowPlatformSpecificAchievementsScreen(struct APlayerController* SpecificPlayer); // (Final|Native|Static|Public|BlueprintCallable)
	void ShowInterstitialAd(); // (Final|Native|Static|Public|BlueprintCallable)
	void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen); // (Final|Native|Static|Public|BlueprintCallable)
	void SetWindowTitle(struct FText& Title); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetVolumeButtonsHandledBySystem(bool bEnabled); // (Final|Native|Static|Public|BlueprintCallable)
	void SetVectorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FVector& Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetUserActivity(struct FUserActivity& UserActivity); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetTransformPropertyByName(struct UObject* Object, struct FName PropertyName, struct FTransform& Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetTextPropertyByName(struct UObject* Object, struct FName PropertyName, struct FText& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetSuppressViewportTransitionMessage(struct UObject* WorldContextObject, bool bState); // (Final|Native|Static|Public|BlueprintCallable)
	void SetStructurePropertyByName(struct UObject* Object, struct FName PropertyName, struct FGenericStruct& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetStringPropertyByName(struct UObject* Object, struct FName PropertyName, struct FString Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSoftObjectPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSoftObjectPtr<UObject>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetSoftClassPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSoftClassPtr<UObject>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetRotatorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FRotator& Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetObjectPropertyByName(struct UObject* Object, struct FName PropertyName, struct UObject* Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetNamePropertyByName(struct UObject* Object, struct FName PropertyName, struct FName& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetLinearColorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FLinearColor& Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetIntPropertyByName(struct UObject* Object, struct FName PropertyName, int32_t Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetInterfacePropertyByName(struct UObject* Object, struct FName PropertyName, struct TScriptInterface<IInterface>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetInt64PropertyByName(struct UObject* Object, struct FName PropertyName, int64_t Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetGamepadsBlockDeviceFeedback(bool bBlock); // (Final|Native|Static|Public|BlueprintCallable)
	void SetFloatPropertyByName(struct UObject* Object, struct FName PropertyName, float Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetFieldPathPropertyByName(struct UObject* Object, struct FName PropertyName, struct TFieldPath<FField>& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetColorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FColor& Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetCollisionProfileNameProperty(struct UObject* Object, struct FName PropertyName, struct FCollisionProfileName& Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetClassPropertyByName(struct UObject* Object, struct FName PropertyName, struct UObject* Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetBytePropertyByName(struct UObject* Object, struct FName PropertyName, char Value); // (Final|Native|Static|Public|BlueprintCallable)
	void SetBoolPropertyByName(struct UObject* Object, struct FName PropertyName, bool Value); // (Final|Native|Static|Public|BlueprintCallable)
	void RetriggerableDelay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	void ResetGamepadAssignmentToController(int32_t ControllerId); // (Final|Native|Static|Public|BlueprintCallable)
	void ResetGamepadAssignments(); // (Final|Native|Static|Public|BlueprintCallable)
	void RegisterForRemoteNotifications(); // (Final|Native|Static|Public|BlueprintCallable)
	void QuitGame(struct UObject* WorldContextObject, struct APlayerController* SpecificPlayer, enum class EQuitPreference QuitPreference, bool bIgnorePlatformRestrictions); // (Final|Native|Static|Public|BlueprintCallable)
	void PrintWarning(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable)
	void PrintText(struct UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void PrintString(struct UObject* WorldContextObject, struct FString inString, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	bool ParseParamValue(struct FString inString, struct FString InParam, struct FString& OutValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool ParseParam(struct FString inString, struct FString InParam); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void ParseCommandLine(struct FString InCmdLine, struct TArray<struct FString>& OutTokens, struct TArray<struct FString>& OutSwitches, struct TMap<struct FString, struct FString>& OutParams); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void OnAssetLoaded__DelegateSignature(struct UObject* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // (Public|Delegate) 
	void OnAssetClassLoaded__DelegateSignature(struct UObject* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // (Public|Delegate) 
	bool NotEqual_SoftObjectReference(struct TSoftObjectPtr<UObject>& A, struct TSoftObjectPtr<UObject>& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool NotEqual_SoftClassReference(struct TSoftClassPtr<UObject>& A, struct TSoftClassPtr<UObject>& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool NotEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool NotEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString NormalizeFilename(struct FString InFilename); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void MoveComponentTo(struct USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, enum class EMoveComponentAction MoveAction, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FSoftObjectPath MakeSoftObjectPath(struct FString PathString); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FSoftClassPath MakeSoftClassPath(struct FString PathString); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText MakeLiteralText(struct FText Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString MakeLiteralString(struct FString Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName MakeLiteralName(struct FName Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t MakeLiteralInt(int32_t Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float MakeLiteralFloat(float Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	char MakeLiteralByte(char Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool MakeLiteralBool(bool Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void LoadInterstitialAd(int32_t AdIdIndex); // (Final|Native|Static|Public|BlueprintCallable)
	struct UObject* LoadClassAsset_Blocking(struct TSoftClassPtr<UObject> AssetClass); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadAssetClass(struct UObject* WorldContextObject, struct TSoftClassPtr<UObject> AssetClass, struct FDelegate OnLoaded, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	struct UObject* LoadAsset_Blocking(struct TSoftObjectPtr<UObject> Asset); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadAsset(struct UObject* WorldContextObject, struct TSoftObjectPtr<UObject> Asset, struct FDelegate OnLoaded, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	bool LineTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool LineTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool LineTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool LineTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool LineTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool LineTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void LaunchURL(struct FString URL); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_UnPauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_UnPauseTimerDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_UnPauseTimer(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable)
	bool K2_TimerExistsHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_TimerExistsDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_TimerExists(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTimerHandle K2_SetTimerDelegate(struct FDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // (Final|Native|Static|Public|BlueprintCallable)
	struct FTimerHandle K2_SetTimer(struct UObject* Object, struct FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_PauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_PauseTimerDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_PauseTimer(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable)
	bool K2_IsValidTimerHandle(struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerPausedHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerPausedDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerPaused(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerActiveHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerActiveDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool K2_IsTimerActive(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle& Handle); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	float K2_GetTimerRemainingTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float K2_GetTimerRemainingTimeDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float K2_GetTimerRemainingTime(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float K2_GetTimerElapsedTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float K2_GetTimerElapsedTimeDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float K2_GetTimerElapsedTime(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void K2_ClearTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_ClearTimerDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_ClearTimer(struct UObject* Object, struct FString FunctionName); // (Final|Native|Static|Public|BlueprintCallable)
	void K2_ClearAndInvalidateTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle& Handle); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool IsValidSoftObjectReference(struct TSoftObjectPtr<UObject>& SoftObjectReference); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsValidSoftClassReference(struct TSoftClassPtr<UObject>& SoftClassReference); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsValidPrimaryAssetType(struct FPrimaryAssetType PrimaryAssetType); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValidPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValidClass(struct UObject* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsValid(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsUnattended(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsStandalone(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsSplitScreen(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsServer(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsScreensaverEnabled(); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsPackagedForDistribution(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsLoggedIn(struct APlayerController* SpecificPlayer); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsInterstitialAdRequested(); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsInterstitialAdAvailable(); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsDedicatedServer(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsControllerAssignedToGamepad(int32_t ControllerId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void HideAdBanner(); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetVolumeButtonsHandledBySystem(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetUniqueDeviceId(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetSystemPath(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetSupportedFullscreenResolutions(struct TArray<struct FIntPoint>& Resolutions); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetRenderingMaterialQualityLevel(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetRenderingDetailMode(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetProjectSavedDirectory(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetProjectDirectory(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetProjectContentDirectory(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetPrimaryAssetsWithBundleState(struct TArray<struct FName>& RequiredBundles, struct TArray<struct FName>& ExcludedBundles, struct TArray<struct FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, struct TArray<struct FPrimaryAssetId>& OutPrimaryAssetIdList); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetPrimaryAssetIdList(struct FPrimaryAssetType PrimaryAssetType, struct TArray<struct FPrimaryAssetId>& OutPrimaryAssetIdList); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(struct TSoftObjectPtr<UObject> SoftObjectReference); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(struct TSoftClassPtr<UObject> SoftClassReference); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FPrimaryAssetId GetPrimaryAssetIdFromObject(struct UObject* Object); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FPrimaryAssetId GetPrimaryAssetIdFromClass(struct UObject* Class); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetPreferredLanguages(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetPlatformUserName(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetPlatformUserDir(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetPathName(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UObject* GetOuterObject(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetObjectName(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UObject* GetObjectFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetMinYResolutionForUI(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetMinYResolutionFor3DView(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetLocalCurrencySymbol(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetLocalCurrencyCode(); // (Final|Native|Static|Public|BlueprintCallable)
	float GetGameTimeInSeconds(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetGamepadControllerName(int32_t ControllerId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UTexture2D* GetGamepadButtonGlyph(struct FString ButtonKey, int32_t ControllerIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetGameName(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetGameBundleId(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int64_t GetFrameCount(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetEngineVersion(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetDisplayName(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetDeviceId(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetDefaultLocale(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetDefaultLanguage(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetCurrentBundleState(struct FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, struct TArray<struct FName>& OutBundles); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool GetConvenientWindowedResolutions(struct TArray<struct FIntPoint>& Resolutions); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t GetConsoleVariableIntValue(struct FString VariableName); // (Final|Native|Static|Public|BlueprintCallable)
	float GetConsoleVariableFloatValue(struct FString VariableName); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetConsoleVariableBoolValue(struct FString VariableName); // (Final|Native|Static|Public|BlueprintCallable)
	void GetComponentBounds(struct USceneComponent* Component, struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString GetCommandLine(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UObject* GetClassFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString GetClassDisplayName(struct UObject* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetAdIDCount(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetActorListFromComponentList(struct TArray<struct UPrimitiveComponent*>& ComponentList, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& OutActorList); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetActorBounds(struct AActor* Actor, struct FVector& Origin, struct FVector& BoxExtent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void ForceCloseAdBanner(); // (Final|Native|Static|Public|BlueprintCallable)
	void FlushPersistentDebugLines(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	void FlushDebugStrings(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	void ExecuteConsoleCommand(struct UObject* WorldContextObject, struct FString Command, struct APlayerController* SpecificPlayer); // (Final|Native|Static|Public|BlueprintCallable)
	bool EqualEqual_SoftObjectReference(struct TSoftObjectPtr<UObject>& A, struct TSoftObjectPtr<UObject>& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_SoftClassReference(struct TSoftClassPtr<UObject>& A, struct TSoftClassPtr<UObject>& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t EndTransaction(); // (Final|Native|Static|Public|BlueprintCallable)
	void DrawDebugString(struct UObject* WorldContextObject, struct FVector TextLocation, struct FString Text, struct AActor* TestBaseActor, struct FLinearColor TextColor, float Duration); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugSphere(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugPoint(struct UObject* WorldContextObject, struct FVector position, float Size, struct FLinearColor PointColor, float Duration); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugPlane(struct UObject* WorldContextObject, struct FPlane& PlaneCoordinates, struct FVector Location, float Size, struct FLinearColor PlaneColor, float Duration); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawDebugLine(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugFrustum(struct UObject* WorldContextObject, struct FTransform& FrustumTransform, struct FLinearColor FrustumColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawDebugFloatHistoryTransform(struct UObject* WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FTransform& DrawTransform, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawDebugFloatHistoryLocation(struct UObject* WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FVector DrawLocation, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawDebugCylinder(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugCoordinateSystem(struct UObject* WorldContextObject, struct FVector AxisLoc, struct FRotator AxisRot, float Scale, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugConeInDegrees(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugCone(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugCircle(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t NumSegments, struct FLinearColor LineColor, float Duration, float Thickness, struct FVector YAxis, struct FVector ZAxis, bool bDrawAxis); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugCapsule(struct UObject* WorldContextObject, struct FVector Center, float HalfHeight, float Radius, struct FRotator Rotation, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugCamera(struct ACameraActor* CameraActor, struct FLinearColor CameraColor, float Duration); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugBox(struct UObject* WorldContextObject, struct FVector Center, struct FVector Extent, struct FLinearColor LineColor, struct FRotator Rotation, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DrawDebugArrow(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, float ArrowSize, struct FLinearColor LineColor, float Duration, float Thickness); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	bool DoesImplementInterface(struct UObject* TestObject, struct UInterface* Interface); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void Delay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // (Final|Native|Static|Public|BlueprintCallable)
	void CreateCopyForUndoBuffer(struct UObject* ObjectToModify); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString ConvertToRelativePath(struct FString Filename); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString ConvertToAbsolutePath(struct FString Filename); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(struct FSoftObjectPath& SoftObjectPath); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_SoftObjectReferenceToString(struct TSoftObjectPtr<UObject>& SoftObjectReference); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UObject* Conv_SoftObjectReferenceToObject(struct TSoftObjectPtr<UObject>& SoftObject); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString Conv_SoftClassReferenceToString(struct TSoftClassPtr<UObject>& SoftClassReference); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UObject* Conv_SoftClassReferenceToClass(struct TSoftClassPtr<UObject>& SoftClass); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(struct FSoftClassPath& SoftClassPath); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_PrimaryAssetTypeToString(struct FPrimaryAssetType PrimaryAssetType); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_PrimaryAssetIdToString(struct FPrimaryAssetId PrimaryAssetId); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UObject* Conv_InterfaceToObject(struct TScriptInterface<IInterface>& Interface); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(struct UObject*& Class); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void ControlScreensaver(bool bAllowScreenSaver); // (Final|Native|Static|Public|BlueprintCallable)
	bool ComponentOverlapComponents(struct UPrimitiveComponent* Component, struct FTransform& ComponentTransform, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool ComponentOverlapActors(struct UPrimitiveComponent* Component, struct FTransform& ComponentTransform, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void CollectGarbage(); // (Final|Native|Static|Public|BlueprintCallable)
	bool CapsuleTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleOverlapComponents(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CapsuleOverlapActors(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool CanLaunchURL(struct FString URL); // (Final|Native|Static|Public|BlueprintCallable)
	void CancelTransaction(int32_t Index); // (Final|Native|Static|Public|BlueprintCallable)
	void BreakSoftObjectPath(struct FSoftObjectPath InSoftObjectPath, struct FString& PathString); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakSoftClassPath(struct FSoftClassPath InSoftClassPath, struct FString& PathString); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool BoxTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxOverlapComponents(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool BoxOverlapActors(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t BeginTransaction(struct FString Context, struct FText Description, struct UObject* PrimaryObject); // (Final|Native|Static|Public|BlueprintCallable)
	struct FDebugFloatHistory AddFloatHistorySample(float Value, struct FDebugFloatHistory& FloatHistory); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.KismetTextLibrary
struct UKismetTextLibrary : UBlueprintFunctionLibrary {

	struct FText TextTrimTrailing(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText TextTrimPrecedingAndTrailing(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText TextTrimPreceding(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText TextToUpper(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText TextToLower(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool TextIsTransient(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool TextIsFromStringTable(struct FText& Text); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool TextIsEmpty(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool TextIsCultureInvariant(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText TextFromStringTable(struct FName TableId, struct FString Key); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool StringTableIdAndKeyFromText(struct FText Text, struct FName& OutTableId, struct FString& OutKey); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText PolyglotDataToText(struct FPolyglotTextData& PolyglotData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool NotEqual_TextText(struct FText& A, struct FText& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool NotEqual_IgnoreCase_TextText(struct FText& A, struct FText& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void IsPolyglotDataValid(struct FPolyglotTextData& PolyglotData, bool& IsValid, struct FText& ErrorMessage); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText GetEmptyText(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Format(struct FText InPattern, struct TArray<struct FFormatArgumentData> InArgs); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText& OutText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_TextText(struct FText& A, struct FText& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_IgnoreCase_TextText(struct FText& A, struct FText& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText Conv_VectorToText(struct FVector InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText Conv_Vector2dToText(struct FVector2D InVec); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText Conv_TransformToText(struct FTransform& InTrans); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_TextToString(struct FText& InText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FText Conv_StringToText(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_RotatorToText(struct FRotator InRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText Conv_ObjectToText(struct UObject* InObj); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_NameToText(struct FName InName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_FloatToText(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_ColorToText(struct FLinearColor InColor); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText Conv_ByteToText(char Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText Conv_BoolToText(bool InBool); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText AsTimeZoneTime_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsTimeZoneDateTime_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsTimeZoneDate_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsTimespan_Timespan(struct FTimespan& InTimespan); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsTime_DateTime(struct FDateTime& In); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsPercent_Float(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText AsDateTime_DateTime(struct FDateTime& In); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsDate_DateTime(struct FDateTime& InDateTime); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FText AsCurrencyBase(int32_t BaseValue, struct FString CurrencyCode); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText AsCurrency_Integer(int32_t Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FText AsCurrency_Float(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.Layer
struct ULayer : UObject {
	struct FName LayerName; 
	char bIsVisible : 1; 
	struct TArray<struct FLayerActorStats> ActorStats; 
};

// Class Engine.LevelPartitionInterface
struct ULevelPartitionInterface : UInterface {
};

// Class Engine.Level
struct ULevel : UObject {
	struct UWorld* OwningWorld; 
	struct UModel* Model; 
	struct TArray<struct UModelComponent*> ModelComponents; 
	struct ULevelActorContainer* ActorCluster; 
	int32_t NumTextureStreamingUnbuiltComponents; 
	int32_t NumTextureStreamingDirtyResources; 
	struct ALevelScriptActor* LevelScriptActor; 
	struct ANavigationObjectBase* NavListStart; 
	struct ANavigationObjectBase* NavListEnd; 
	struct TArray<struct UNavigationDataChunk*> NavDataChunks; 
	float LightmapTotalSize; 
	float ShadowmapTotalSize; 
	struct TArray<struct FVector> StaticNavigableGeometry; 
	struct TArray<struct FGuid> StreamingTextureGuids; 
	struct FGuid LevelBuildDataId; 
	struct UMapBuildDataRegistry* MapBuildData; 
	struct FIntVector LightBuildLevelOffset; 
	char bIsLightingScenario : 1; 
	char bTextureStreamingRotationChanged : 1; 
	char bStaticComponentsRegisteredInStreamingManager : 1; 
	char bIsVisible : 1; 
	struct AWorldSettings* WorldSettings; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
	struct TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; 
};

// Class Engine.LevelActorContainer
struct ULevelActorContainer : UObject {
	struct TArray<struct AActor*> Actors; 
};

// Class Engine.LevelScriptActor
struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; 

	void WorldOriginLocationChanged(struct FIntVector OldOriginLocation, struct FIntVector NewOriginLocation); // (Event|Public|HasDefaults|BlueprintEvent)
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // (Native|Public|BlueprintCallable)
	bool RemoteEvent(struct FName EventName); // (Native|Public|BlueprintCallable)
	void LevelReset(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
};

// Class Engine.LevelScriptBlueprint
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.LevelStreaming
struct ULevelStreaming : UObject {
	struct TSoftObjectPtr<UWorld> WorldAsset; 
	struct FName PackageNameToLoad; 
	struct TArray<struct FName> LODPackageNames; 
	struct FTransform LevelTransform; 
	int32_t LevelLODIndex; 
	int32_t StreamingPriority; 
	char bShouldBeVisible : 1; 
	char bShouldBeLoaded : 1; 
	char bLocked : 1; 
	char bIsStatic : 1; 
	char bShouldBlockOnLoad : 1; 
	char bShouldBlockOnUnload : 1; 
	char bDisableDistanceStreaming : 1; 
	char bDrawOnLevelStatusMap : 1; 
	struct FLinearColor LevelColor; 
	struct TArray<struct ALevelStreamingVolume*> EditorStreamingVolumes; 
	float MinTimeBetweenVolumeUnloadRequests; 
	struct FMulticastInlineDelegate OnLevelLoaded; 
	struct FMulticastInlineDelegate OnLevelUnloaded; 
	struct FMulticastInlineDelegate OnDynamicLevelUnloaded; 
	struct FMulticastInlineDelegate OnLevelShown; 
	struct FMulticastInlineDelegate OnLevelHidden; 
	struct ULevel* LoadedLevel; 
	struct ULevel* PendingUnloadLevel; 

	bool ShouldBeLoaded(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void SetShouldBeVisible(bool bInShouldBeVisible); // (Final|Native|Public|BlueprintCallable)
	void SetShouldBeLoaded(bool bInShouldBeLoaded); // (Native|Public|BlueprintCallable)
	void SetPriority(int32_t NewPriority); // (Final|Native|Public|BlueprintCallable)
	void SetLevelLODIndex(int32_t LODIndex); // (Final|Native|Public|BlueprintCallable)
	void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval); // (Final|Native|Public|BlueprintCallable)
	bool IsStreamingStatePending(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLevelVisible(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLevelLoaded(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetWorldAssetPackageFName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ULevel* GetLoadedLevel(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ALevelScriptActor* GetLevelScriptActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	bool GetIsRequestingUnloadAndRemoval(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ULevelStreaming* CreateInstance(struct FString UniqueInstanceName); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.LevelStreamingAlwaysLoaded
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingDynamic
struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; 
	char bInitiallyVisible : 1; 

	struct ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, struct FVector Location, struct FRotator Rotation, bool& bOutSuccess, struct FString OptionalLevelNameOverride); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct ULevelStreamingDynamic* LoadLevelInstance(struct UObject* WorldContextObject, struct FString LevelName, struct FVector Location, struct FRotator Rotation, bool& bOutSuccess, struct FString OptionalLevelNameOverride); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.LevelStreamingPersistent
struct ULevelStreamingPersistent : ULevelStreaming {
};

// Class Engine.LevelStreamingVolume
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; 
	char bEditorPreVisOnly : 1; 
	char bDisabled : 1; 
	enum class EStreamingVolumeUsage StreamingUsage; 
};

// Class Engine.LightmappedSurfaceCollection
struct ULightmappedSurfaceCollection : UObject {
	struct UModel* SourceModel; 
	struct TArray<int32_t> Surfaces; 
};

// Class Engine.LightMapTexture2D
struct ULightMapTexture2D : UTexture2D {
};

// Class Engine.LightMapVirtualTexture2D
struct ULightMapVirtualTexture2D : UTexture2D {
	struct TArray<int8_t> TypeToLayer; 
};

// Class Engine.LightmassCharacterIndirectDetailVolume
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.LightmassPortal
struct ALightmassPortal : AActor {
	struct ULightmassPortalComponent* PortalComponent; 
};

// Class Engine.LightmassPortalComponent
struct ULightmassPortalComponent : USceneComponent {
	struct UBoxComponent* PreviewBox; 
};

// Class Engine.LightmassPrimitiveSettingsObject
struct ULightmassPrimitiveSettingsObject : UObject {
	struct FLightmassPrimitiveSettings LightmassSettings; 
};

// Class Engine.LineBatchComponent
struct ULineBatchComponent : UPrimitiveComponent {
};

// Class Engine.LocalLightComponent
struct ULocalLightComponent : ULightComponent {
	enum class ELightUnits IntensityUnits; 
	float Radius; 
	float AttenuationRadius; 
	struct FLightmassPointLightSettings LightmassSettings; 

	void SetIntensityUnits(enum class ELightUnits NewIntensityUnits); // (Final|Native|Public|BlueprintCallable)
	void SetAttenuationRadius(float NewRadius); // (Final|Native|Public|BlueprintCallable)
	float GetUnitsConversionFactor(enum class ELightUnits SrcUnits, enum class ELightUnits TargetUnits, float CosHalfConeAngle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.LocalPlayer
struct ULocalPlayer : UPlayer {
	struct UGameViewportClient* ViewportClient; 
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; 
	struct APlayerController* PendingLevelPlayerControllerClass; 
	char bSentSplitJoin : 1; 
	int32_t ControllerId; 
};

// Class Engine.LocalPlayerSubsystem
struct ULocalPlayerSubsystem : USubsystem {
};

// Class Engine.LODActor
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; 
	struct TMap<struct FHLODInstancingKey, struct UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; 
	struct UHLODProxy* Proxy; 
	struct FName Key; 
	float LODDrawDistance; 
	int32_t LODLevel; 
	struct TArray<struct AActor*> SubActors; 
	char CachedNumHLODLevels; 
};

// Class Engine.LODSyncComponent
struct ULODSyncComponent : UActorComponent {
	int32_t NumLODs; 
	int32_t ForcedLOD; 
	struct TArray<struct FComponentSync> ComponentsToSync; 
	struct TMap<struct FName, struct FLODMappingData> CustomLODMapping; 
	int32_t CurrentLOD; 
	int32_t CurrentNumLODs; 
	struct TArray<struct UPrimitiveComponent*> DriveComponents; 
	struct TArray<struct UPrimitiveComponent*> SubComponents; 

	struct FString GetLODSyncDebugText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.LODSyncInterface
struct ULODSyncInterface : UInterface {
};

// Class Engine.MapBuildDataRegistry
struct UMapBuildDataRegistry : UObject {
	enum class ELightingBuildQuality LevelLightingQuality; 
};

// Class Engine.Material
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; 
	struct UPhysicalMaterialMask* PhysMaterialMask; 
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; 
	struct FScalarMaterialInput Metallic; 
	struct FScalarMaterialInput Specular; 
	struct FScalarMaterialInput Anisotropy; 
	struct FVectorMaterialInput Normal; 
	struct FVectorMaterialInput Tangent; 
	struct FColorMaterialInput EmissiveColor; 
	enum class EMaterialDomain MaterialDomain; 
	enum class EBlendMode BlendMode; 
	enum class EDecalBlendMode DecalBlendMode; 
	enum class EMaterialDecalResponse MaterialDecalResponse; 
	enum class EMaterialShadingModel ShadingModel; 
	char bCastDynamicShadowAsMasked : 1; 
	struct FMaterialShadingModelField ShadingModels; 
	float OpacityMaskClipValue; 
	struct FVectorMaterialInput WorldPositionOffset; 
	struct FScalarMaterialInput Refraction; 
	struct FMaterialAttributesInput MaterialAttributes; 
	struct FScalarMaterialInput PixelDepthOffset; 
	struct FShadingModelMaterialInput ShadingModelFromMaterialExpression; 
	char bEnableSeparateTranslucency : 1; 
	char bEnableResponsiveAA : 1; 
	char bScreenSpaceReflections : 1; 
	char bContactShadows : 1; 
	char TwoSided : 1; 
	char DitheredLODTransition : 1; 
	char DitherOpacityMask : 1; 
	char bAllowNegativeEmissiveColor : 1; 
	enum class ETranslucencyLightingMode TranslucencyLightingMode; 
	char bEnableMobileSeparateTranslucency : 1; 
	int32_t NumCustomizedUVs; 
	float TranslucencyDirectionalLightingIntensity; 
	float TranslucentShadowDensityScale; 
	float TranslucentSelfShadowDensityScale; 
	float TranslucentSelfShadowSecondDensityScale; 
	float TranslucentSelfShadowSecondOpacity; 
	float TranslucentBackscatteringExponent; 
	struct FLinearColor TranslucentMultipleScatteringExtinction; 
	float TranslucentShadowStartOffset; 
	char bDisableDepthTest : 1; 
	char bWriteOnlyAlpha : 1; 
	char bGenerateSphericalParticleNormals : 1; 
	char bTangentSpaceNormal : 1; 
	char bUseEmissiveForDynamicAreaLighting : 1; 
	char bBlockGI : 1; 
	char bUsedAsSpecialEngineMaterial : 1; 
	char bUsedWithSkeletalMesh : 1; 
	char bUsedWithEditorCompositing : 1; 
	char bUsedWithParticleSprites : 1; 
	char bUsedWithBeamTrails : 1; 
	char bUsedWithMeshParticles : 1; 
	char bUsedWithNiagaraSprites : 1; 
	char bUsedWithNiagaraRibbons : 1; 
	char bUsedWithNiagaraMeshParticles : 1; 
	char bUsedWithGeometryCache : 1; 
	char bUsedWithStaticLighting : 1; 
	char bUsedWithMorphTargets : 1; 
	char bUsedWithSplineMeshes : 1; 
	char bUsedWithInstancedStaticMeshes : 1; 
	char bUsedWithGeometryCollections : 1; 
	char bUsesDistortion : 1; 
	char bUsedWithClothing : 1; 
	char bUsedWithWater : 1; 
	char bUsedWithHairStrands : 1; 
	char bUsedWithLidarPointCloud : 1; 
	char bUsedWithVirtualHeightfieldMesh : 1; 
	char bUsedWithUI : 1; 
	char bAutomaticallySetUsageInEditor : 1; 
	char bFullyRough : 1; 
	char bUseFullPrecision : 1; 
	char bUseLightmapDirectionality : 1; 
	char bUseAlphaToCoverage : 1; 
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; 
	char bUseHQForwardReflections : 1; 
	char bForwardBlendsSkyLightCubemaps : 1; 
	char bUsePlanarForwardReflections : 1; 
	char bNormalCurvatureToRoughness : 1; 
	enum class EMaterialTessellationMode D3D11TessellationMode; 
	char bEnableCrackFreeDisplacement : 1; 
	char bEnableAdaptiveTessellation : 1; 
	char AllowTranslucentCustomDepthWrites : 1; 
	char Wireframe : 1; 
	char WriteDepthToTranslucentMaterial : 1; 
	enum class EMaterialShadingRate ShadingRate; 
	char bCanMaskedBeAssumedOpaque : 1; 
	char bIsMasked : 1; 
	char bIsPreviewMaterial : 1; 
	char bIsFunctionPreviewMaterial : 1; 
	char bUseMaterialAttributes : 1; 
	char bCastRayTracedShadows : 1; 
	char bUseTranslucencyVertexFog : 1; 
	char bApplyCloudFogging : 1; 
	char bIsSky : 1; 
	char bComputeFogPerPixel : 1; 
	char bOutputTranslucentVelocity : 1; 
	char bAllowDevelopmentShaderCompile : 1; 
	char bIsMaterialEditorStatsMaterial : 1; 
	enum class EBlendableLocation BlendableLocation; 
	char BlendableOutputAlpha : 1; 
	char bEnableStencilTest : 1; 
	enum class EMaterialStencilCompare StencilCompare; 
	char StencilRefValue; 
	enum class ERefractionMode RefractionMode; 
	int32_t BlendablePriority; 
	char bIsBlendable : 1; 
	uint32_t UsageFlagWarnings; 
	float RefractionDepthBias; 
	struct FGuid StateId; 
	float MaxDisplacement; 
	struct FMaterialCachedExpressionData CachedExpressionData; 
};

// Class Engine.MaterialBillboardComponent
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct FMaterialSpriteElement> Elements; 

	void SetElements(struct TArray<struct FMaterialSpriteElement>& NewElements); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddElement(struct UMaterialInterface* Material, struct UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, struct UCurveFloat* DistanceToSizeCurve); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.MaterialExpressionAbs
struct UMaterialExpressionAbs : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionActorPositionWS
struct UMaterialExpressionActorPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; 
	enum class ETextureColorChannel Channel; 
};

// Class Engine.MaterialExpressionAppendVector
struct UMaterialExpressionAppendVector : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
};

// Class Engine.MaterialExpressionArccosine
struct UMaterialExpressionArccosine : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionArccosineFast
struct UMaterialExpressionArccosineFast : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionArcsine
struct UMaterialExpressionArcsine : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionArcsineFast
struct UMaterialExpressionArcsineFast : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionArctangent
struct UMaterialExpressionArctangent : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionArctangent2
struct UMaterialExpressionArctangent2 : UMaterialExpression {
	struct FExpressionInput Y; 
	struct FExpressionInput X; 
};

// Class Engine.MaterialExpressionArctangent2Fast
struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	struct FExpressionInput Y; 
	struct FExpressionInput X; 
};

// Class Engine.MaterialExpressionArctangentFast
struct UMaterialExpressionArctangentFast : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionAtmosphericFogColor
struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	struct FExpressionInput WorldPosition; 
};

// Class Engine.MaterialExpressionAtmosphericLightColor
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionBlackBody
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; 
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput A; 
	struct FMaterialAttributesInput B; 
	struct FExpressionInput Alpha; 
	enum class EMaterialAttributeBlend PixelAttributeBlendType; 
	enum class EMaterialAttributeBlend VertexAttributeBlendType; 
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; 
};

// Class Engine.MaterialExpressionBumpOffset
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; 
	struct FExpressionInput Height; 
	struct FExpressionInput HeightRatioInput; 
	float HeightRatio; 
	float ReferencePlane; 
	uint32_t ConstCoordinate; 
};

// Class Engine.MaterialExpressionCameraPositionWS
struct UMaterialExpressionCameraPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCameraVectorWS
struct UMaterialExpressionCameraVectorWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCeil
struct UMaterialExpressionCeil : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionParameter
struct UMaterialExpressionParameter : UMaterialExpression {
	struct FName ParameterName; 
	struct FGuid ExpressionGUID; 
};

// Class Engine.MaterialExpressionVectorParameter
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	struct FLinearColor DefaultValue; 
	bool bUseCustomPrimitiveData; 
	char PrimitiveDataIndex; 
};

// Class Engine.MaterialExpressionChannelMaskParameter
struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	enum class EChannelMaskParameterColor MaskChannel; 
};

// Class Engine.MaterialExpressionClamp
struct UMaterialExpressionClamp : UMaterialExpression {
	struct FExpressionInput Input; 
	struct FExpressionInput Min; 
	struct FExpressionInput Max; 
	enum class EClampMode ClampMode; 
	float MinDefault; 
	float MaxDefault; 
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionCloudSampleAttribute
struct UMaterialExpressionCloudSampleAttribute : UMaterialExpression {
};

// Class Engine.MaterialExpressionCollectionParameter
struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; 
	struct FName ParameterName; 
	struct FGuid ParameterId; 
};

// Class Engine.MaterialExpressionComment
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; 
	int32_t SizeY; 
	struct FString Text; 
	struct FLinearColor CommentColor; 
	int32_t FontSize; 
};

// Class Engine.MaterialExpressionComponentMask
struct UMaterialExpressionComponentMask : UMaterialExpression {
	struct FExpressionInput Input; 
	char R : 1; 
	char G : 1; 
	char B : 1; 
	char A : 1; 
};

// Class Engine.MaterialExpressionConstant
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; 
};

// Class Engine.MaterialExpressionConstant2Vector
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; 
	float G; 
};

// Class Engine.MaterialExpressionConstant3Vector
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; 
};

// Class Engine.MaterialExpressionConstant4Vector
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; 
};

// Class Engine.MaterialExpressionConstantBiasScale
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	struct FExpressionInput Input; 
	float Bias; 
	float Scale; 
};

// Class Engine.MaterialExpressionCosine
struct UMaterialExpressionCosine : UMaterialExpression {
	struct FExpressionInput Input; 
	float Period; 
};

// Class Engine.MaterialExpressionCrossProduct
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
};

// Class Engine.MaterialExpressionScalarParameter
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; 
	bool bUseCustomPrimitiveData; 
	char PrimitiveDataIndex; 
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	struct UCurveLinearColor* Curve; 
	struct UCurveLinearColorAtlas* Atlas; 
	struct FExpressionInput InputTime; 
};

// Class Engine.MaterialExpressionCustom
struct UMaterialExpressionCustom : UMaterialExpression {
	struct FString Code; 
	enum class ECustomMaterialOutputType OutputType; 
	struct FString Description; 
	struct TArray<struct FCustomInput> Inputs; 
	struct TArray<struct FCustomOutput> AdditionalOutputs; 
	struct TArray<struct FCustomDefine> AdditionalDefines; 
	struct TArray<struct FString> IncludeFilePaths; 
};

// Class Engine.MaterialExpressionDDX
struct UMaterialExpressionDDX : UMaterialExpression {
	struct FExpressionInput Value; 
};

// Class Engine.MaterialExpressionDDY
struct UMaterialExpressionDDY : UMaterialExpression {
	struct FExpressionInput Value; 
};

// Class Engine.MaterialExpressionDecalDerivative
struct UMaterialExpressionDecalDerivative : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalLifetimeOpacity
struct UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalMipmapLevel
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	struct FExpressionInput TextureSize; 
	float ConstWidth; 
	float ConstHeight; 
};

// Class Engine.MaterialExpressionDeltaTime
struct UMaterialExpressionDeltaTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionDepthFade
struct UMaterialExpressionDepthFade : UMaterialExpression {
	struct FExpressionInput InOpacity; 
	struct FExpressionInput FadeDistance; 
	float OpacityDefault; 
	float FadeDistanceDefault; 
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class EDepthOfFieldFunctionValue FunctionValue; 
	struct FExpressionInput Depth; 
};

// Class Engine.MaterialExpressionDeriveNormalZ
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	struct FExpressionInput InXY; 
};

// Class Engine.MaterialExpressionDesaturation
struct UMaterialExpressionDesaturation : UMaterialExpression {
	struct FExpressionInput Input; 
	struct FExpressionInput Fraction; 
	struct FLinearColor LuminanceFactors; 
};

// Class Engine.MaterialExpressionDistance
struct UMaterialExpressionDistance : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
};

// Class Engine.MaterialExpressionDistanceCullFade
struct UMaterialExpressionDistanceCullFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionDistanceFieldGradient
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	struct FExpressionInput position; 
};

// Class Engine.MaterialExpressionDistanceFieldsRenderingSwitch
struct UMaterialExpressionDistanceFieldsRenderingSwitch : UMaterialExpression {
	struct FExpressionInput No; 
	struct FExpressionInput Yes; 
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	struct FExpressionInput position; 
};

// Class Engine.MaterialExpressionDivide
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionDotProduct
struct UMaterialExpressionDotProduct : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
};

// Class Engine.MaterialExpressionDynamicParameter
struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	struct TArray<struct FString> ParamNames; 
	struct FLinearColor DefaultValue; 
	uint32_t ParameterIndex; 
};

// Class Engine.MaterialExpressionEyeAdaptation
struct UMaterialExpressionEyeAdaptation : UMaterialExpression {
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	struct FExpressionInput Default; 
};

// Class Engine.MaterialExpressionFloor
struct UMaterialExpressionFloor : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionFmod
struct UMaterialExpressionFmod : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
};

// Class Engine.MaterialExpressionFontSample
struct UMaterialExpressionFontSample : UMaterialExpression {
	struct UFont* Font; 
	int32_t FontTexturePage; 
};

// Class Engine.MaterialExpressionFontSampleParameter
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	struct FName ParameterName; 
	struct FGuid ExpressionGUID; 
	struct FName Group; 
};

// Class Engine.MaterialExpressionFrac
struct UMaterialExpressionFrac : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionFresnel
struct UMaterialExpressionFresnel : UMaterialExpression {
	struct FExpressionInput ExponentIn; 
	float Exponent; 
	struct FExpressionInput BaseReflectFractionIn; 
	float BaseReflectFraction; 
	struct FExpressionInput Normal; 
};

// Class Engine.MaterialExpressionFunctionInput
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	struct FExpressionInput Preview; 
	struct FName InputName; 
	struct FString Description; 
	struct FGuid ID; 
	enum class EFunctionInputType InputType; 
	struct FVector4 PreviewValue; 
	char bUsePreviewValueAsDefault : 1; 
	int32_t SortPriority; 
	char bCompilingFunctionPreview : 1; 
};

// Class Engine.MaterialExpressionFunctionOutput
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	struct FName OutputName; 
	struct FString Description; 
	int32_t SortPriority; 
	struct FExpressionInput A; 
	char bLastPreviewed : 1; 
	struct FGuid ID; 
};

// Class Engine.MaterialExpressionGetMaterialAttributes
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; 
	struct TArray<struct FGuid> AttributeGetTypes; 
};

// Class Engine.MaterialExpressionGIReplace
struct UMaterialExpressionGIReplace : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput StaticIndirect; 
	struct FExpressionInput DynamicIndirect; 
};

// Class Engine.MaterialExpressionHairAttributes
struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; 
};

// Class Engine.MaterialExpressionHairColor
struct UMaterialExpressionHairColor : UMaterialExpression {
	struct FExpressionInput Melanin; 
	struct FExpressionInput Redness; 
	struct FExpressionInput DyeColor; 
};

// Class Engine.MaterialExpressionIf
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	struct FExpressionInput AGreaterThanB; 
	struct FExpressionInput AEqualsB; 
	struct FExpressionInput ALessThanB; 
	float EqualsThreshold; 
	float ConstB; 
	float ConstAEqualsB; 
};

// Class Engine.MaterialExpressionInverseLinearInterpolate
struct UMaterialExpressionInverseLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	struct FExpressionInput Value; 
	float ConstA; 
	float ConstB; 
	float ConstValue; 
	bool bClampResult; 
};

// Class Engine.MaterialExpressionLightmapUVs
struct UMaterialExpressionLightmapUVs : UMaterialExpression {
};

// Class Engine.MaterialExpressionLightmassReplace
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	struct FExpressionInput Realtime; 
	struct FExpressionInput Lightmass; 
};

// Class Engine.MaterialExpressionLightVector
struct UMaterialExpressionLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	struct FExpressionInput Alpha; 
	float ConstA; 
	float ConstB; 
	float ConstAlpha; 
};

// Class Engine.MaterialExpressionLogarithm10
struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	struct FExpressionInput X; 
};

// Class Engine.MaterialExpressionLogarithm2
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	struct FExpressionInput X; 
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	struct FExpressionInput BaseColor; 
	struct FExpressionInput Metallic; 
	struct FExpressionInput Specular; 
	struct FExpressionInput Roughness; 
	struct FExpressionInput Anisotropy; 
	struct FExpressionInput EmissiveColor; 
	struct FExpressionInput Opacity; 
	struct FExpressionInput OpacityMask; 
	struct FExpressionInput Normal; 
	struct FExpressionInput Tangent; 
	struct FExpressionInput WorldPositionOffset; 
	struct FExpressionInput WorldDisplacement; 
	struct FExpressionInput TessellationMultiplier; 
	struct FExpressionInput SubsurfaceColor; 
	struct FExpressionInput ClearCoat; 
	struct FExpressionInput ClearCoatRoughness; 
	struct FExpressionInput AmbientOcclusion; 
	struct FExpressionInput Refraction; 
	struct FExpressionInput CustomizedUVs[0x8]; 
	struct FExpressionInput PixelDepthOffset; 
	struct FExpressionInput ShadingModel; 
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	struct FExpressionInput Coordinates; 
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	struct FName ParameterName; 
	struct FGuid ExpressionGUID; 
	struct FMaterialAttributesInput Input; 
	struct FMaterialLayersFunctions DefaultLayers; 
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> LayerCallers; 
	int32_t NumActiveLayerCallers; 
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> BlendCallers; 
	int32_t NumActiveBlendCallers; 
	bool bIsLayerGraphBuilt; 
};

// Class Engine.MaterialExpressionMaterialFunctionCall
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunctionInterface* MaterialFunction; 
	struct FMaterialParameterInfo FunctionParameterInfo; 
};

// Class Engine.MaterialExpressionMaterialLayerOutput
struct UMaterialExpressionMaterialLayerOutput : UMaterialExpressionFunctionOutput {
};

// Class Engine.MaterialExpressionMaterialProxyReplace
struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	struct FExpressionInput Realtime; 
	struct FExpressionInput MaterialProxy; 
};

// Class Engine.MaterialExpressionMax
struct UMaterialExpressionMax : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionMin
struct UMaterialExpressionMin : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionMultiply
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionRerouteBase
struct UMaterialExpressionRerouteBase : UMaterialExpression {
};

// Class Engine.MaterialExpressionNamedRerouteBase
struct UMaterialExpressionNamedRerouteBase : UMaterialExpressionRerouteBase {
};

// Class Engine.MaterialExpressionNamedRerouteDeclaration
struct UMaterialExpressionNamedRerouteDeclaration : UMaterialExpressionNamedRerouteBase {
	struct FExpressionInput Input; 
	struct FName Name; 
	struct FGuid VariableGuid; 
};

// Class Engine.MaterialExpressionNamedRerouteUsage
struct UMaterialExpressionNamedRerouteUsage : UMaterialExpressionNamedRerouteBase {
	struct UMaterialExpressionNamedRerouteDeclaration* Declaration; 
	struct FGuid DeclarationGuid; 
};

// Class Engine.MaterialExpressionNoise
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput position; 
	struct FExpressionInput FilterWidth; 
	float Scale; 
	int32_t Quality; 
	enum class ENoiseFunction NoiseFunction; 
	char bTurbulence : 1; 
	int32_t Levels; 
	float OutputMin; 
	float OutputMax; 
	float LevelScale; 
	char bTiling : 1; 
	uint32_t RepeatSize; 
};

// Class Engine.MaterialExpressionNormalize
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput VectorInput; 
};

// Class Engine.MaterialExpressionObjectBounds
struct UMaterialExpressionObjectBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectOrientation
struct UMaterialExpressionObjectOrientation : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectPositionWS
struct UMaterialExpressionObjectPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectRadius
struct UMaterialExpressionObjectRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionPanner
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; 
	struct FExpressionInput Time; 
	struct FExpressionInput Speed; 
	float SpeedX; 
	float SpeedY; 
	uint32_t ConstCoordinate; 
	bool bFractionalPart; 
};

// Class Engine.MaterialExpressionParticleColor
struct UMaterialExpressionParticleColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleDirection
struct UMaterialExpressionParticleDirection : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMacroUV
struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMotionBlurFade
struct UMaterialExpressionParticleMotionBlurFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticlePositionWS
struct UMaterialExpressionParticlePositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRadius
struct UMaterialExpressionParticleRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRandom
struct UMaterialExpressionParticleRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRelativeTime
struct UMaterialExpressionParticleRelativeTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSize
struct UMaterialExpressionParticleSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSpeed
struct UMaterialExpressionParticleSpeed : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSubUV
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; 
};

// Class Engine.MaterialExpressionParticleSubUVProperties
struct UMaterialExpressionParticleSubUVProperties : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceCustomData
struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	struct FExpressionInput DefaultValue; 
	float ConstDefaultValue; 
	uint32_t DataIndex; 
};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
struct UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceRandom
struct UMaterialExpressionPerInstanceRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelDepth
struct UMaterialExpressionPixelDepth : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelNormalWS
struct UMaterialExpressionPixelNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; 
	struct FExpressionInput Exponent; 
	float ConstExponent; 
};

// Class Engine.MaterialExpressionPrecomputedAOMask
struct UMaterialExpressionPrecomputedAOMask : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedLocalBounds
struct UMaterialExpressionPreSkinnedLocalBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedNormal
struct UMaterialExpressionPreSkinnedNormal : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedPosition
struct UMaterialExpressionPreSkinnedPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	struct FExpressionInput CurrentFrame; 
	struct FExpressionInput PreviousFrame; 
};

// Class Engine.MaterialExpressionQualitySwitch
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput Inputs[0x4]; 
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	struct FExpressionInput Normal; 
	struct FExpressionInput RayTraced; 
};

// Class Engine.MaterialExpressionReflectionCapturePassSwitch
struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput Reflection; 
};

// Class Engine.MaterialExpressionReflectionVectorWS
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput CustomWorldNormal; 
	char bNormalizeCustomWorldNormal : 1; 
};

// Class Engine.MaterialExpressionReroute
struct UMaterialExpressionReroute : UMaterialExpressionRerouteBase {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionRotateAboutAxis
struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	struct FExpressionInput NormalizedRotationAxis; 
	struct FExpressionInput RotationAngle; 
	struct FExpressionInput PivotPoint; 
	struct FExpressionInput position; 
	float Period; 
};

// Class Engine.MaterialExpressionRotator
struct UMaterialExpressionRotator : UMaterialExpression {
	struct FExpressionInput Coordinate; 
	struct FExpressionInput Time; 
	float CenterX; 
	float CenterY; 
	float Speed; 
	uint32_t ConstCoordinate; 
};

// Class Engine.MaterialExpressionRound
struct UMaterialExpressionRound : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput BaseColor; 
	struct FExpressionInput Specular; 
	struct FExpressionInput Roughness; 
	struct FExpressionInput Normal; 
	struct FExpressionInput WorldHeight; 
	struct FExpressionInput Opacity; 
	struct FExpressionInput Mask; 
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput VirtualTextureOutput; 
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	struct FExpressionInput Coordinates; 
	struct FExpressionInput WorldPosition; 
	struct FExpressionInput MipValue; 
	struct URuntimeVirtualTexture* VirtualTexture; 
	enum class ERuntimeVirtualTextureMaterialType MaterialType; 
	bool bSinglePhysicalSpace; 
	bool bAdaptive; 
	enum class ERuntimeVirtualTextureMipValueMode MipValueMode; 
	enum class ERuntimeVirtualTextureTextureAddressMode TextureAddressMode; 
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	struct FName ParameterName; 
	struct FGuid ExpressionGUID; 
	struct FName Group; 
};

// Class Engine.MaterialExpressionSamplePhysicsVectorField
struct UMaterialExpressionSamplePhysicsVectorField : UMaterialExpression {
	struct FExpressionInput WorldPosition; 
	enum class EFieldVectorType FieldTarget; 
};

// Class Engine.MaterialExpressionSamplePhysicsScalarField
struct UMaterialExpressionSamplePhysicsScalarField : UMaterialExpression {
	struct FExpressionInput WorldPosition; 
	enum class EFieldScalarType FieldTarget; 
};

// Class Engine.MaterialExpressionSamplePhysicsIntegerField
struct UMaterialExpressionSamplePhysicsIntegerField : UMaterialExpression {
	struct FExpressionInput WorldPosition; 
	enum class EFieldIntegerType FieldTarget; 
};

// Class Engine.MaterialExpressionSaturate
struct UMaterialExpressionSaturate : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionSceneColor
struct UMaterialExpressionSceneColor : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; 
	struct FExpressionInput Input; 
	struct FExpressionInput OffsetFraction; 
	struct FVector2D ConstInput; 
};

// Class Engine.MaterialExpressionSceneDepth
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; 
	struct FExpressionInput Input; 
	struct FExpressionInput Coordinates; 
	struct FVector2D ConstInput; 
};

// Class Engine.MaterialExpressionSceneDepthWithoutWater
struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; 
	struct FExpressionInput Input; 
	struct FVector2D ConstInput; 
	float FallbackDepth; 
};

// Class Engine.MaterialExpressionSceneTexelSize
struct UMaterialExpressionSceneTexelSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionSceneTexture
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; 
	enum class ESceneTextureId SceneTextureId; 
	bool bFiltered; 
};

// Class Engine.MaterialExpressionScreenPosition
struct UMaterialExpressionScreenPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; 
	struct TArray<struct FGuid> AttributeSetTypes; 
};

// Class Engine.MaterialExpressionShaderStageSwitch
struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	struct FExpressionInput PixelShader; 
	struct FExpressionInput VertexShader; 
};

// Class Engine.MaterialExpressionShadingModel
struct UMaterialExpressionShadingModel : UMaterialExpression {
	enum class EMaterialShadingModel ShadingModel; 
};

// Class Engine.MaterialExpressionShadingPathSwitch
struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput Inputs[0x3]; 
};

// Class Engine.MaterialExpressionShadowReplace
struct UMaterialExpressionShadowReplace : UMaterialExpression {
	struct FExpressionInput Default; 
	struct FExpressionInput Shadow; 
};

// Class Engine.MaterialExpressionSign
struct UMaterialExpressionSign : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionSine
struct UMaterialExpressionSine : UMaterialExpression {
	struct FExpressionInput Input; 
	float Period; 
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput ScatteringCoefficients; 
	struct FExpressionInput AbsorptionCoefficients; 
	struct FExpressionInput PhaseG; 
	struct FExpressionInput ColorScaleBehindWater; 
};

// Class Engine.MaterialExpressionSkinningVertexOffsets
struct UMaterialExpressionSkinningVertexOffsets : UMaterialExpression {
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; 
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; 
	struct FExpressionInput WorldPosition; 
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; 
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	struct FExpressionInput WorldPosition; 
};

// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
struct UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
struct UMaterialExpressionSkyAtmosphereViewLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSmoothStep
struct UMaterialExpressionSmoothStep : UMaterialExpression {
	struct FExpressionInput Min; 
	struct FExpressionInput Max; 
	struct FExpressionInput Value; 
	float ConstMin; 
	float ConstMax; 
	float ConstValue; 
};

// Class Engine.MaterialExpressionSobol
struct UMaterialExpressionSobol : UMaterialExpression {
	struct FExpressionInput Cell; 
	struct FExpressionInput Index; 
	struct FExpressionInput Seed; 
	uint32_t ConstIndex; 
	struct FVector2D ConstSeed; 
};

// Class Engine.MaterialExpressionSpeedTree
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	struct FExpressionInput GeometryInput; 
	struct FExpressionInput WindInput; 
	struct FExpressionInput LODInput; 
	struct FExpressionInput ExtraBendWS; 
	enum class ESpeedTreeGeometryType GeometryType; 
	enum class ESpeedTreeWindType WindType; 
	enum class ESpeedTreeLODType LODType; 
	float BillboardThreshold; 
	bool bAccurateWindVelocities; 
};

// Class Engine.MaterialExpressionSphereMask
struct UMaterialExpressionSphereMask : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	struct FExpressionInput Radius; 
	struct FExpressionInput Hardness; 
	float AttenuationRadius; 
	float HardnessPercent; 
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	struct FExpressionInput Density; 
	float ConstantDensity; 
};

// Class Engine.MaterialExpressionSquareRoot
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionStaticBool
struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; 
};

// Class Engine.MaterialExpressionStaticBoolParameter
struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; 
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; 
	char DefaultG : 1; 
	char DefaultB : 1; 
	char DefaultA : 1; 
};

// Class Engine.MaterialExpressionStaticSwitch
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; 
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	struct FExpressionInput Value; 
};

// Class Engine.MaterialExpressionStaticSwitchParameter
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
};

// Class Engine.MaterialExpressionStep
struct UMaterialExpressionStep : UMaterialExpression {
	struct FExpressionInput Y; 
	struct FExpressionInput X; 
	float ConstY; 
	float ConstX; 
};

// Class Engine.MaterialExpressionSubtract
struct UMaterialExpressionSubtract : UMaterialExpression {
	struct FExpressionInput A; 
	struct FExpressionInput B; 
	float ConstA; 
	float ConstB; 
};

// Class Engine.MaterialExpressionTangent
struct UMaterialExpressionTangent : UMaterialExpression {
	struct FExpressionInput Input; 
	float Period; 
};

// Class Engine.MaterialExpressionTangentOutput
struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionTemporalSobol
struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	struct FExpressionInput Index; 
	struct FExpressionInput Seed; 
	uint32_t ConstIndex; 
	struct FVector2D ConstSeed; 
};

// Class Engine.MaterialExpressionTextureCoordinate
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; 
	float UTiling; 
	float VTiling; 
	char UnMirrorU : 1; 
	char UnMirrorV : 1; 
};

// Class Engine.MaterialExpressionTextureObject
struct UMaterialExpressionTextureObject : UMaterialExpressionTextureBase {
};

// Class Engine.MaterialExpressionTextureObjectParameter
struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureProperty
struct UMaterialExpressionTextureProperty : UMaterialExpression {
	struct FExpressionInput TextureObject; 
	enum class EMaterialExposedTextureProperty Property; 
};

// Class Engine.MaterialExpressionTextureSampleParameter2DArray
struct UMaterialExpressionTextureSampleParameter2DArray : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterCube
struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; 
};

// Class Engine.MaterialExpressionTextureSampleParameterVolume
struct UMaterialExpressionTextureSampleParameterVolume : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput TransmittanceColor; 
};

// Class Engine.MaterialExpressionTime
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; 
	char bOverride_Period : 1; 
	float Period; 
};

// Class Engine.MaterialExpressionTransform
struct UMaterialExpressionTransform : UMaterialExpression {
	struct FExpressionInput Input; 
	enum class EMaterialVectorCoordTransformSource TransformSourceType; 
	enum class EMaterialVectorCoordTransform TransformType; 
};

// Class Engine.MaterialExpressionTransformPosition
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	struct FExpressionInput Input; 
	enum class EMaterialPositionTransformSource TransformSourceType; 
	enum class EMaterialPositionTransformSource TransformType; 
};

// Class Engine.MaterialExpressionTruncate
struct UMaterialExpressionTruncate : UMaterialExpression {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionTwoSidedSign
struct UMaterialExpressionTwoSidedSign : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput position; 
	enum class EVectorNoiseFunction NoiseFunction; 
	int32_t Quality; 
	char bTiling : 1; 
	uint32_t TileSize; 
};

// Class Engine.MaterialExpressionVertexColor
struct UMaterialExpressionVertexColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexInterpolator
struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; 
};

// Class Engine.MaterialExpressionVertexNormalWS
struct UMaterialExpressionVertexNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexTangentWS
struct UMaterialExpressionVertexTangentWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionViewProperty
struct UMaterialExpressionViewProperty : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; 
};

// Class Engine.MaterialExpressionViewSize
struct UMaterialExpressionViewSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	struct FExpressionInput No; 
	struct FExpressionInput Yes; 
};

// Class Engine.MaterialExpressionVolumetricAdvancedMaterialInput
struct UMaterialExpressionVolumetricAdvancedMaterialInput : UMaterialExpression {
};

// Class Engine.MaterialExpressionVolumetricAdvancedMaterialOutput
struct UMaterialExpressionVolumetricAdvancedMaterialOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput PhaseG; 
	struct FExpressionInput PhaseG2; 
	struct FExpressionInput PhaseBlend; 
	struct FExpressionInput MultiScatteringContribution; 
	struct FExpressionInput MultiScatteringOcclusion; 
	struct FExpressionInput MultiScatteringEccentricity; 
	struct FExpressionInput ConservativeDensity; 
	float ConstPhaseG; 
	float ConstPhaseG2; 
	float ConstPhaseBlend; 
	bool PerSamplePhaseEvaluation; 
	uint32_t MultiScatteringApproximationOctaveCount; 
	float ConstMultiScatteringContribution; 
	float ConstMultiScatteringOcclusion; 
	float ConstMultiScatteringEccentricity; 
	bool bGroundContribution; 
	bool bGrayScaleMaterial; 
	bool bRayMarchVolumeShadow; 
};

// Class Engine.MaterialExpressionWorldPosition
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	enum class EWorldPositionIncludedOffsets WorldPositionShaderOffset; 
};

// Class Engine.MaterialFunctionInterface
struct UMaterialFunctionInterface : UObject {
	struct FGuid StateId; 
	enum class EMaterialFunctionUsage MaterialFunctionUsage; 
};

// Class Engine.MaterialFunction
struct UMaterialFunction : UMaterialFunctionInterface {
	struct FString Description; 
	char bExposeToLibrary : 1; 
	char bPrefixParameterNames : 1; 
};

// Class Engine.MaterialFunctionInstance
struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	struct UMaterialFunctionInterface* Parent; 
	struct UMaterialFunctionInterface* Base; 
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; 
	struct TArray<struct FVectorParameterValue> VectorParameterValues; 
	struct TArray<struct FTextureParameterValue> TextureParameterValues; 
	struct TArray<struct FFontParameterValue> FontParameterValues; 
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues; 
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues; 
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; 
};

// Class Engine.MaterialFunctionMaterialLayer
struct UMaterialFunctionMaterialLayer : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerInstance
struct UMaterialFunctionMaterialLayerInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialFunctionMaterialLayerBlend
struct UMaterialFunctionMaterialLayerBlend : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerBlendInstance
struct UMaterialFunctionMaterialLayerBlendInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialInstanceActor
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; 
};

// Class Engine.MaterialInstanceDynamic
struct UMaterialInstanceDynamic : UMaterialInstance {

	void SetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, struct FLinearColor Value); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, struct UTexture* Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // (Final|Native|Public|BlueprintCallable)
	void SetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, float Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetScalarParameterValue(struct FName ParameterName, float Value); // (Final|Native|Public|BlueprintCallable)
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance* SourceA, struct UMaterialInstance* SourceB, float Alpha); // (Final|Native|Public|BlueprintCallable)
	struct FLinearColor K2_GetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct UTexture* K2_GetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // (Final|Native|Public|BlueprintCallable)
	float K2_GetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float K2_GetScalarParameterValue(struct FName ParameterName); // (Final|Native|Public|BlueprintCallable)
	void K2_CopyMaterialInstanceParameters(struct UMaterialInterface* Source, bool bQuickParametersOnly); // (Final|Native|Public|BlueprintCallable)
	void CopyParameterOverrides(struct UMaterialInstance* MaterialInstance); // (Final|Native|Public|BlueprintCallable)
	void CopyInterpParameters(struct UMaterialInstance* Source); // (Final|Native|Public)
};

// Class Engine.MaterialParameterCollection
struct UMaterialParameterCollection : UObject {
	struct FGuid StateId; 
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; 
	struct TArray<struct FCollectionVectorParameter> VectorParameters; 
};

// Class Engine.MaterialParameterCollectionInstance
struct UMaterialParameterCollectionInstance : UObject {
	struct UMaterialParameterCollection* Collection; 
};

// Class Engine.MatineeActor
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; 
	struct FName MatineeControllerName; 
	float PlayRate; 
	char bPlayOnLevelLoad : 1; 
	char bForceStartPos : 1; 
	float ForceStartPosition; 
	char bLooping : 1; 
	char bRewindOnPlay : 1; 
	char bNoResetOnRewind : 1; 
	char bRewindIfAlreadyPlaying : 1; 
	char bDisableRadioFilter : 1; 
	char bClientSideOnly : 1; 
	char bSkipUpdateIfNotVisible : 1; 
	char bIsSkippable : 1; 
	int32_t PreferredSplitScreenNum; 
	char bDisableMovementInput : 1; 
	char bDisableLookAtInput : 1; 
	char bHidePlayer : 1; 
	char bHideHud : 1; 
	struct TArray<struct FInterpGroupActorInfo> GroupActorInfos; 
	char bShouldShowGore : 1; 
	struct TArray<struct UInterpGroupInst*> GroupInst; 
	struct TArray<struct FCameraCutInfo> CameraCuts; 
	char bIsPlaying : 1; 
	char bReversePlayback : 1; 
	char bPaused : 1; 
	char bPendingStop : 1; 
	float InterpPosition; 
	char ReplicationForceIsPlaying; 
	struct FMulticastInlineDelegate OnPlay; 
	struct FMulticastInlineDelegate OnStop; 
	struct FMulticastInlineDelegate OnPause; 

	void Stop(); // (Native|Public|BlueprintCallable)
	void SetPosition(float NewPosition, bool bJump); // (Final|Native|Public|BlueprintCallable)
	void SetLoopingState(bool bNewLooping); // (Native|Public|BlueprintCallable)
	void Reverse(); // (Native|Public|BlueprintCallable)
	void Play(); // (Native|Public|BlueprintCallable)
	void Pause(); // (Native|Public|BlueprintCallable)
	void EnableGroupByName(struct FString GroupName, bool bEnable); // (Final|Native|Public|BlueprintCallable)
	void ChangePlaybackDirection(); // (Native|Public|BlueprintCallable)
};

// Class Engine.MatineeActorCameraAnim
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; 
};

// Class Engine.MatineeAnimInterface
struct UMatineeAnimInterface : UInterface {
};

// Class Engine.MatineeInterface
struct UMatineeInterface : UInterface {
};

// Class Engine.MeshMergeCullingVolume
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.MeshSimplificationSettings
struct UMeshSimplificationSettings : UDeveloperSettings {
	struct FName MeshReductionModuleName; 
};

// Class Engine.MeshVertexPainterKismetLibrary
struct UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary {

	void RemovePaintedVertices(struct UStaticMeshComponent* StaticMeshComponent); // (Final|Native|Static|Public|BlueprintCallable)
	void PaintVerticesSingleColor(struct UStaticMeshComponent* StaticMeshComponent, struct FLinearColor& FillColor, bool bConvertToSRGB); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void PaintVerticesLerpAlongAxis(struct UStaticMeshComponent* StaticMeshComponent, struct FLinearColor& StartColor, struct FLinearColor& EndColor, enum class EVertexPaintAxis Axis, bool bConvertToSRGB); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.MicroTransactionBase
struct UMicroTransactionBase : UPlatformInterfaceBase {
	struct TArray<struct FPurchaseInfo> AvailableProducts; 
	struct FString LastError; 
	struct FString LastErrorSolution; 
};

// Class Engine.ModelComponent
struct UModelComponent : UPrimitiveComponent {
	struct UBodySetup* ModelBodySetup; 
};

// Class Engine.MorphTarget
struct UMorphTarget : UObject {
	struct USkeletalMesh* BaseSkelMesh; 
};

// Class Engine.NavAgentInterface
struct UNavAgentInterface : UInterface {
};

// Class Engine.NavAreaBase
struct UNavAreaBase : UObject {
};

// Class Engine.NavCollisionBase
struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; 
};

// Class Engine.NavEdgeProviderInterface
struct UNavEdgeProviderInterface : UInterface {
};

// Class Engine.NavigationDataChunk
struct UNavigationDataChunk : UObject {
	struct FName NavigationDataName; 
};

// Class Engine.NavigationDataInterface
struct UNavigationDataInterface : UInterface {
};

// Class Engine.NavigationObjectBase
struct ANavigationObjectBase : AActor {
	struct UCapsuleComponent* CapsuleComponent; 
	struct UBillboardComponent* GoodSprite; 
	struct UBillboardComponent* BadSprite; 
	char bIsPIEPlayerStart : 1; 
};

// Class Engine.NullNavSysConfig
struct UNullNavSysConfig : UNavigationSystemConfig {
};

// Class Engine.NavLinkDefinition
struct UNavLinkDefinition : UObject {
	struct TArray<struct FNavigationLink> Links; 
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; 
};

// Class Engine.NavPathObserverInterface
struct UNavPathObserverInterface : UInterface {
};

// Class Engine.NavRelevantInterface
struct UNavRelevantInterface : UInterface {
};

// Class Engine.SimulatedClientNetConnection
struct USimulatedClientNetConnection : UNetConnection {
};

// Class Engine.NetPushModelHelpers
struct UNetPushModelHelpers : UBlueprintFunctionLibrary {

	void MarkPropertyDirtyFromRepIndex(struct UObject* Object, int32_t RepIndex, struct FName PropertyName); // (Final|Native|Static|Public|BlueprintCallable)
	void MarkPropertyDirty(struct UObject* Object, struct FName PropertyName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.NetworkPredictionInterface
struct UNetworkPredictionInterface : UInterface {
};

// Class Engine.NetworkSettings
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; 
	char bEnableMultiplayerWorldOriginRebasing : 1; 
	int32_t MaxRepArraySize; 
	int32_t MaxRepArrayMemory; 
	struct TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles; 
};

// Class Engine.NodeMappingContainer
struct UNodeMappingContainer : UObject {
	struct TMap<struct FName, struct FNodeItem> SourceItems; 
	struct TMap<struct FName, struct FNodeItem> TargetItems; 
	struct TMap<struct FName, struct FName> SourceToTarget; 
	struct TSoftObjectPtr<UObject> SourceAsset; 
	struct TSoftObjectPtr<UObject> TargetAsset; 
};

// Class Engine.NodeMappingProviderInterface
struct UNodeMappingProviderInterface : UInterface {
};

// Class Engine.Note
struct ANote : AActor {
};

// Class Engine.ObjectLibrary
struct UObjectLibrary : UObject {
	struct UObject* ObjectBaseClass; 
	bool bHasBlueprintClasses; 
	struct TArray<struct UObject*> Objects; 
	struct TArray<struct TWeakObjectPtr<struct UObject>> WeakObjects; 
	bool bUseWeakReferences; 
	bool bIsFullyLoaded; 
};

// Class Engine.ObjectReferencer
struct UObjectReferencer : UObject {
	struct TArray<struct UObject*> ReferencedObjects; 
};

// Class Engine.ObjectTraceWorldSubsystem
struct UObjectTraceWorldSubsystem : UWorldSubsystem {
};

// Class Engine.PackageMapClient
struct UPackageMapClient : UPackageMap {
};

// Class Engine.PainCausingVolume
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; 
	float DamagePerSec; 
	struct UDamageType* DamageType; 
	float PainInterval; 
	char bEntryPain : 1; 
	char BACKUP_bPainCausing : 1; 
	struct AController* DamageInstigator; 
};

// Class Engine.ParticleEmitter
struct UParticleEmitter : UObject {
	struct FName EmitterName; 
	int32_t SubUVDataOffset; 
	enum class EEmitterRenderMode EmitterRenderMode; 
	enum class EParticleSignificanceLevel SignificanceLevel; 
	char bUseLegacySpawningBehavior : 1; 
	char ConvertedModules : 1; 
	char bIsSoloing : 1; 
	char bCookedOut : 1; 
	char bDisabledLODsKeepEmitterAlive : 1; 
	char bDisableWhenInsignficant : 1; 
	struct TArray<struct UParticleLODLevel*> LODLevels; 
	int32_t PeakActiveParticles; 
	int32_t InitialAllocationCount; 
	float QualityLevelSpawnRateScale; 
	uint32_t DetailModeBitmask; 
};

// Class Engine.ParticleEventManager
struct AParticleEventManager : AActor {
};

// Class Engine.ParticleLODLevel
struct UParticleLODLevel : UObject {
	int32_t Level; 
	char bEnabled : 1; 
	struct UParticleModuleRequired* RequiredModule; 
	struct TArray<struct UParticleModule*> Modules; 
	struct UParticleModuleTypeDataBase* TypeDataModule; 
	struct UParticleModuleSpawn* SpawnModule; 
	struct UParticleModuleEventGenerator* EventGenerator; 
	struct TArray<struct UParticleModuleSpawnBase*> SpawningModules; 
	struct TArray<struct UParticleModule*> SpawnModules; 
	struct TArray<struct UParticleModule*> UpdateModules; 
	struct TArray<struct UParticleModuleOrbit*> OrbitModules; 
	struct TArray<struct UParticleModuleEventReceiverBase*> EventReceiverModules; 
	char ConvertedModules : 1; 
	int32_t PeakActiveParticles; 
};

// Class Engine.ParticleSystem
struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; 
	float UpdateTime_Delta; 
	float WarmupTime; 
	float WarmupTickRate; 
	struct TArray<struct UParticleEmitter*> Emitters; 
	struct UParticleSystemComponent* PreviewComponent; 
	struct UInterpCurveEdSetup* CurveEdSetup; 
	float LODDistanceCheckTime; 
	float MacroUVRadius; 
	struct TArray<float> LODDistances; 
	struct TArray<struct FParticleSystemLOD> LODSettings; 
	struct FBox FixedRelativeBoundingBox; 
	float SecondsBeforeInactive; 
	float Delay; 
	float DelayLow; 
	char bOrientZAxisTowardCamera : 1; 
	char bUseFixedRelativeBoundingBox : 1; 
	char bShouldResetPeakCounts : 1; 
	char bHasPhysics : 1; 
	char bUseRealtimeThumbnail : 1; 
	char ThumbnailImageOutOfDate : 1; 
	char bUseDelayRange : 1; 
	char bAllowManagedTicking : 1; 
	char bAutoDeactivate : 1; 
	char bRegenerateLODDuplicate : 1; 
	enum class EParticleSystemUpdateMode SystemUpdateMode; 
	enum class ParticleSystemLODMethod LODMethod; 
	enum class EParticleSystemInsignificanceReaction InsignificantReaction; 
	enum class EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; 
	enum class EParticleSignificanceLevel MaxSignificanceLevel; 
	uint32_t MinTimeBetweenTicks; 
	float InsignificanceDelay; 
	struct FVector MacroUVPosition; 
	struct FBox CustomOcclusionBounds; 
	struct TArray<struct FLODSoloTrack> SoloTracking; 
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; 

	bool ContainsEmitterType(struct UObject* TypeData); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.ParticleModule
struct UParticleModule : UObject {
	char bSpawnModule : 1; 
	char bUpdateModule : 1; 
	char bFinalUpdateModule : 1; 
	char bUpdateForGPUEmitter : 1; 
	char bCurvesAsColor : 1; 
	char b3DDrawMode : 1; 
	char bSupported3DDrawMode : 1; 
	char bEnabled : 1; 
	char bEditable : 1; 
	char LODDuplicate : 1; 
	char bSupportsRandomSeed : 1; 
	char bRequiresLoopingNotification : 1; 
	char LODValidity; 
};

// Class Engine.ParticleModuleAccelerationBase
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; 
};

// Class Engine.ParticleModuleAcceleration
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	struct FRawDistributionVector Acceleration; 
	char bApplyOwnerScale : 1; 
};

// Class Engine.ParticleModuleAccelerationConstant
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	struct FVector Acceleration; 
};

// Class Engine.ParticleModuleAccelerationDrag
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragCoefficient; 
	struct FRawDistributionFloat DragCoefficientRaw; 
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragScale; 
	struct FRawDistributionFloat DragScaleRaw; 
};

// Class Engine.ParticleModuleAccelerationOverLifetime
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	struct FRawDistributionVector AccelOverLife; 
};

// Class Engine.ParticleModuleAttractorBase
struct UParticleModuleAttractorBase : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	struct FVector EndPoint0; 
	struct FVector EndPoint1; 
	struct FRawDistributionFloat Range; 
	struct FRawDistributionFloat Strength; 
};

// Class Engine.ParticleModuleAttractorParticle
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	struct FName EmitterName; 
	struct FRawDistributionFloat Range; 
	char bStrengthByDistance : 1; 
	struct FRawDistributionFloat Strength; 
	char bAffectBaseVelocity : 1; 
	enum class EAttractorParticleSelectionMethod SelectionMethod; 
	char bRenewSource : 1; 
	char bInheritSourceVel : 1; 
	int32_t LastSelIndex; 
};

// Class Engine.ParticleModuleAttractorPoint
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	struct FRawDistributionVector position; 
	struct FRawDistributionFloat Range; 
	struct FRawDistributionFloat Strength; 
	char StrengthByDistance : 1; 
	char bAffectBaseVelocity : 1; 
	char bOverrideVelocity : 1; 
	char bUseWorldSpacePosition : 1; 
	char Positive_X : 1; 
	char Positive_Y : 1; 
	char Positive_Z : 1; 
	char Negative_X : 1; 
	char Negative_Y : 1; 
	char Negative_Z : 1; 
};

// Class Engine.ParticleModuleAttractorPointGravity
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	struct FVector position; 
	float Radius; 
	struct UDistributionFloat* Strength; 
	struct FRawDistributionFloat StrengthRaw; 
};

// Class Engine.ParticleModuleBeamBase
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.ParticleModuleBeamModifier
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	enum class BeamModifierType ModifierType; 
	struct FBeamModifierOptions PositionOptions; 
	struct FRawDistributionVector position; 
	struct FBeamModifierOptions TangentOptions; 
	struct FRawDistributionVector Tangent; 
	char bAbsoluteTangent : 1; 
	struct FBeamModifierOptions StrengthOptions; 
	struct FRawDistributionFloat Strength; 
};

// Class Engine.ParticleModuleBeamNoise
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; 
	int32_t Frequency; 
	int32_t Frequency_LowRange; 
	struct FRawDistributionVector NoiseRange; 
	struct FRawDistributionFloat NoiseRangeScale; 
	char bNRScaleEmitterTime : 1; 
	struct FRawDistributionVector NoiseSpeed; 
	char bSmooth : 1; 
	float NoiseLockRadius; 
	char bNoiseLock : 1; 
	char bOscillate : 1; 
	float NoiseLockTime; 
	float NoiseTension; 
	char bUseNoiseTangents : 1; 
	struct FRawDistributionFloat NoiseTangentStrength; 
	int32_t NoiseTessellation; 
	char bTargetNoise : 1; 
	float FrequencyDistance; 
	char bApplyNoiseScale : 1; 
	struct FRawDistributionFloat NoiseScale; 
};

// Class Engine.ParticleModuleBeamSource
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod SourceMethod; 
	struct FName SourceName; 
	char bSourceAbsolute : 1; 
	struct FRawDistributionVector Source; 
	char bLockSource : 1; 
	enum class Beam2SourceTargetTangentMethod SourceTangentMethod; 
	struct FRawDistributionVector SourceTangent; 
	char bLockSourceTangent : 1; 
	struct FRawDistributionFloat SourceStrength; 
	char bLockSourceStength : 1; 
};

// Class Engine.ParticleModuleBeamTarget
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod TargetMethod; 
	struct FName TargetName; 
	struct FRawDistributionVector Target; 
	char bTargetAbsolute : 1; 
	char bLockTarget : 1; 
	enum class Beam2SourceTargetTangentMethod TargetTangentMethod; 
	struct FRawDistributionVector TargetTangent; 
	char bLockTargetTangent : 1; 
	struct FRawDistributionFloat TargetStrength; 
	char bLockTargetStength : 1; 
	float LockRadius; 
};

// Class Engine.ParticleModuleCameraBase
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.ParticleModuleCameraOffset
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	struct FRawDistributionFloat CameraOffset; 
	char bSpawnTimeOnly : 1; 
	enum class EParticleCameraOffsetUpdateMethod UpdateMethod; 
};

// Class Engine.ParticleModuleCollisionBase
struct UParticleModuleCollisionBase : UParticleModule {
};

// Class Engine.ParticleModuleCollision
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	struct FRawDistributionVector DampingFactor; 
	struct FRawDistributionVector DampingFactorRotation; 
	struct FRawDistributionFloat MaxCollisions; 
	enum class EParticleCollisionComplete CollisionCompletionOption; 
	struct TArray<enum class EObjectTypeQuery> CollisionTypes; 
	char bApplyPhysics : 1; 
	char bIgnoreTriggerVolumes : 1; 
	struct FRawDistributionFloat ParticleMass; 
	float DirScalar; 
	char bPawnsDoNotDecrementCount : 1; 
	char bOnlyVerticalNormalsDecrementCount : 1; 
	float VerticalFudgeFactor; 
	struct FRawDistributionFloat DelayAmount; 
	char bDropDetail : 1; 
	char bCollideOnlyIfVisible : 1; 
	char bIgnoreSourceActor : 1; 
	float MaxCollisionDistance; 
};

// Class Engine.ParticleModuleCollisionGPU
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	struct FRawDistributionFloat Resilience; 
	struct FRawDistributionFloat ResilienceScaleOverLife; 
	float Friction; 
	float RandomSpread; 
	float RandomDistribution; 
	float RadiusScale; 
	float RadiusBias; 
	enum class EParticleCollisionResponse Response; 
	enum class EParticleCollisionMode CollisionMode; 
};

// Class Engine.ParticleModuleColorBase
struct UParticleModuleColorBase : UParticleModule {
};

// Class Engine.ParticleModuleColor
struct UParticleModuleColor : UParticleModuleColorBase {
	struct FRawDistributionVector StartColor; 
	struct FRawDistributionFloat StartAlpha; 
	char bClampAlpha : 1; 
};

// Class Engine.ParticleModuleColor_Seeded
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleColorOverLife
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorOverLife; 
	struct FRawDistributionFloat AlphaOverLife; 
	char bClampAlpha : 1; 
};

// Class Engine.ParticleModuleColorScaleOverLife
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorScaleOverLife; 
	struct FRawDistributionFloat AlphaScaleOverLife; 
	char bEmitterTime : 1; 
};

// Class Engine.ParticleModuleEventBase
struct UParticleModuleEventBase : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	struct TArray<struct FParticleEvent_GenerateInfo> Events; 
};

// Class Engine.ParticleModuleEventReceiverBase
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	enum class EParticleEventType EventGeneratorType; 
	struct FName EventName; 
};

// Class Engine.ParticleModuleEventReceiverKillParticles
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; 
};

// Class Engine.ParticleModuleEventReceiverSpawn
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	struct FRawDistributionFloat SpawnCount; 
	char bUseParticleTime : 1; 
	char bUsePSysLocation : 1; 
	char bInheritVelocity : 1; 
	struct FRawDistributionVector InheritVelocityScale; 
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; 
	char bBanPhysicalMaterials : 1; 
};

// Class Engine.ParticleModuleEventSendToGame
struct UParticleModuleEventSendToGame : UObject {
};

// Class Engine.ParticleModuleKillBase
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.ParticleModuleKillBox
struct UParticleModuleKillBox : UParticleModuleKillBase {
	struct FRawDistributionVector LowerLeftCorner; 
	struct FRawDistributionVector UpperRightCorner; 
	char bAbsolute : 1; 
	char bKillInside : 1; 
	char bAxisAlignedAndFixedSize : 1; 
};

// Class Engine.ParticleModuleKillHeight
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	struct FRawDistributionFloat Height; 
	char bAbsolute : 1; 
	char bFloor : 1; 
	char bApplyPSysScale : 1; 
};

// Class Engine.ParticleModuleLifetimeBase
struct UParticleModuleLifetimeBase : UParticleModule {
};

// Class Engine.ParticleModuleLifetime
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	struct FRawDistributionFloat LifeTime; 
};

// Class Engine.ParticleModuleLifetime_Seeded
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleLightBase
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.ParticleModuleLight
struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; 
	bool bAffectsTranslucency; 
	bool bPreviewLightRadius; 
	float SpawnFraction; 
	struct FRawDistributionVector ColorScaleOverLife; 
	struct FRawDistributionFloat BrightnessOverLife; 
	struct FRawDistributionFloat RadiusScale; 
	struct FRawDistributionFloat LightExponent; 
	struct FLightingChannels LightingChannels; 
	float VolumetricScatteringIntensity; 
	bool bHighQualityLights; 
	bool bShadowCastingLights; 
};

// Class Engine.ParticleModuleLight_Seeded
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleLocationBase
struct UParticleModuleLocationBase : UParticleModule {
};

// Class Engine.ParticleModuleLocation
struct UParticleModuleLocation : UParticleModuleLocationBase {
	struct FRawDistributionVector StartLocation; 
	float DistributeOverNPoints; 
	float DistributeThreshold; 
};

// Class Engine.ParticleModuleLocation_Seeded
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleLocationBoneSocket
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	enum class ELocationBoneSocketSource SourceType; 
	struct FVector UniversalOffset; 
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations; 
	enum class ELocationBoneSocketSelectionMethod SelectionMethod; 
	char bUpdatePositionEachFrame : 1; 
	char bOrientMeshEmitters : 1; 
	char bInheritBoneVelocity : 1; 
	float InheritVelocityScale; 
	struct FName SkelMeshActorParamName; 
	int32_t NumPreSelectedIndices; 
};

// Class Engine.ParticleModuleLocationDirect
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	struct FRawDistributionVector Location; 
	struct FRawDistributionVector LocationOffset; 
	struct FRawDistributionVector ScaleFactor; 
	struct FRawDistributionVector Direction; 
};

// Class Engine.ParticleModuleLocationEmitter
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	struct FName EmitterName; 
	enum class ELocationEmitterSelectionMethod SelectionMethod; 
	char InheritSourceVelocity : 1; 
	float InheritSourceVelocityScale; 
	char bInheritSourceRotation : 1; 
	float InheritSourceRotationScale; 
};

// Class Engine.ParticleModuleLocationEmitterDirect
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	struct FName EmitterName; 
};

// Class Engine.ParticleModuleLocationPrimitiveBase
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; 
	char Positive_Y : 1; 
	char Positive_Z : 1; 
	char Negative_X : 1; 
	char Negative_Y : 1; 
	char Negative_Z : 1; 
	char SurfaceOnly : 1; 
	char Velocity : 1; 
	struct FRawDistributionFloat VelocityScale; 
	struct FRawDistributionVector StartLocation; 
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; 
	struct FRawDistributionFloat StartRadius; 
	struct FRawDistributionFloat StartHeight; 
	enum class CylinderHeightAxis HeightAxis; 
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	struct FRawDistributionFloat StartRadius; 
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	struct FRawDistributionVector StartOffset; 
	struct FRawDistributionFloat Height; 
	struct FRawDistributionFloat Angle; 
	struct FRawDistributionFloat Thickness; 
};

// Class Engine.ParticleModuleLocationSkelVertSurface
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	enum class ELocationSkelVertSurfaceSource SourceType; 
	struct FVector UniversalOffset; 
	char bUpdatePositionEachFrame : 1; 
	char bOrientMeshEmitters : 1; 
	char bInheritBoneVelocity : 1; 
	float InheritVelocityScale; 
	struct FName SkelMeshActorParamName; 
	struct TArray<struct FName> ValidAssociatedBones; 
	char bEnforceNormalCheck : 1; 
	struct FVector NormalToCompare; 
	float NormalCheckToleranceDegrees; 
	float NormalCheckTolerance; 
	struct TArray<int32_t> ValidMaterialIndices; 
	char bInheritVertexColor : 1; 
	char bInheritUV : 1; 
	uint32_t InheritUVChannel; 
};

// Class Engine.ParticleModuleLocationWorldOffset
struct UParticleModuleLocationWorldOffset : UParticleModuleLocation {
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleMaterialBase
struct UParticleModuleMaterialBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	struct TArray<struct UMaterialInterface*> MeshMaterials; 
};

// Class Engine.ParticleModuleRotationBase
struct UParticleModuleRotationBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	struct FRawDistributionVector StartRotation; 
	char bInheritParent : 1; 
};

// Class Engine.ParticleModuleMeshRotation_Seeded
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleRotationRateBase
struct UParticleModuleRotationRateBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	struct FRawDistributionVector StartRotationRate; 
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector LifeMultiplier; 
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector RotRate; 
	char bScaleRotRate : 1; 
};

// Class Engine.ParticleModuleOrbitBase
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; 
};

// Class Engine.ParticleModuleOrbit
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	enum class EOrbitChainMode ChainMode; 
	struct FRawDistributionVector OffsetAmount; 
	struct FOrbitOptions OffsetOptions; 
	struct FRawDistributionVector RotationAmount; 
	struct FOrbitOptions RotationOptions; 
	struct FRawDistributionVector RotationRateAmount; 
	struct FOrbitOptions RotationRateOptions; 
};

// Class Engine.ParticleModuleOrientationBase
struct UParticleModuleOrientationBase : UParticleModule {
};

// Class Engine.ParticleModuleOrientationAxisLock
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	enum class EParticleAxisLock LockAxisFlags; 
};

// Class Engine.ParticleModuleParameterBase
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.ParticleModuleParameterDynamic
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	struct TArray<struct FEmitterDynamicParameter> DynamicParams; 
	int32_t UpdateFlags; 
	char bUsesVelocity : 1; 
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModulePivotOffset
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	struct FVector2D PivotOffset; 
};

// Class Engine.ParticleModuleRequired
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; 
	float MinFacingCameraBlendDistance; 
	float MaxFacingCameraBlendDistance; 
	struct FVector EmitterOrigin; 
	struct FRotator EmitterRotation; 
	enum class EParticleScreenAlignment ScreenAlignment; 
	char bUseLocalSpace : 1; 
	char bKillOnDeactivate : 1; 
	char bKillOnCompleted : 1; 
	enum class EParticleSortMode SortMode; 
	char bUseLegacyEmitterTime : 1; 
	char bRemoveHMDRoll : 1; 
	char bEmitterDurationUseRange : 1; 
	float EmitterDuration; 
	struct FRawDistributionFloat SpawnRate; 
	struct TArray<struct FParticleBurst> BurstList; 
	float EmitterDelay; 
	float EmitterDelayLow; 
	char bDelayFirstLoopOnly : 1; 
	enum class EParticleSubUVInterpMethod InterpolationMethod; 
	char bScaleUV : 1; 
	char bEmitterDelayUseRange : 1; 
	enum class EParticleBurstMethod ParticleBurstMethod; 
	char bOverrideSystemMacroUV : 1; 
	char bUseMaxDrawCount : 1; 
	enum class EOpacitySourceMode OpacitySourceMode; 
	enum class EEmitterNormalsMode EmitterNormalsMode; 
	char bOrbitModuleAffectsVelocityAlignment : 1; 
	int32_t SubImages_Horizontal; 
	int32_t SubImages_Vertical; 
	float RandomImageTime; 
	int32_t RandomImageChanges; 
	struct FVector MacroUVPosition; 
	float MacroUVRadius; 
	enum class EParticleUVFlipMode UVFlippingMode; 
	enum class ESubUVBoundingVertexCount BoundingMode; 
	char bDurationRecalcEachLoop : 1; 
	struct FVector NormalsSphereCenter; 
	float AlphaThreshold; 
	int32_t EmitterLoops; 
	struct UTexture2D* CutoutTexture; 
	int32_t MaxDrawCount; 
	float EmitterDurationLow; 
	struct FVector NormalsCylinderDirection; 
	struct TArray<struct FName> NamedMaterialOverrides; 
};

// Class Engine.ParticleModuleRotation
struct UParticleModuleRotation : UParticleModuleRotationBase {
	struct FRawDistributionFloat StartRotation; 
};

// Class Engine.ParticleModuleRotation_Seeded
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleRotationOverLifetime
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	struct FRawDistributionFloat RotationOverLife; 
	char Scale : 1; 
};

// Class Engine.ParticleModuleRotationRate
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	struct FRawDistributionFloat StartRotationRate; 
};

// Class Engine.ParticleModuleRotationRate_Seeded
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionFloat LifeMultiplier; 
};

// Class Engine.ParticleModuleSizeBase
struct UParticleModuleSizeBase : UParticleModule {
};

// Class Engine.ParticleModuleSize
struct UParticleModuleSize : UParticleModuleSizeBase {
	struct FRawDistributionVector StartSize; 
};

// Class Engine.ParticleModuleSize_Seeded
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleSizeMultiplyLife
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	struct FRawDistributionVector LifeMultiplier; 
	char MultiplyX : 1; 
	char MultiplyY : 1; 
	char MultiplyZ : 1; 
};

// Class Engine.ParticleModuleSizeScale
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	struct FRawDistributionVector SizeScale; 
	char EnableX : 1; 
	char EnableY : 1; 
	char EnableZ : 1; 
};

// Class Engine.ParticleModuleSizeScaleBySpeed
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	struct FVector2D SpeedScale; 
	struct FVector2D MaxScale; 
};

// Class Engine.ParticleModuleSourceMovement
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	struct FRawDistributionVector SourceMovementScale; 
};

// Class Engine.ParticleModuleSpawnBase
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; 
	char bProcessBurstList : 1; 
};

// Class Engine.ParticleModuleSpawn
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	struct FRawDistributionFloat Rate; 
	struct FRawDistributionFloat RateScale; 
	enum class EParticleBurstMethod ParticleBurstMethod; 
	struct TArray<struct FParticleBurst> BurstList; 
	struct FRawDistributionFloat BurstScale; 
	char bApplyGlobalSpawnRateScale : 1; 
};

// Class Engine.ParticleModuleSpawnPerUnit
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; 
	float MovementTolerance; 
	struct FRawDistributionFloat SpawnPerUnit; 
	float MaxFrameDistance; 
	char bIgnoreSpawnRateWhenMoving : 1; 
	char bIgnoreMovementAlongX : 1; 
	char bIgnoreMovementAlongY : 1; 
	char bIgnoreMovementAlongZ : 1; 
};

// Class Engine.ParticleModuleSubUVBase
struct UParticleModuleSubUVBase : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	struct USubUVAnimation* Animation; 
	struct FRawDistributionFloat SubImageIndex; 
	char bUseRealTime : 1; 
};

// Class Engine.ParticleModuleSubUVMovie
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; 
	struct FRawDistributionFloat FrameRate; 
	int32_t StartingFrame; 
};

// Class Engine.ParticleModuleTrailBase
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.ParticleModuleTrailSource
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	enum class ETrail2SourceMethod SourceMethod; 
	struct FName SourceName; 
	struct FRawDistributionFloat SourceStrength; 
	char bLockSourceStength : 1; 
	int32_t SourceOffsetCount; 
	struct TArray<struct FVector> SourceOffsetDefaults; 
	enum class EParticleSourceSelectionMethod SelectionMethod; 
	char bInheritRotation : 1; 
};

// Class Engine.ParticleModuleTypeDataBase
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.ParticleModuleTypeDataAnimTrail
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; 
	char bEnablePreviousTangentRecalculation : 1; 
	char bTangentRecalculationEveryFrame : 1; 
	float TilingDistance; 
	float DistanceTessellationStepSize; 
	float TangentTessellationStepSize; 
	float WidthTessellationStepSize; 
};

// Class Engine.ParticleModuleTypeDataBeam2
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class EBeam2Method BeamMethod; 
	int32_t TextureTile; 
	float TextureTileDistance; 
	int32_t Sheets; 
	int32_t MaxBeamCount; 
	float Speed; 
	int32_t InterpolationPoints; 
	char bAlwaysOn : 1; 
	int32_t UpVectorStepSize; 
	struct FName BranchParentName; 
	struct FRawDistributionFloat Distance; 
	enum class EBeamTaperMethod TaperMethod; 
	struct FRawDistributionFloat TaperFactor; 
	struct FRawDistributionFloat TaperScale; 
	char RenderGeometry : 1; 
	char RenderDirectLine : 1; 
	char RenderLines : 1; 
	char RenderTessellation : 1; 
};

// Class Engine.ParticleModuleTypeDataGpu
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct FGPUSpriteEmitterInfo EmitterInfo; 
	struct FGPUSpriteResourceData ResourceData; 
	float CameraMotionBlurAmount; 
	char bClearExistingParticlesOnInit : 1; 
};

// Class Engine.ParticleModuleTypeDataMesh
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; 
	float LODSizeScale; 
	char bUseStaticMeshLODs : 1; 
	char CastShadows : 1; 
	char DoCollisions : 1; 
	enum class EMeshScreenAlignment MeshAlignment; 
	char bOverrideMaterial : 1; 
	char bOverrideDefaultMotionBlurSettings : 1; 
	char bEnableMotionBlur : 1; 
	struct FRawDistributionVector RollPitchYawRange; 
	enum class EParticleAxisLock AxisLockOption; 
	char bCameraFacing : 1; 
	enum class EMeshCameraFacingUpAxis CameraFacingUpAxisOption; 
	enum class EMeshCameraFacingOptions CameraFacingOption; 
	char bApplyParticleRotationAsSpin : 1; 
	char bFaceCameraDirectionRatherThanPosition : 1; 
	char bCollisionsConsiderPartilceSize : 1; 
};

// Class Engine.ParticleModuleTypeDataRibbon
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; 
	int32_t SheetsPerTrail; 
	int32_t MaxTrailCount; 
	int32_t MaxParticleInTrailCount; 
	char bDeadTrailsOnDeactivate : 1; 
	char bDeadTrailsOnSourceLoss : 1; 
	char bClipSourceSegement : 1; 
	char bEnablePreviousTangentRecalculation : 1; 
	char bTangentRecalculationEveryFrame : 1; 
	char bSpawnInitialParticle : 1; 
	enum class ETrailsRenderAxisOption RenderAxis; 
	float TangentSpawningScalar; 
	char bRenderGeometry : 1; 
	char bRenderSpawnPoints : 1; 
	char bRenderTangents : 1; 
	char bRenderTessellation : 1; 
	float TilingDistance; 
	float DistanceTessellationStepSize; 
	char bEnableTangentDiffInterpScale : 1; 
	float TangentTessellationScalar; 
};

// Class Engine.ParticleModuleVectorFieldBase
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.ParticleModuleVectorFieldGlobal
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; 
	float GlobalVectorFieldScale; 
	float GlobalVectorFieldTightness; 
};

// Class Engine.ParticleModuleVectorFieldLocal
struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; 
	struct FVector RelativeTranslation; 
	struct FRotator RelativeRotation; 
	struct FVector RelativeScale3D; 
	float Intensity; 
	float Tightness; 
	char bIgnoreComponentTransform : 1; 
	char bTileX : 1; 
	char bTileY : 1; 
	char bTileZ : 1; 
	char bUseFixDT : 1; 
};

// Class Engine.ParticleModuleVectorFieldRotation
struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	struct FVector MinInitialRotation; 
	struct FVector MaxInitialRotation; 
};

// Class Engine.ParticleModuleVectorFieldRotationRate
struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; 
};

// Class Engine.ParticleModuleVectorFieldScale
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScale; 
	struct FRawDistributionFloat VectorFieldScaleRaw; 
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScaleOverLife; 
	struct FRawDistributionFloat VectorFieldScaleOverLifeRaw; 
};

// Class Engine.ParticleModuleVelocityBase
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; 
	char bApplyOwnerScale : 1; 
};

// Class Engine.ParticleModuleVelocity
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	struct FRawDistributionVector StartVelocity; 
	struct FRawDistributionFloat StartVelocityRadial; 
};

// Class Engine.ParticleModuleVelocity_Seeded
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	struct FParticleRandomSeedInfo RandomSeedInfo; 
};

// Class Engine.ParticleModuleVelocityCone
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	struct FRawDistributionFloat Angle; 
	struct FRawDistributionFloat Velocity; 
	struct FVector Direction; 
};

// Class Engine.ParticleModuleVelocityInheritParent
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	struct FRawDistributionVector Scale; 
};

// Class Engine.ParticleModuleVelocityOverLifetime
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	struct FRawDistributionVector VelOverLife; 
	char Absolute : 1; 
};

// Class Engine.ParticleSpriteEmitter
struct UParticleSpriteEmitter : UParticleEmitter {
};

// Class Engine.ParticleSystemComponent
struct UParticleSystemComponent : UFXSystemComponent {
	struct UParticleSystem* Template; 
	struct TArray<struct UMaterialInterface*> EmitterMaterials; 
	struct TArray<struct USkeletalMeshComponent*> SkelMeshComponents; 
	char bResetOnDetach : 1; 
	char bUpdateOnDedicatedServer : 1; 
	char bAllowRecycling : 1; 
	char bAutoManageAttachment : 1; 
	char bAutoAttachWeldSimulatedBodies : 1; 
	char bWarmingUp : 1; 
	char bOverrideLODMethod : 1; 
	char bSkipUpdateDynamicDataDuringTick : 1; 
	enum class ParticleSystemLODMethod LODMethod; 
	enum class EParticleSignificanceLevel RequiredSignificance; 
	struct TArray<struct FParticleSysParam> InstanceParameters; 
	struct FMulticastInlineDelegate OnParticleSpawn; 
	struct FMulticastInlineDelegate OnParticleBurst; 
	struct FMulticastInlineDelegate OnParticleDeath; 
	struct FMulticastInlineDelegate OnParticleCollide; 
	bool bOldPositionValid; 
	struct FVector OldPosition; 
	struct FVector PartSysVelocity; 
	float WarmupTime; 
	float WarmupTickRate; 
	float SecondsBeforeInactive; 
	float MaxTimeBeforeForceUpdateTransform; 
	struct TArray<struct UParticleSystemReplay*> ReplayClips; 
	float CustomTimeDilation; 
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; 
	struct FName AutoAttachSocketName; 
	enum class EAttachmentRule AutoAttachLocationRule; 
	enum class EAttachmentRule AutoAttachRotationRule; 
	enum class EAttachmentRule AutoAttachScaleRule; 
	struct FMulticastInlineDelegate OnSystemFinished; 

	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, enum class ETrailWidthMode InWidthMode, float InWidth); // (Final|Native|Public|BlueprintCallable)
	void SetTemplate(struct UParticleSystem* NewTemplate); // (Final|Native|Public|BlueprintCallable)
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // (Final|Native|Public|BlueprintCallable)
	void SetBeamTargetTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t TargetIndex); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex); // (Native|Public|BlueprintCallable)
	void SetBeamTargetPoint(int32_t EmitterIndex, struct FVector NewTargetPoint, int32_t TargetIndex); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetBeamSourceTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t SourceIndex); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex); // (Native|Public|BlueprintCallable)
	void SetBeamSourcePoint(int32_t EmitterIndex, struct FVector NewSourcePoint, int32_t SourceIndex); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetBeamEndPoint(int32_t EmitterIndex, struct FVector NewEndPoint); // (Native|Public|HasDefaults|BlueprintCallable)
	void SetAutoAttachParams(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachLocation LocationType); // (Final|Native|Public|BlueprintCallable)
	int32_t GetNumActiveParticles(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInterface* GetNamedMaterial(struct FName InName); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, struct FVector& OutTangentPoint); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, struct FVector& OutTargetPoint); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, struct FVector& OutTangentPoint); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, struct FVector& OutSourcePoint); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetBeamEndPoint(int32_t EmitterIndex, struct FVector& OutEndPoint); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, struct FVector InLocation, struct FVector InDirection, struct FVector InVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void EndTrails(); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(struct FName InName, struct UMaterialInterface* SourceMaterial); // (Native|Public|BlueprintCallable)
	void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, enum class ETrailWidthMode InWidthMode, float InWidth); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.ParticleSystemReplay
struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; 
};

// Class Engine.PathFollowingAgentInterface
struct UPathFollowingAgentInterface : UInterface {
};

// Class Engine.PawnNoiseEmitterComponent
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; 
	struct FVector LastRemoteNoisePosition; 
	float NoiseLifetime; 
	float LastRemoteNoiseVolume; 
	float LastRemoteNoiseTime; 
	float LastLocalNoiseVolume; 
	float LastLocalNoiseTime; 

	void MakeNoise(struct AActor* NoiseMaker, float Loudness, struct FVector& NoiseLocation); // (BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.PhysicalAnimationComponent
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; 
	struct USkeletalMeshComponent* SkeletalMeshComponent; 

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // (Final|Native|Public|BlueprintCallable)
	void SetSkeletalMeshComponent(struct USkeletalMeshComponent* InSkeletalMeshComponent); // (Final|Native|Public|BlueprintCallable)
	struct FTransform GetBodyTargetTransform(struct FName BodyName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ApplyPhysicalAnimationSettingsBelow(struct FName BodyName, struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ApplyPhysicalAnimationSettings(struct FName BodyName, struct FPhysicalAnimationData& PhysicalAnimationData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ApplyPhysicalAnimationProfileBelow(struct FName BodyName, struct FName ProfileName, bool bIncludeSelf, bool bClearNotFound); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PhysicalMaterialMask
struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; 
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
};

// Class Engine.PhysicsAsset
struct UPhysicsAsset : UObject {
	struct TArray<int32_t> BoundsBodies; 
	struct TArray<struct USkeletalBodySetup*> SkeletalBodySetups; 
	struct TArray<struct UPhysicsConstraintTemplate*> ConstraintSetup; 
	struct FSolverIterations SolverIterations; 
	enum class EPhysicsAssetSolverType SolverType; 
	char bNotForDedicatedServer : 1; 
	struct UThumbnailInfo* ThumbnailInfo; 
	struct TArray<struct UBodySetup*> BodySetup; 
};

// Class Engine.SkeletalBodySetup
struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; 
	struct TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData; 
};

// Class Engine.PhysicsCollisionHandler
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; 
	float ImpactReFireDelay; 
	struct USoundBase* DefaultImpactSound; 
	float LastImpactSoundTime; 
};

// Class Engine.RigidBodyBase
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; 
	struct AActor* ConstraintActor1; 
	struct AActor* ConstraintActor2; 
	char bDisableCollision : 1; 
};

// Class Engine.PhysicsConstraintComponent
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* ConstraintActor1; 
	struct FConstrainComponentPropName ComponentName1; 
	struct AActor* ConstraintActor2; 
	struct FConstrainComponentPropName ComponentName2; 
	struct UPhysicsConstraintTemplate* ConstraintSetup; 
	struct FMulticastInlineDelegate OnConstraintBroken; 
	struct FConstraintInstance ConstraintInstance; 

	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // (Final|Native|Public|BlueprintCallable)
	void SetOrientationDriveSLERP(bool bEnableSLERP); // (Final|Native|Public|BlueprintCallable)
	void SetLinearZLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize); // (Final|Native|Public|BlueprintCallable)
	void SetLinearYLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize); // (Final|Native|Public|BlueprintCallable)
	void SetLinearXLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize); // (Final|Native|Public|BlueprintCallable)
	void SetLinearVelocityTarget(struct FVector& InVelTarget); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // (Final|Native|Public|BlueprintCallable)
	void SetLinearPositionTarget(struct FVector& InPosTarget); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // (Final|Native|Public|BlueprintCallable)
	void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold); // (Final|Native|Public|BlueprintCallable)
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // (Final|Native|Public|BlueprintCallable)
	void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold); // (Final|Native|Public|BlueprintCallable)
	void SetDisableCollision(bool bDisableCollision); // (Final|Native|Public|BlueprintCallable)
	void SetConstraintReferencePosition(enum class EConstraintFrame Frame, struct FVector& RefPosition); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetConstraintReferenceOrientation(enum class EConstraintFrame Frame, struct FVector& PriAxis, struct FVector& SecAxis); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetConstraintReferenceFrame(enum class EConstraintFrame Frame, struct FTransform& RefFrame); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetConstrainedComponents(struct UPrimitiveComponent* Component1, struct FName BoneName1, struct UPrimitiveComponent* Component2, struct FName BoneName2); // (Final|Native|Public|BlueprintCallable)
	void SetAngularVelocityTarget(struct FVector& InVelTarget); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // (Final|Native|Public|BlueprintCallable)
	void SetAngularVelocityDriveSLERP(bool bEnableSLERP); // (Final|Native|Public|BlueprintCallable)
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // (Final|Native|Public|BlueprintCallable)
	void SetAngularTwistLimit(enum class EAngularConstraintMotion ConstraintType, float TwistLimitAngle); // (Final|Native|Public|BlueprintCallable)
	void SetAngularSwing2Limit(enum class EAngularConstraintMotion MotionType, float Swing2LimitAngle); // (Final|Native|Public|BlueprintCallable)
	void SetAngularSwing1Limit(enum class EAngularConstraintMotion MotionType, float Swing1LimitAngle); // (Final|Native|Public|BlueprintCallable)
	void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold); // (Final|Native|Public|BlueprintCallable)
	void SetAngularOrientationTarget(struct FRotator& InPosTarget); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // (Final|Native|Public|BlueprintCallable)
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // (Final|Native|Public|BlueprintCallable)
	void SetAngularDriveMode(enum class EAngularDriveMode DriveMode); // (Final|Native|Public|BlueprintCallable)
	void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold); // (Final|Native|Public|BlueprintCallable)
	bool IsBroken(); // (Final|Native|Public|BlueprintCallable)
	float GetCurrentTwist(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurrentSwing2(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurrentSwing1(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetConstraintForce(struct FVector& OutLinearForce, struct FVector& OutAngularForce); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void BreakConstraint(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PhysicsConstraintTemplate
struct UPhysicsConstraintTemplate : UObject {
	struct FConstraintInstance DefaultInstance; 
	struct TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles; 
	struct FConstraintProfileProperties DefaultProfile; 
};

// Class Engine.PhysicsFieldComponent
struct UPhysicsFieldComponent : USceneComponent {
};

// Class Engine.PhysicsHandleComponent
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* GrabbedComponent; 
	char bSoftAngularConstraint : 1; 
	char bSoftLinearConstraint : 1; 
	char bInterpolateTarget : 1; 
	float LinearDamping; 
	float LinearStiffness; 
	float AngularDamping; 
	float AngularStiffness; 
	float InterpolationSpeed; 

	void SetTargetRotation(struct FRotator NewRotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTargetLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTargetLocation(struct FVector NewLocation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLinearStiffness(float NewLinearStiffness); // (Final|Native|Public|BlueprintCallable)
	void SetLinearDamping(float NewLinearDamping); // (Final|Native|Public|BlueprintCallable)
	void SetInterpolationSpeed(float NewInterpolationSpeed); // (Final|Native|Public|BlueprintCallable)
	void SetAngularStiffness(float NewAngularStiffness); // (Final|Native|Public|BlueprintCallable)
	void SetAngularDamping(float NewAngularDamping); // (Final|Native|Public|BlueprintCallable)
	void ReleaseComponent(); // (Native|Public|BlueprintCallable)
	void GrabComponentAtLocationWithRotation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector Location, struct FRotator Rotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void GrabComponentAtLocation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void GrabComponent(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation, bool bConstrainRotation); // (Native|Public|HasDefaults|BlueprintCallable)
	void GetTargetLocationAndRotation(struct FVector& TargetLocation, struct FRotator& TargetRotation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UPrimitiveComponent* GetGrabbedComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.PhysicsSettings
struct UPhysicsSettings : UPhysicsSettingsCore {
	struct FRigidBodyErrorCorrection PhysicErrorCorrection; 
	enum class ESettingsLockedAxis LockedAxis; 
	enum class ESettingsDOF DefaultDegreesOfFreedom; 
	bool bSuppressFaceRemapTable; 
	bool bSupportUVFromHitResults; 
	bool bDisableActiveActors; 
	bool bDisableKinematicStaticPairs; 
	bool bDisableKinematicKinematicPairs; 
	bool bDisableCCD; 
	bool bEnableEnhancedDeterminism; 
	float AnimPhysicsMinDeltaTime; 
	bool bSimulateAnimPhysicsAfterReset; 
	float MaxPhysicsDeltaTime; 
	bool bSubstepping; 
	bool bSubsteppingAsync; 
	float MaxSubstepDeltaTime; 
	int32_t MaxSubsteps; 
	float SyncSceneSmoothingFactor; 
	float InitialAverageFrameRate; 
	int32_t PhysXTreeRebuildRate; 
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; 
	struct FBroadphaseSettings DefaultBroadphaseSettings; 
	float MinDeltaVelocityForHitEvents; 
	struct FChaosPhysicsSettings ChaosSettings; 
};

// Class Engine.PhysicsSpringComponent
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; 
	float SpringDamping; 
	float SpringLengthAtRest; 
	float SpringRadius; 
	enum class ECollisionChannel SpringChannel; 
	bool bIgnoreSelf; 
	float SpringCompression; 

	struct FVector GetSpringRestingPoint(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetSpringDirection(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetSpringCurrentEndPoint(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetNormalizedCompressionScalar(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.PhysicsThruster
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; 
};

// Class Engine.PhysicsThrusterComponent
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; 
};

// Class Engine.SceneCapture
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; 
	struct USceneComponent* SceneComponent; 
};

// Class Engine.PlanarReflection
struct APlanarReflection : ASceneCapture {
	struct UPlanarReflectionComponent* PlanarReflectionComponent; 
	bool bShowPreviewPlane; 

	void OnInterpToggle(bool bEnable); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SceneCaptureComponent
struct USceneCaptureComponent : USceneComponent {
	enum class ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; 
	enum class ESceneCaptureSource CaptureSource; 
	char bCaptureEveryFrame : 1; 
	char bCaptureOnMovement : 1; 
	bool bAlwaysPersistRenderingState; 
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> HiddenComponents; 
	struct TArray<struct AActor*> HiddenActors; 
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> ShowOnlyComponents; 
	struct TArray<struct AActor*> ShowOnlyActors; 
	float LODDistanceFactor; 
	float MaxViewDistanceOverride; 
	int32_t CaptureSortPriority; 
	bool bUseRayTracingIfEnabled; 
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; 
	struct FString ProfilingEventName; 

	void ShowOnlyComponent(struct UPrimitiveComponent* InComponent); // (Final|Native|Public|BlueprintCallable)
	void ShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // (Final|Native|Public|BlueprintCallable)
	void SetCaptureSortPriority(int32_t NewCaptureSortPriority); // (Final|Native|Public|BlueprintCallable)
	void RemoveShowOnlyComponent(struct UPrimitiveComponent* InComponent); // (Final|Native|Public|BlueprintCallable)
	void RemoveShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // (Final|Native|Public|BlueprintCallable)
	void HideComponent(struct UPrimitiveComponent* InComponent); // (Final|Native|Public|BlueprintCallable)
	void HideActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // (Final|Native|Public|BlueprintCallable)
	void ClearShowOnlyComponents(); // (Final|Native|Public|BlueprintCallable)
	void ClearHiddenComponents(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PlanarReflectionComponent
struct UPlanarReflectionComponent : USceneCaptureComponent {
	struct UBoxComponent* PreviewBox; 
	float NormalDistortionStrength; 
	float PrefilterRoughness; 
	float PrefilterRoughnessDistance; 
	int32_t ScreenPercentage; 
	float ExtraFOV; 
	float DistanceFromPlaneFadeStart; 
	float DistanceFromPlaneFadeEnd; 
	float DistanceFromPlaneFadeoutStart; 
	float DistanceFromPlaneFadeoutEnd; 
	float AngleFromPlaneFadeStart; 
	float AngleFromPlaneFadeEnd; 
	bool bShowPreviewPlane; 
	bool bRenderSceneTwoSided; 
};

// Class Engine.PlaneReflectionCapture
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCaptureComponent
struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; 
	struct UDrawSphereComponent* PreviewInfluenceRadius; 
	struct UBoxComponent* PreviewCaptureBox; 
};

// Class Engine.PlatformEventsComponent
struct UPlatformEventsComponent : UActorComponent {
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; 
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; 

	bool SupportsConvertibleLaptops(); // (Final|Native|Public|BlueprintCallable)
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	bool IsInTabletMode(); // (Final|Native|Public|BlueprintCallable)
	bool IsInLaptopMode(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PlatformInterfaceWebResponse
struct UPlatformInterfaceWebResponse : UObject {
	struct FString OriginalURL; 
	int32_t ResponseCode; 
	int32_t Tag; 
	struct FString StringResponse; 
	struct TArray<char> BinaryResponse; 

	int32_t GetNumHeaders(); // (Native|Public)
	struct FString GetHeaderValue(struct FString HeaderName); // (Native|Public)
	void GetHeader(int32_t HeaderIndex, struct FString& Header, struct FString& Value); // (Native|Public|HasOutParms)
};

// Class Engine.PlayerStart
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; 
};

// Class Engine.PlayerStartPIE
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.PluginCommandlet
struct UPluginCommandlet : UCommandlet {
};

// Class Engine.PointLight
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; 

	void SetRadius(float NewRadius); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLightFalloffExponent(float NewLightFalloffExponent); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.PointLightComponent
struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; 
	float LightFalloffExponent; 
	float SourceRadius; 
	float SoftSourceRadius; 
	float SourceLength; 

	void SetSourceRadius(float bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetSourceLength(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetSoftSourceRadius(float bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetLightFalloffExponent(float NewLightFalloffExponent); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.Polys
struct UPolys : UObject {
};

// Class Engine.PoseableMeshComponent
struct UPoseableMeshComponent : USkinnedMeshComponent {

	void SetBoneTransformByName(struct FName BoneName, struct FTransform& InTransform, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetBoneScaleByName(struct FName BoneName, struct FVector InScale3D, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBoneRotationByName(struct FName BoneName, struct FRotator InRotation, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBoneLocationByName(struct FName BoneName, struct FVector InLocation, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ResetBoneTransformByName(struct FName BoneName); // (Final|Native|Public|BlueprintCallable)
	struct FTransform GetBoneTransformByName(struct FName BoneName, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetBoneScaleByName(struct FName BoneName, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FRotator GetBoneRotationByName(struct FName BoneName, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetBoneLocationByName(struct FName BoneName, enum class EBoneSpaces BoneSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void CopyPoseFromSkeletalComponent(struct USkeletalMeshComponent* InComponentToCopy); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PoseAsset
struct UPoseAsset : UAnimationAsset {
	struct FPoseDataContainer PoseContainer; 
	bool bAdditivePose; 
	int32_t BasePoseIndex; 
	struct FName RetargetSource; 
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose; 
};

// Class Engine.PoseWatch
struct UPoseWatch : UObject {
	struct UEdGraphNode* Node; 
	struct FColor PoseWatchColour; 
};

// Class Engine.PostProcessComponent
struct UPostProcessComponent : USceneComponent {
	struct FPostProcessSettings Settings; 
	float Priority; 
	float BlendRadius; 
	float BlendWeight; 
	char bEnabled : 1; 
	char bUnbound : 1; 

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.PostProcessVolume
struct APostProcessVolume : AVolume {
	struct FPostProcessSettings Settings; 
	float Priority; 
	float BlendRadius; 
	float BlendWeight; 
	char bEnabled : 1; 
	char bUnbound : 1; 

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.PrecomputedVisibilityOverrideVolume
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; 
	struct TArray<struct AActor*> OverrideInvisibleActors; 
	struct TArray<struct FName> OverrideInvisibleLevels; 
};

// Class Engine.PrecomputedVisibilityVolume
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.PreviewCollectionInterface
struct UPreviewCollectionInterface : UInterface {
};

// Class Engine.PreviewMeshCollection
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; 
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; 
};

// Class Engine.PrimaryAssetLabel
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	struct FPrimaryAssetRules Rules; 
	char bLabelAssetsInMyDirectory : 1; 
	char bIsRuntimeLabel : 1; 
	struct TArray<struct TSoftObjectPtr<UObject>> ExplicitAssets; 
	struct TArray<struct TSoftClassPtr<UObject>> ExplicitBlueprints; 
	struct FCollectionReference AssetCollection; 
};

// Class Engine.ProxyLODMeshSimplificationSettings
struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	struct FName ProxyLODMeshReductionModuleName; 
};

// Class Engine.RadialForceActor
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; 

	void ToggleForce(); // (Native|Public|BlueprintCallable)
	void FireImpulse(); // (Native|Public|BlueprintCallable)
	void EnableForce(); // (Native|Public|BlueprintCallable)
	void DisableForce(); // (Native|Public|BlueprintCallable)
};

// Class Engine.RadialForceComponent
struct URadialForceComponent : USceneComponent {
	float Radius; 
	enum class ERadialImpulseFalloff Falloff; 
	float ImpulseStrength; 
	char bImpulseVelChange : 1; 
	char bIgnoreOwningActor : 1; 
	float ForceStrength; 
	float DestructibleDamage; 
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; 

	void RemoveObjectTypeToAffect(enum class EObjectTypeQuery ObjectType); // (Native|Public|BlueprintCallable)
	void FireImpulse(); // (Native|Public|BlueprintCallable)
	void AddObjectTypeToAffect(enum class EObjectTypeQuery ObjectType); // (Native|Public|BlueprintCallable)
};

// Class Engine.RectLight
struct ARectLight : ALight {
	struct URectLightComponent* RectLightComponent; 
};

// Class Engine.RectLightComponent
struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; 
	float SourceHeight; 
	float BarnDoorAngle; 
	float BarnDoorLength; 
	struct UTexture* SourceTexture; 

	void SetSourceWidth(float bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetSourceTexture(struct UTexture* bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetSourceHeight(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBarnDoorLength(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetBarnDoorAngle(float NewValue); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.RendererSettings
struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; 
	int32_t MaxMobileCascades; 
	enum class EMobileMSAASampleCount MobileMSAASampleCount; 
	char bMobileAllowDitheredLODTransition : 1; 
	char bMobileAllowSoftwareOcclusionCulling : 1; 
	char bMobileVirtualTextures : 1; 
	char bDiscardUnusedQualityLevels : 1; 
	char bOcclusionCulling : 1; 
	float MinScreenRadiusForLights; 
	float MinScreenRadiusForEarlyZPass; 
	float MinScreenRadiusForCSMdepth; 
	char bPrecomputedVisibilityWarning : 1; 
	char bTextureStreaming : 1; 
	char bUseDXT5NormalMaps : 1; 
	char bVirtualTextures : 1; 
	char bVirtualTextureEnableAutoImport : 1; 
	char bVirtualTexturedLightmaps : 1; 
	uint32_t VirtualTextureTileSize; 
	uint32_t VirtualTextureTileBorderSize; 
	uint32_t VirtualTextureFeedbackFactor; 
	char bVirtualTextureEnableCompressZlib : 1; 
	char bVirtualTextureEnableCompressCrunch : 1; 
	char bClearCoatEnableSecondNormal : 1; 
	int32_t ReflectionCaptureResolution; 
	char bReflectionCaptureCompression : 1; 
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; 
	char bForwardShading : 1; 
	char bVertexFoggingForOpaque : 1; 
	char bAllowStaticLighting : 1; 
	char bUseNormalMapsForStaticLighting : 1; 
	char bGenerateMeshDistanceFields : 1; 
	char bEightBitMeshDistanceFields : 1; 
	char bGenerateLandscapeGIData : 1; 
	char bCompressMeshDistanceFields : 1; 
	float TessellationAdaptivePixelsPerTriangle; 
	char bSeparateTranslucency : 1; 
	enum class ETranslucentSortPolicy TranslucentSortPolicy; 
	struct FVector TranslucentSortAxis; 
	enum class EFixedFoveationLevels HMDFixedFoveationLevel; 
	enum class ECustomDepthStencil CustomDepthStencil; 
	char bCustomDepthTaaJitter : 1; 
	enum class EAlphaChannelMode bEnableAlphaChannelInPostProcessing; 
	char bDefaultFeatureBloom : 1; 
	char bDefaultFeatureAmbientOcclusion : 1; 
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; 
	char bDefaultFeatureAutoExposure : 1; 
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; 
	float DefaultFeatureAutoExposureBias; 
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; 
	char bUsePreExposure : 1; 
	char bEnablePreExposureOnlyInTheEditor : 1; 
	char bDefaultFeatureMotionBlur : 1; 
	char bDefaultFeatureLensFlare : 1; 
	char bTemporalUpsampling : 1; 
	char bSSGI : 1; 
	enum class EAntiAliasingMethod DefaultFeatureAntiAliasing; 
	enum class ELightUnits DefaultLightUnits; 
	enum class EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; 
	char bRenderUnbuiltPreviewShadowsInGame : 1; 
	char bStencilForLODDither : 1; 
	enum class EEarlyZPass EarlyZPass; 
	char bEarlyZPassOnlyMaterialMasking : 1; 
	char bDBuffer : 1; 
	enum class EClearSceneOptions ClearSceneMethod; 
	char bBasePassOutputsVelocity : 1; 
	char bVertexDeformationOutputsVelocity : 1; 
	char bSelectiveBasePassOutputs : 1; 
	char bDefaultParticleCutouts : 1; 
	int32_t GPUSimulationTextureSizeX; 
	int32_t GPUSimulationTextureSizeY; 
	char bGlobalClipPlane : 1; 
	enum class EGBufferFormat GBufferFormat; 
	char bUseGPUMorphTargets : 1; 
	char bNvidiaAftermathEnabled : 1; 
	char bMultiView : 1; 
	char bMobilePostProcessing : 1; 
	char bMobileMultiView : 1; 
	char bMobileUseHWsRGBEncoding : 1; 
	char bRoundRobinOcclusion : 1; 
	char bODSCapture : 1; 
	char bMeshStreaming : 1; 
	float WireframeCullThreshold; 
	char bEnableRayTracing : 1; 
	char bEnableRayTracingTextureLOD : 1; 
	char bSupportStationarySkylight : 1; 
	char bSupportLowQualityLightmaps : 1; 
	char bSupportPointLightWholeSceneShadows : 1; 
	char bSupportAtmosphericFog : 1; 
	char bSupportSkyAtmosphere : 1; 
	char bSupportSkyAtmosphereAffectsHeightFog : 1; 
	char bSupportSkinCacheShaders : 1; 
	enum class ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; 
	float SkinCacheSceneMemoryLimitInMB; 
	char bMobileEnableStaticAndCSMShadowReceivers : 1; 
	char bMobileEnableMovableLightCSMShaderCulling : 1; 
	char bMobileAllowDistanceFieldShadows : 1; 
	char bMobileAllowMovableDirectionalLights : 1; 
	uint32_t MobileNumDynamicPointLights; 
	char bMobileDynamicPointLightsUseStaticBranch : 1; 
	char bMobileAllowMovableSpotlights : 1; 
	char bMobileAllowMovableSpotlightShadows : 1; 
	char bSupport16BitBoneIndex : 1; 
	char bGPUSkinLimit2BoneInfluences : 1; 
	char bSupportDepthOnlyIndexBuffers : 1; 
	char bSupportReversedIndexBuffers : 1; 
	char bLPV : 1; 
	char bMobileAmbientOcclusion : 1; 
	char bUseUnlimitedBoneInfluences : 1; 
	int32_t UnlimitedBonInfluencesThreshold; 
	struct FPerPlatformInt MaxSkinBones; 
	enum class EMobilePlanarReflectionMode MobilePlanarReflectionMode; 
	char bMobileSupportsGen4TAA : 1; 
	struct FPerPlatformBool bStreamSkeletalMeshLODs; 
	struct FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; 
	struct FSoftObjectPath VisualizeCalibrationColorMaterialPath; 
	struct FSoftObjectPath VisualizeCalibrationCustomMaterialPath; 
	struct FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; 
};

// Class Engine.RendererOverrideSettings
struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; 
	char bForceRecomputeTangents : 1; 
};

// Class Engine.ReplayNetConnection
struct UReplayNetConnection : UNetConnection {
};

// Class Engine.ReplaySubsystem
struct UReplaySubsystem : UGameInstanceSubsystem {
	bool bLoadDefaultMapOnStop; 
};

// Class Engine.ReporterBase
struct UReporterBase : UObject {
};

// Class Engine.ReporterGraph
struct UReporterGraph : UReporterBase {
};

// Class Engine.Rig
struct URig : UObject {
	struct TArray<struct FTransformBase> TransformBases; 
	struct TArray<struct FNode> Nodes; 
};

// Class Engine.RotatingMovementComponent
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; 
	struct FVector PivotTranslation; 
	char bRotationInLocalSpace : 1; 
};

// Class Engine.RuntimeOptionsBase
struct URuntimeOptionsBase : UObject {
};

// Class Engine.RuntimeVirtualTexture
struct URuntimeVirtualTexture : UObject {
	int32_t TileCount; 
	int32_t TileSize; 
	int32_t TileBorderSize; 
	enum class ERuntimeVirtualTextureMaterialType MaterialType; 
	bool bCompressTextures; 
	bool bClearTextures; 
	bool bSinglePhysicalSpace; 
	bool bPrivateSpace; 
	bool bAdaptive; 
	bool bContinuousUpdate; 
	int32_t RemoveLowMips; 
	enum class TextureGroup LODGroup; 
	int32_t Size; 
	struct URuntimeVirtualTextureStreamingProxy* StreamingTexture; 

	int32_t GetTileSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTileCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTileBorderSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPageTableSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.RuntimeVirtualTextureComponent
struct URuntimeVirtualTextureComponent : USceneComponent {
	struct TSoftObjectPtr<AActor> BoundsAlignActor; 
	bool bSetBoundsButton; 
	bool bSnapBoundsToLandscape; 
	struct URuntimeVirtualTexture* VirtualTexture; 
	bool bEnableScalability; 
	uint32_t ScalabilityGroup; 
	bool bHidePrimitives; 
	struct UVirtualTextureBuilder* StreamingTexture; 
	int32_t StreamLowMips; 
	bool bBuildStreamingMipsButton; 
	bool bEnableCompressCrunch; 
	bool bUseStreamingLowMipsInEditor; 
	bool bBuildDebugStreamingMips; 

	void Invalidate(struct FBoxSphereBounds& WorldBounds); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Engine.RuntimeVirtualTextureVolume
struct ARuntimeVirtualTextureVolume : AActor {
	struct URuntimeVirtualTextureComponent* VirtualTextureComponent; 
};

// Class Engine.RVOAvoidanceInterface
struct URVOAvoidanceInterface : UInterface {
};

// Class Engine.Scene
struct UScene : UObject {
};

// Class Engine.SceneCapture2D
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; 

	void OnInterpToggle(bool bEnable); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SceneCaptureComponent2D
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; 
	float FOVAngle; 
	float OrthoWidth; 
	struct UTextureRenderTarget2D* TextureTarget; 
	enum class ESceneCaptureCompositeMode CompositeMode; 
	struct FPostProcessSettings PostProcessSettings; 
	float PostProcessBlendWeight; 
	char bOverride_CustomNearClippingPlane : 1; 
	float CustomNearClippingPlane; 
	bool bUseCustomProjectionMatrix; 
	struct FMatrix CustomProjectionMatrix; 
	bool bEnableClipPlane; 
	struct FVector ClipPlaneBase; 
	struct FVector ClipPlaneNormal; 
	char bCameraCutThisFrame : 1; 
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; 
	bool bDisableFlipCopyGLES; 

	void RemoveBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject); // (Final|Native|Public|BlueprintCallable)
	void CaptureScene(); // (Final|Native|Public|BlueprintCallable)
	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SceneCaptureComponentCube
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; 
	bool bCaptureRotation; 
	struct UTextureRenderTargetCube* TextureTargetLeft; 
	struct UTextureRenderTargetCube* TextureTargetRight; 
	struct UTextureRenderTarget2D* TextureTargetODS; 
	float IPD; 

	void CaptureScene(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SceneCaptureCube
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; 

	void OnInterpToggle(bool bEnable); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SCS_Node
struct USCS_Node : UObject {
	struct UObject* ComponentClass; 
	struct UActorComponent* ComponentTemplate; 
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; 
	struct FName AttachToName; 
	struct FName ParentComponentOrVariableName; 
	struct FName ParentComponentOwnerClassName; 
	bool bIsParentComponentNative; 
	struct TArray<struct USCS_Node*> ChildNodes; 
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; 
	struct FGuid VariableGuid; 
	struct FName InternalVariableName; 
};

// Class Engine.Selection
struct USelection : UObject {
};

// Class Engine.ServerStatReplicator
struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; 
	bool bOverwriteClientStats; 
	uint32_t Channels; 
	uint32_t InRate; 
	uint32_t OutRate; 
	uint32_t MaxPacketOverhead; 
	uint32_t InRateClientMax; 
	uint32_t InRateClientMin; 
	uint32_t InRateClientAvg; 
	uint32_t InPacketsClientMax; 
	uint32_t InPacketsClientMin; 
	uint32_t InPacketsClientAvg; 
	uint32_t OutRateClientMax; 
	uint32_t OutRateClientMin; 
	uint32_t OutRateClientAvg; 
	uint32_t OutPacketsClientMax; 
	uint32_t OutPacketsClientMin; 
	uint32_t OutPacketsClientAvg; 
	uint32_t NetNumClients; 
	uint32_t InPackets; 
	uint32_t OutPackets; 
	uint32_t InBunches; 
	uint32_t OutBunches; 
	uint32_t OutLoss; 
	uint32_t InLoss; 
	uint32_t VoiceBytesSent; 
	uint32_t VoiceBytesRecv; 
	uint32_t VoicePacketsSent; 
	uint32_t VoicePacketsRecv; 
	uint32_t PercentInVoice; 
	uint32_t PercentOutVoice; 
	uint32_t NumActorChannels; 
	uint32_t NumConsideredActors; 
	uint32_t PrioritizedActors; 
	uint32_t NumRelevantActors; 
	uint32_t NumRelevantDeletedActors; 
	uint32_t NumReplicatedActorAttempts; 
	uint32_t NumReplicatedActors; 
	uint32_t NumActors; 
	uint32_t NumNetActors; 
	uint32_t NumDormantActors; 
	uint32_t NumInitiallyDormantActors; 
	uint32_t NumNetGUIDsAckd; 
	uint32_t NumNetGUIDsPending; 
	uint32_t NumNetGUIDsUnAckd; 
	uint32_t ObjPathBytes; 
	uint32_t NetGUIDOutRate; 
	uint32_t NetGUIDInRate; 
	uint32_t NetSaturated; 
};

// Class Engine.ShadowMapTexture2D
struct UShadowMapTexture2D : UTexture2D {
	enum class EShadowMapFlags ShadowmapFlags; 
};

// Class Engine.SimpleConstructionScript
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> RootNodes; 
	struct TArray<struct USCS_Node*> AllNodes; 
	struct USCS_Node* DefaultSceneRootNode; 
};

// Class Engine.SkeletalMeshActor
struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; 
	char bWakeOnLevelStart : 1; 
	struct USkeletalMeshComponent* SkeletalMeshComponent; 
	struct USkeletalMesh* ReplicatedMesh; 
	struct UPhysicsAsset* ReplicatedPhysAsset; 
	struct UMaterialInterface* ReplicatedMaterial0; 
	struct UMaterialInterface* ReplicatedMaterial1; 

	void OnRep_ReplicatedPhysAsset(); // (Native|Public)
	void OnRep_ReplicatedMesh(); // (Native|Public)
	void OnRep_ReplicatedMaterial1(); // (Native|Public)
	void OnRep_ReplicatedMaterial0(); // (Native|Public)
};

// Class Engine.SkeletalMeshEditorData
struct USkeletalMeshEditorData : UObject {
};

// Class Engine.SkeletalMeshLODSettings
struct USkeletalMeshLODSettings : UDataAsset {
	struct FPerPlatformInt MinLOD; 
	struct FPerPlatformBool DisableBelowMinLodStripping; 
	bool bOverrideLODStreamingSettings; 
	struct FPerPlatformBool bSupportLODStreaming; 
	struct FPerPlatformInt MaxNumStreamedLODs; 
	struct FPerPlatformInt MaxNumOptionalLODs; 
	struct TArray<struct FSkeletalMeshLODGroupSettings> LODGroups; 
};

// Class Engine.SkeletalMeshSimplificationSettings
struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	struct FName SkeletalMeshReductionModuleName; 
};

// Class Engine.SkeletalMeshSocket
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; 
	struct FName BoneName; 
	struct FVector RelativeLocation; 
	struct FRotator RelativeRotation; 
	struct FVector RelativeScale; 
	bool bForceAlwaysAnimated; 

	void InitializeSocketFromLocation(struct USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector GetSocketLocation(struct USkeletalMeshComponent* SkelComp); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.SkyAtmosphereComponent
struct USkyAtmosphereComponent : USceneComponent {
	enum class ESkyAtmosphereTransformMode TransformMode; 
	float BottomRadius; 
	struct FColor GroundAlbedo; 
	float AtmosphereHeight; 
	float MultiScatteringFactor; 
	float TraceSampleCountScale; 
	float RayleighScatteringScale; 
	struct FLinearColor RayleighScattering; 
	float RayleighExponentialDistribution; 
	float MieScatteringScale; 
	struct FLinearColor MieScattering; 
	float MieAbsorptionScale; 
	struct FLinearColor MieAbsorption; 
	float MieAnisotropy; 
	float MieExponentialDistribution; 
	float OtherAbsorptionScale; 
	struct FLinearColor OtherAbsorption; 
	struct FTentDistribution OtherTentDistribution; 
	struct FLinearColor SkyLuminanceFactor; 
	float AerialPespectiveViewDistanceScale; 
	float HeightFogContribution; 
	float TransmittanceMinLightElevationAngle; 
	float AerialPerspectiveStartDepth; 
	struct FGuid bStaticLightingBuiltGUID; 

	void SetSkyLuminanceFactor(struct FLinearColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetRayleighScatteringScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetRayleighScattering(struct FLinearColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetRayleighExponentialDistribution(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetOtherAbsorptionScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetOtherAbsorption(struct FLinearColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetMultiScatteringFactor(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMieScatteringScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMieScattering(struct FLinearColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetMieExponentialDistribution(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMieAnisotropy(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMieAbsorptionScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMieAbsorption(struct FLinearColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetHeightFogContribution(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetAtmosphereHeight(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetAerialPespectiveViewDistanceScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, struct FVector& LightDirection); // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(struct UDirectionalLightComponent* DirectionalLight); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
};

// Class Engine.SkyAtmosphere
struct ASkyAtmosphere : AInfo {
	struct USkyAtmosphereComponent* SkyAtmosphereComponent; 
};

// Class Engine.SkyLightComponent
struct USkyLightComponent : ULightComponentBase {
	bool bRealTimeCapture; 
	enum class ESkyLightSourceType SourceType; 
	struct UTextureCube* Cubemap; 
	float SourceCubemapAngle; 
	int32_t CubemapResolution; 
	float SkyDistanceThreshold; 
	bool bCaptureEmissiveOnly; 
	bool bLowerHemisphereIsBlack; 
	struct FLinearColor LowerHemisphereColor; 
	float OcclusionMaxDistance; 
	float Contrast; 
	float OcclusionExponent; 
	float MinOcclusion; 
	struct FColor OcclusionTint; 
	char bCloudAmbientOcclusion : 1; 
	float CloudAmbientOcclusionStrength; 
	float CloudAmbientOcclusionExtent; 
	float CloudAmbientOcclusionMapResolutionScale; 
	float CloudAmbientOcclusionApertureScale; 
	enum class EOcclusionCombineMode OcclusionCombineMode; 
	struct UTextureCube* BlendDestinationCubemap; 

	void SetVolumetricScatteringIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetOcclusionTint(struct FColor& InTint); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetOcclusionExponent(float InOcclusionExponent); // (Final|Native|Public|BlueprintCallable)
	void SetOcclusionContrast(float InOcclusionContrast); // (Final|Native|Public|BlueprintCallable)
	void SetMinOcclusion(float InMinOcclusion); // (Final|Native|Public|BlueprintCallable)
	void SetLowerHemisphereColor(struct FLinearColor& InLowerHemisphereColor); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetLightColor(struct FLinearColor NewLightColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetIndirectLightingIntensity(float NewIntensity); // (Final|Native|Public|BlueprintCallable)
	void SetCubemapBlend(struct UTextureCube* SourceCubemap, struct UTextureCube* DestinationCubemap, float InBlendFraction); // (Final|Native|Public|BlueprintCallable)
	void SetCubemap(struct UTextureCube* NewCubemap); // (Final|Native|Public|BlueprintCallable)
	void RecaptureSky(); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.SlateBrushAsset
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; 
};

// Class Engine.SlateTextureAtlasInterface
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SmokeTestCommandlet
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.SoundAttenuation
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; 
};

// Class Engine.SoundClass
struct USoundClass : UObject {
	struct FSoundClassProperties Properties; 
	struct TArray<struct USoundClass*> ChildClasses; 
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; 
	struct USoundClass* ParentClass; 
};

// Class Engine.SoundConcurrency
struct USoundConcurrency : UObject {
	struct FSoundConcurrencySettings Concurrency; 
};

// Class Engine.SoundCue
struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; 
	struct USoundNode* FirstNode; 
	float VolumeMultiplier; 
	float PitchMultiplier; 
	struct FSoundAttenuationSettings AttenuationOverrides; 
	float SubtitlePriority; 
	char bOverrideAttenuation : 1; 
	char bExcludeFromRandomNodeBranchCulling : 1; 
	int32_t CookedQualityIndex; 
	char bHasPlayWhenSilent : 1; 
};

// Class Engine.SoundEffectSourcePresetChain
struct USoundEffectSourcePresetChain : UObject {
	struct TArray<struct FSourceEffectChainEntry> Chain; 
	char bPlayEffectChainTails : 1; 
};

// Class Engine.SoundGroups
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; 
};

// Class Engine.SoundMix
struct USoundMix : UObject {
	char bApplyEQ : 1; 
	float EQPriority; 
	struct FAudioEQEffect EQSettings; 
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects; 
	float InitialDelay; 
	float FadeInTime; 
	float Duration; 
	float FadeOutTime; 
};

// Class Engine.SoundNode
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; 
};

// Class Engine.SoundNodeAssetReferencer
struct USoundNodeAssetReferencer : USoundNode {
};

// Class Engine.SoundNodeAttenuation
struct USoundNodeAttenuation : USoundNode {
	struct USoundAttenuation* AttenuationSettings; 
	struct FSoundAttenuationSettings AttenuationOverrides; 
	char bOverrideAttenuation : 1; 
};

// Class Engine.SoundNodeBranch
struct USoundNodeBranch : USoundNode {
	struct FName BoolParameterName; 
};

// Class Engine.SoundNodeConcatenator
struct USoundNodeConcatenator : USoundNode {
	struct TArray<float> InputVolume; 
};

// Class Engine.SoundNodeDelay
struct USoundNodeDelay : USoundNode {
	float DelayMin; 
	float DelayMax; 
};

// Class Engine.SoundNodeDialoguePlayer
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; 
	char bLooping : 1; 
};

// Class Engine.SoundNodeDistanceCrossFade
struct USoundNodeDistanceCrossFade : USoundNode {
	struct TArray<struct FDistanceDatum> CrossFadeInput; 
};

// Class Engine.SoundNodeDoppler
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; 
	bool bUseSmoothing; 
	float SmoothingInterpSpeed; 
};

// Class Engine.SoundNodeEnveloper
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; 
	float LoopEnd; 
	float DurationAfterLoop; 
	int32_t LoopCount; 
	char bLoopIndefinitely : 1; 
	char bLoop : 1; 
	struct UDistributionFloatConstantCurve* VolumeInterpCurve; 
	struct UDistributionFloatConstantCurve* PitchInterpCurve; 
	struct FRuntimeFloatCurve VolumeCurve; 
	struct FRuntimeFloatCurve PitchCurve; 
	float PitchMin; 
	float PitchMax; 
	float VolumeMin; 
	float VolumeMax; 
};

// Class Engine.SoundNodeGroupControl
struct USoundNodeGroupControl : USoundNode {
	struct TArray<int32_t> GroupSizes; 
};

// Class Engine.SoundNodeLooping
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; 
	char bLoopIndefinitely : 1; 
};

// Class Engine.SoundNodeMature
struct USoundNodeMature : USoundNode {
};

// Class Engine.SoundNodeMixer
struct USoundNodeMixer : USoundNode {
	struct TArray<float> InputVolume; 
};

// Class Engine.SoundNodeModulator
struct USoundNodeModulator : USoundNode {
	float PitchMin; 
	float PitchMax; 
	float VolumeMin; 
	float VolumeMax; 
};

// Class Engine.SoundNodeModulatorContinuous
struct USoundNodeModulatorContinuous : USoundNode {
	struct FModulatorContinuousParams PitchModulationParams; 
	struct FModulatorContinuousParams VolumeModulationParams; 
};

// Class Engine.SoundNodeOscillator
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; 
	char bModulatePitch : 1; 
	float AmplitudeMin; 
	float AmplitudeMax; 
	float FrequencyMin; 
	float FrequencyMax; 
	float OffsetMin; 
	float OffsetMax; 
	float CenterMin; 
	float CenterMax; 
};

// Class Engine.SoundNodeParamCrossFade
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	struct FName ParamName; 
};

// Class Engine.SoundNodeQualityLevel
struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; 
};

// Class Engine.SoundNodeRandom
struct USoundNodeRandom : USoundNode {
	struct TArray<float> Weights; 
	struct TArray<bool> HasBeenUsed; 
	int32_t NumRandomUsed; 
	int32_t PreselectAtLevelLoad; 
	char bShouldExcludeFromBranchCulling : 1; 
	char bSoundCueExcludedFromBranchCulling : 1; 
	char bRandomizeWithoutReplacement : 1; 
};

// Class Engine.SoundNodeSoundClass
struct USoundNodeSoundClass : USoundNode {
	struct USoundClass* SoundClassOverride; 
};

// Class Engine.SoundNodeSwitch
struct USoundNodeSwitch : USoundNode {
	struct FName IntParameterName; 
};

// Class Engine.SoundNodeWaveParam
struct USoundNodeWaveParam : USoundNode {
	struct FName WaveParameterName; 
};

// Class Engine.SoundNodeWavePlayer
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	struct TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; 
	struct USoundWave* SoundWave; 
	char bLooping : 1; 
};

// Class Engine.SoundSourceBus
struct USoundSourceBus : USoundWave {
	enum class ESourceBusChannels SourceBusChannels; 
	float SourceBusDuration; 
	struct UAudioBus* AudioBus; 
	char bAutoDeactivateWhenSilent : 1; 
};

// Class Engine.SoundSubmixBase
struct USoundSubmixBase : UObject {
	struct TArray<struct USoundSubmixBase*> ChildSubmixes; 
};

// Class Engine.SoundSubmixWithParentBase
struct USoundSubmixWithParentBase : USoundSubmixBase {
	struct USoundSubmixBase* ParentSubmix; 
};

// Class Engine.SoundSubmix
struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; 
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; 
	struct USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; 
	int32_t EnvelopeFollowerAttackTime; 
	int32_t EnvelopeFollowerReleaseTime; 
	enum class EGainParamMode GainMode; 
	float OutputVolume; 
	float WetLevel; 
	float DryLevel; 
	struct FSoundModulationDestinationSettings OutputVolumeModulation; 
	struct FSoundModulationDestinationSettings WetLevelModulation; 
	struct FSoundModulationDestinationSettings DryLevelModulation; 
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; 

	void StopSpectralAnalysis(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	void StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundWave* ExistingSoundWaveToOverwrite); // (Final|Native|Public|BlueprintCallable)
	void StopEnvelopeFollowing(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	void StartSpectralAnalysis(struct UObject* WorldContextObject, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // (Final|Native|Public|BlueprintCallable)
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration); // (Final|Native|Public|BlueprintCallable)
	void StartEnvelopeFollowing(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	void SetSubmixOutputVolume(struct UObject* WorldContextObject, float InOutputVolume); // (Final|Native|Public|BlueprintCallable)
	void RemoveSpectralAnalysisDelegate(struct UObject* WorldContextObject, struct FDelegate& OnSubmixSpectralAnalysisBP); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddSpectralAnalysisDelegate(struct UObject* WorldContextObject, struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, struct FDelegate& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddEnvelopeFollowerDelegate(struct UObject* WorldContextObject, struct FDelegate& OnSubmixEnvelopeBP); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.SoundfieldSubmix
struct USoundfieldSubmix : USoundSubmixWithParentBase {
	struct FName SoundfieldEncodingFormat; 
	struct USoundfieldEncodingSettingsBase* EncodingSettings; 
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; 
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; 
};

// Class Engine.EndpointSubmix
struct UEndpointSubmix : USoundSubmixBase {
	struct FName EndpointType; 
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; 
	struct UAudioEndpointSettingsBase* EndpointSettings; 
};

// Class Engine.SoundfieldEndpointSubmix
struct USoundfieldEndpointSubmix : USoundSubmixBase {
	struct FName SoundfieldEndpointType; 
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; 
	struct USoundfieldEndpointSettingsBase* EndpointSettings; 
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; 
	struct USoundfieldEncodingSettingsBase* EncodingSettings; 
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; 
};

// Class Engine.SpectatorPawnMovement
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; 
};

// Class Engine.SphereReflectionCapture
struct ASphereReflectionCapture : AReflectionCapture {
	struct UDrawSphereComponent* DrawCaptureRadius; 
};

// Class Engine.SphereReflectionCaptureComponent
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; 
	float CaptureDistanceScale; 
	struct UDrawSphereComponent* PreviewInfluenceRadius; 
};

// Class Engine.SplineMetadata
struct USplineMetadata : UObject {
};

// Class Engine.SplineMeshActor
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; 
};

// Class Engine.SplineMeshComponent
struct USplineMeshComponent : UStaticMeshComponent {
	struct FSplineMeshParams SplineParams; 
	struct FVector SplineUpDir; 
	float SplineBoundaryMin; 
	struct FGuid CachedMeshBodySetupGuid; 
	struct UBodySetup* BodySetup; 
	float SplineBoundaryMax; 
	char bAllowSplineEditingPerInstance : 1; 
	char bSmoothInterpRollScale : 1; 
	char bMeshDirty : 1; 
	enum class ESplineMeshAxis ForwardAxis; 
	float VirtualTextureMainPassMaxDrawDistance; 

	void UpdateMesh(); // (Final|Native|Public|BlueprintCallable)
	void SetStartTangent(struct FVector StartTangent, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetStartScale(struct FVector2D StartScale, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetStartRoll(float StartRoll, bool bUpdateMesh); // (Final|Native|Public|BlueprintCallable)
	void SetStartPosition(struct FVector StartPos, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetStartOffset(struct FVector2D StartOffset, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetStartAndEnd(struct FVector StartPos, struct FVector StartTangent, struct FVector EndPos, struct FVector EndTangent, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetSplineUpDir(struct FVector& InSplineUpDir, bool bUpdateMesh); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetForwardAxis(enum class ESplineMeshAxis InForwardAxis, bool bUpdateMesh); // (Final|Native|Public|BlueprintCallable)
	void SetEndTangent(struct FVector EndTangent, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetEndScale(struct FVector2D EndScale, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetEndRoll(float EndRoll, bool bUpdateMesh); // (Final|Native|Public|BlueprintCallable)
	void SetEndPosition(struct FVector EndPos, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetEndOffset(struct FVector2D EndOffset, bool bUpdateMesh); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh); // (Final|Native|Public|BlueprintCallable)
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh); // (Final|Native|Public|BlueprintCallable)
	struct FVector GetStartTangent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetStartScale(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetStartRoll(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetStartPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetStartOffset(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetSplineUpDir(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class ESplineMeshAxis GetForwardAxis(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetEndTangent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetEndScale(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetEndRoll(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetEndPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetEndOffset(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetBoundaryMin(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetBoundaryMax(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.SpotLightComponent
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; 
	float OuterConeAngle; 

	void SetOuterConeAngle(float NewOuterConeAngle); // (Final|Native|Public|BlueprintCallable)
	void SetInnerConeAngle(float NewInnerConeAngle); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.StaticMesh
struct UStaticMesh : UStreamableRenderAsset {
	struct FPerPlatformInt MinLOD; 
	float LpvBiasMultiplier; 
	struct TArray<struct FStaticMaterial> StaticMaterials; 
	float LightmapUVDensity; 
	int32_t LightMapResolution; 
	int32_t LightMapCoordinateIndex; 
	float DistanceFieldSelfShadowBias; 
	struct UBodySetup* BodySetup; 
	int32_t LODForCollision; 
	char bGenerateMeshDistanceField : 1; 
	char bStripComplexCollisionForConsole : 1; 
	char bHasNavigationData : 1; 
	char bSupportUniformlyDistributedSampling : 1; 
	char bSupportPhysicalMaterialMasks : 1; 
	char bSupportRayTracing : 1; 
	char bIsBuiltAtRuntime : 1; 
	char bAllowCPUAccess : 1; 
	char bSupportGpuUniformlyDistributedSampling : 1; 
	struct TArray<struct UStaticMeshSocket*> Sockets; 
	struct FVector PositiveBoundsExtension; 
	struct FVector NegativeBoundsExtension; 
	struct FBoxSphereBounds ExtendedBounds; 
	int32_t ElementToIgnoreForTexFactor; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
	struct UObject* EditableMesh; 
	struct UNavCollisionBase* NavCollision; 

	void SetStaticMaterials(struct TArray<struct FStaticMaterial>& InStaticMaterials); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RemoveSocket(struct UStaticMeshSocket* Socket); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumSections(int32_t InLOD); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumLODs(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetMinimumLODForPlatforms(struct TMap<struct FName, int32_t>& PlatformMinimumLODs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMinimumLODForPlatform(struct FName& PlatformName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInterface* GetMaterial(int32_t MaterialIndex); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FBoxSphereBounds GetBounds(); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FBox GetBoundingBox(); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UStaticMeshSocket* FindSocket(struct FName InSocketName); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UStaticMeshDescription* CreateStaticMeshDescription(struct UObject* Outer); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void BuildFromStaticMeshDescriptions(struct TArray<struct UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision); // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable)
	void AddSocket(struct UStaticMeshSocket* Socket); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	struct FName AddMaterial(struct UMaterialInterface* Material); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.StaticMeshSocket
struct UStaticMeshSocket : UObject {
	struct FName SocketName; 
	struct FVector RelativeLocation; 
	struct FRotator RelativeRotation; 
	struct FVector RelativeScale; 
	struct FString Tag; 
};

// Class Engine.StereoLayerShape
struct UStereoLayerShape : UObject {
};

// Class Engine.StereoLayerShapeQuad
struct UStereoLayerShapeQuad : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeCylinder
struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; 
	float OverlayArc; 
	int32_t Height; 

	void SetRadius(float InRadius); // (Final|Native|Public|BlueprintCallable)
	void SetOverlayArc(float InOverlayArc); // (Final|Native|Public|BlueprintCallable)
	void SetHeight(int32_t InHeight); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.StereoLayerShapeCubemap
struct UStereoLayerShapeCubemap : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeEquirect
struct UStereoLayerShapeEquirect : UStereoLayerShape {
	struct FBox2D LeftUVRect; 
	struct FBox2D RightUVRect; 
	struct FVector2D LeftScale; 
	struct FVector2D RightScale; 
	struct FVector2D LeftBias; 
	struct FVector2D RightBias; 

	void SetEquirectProps(struct FEquirectProps InScaleBiases); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.StereoLayerComponent
struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; 
	char bSupportsDepth : 1; 
	char bNoAlphaChannel : 1; 
	struct UTexture* Texture; 
	struct UTexture* LeftTexture; 
	char bQuadPreserveTextureRatio : 1; 
	struct FVector2D QuadSize; 
	struct FBox2D UVRect; 
	float CylinderRadius; 
	float CylinderOverlayArc; 
	int32_t CylinderHeight; 
	struct FEquirectProps EquirectProps; 
	enum class EStereoLayerType StereoLayerType; 
	enum class EStereoLayerShape StereoLayerShape; 
	struct UStereoLayerShape* Shape; 
	int32_t Priority; 

	void SetUVRect(struct FBox2D InUVRect); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTexture(struct UTexture* InTexture); // (Final|Native|Public|BlueprintCallable)
	void SetQuadSize(struct FVector2D InQuadSize); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetPriority(int32_t InPriority); // (Final|Native|Public|BlueprintCallable)
	void SetLeftTexture(struct UTexture* InTexture); // (Final|Native|Public|BlueprintCallable)
	void SetEquirectProps(struct FEquirectProps InScaleBiases); // (Final|Native|Public|BlueprintCallable)
	void MarkTextureForUpdate(); // (Final|Native|Public|BlueprintCallable)
	struct FBox2D GetUVRect(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UTexture* GetTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetQuadSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPriority(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UTexture* GetLeftTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.StereoLayerFunctionLibrary
struct UStereoLayerFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSplashScreen(); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSplashScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void HideSplashScreen(); // (Final|Native|Static|Public|BlueprintCallable)
	void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.StringTable
struct UStringTable : UObject {
};

// Class Engine.SubsurfaceProfile
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; 
};

// Class Engine.SubsystemBlueprintLibrary
struct USubsystemBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UWorldSubsystem* GetWorldSubsystem(struct UObject* ContextObject, struct UWorldSubsystem* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(struct APlayerController* PlayerController, struct ULocalPlayerSubsystem* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct ULocalPlayerSubsystem* GetLocalPlayerSubsystem(struct UObject* ContextObject, struct ULocalPlayerSubsystem* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UGameInstanceSubsystem* GetGameInstanceSubsystem(struct UObject* ContextObject, struct UGameInstanceSubsystem* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UEngineSubsystem* GetEngineSubsystem(struct UEngineSubsystem* Class); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Engine.SubUVAnimation
struct USubUVAnimation : UObject {
	struct UTexture2D* SubUVTexture; 
	int32_t SubImages_Horizontal; 
	int32_t SubImages_Vertical; 
	enum class ESubUVBoundingVertexCount BoundingMode; 
	enum class EOpacitySourceMode OpacitySourceMode; 
	float AlphaThreshold; 
};

// Class Engine.SystemTimeTimecodeProvider
struct USystemTimeTimecodeProvider : UTimecodeProvider {
	struct FFrameRate FrameRate; 
	bool bGenerateFullFrame; 
	bool bUseHighPerformanceClock; 
};

// Class Engine.TargetPoint
struct ATargetPoint : AActor {
};

// Class Engine.TextPropertyTestObject
struct UTextPropertyTestObject : UObject {
	struct FText DefaultedText; 
	struct FText UndefaultedText; 
	struct FText TransientText; 
};

// Class Engine.TextRenderActor
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; 
};

// Class Engine.TextRenderComponent
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; 
	struct UMaterialInterface* TextMaterial; 
	struct UFont* Font; 
	enum class EHorizTextAligment HorizontalAlignment; 
	enum class EVerticalTextAligment VerticalAlignment; 
	struct FColor TextRenderColor; 
	float XScale; 
	float YScale; 
	float WorldSize; 
	float InvDefaultSize; 
	float HorizSpacingAdjust; 
	float VertSpacingAdjust; 
	char bAlwaysRenderAsText : 1; 

	void SetYScale(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetXScale(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetWorldSize(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetVertSpacingAdjust(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetVerticalAlignment(enum class EVerticalTextAligment Value); // (Final|Native|Public|BlueprintCallable)
	void SetTextRenderColor(struct FColor Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTextMaterial(struct UMaterialInterface* Material); // (Final|Native|Public|BlueprintCallable)
	void SetText(struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetHorizSpacingAdjust(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizTextAligment Value); // (Final|Native|Public|BlueprintCallable)
	void SetFont(struct UFont* Value); // (Final|Native|Public|BlueprintCallable)
	void K2_SetText(struct FText& Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FVector GetTextWorldSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTextLocalSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.Texture2DArray
struct UTexture2DArray : UTexture {
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
	enum class TextureAddress AddressZ; 
};

// Class Engine.TextureLightProfile
struct UTextureLightProfile : UTexture2D {
	float Brightness; 
	float TextureMultiplier; 
};

// Class Engine.TextureMipDataProviderFactory
struct UTextureMipDataProviderFactory : UAssetUserData {
};

// Class Engine.TextureRenderTarget2DArray
struct UTextureRenderTarget2DArray : UTextureRenderTarget {
	int32_t SizeX; 
	int32_t SizeY; 
	int32_t Slices; 
	struct FLinearColor ClearColor; 
	enum class EPixelFormat OverrideFormat; 
	char bHDR : 1; 
	char bForceLinearGamma : 1; 
};

// Class Engine.TextureRenderTargetCube
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; 
	struct FLinearColor ClearColor; 
	enum class EPixelFormat OverrideFormat; 
	char bHDR : 1; 
	char bForceLinearGamma : 1; 
};

// Class Engine.TextureRenderTargetVolume
struct UTextureRenderTargetVolume : UTextureRenderTarget {
	int32_t SizeX; 
	int32_t SizeY; 
	int32_t SizeZ; 
	struct FLinearColor ClearColor; 
	enum class EPixelFormat OverrideFormat; 
	char bHDR : 1; 
	char bForceLinearGamma : 1; 
};

// Class Engine.ThumbnailInfo
struct UThumbnailInfo : UObject {
};

// Class Engine.TimelineComponent
struct UTimelineComponent : UActorComponent {
	struct FTimeline TheTimeline; 
	char bIgnoreTimeDilation : 1; 

	void Stop(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetVectorCurve(struct UCurveVector* NewVectorCurve, struct FName VectorTrackName); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetTimelineLengthMode(enum class ETimelineLengthMode NewLengthMode); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetTimelineLength(float NewLength); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetPlayRate(float NewRate); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetNewTime(float NewTime); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLooping(bool bNewLooping); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLinearColorCurve(struct UCurveLinearColor* NewLinearColorCurve, struct FName LinearColorTrackName); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetFloatCurve(struct UCurveFloat* NewFloatCurve, struct FName FloatTrackName); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void ReverseFromEnd(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void Reverse(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void PlayFromStart(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void Play(); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void OnRep_Timeline(); // (Final|Native|Public)
	bool IsReversing(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLooping(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetTimelineLength(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlayRate(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlaybackPosition(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetIgnoreTimeDilation(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Engine.TimelineTemplate
struct UTimelineTemplate : UObject {
	float TimelineLength; 
	enum class ETimelineLengthMode LengthMode; 
	char bAutoPlay : 1; 
	char bLoop : 1; 
	char bReplicated : 1; 
	char bIgnoreTimeDilation : 1; 
	struct TArray<struct FTTEventTrack> EventTracks; 
	struct TArray<struct FTTFloatTrack> FloatTracks; 
	struct TArray<struct FTTVectorTrack> VectorTracks; 
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks; 
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; 
	struct FGuid TimelineGuid; 
	enum class ETickingGroup TimelineTickGroup; 
	struct FName VariableName; 
	struct FName DirectionPropertyName; 
	struct FName UpdateFunctionName; 
	struct FName FinishedFunctionName; 
};

// Class Engine.TireType
struct UTireType : UDataAsset {
	float FrictionScale; 
};

// Class Engine.TouchInterface
struct UTouchInterface : UObject {
	struct TArray<struct FTouchInputControl> Controls; 
	float ActiveOpacity; 
	float InactiveOpacity; 
	float TimeUntilDeactive; 
	float TimeUntilReset; 
	float ActivationDelay; 
	bool bPreventRecenter; 
	float StartupDelay; 
};

// Class Engine.TriggerCapsule
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.TriggerVolume
struct ATriggerVolume : AVolume {
};

// Class Engine.TwitterIntegrationBase
struct UTwitterIntegrationBase : UPlatformInterfaceBase {

	bool TwitterRequest(struct FString URL, struct TArray<struct FString>& ParamKeysAndValues, enum class ETwitterRequestMethod RequestMethod, int32_t AccountIndex); // (Native|Public|HasOutParms)
	bool ShowTweetUI(struct FString InitialMessage, struct FString URL, struct FString Picture); // (Native|Public)
	void Init(); // (Native|Public)
	int32_t GetNumAccounts(); // (Native|Public)
	struct FString GetAccountName(int32_t AccountIndex); // (Native|Public)
	bool CanShowTweetUI(); // (Native|Public)
	bool AuthorizeAccounts(); // (Native|Public)
};

// Class Engine.UserDefinedEnum
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> DisplayNameMap; 
};

// Class Engine.UserDefinedStruct
struct UUserDefinedStruct : UScriptStruct {
	enum class EUserDefinedStructureStatus Status; 
	struct FGuid Guid; 
};

// Class Engine.UserInterfaceSettings
struct UUserInterfaceSettings : UDeveloperSettings {
	enum class ERenderFocusRule RenderFocusRule; 
	struct TMap<enum class EMouseCursor, struct FHardwareCursorReference> HardwareCursors; 
	struct TMap<enum class EMouseCursor, struct FSoftClassPath> SoftwareCursors; 
	struct FSoftClassPath DefaultCursor; 
	struct FSoftClassPath TextEditBeamCursor; 
	struct FSoftClassPath CrosshairsCursor; 
	struct FSoftClassPath HandCursor; 
	struct FSoftClassPath GrabHandCursor; 
	struct FSoftClassPath GrabHandClosedCursor; 
	struct FSoftClassPath SlashedCircleCursor; 
	float ApplicationScale; 
	enum class EUIScalingRule UIScaleRule; 
	struct FSoftClassPath CustomScalingRuleClass; 
	struct FRuntimeFloatCurve UIScaleCurve; 
	bool bAllowHighDPIInGameMode; 
	struct FIntPoint DesignScreenSize; 
	bool bLoadWidgetsOnDedicatedServer; 
	struct TArray<struct UObject*> CursorClasses; 
	struct UObject* CustomScalingRuleClassInstance; 
	struct UDPICustomScalingRule* CustomScalingRule; 
};

// Class Engine.VectorField
struct UVectorField : UObject {
	struct FBox Bounds; 
	float Intensity; 
};

// Class Engine.VectorFieldAnimated
struct UVectorFieldAnimated : UVectorField {
	struct UTexture2D* Texture; 
	enum class EVectorFieldConstructionOp ConstructionOp; 
	int32_t VolumeSizeX; 
	int32_t VolumeSizeY; 
	int32_t VolumeSizeZ; 
	int32_t SubImagesX; 
	int32_t SubImagesY; 
	int32_t FrameCount; 
	float FramesPerSecond; 
	char bLoop : 1; 
	struct UVectorFieldStatic* NoiseField; 
	float NoiseScale; 
	float NoiseMax; 
};

// Class Engine.VectorFieldComponent
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; 
	float Intensity; 
	float Tightness; 
	char bPreviewVectorField : 1; 

	void SetIntensity(float NewIntensity); // (Native|Public|BlueprintCallable)
};

// Class Engine.VectorFieldStatic
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; 
	int32_t SizeY; 
	int32_t SizeZ; 
	bool bAllowCPUAccess; 
};

// Class Engine.VectorFieldVolume
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; 
};

// Class Engine.ViewportStatsSubsystem
struct UViewportStatsSubsystem : UWorldSubsystem {

	void RemoveDisplayDelegate(int32_t IndexToRemove); // (Final|Native|Public|BlueprintCallable)
	void AddTimedDisplay(struct FText Text, struct FLinearColor Color, float Duration); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	int32_t AddDisplayDelegate(struct FDelegate& Delegate); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Engine.VirtualTexture
struct UVirtualTexture : UObject {
};

// Class Engine.LightMapVirtualTexture
struct ULightMapVirtualTexture : UVirtualTexture {
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
};

// Class Engine.VirtualTexture2D
struct UVirtualTexture2D : UTexture2D {
	struct FVirtualTextureBuildSettings Settings; 
	bool bContinuousUpdate; 
	bool bSinglePhysicalSpace; 
};

// Class Engine.VirtualTextureBuilder
struct UVirtualTextureBuilder : UObject {
	struct UVirtualTexture2D* Texture; 
	uint64_t BuildHash; 
};

// Class Engine.VirtualTexturePoolConfig
struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; 
	struct TArray<struct FVirtualTextureSpacePoolConfig> Pools; 
};

// Class Engine.VisualLoggerAutomationTests
struct UVisualLoggerAutomationTests : UObject {
};

// Class Engine.VisualLoggerDebugSnapshotInterface
struct UVisualLoggerDebugSnapshotInterface : UInterface {
};

// Class Engine.VisualLoggerKismetLibrary
struct UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary {

	void RedirectVislog(struct UObject* SourceOwner, struct UObject* DestinationOwner); // (Final|Native|Static|Public|BlueprintCallable)
	void LogText(struct UObject* WorldContextObject, struct FString Text, struct FName LogCategory, bool bAddToMessageLog); // (Final|Native|Static|Public|BlueprintCallable)
	void LogSegment(struct UObject* WorldContextObject, struct FVector SegmentStart, struct FVector SegmentEnd, struct FString Text, struct FLinearColor ObjectColor, float Thickness, struct FName CategoryName, bool bAddToMessageLog); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void LogLocation(struct UObject* WorldContextObject, struct FVector Location, struct FString Text, struct FLinearColor ObjectColor, float Radius, struct FName LogCategory, bool bAddToMessageLog); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void LogBox(struct UObject* WorldContextObject, struct FBox BoxShape, struct FString Text, struct FLinearColor ObjectColor, struct FName LogCategory, bool bAddToMessageLog); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void EnableRecording(bool bEnabled); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.VoiceChannel
struct UVoiceChannel : UChannel {
};

// Class Engine.VOIPTalker
struct UVOIPTalker : UActorComponent {
	struct FVoiceSettings Settings; 

	void RegisterWithPlayerState(struct APlayerState* OwningState); // (Final|Native|Public|BlueprintCallable)
	float GetVoiceLevel(); // (Final|Native|Public|BlueprintCallable)
	struct UVOIPTalker* CreateTalkerForPlayer(struct APlayerState* OwningState); // (Final|Native|Static|Public|BlueprintCallable)
	void BPOnTalkingEnd(); // (Native|Event|Protected|BlueprintEvent)
	void BPOnTalkingBegin(struct UAudioComponent* AudioComponent); // (Native|Event|Protected|BlueprintEvent)
};

// Class Engine.VOIPStatics
struct UVOIPStatics : UBlueprintFunctionLibrary {

	void SetMicThreshold(float InThreshold); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Engine.VolumeTexture
struct UVolumeTexture : UTexture {
};

// Class Engine.VolumetricCloudComponent
struct UVolumetricCloudComponent : USceneComponent {
	float LayerBottomAltitude; 
	float LayerHeight; 
	float TracingStartMaxDistance; 
	float TracingMaxDistance; 
	float PlanetRadius; 
	struct FColor GroundAlbedo; 
	struct UMaterialInterface* Material; 
	char bUsePerSampleAtmosphericLightTransmittance : 1; 
	float SkyLightCloudBottomOcclusion; 
	float ViewSampleCountScale; 
	float ReflectionSampleCountScale; 
	float ShadowViewSampleCountScale; 
	float ShadowReflectionSampleCountScale; 
	float ShadowTracingDistance; 
	float StopTracingTransmittanceThreshold; 

	void SetViewSampleCountScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetTracingStartMaxDistance(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetTracingMaxDistance(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetStopTracingTransmittanceThreshold(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetSkyLightCloudBottomOcclusion(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetShadowViewSampleCountScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetShadowTracingDistance(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetShadowReflectionSampleCountScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetReflectionSampleCountScale(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetPlanetRadius(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetMaterial(struct UMaterialInterface* NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLayerHeight(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLayerBottomAltitude(float NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetGroundAlbedo(struct FColor NewValue); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
};

// Class Engine.VolumetricCloud
struct AVolumetricCloud : AInfo {
	struct UVolumetricCloudComponent* VolumetricCloudComponent; 
};

// Class Engine.VolumetricLightmapDensityVolume
struct AVolumetricLightmapDensityVolume : AVolume {
	struct FInt32Interval AllowedMipLevelRange; 
};

// Class Engine.WindDirectionalSource
struct AWindDirectionalSource : AInfo {
	struct UWindDirectionalSourceComponent* Component; 
};

// Class Engine.WindDirectionalSourceComponent
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; 
	float Speed; 
	float MinGustAmount; 
	float MaxGustAmount; 
	float Radius; 
	char bPointWind : 1; 

	void SetWindType(enum class EWindSourceType InNewType); // (Final|Native|Public|BlueprintCallable)
	void SetStrength(float InNewStrength); // (Final|Native|Public|BlueprintCallable)
	void SetSpeed(float InNewSpeed); // (Final|Native|Public|BlueprintCallable)
	void SetRadius(float InNewRadius); // (Final|Native|Public|BlueprintCallable)
	void SetMinimumGustAmount(float InNewMinGust); // (Final|Native|Public|BlueprintCallable)
	void SetMaximumGustAmount(float InNewMaxGust); // (Final|Native|Public|BlueprintCallable)
};

// Class Engine.WorldComposition
struct UWorldComposition : UObject {
	struct TArray<struct ULevelStreaming*> TilesStreaming; 
	double TilesStreamingTimeThreshold; 
	bool bLoadAllTilesDuringCinematic; 
	bool bRebaseOriginIn3DSpace; 
	float RebaseOriginDistance; 
};

// Class Engine.HierarchicalLODSetup
struct UHierarchicalLODSetup : UObject {
	struct TArray<struct FHierarchicalSimplification> HierarchicalLODSetup; 
	struct TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; 
};

