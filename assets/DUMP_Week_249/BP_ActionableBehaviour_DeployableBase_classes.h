// BlueprintGeneratedClass BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C
struct UBP_ActionableBehaviour_DeployableBase_C : UBP_ActionableBehaviour_SimplePlaceWithVariants_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployablePreview_C* PreviewActor; 
	bool CurrentPlacementValid; 
	struct FDeployableData DeployableData; 
	struct UDeployableComponent* DeployableComponent; 
	struct FTransform CachedPreviewTransform; 
	float UpwardsFacingLimit; 
	bool IsRotating; 
	struct FTransform PlayerPlacementTransform; 
	struct FRotator DesiredLocalDeployableRotation; 
	struct FTransform DeployablePlacementTransform; 
	struct AActor* FoundationActor; 
	bool SnapRotationToBuildingGrid; 
	int32_t AngleSnapAmount; 
	struct AActor* ClassToSnapTo; 
	bool ActorSnapValid; 
	struct AActor* SnapActor; 
	struct FItemData ItemData; 
	struct FName SnapSocket; 
	bool DebugDeployment; 
	struct FItemData SpawnedItem; 
	struct FHitResult LastDeployAttemptTrace; 
	struct UFMODEvent* FMODEvent_DeployFail; 
	bool TriedToShowRadialMenu; 
	int32_t SelectedVariantIndex; 
	struct FDeployableSetup DeployableSetup; 
	bool SnapOverridePressed; 
	struct TArray<struct TSoftClassPtr<UObject>> BlacklistedFoundationClasses; 
	bool IsPreviewActorSheltered; 
	bool IsPreviewActorOutsidePlaceOnly; 
	bool DisableDeployableCollision; 
	struct ABP_DeployablePreview_C* PreviewClass; 

	void GetBoundsCollider(struct UBoxComponent*& BoundsCollider); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CustomDeploymentCheck(struct AActor* HitActor, bool& ValidPlacement, struct FText& Reason); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintDeploy(struct FTransform DeployTransform, struct AActor* FoundationActor, struct FItemData ItemData, int32_t VarientIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void HandleInvalidPlacementText(bool InvalidPlacement, struct FText InvalidReason); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_SelectedVariantIndex(); // (BlueprintCallable|BlueprintEvent)
	void UpdateReplicatedShelter(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOwnerRotation(struct FRotator& OutRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsHitActorBlacklisted(struct AActor* HitActor, struct FHitResult Hit, bool& IsBlacklisted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateDeployableSetup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDeployFailSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void GetPreviewMeshPlacement(struct FVector AttemptedPlacePosition, struct FVector PlacePositionNormal, struct AActor* HitFloorActor, struct FTransform& OutPreviewTransform, struct FName& OutSnapSocket, struct AActor*& OutSnapActor, bool& OutActorSnapValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryDeploy(struct FHitResult InHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool& ShouldTrace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool GetPreviewActorOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DEBUG_DisplayDeploymentFailureMessage(struct FString Message, float Duration); // (Public|BlueprintCallable|BlueprintEvent)
	void FindValidSocketOnActors(struct TArray<struct AActor*>& Actors, struct FVector TraceLocation, struct TArray<struct FName>& SocketsAndTags, bool& Found, struct FTransform& SocketTransform, struct AActor*& SnapActor, struct FName& SnapSocket); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFoundationActorDepth(struct AActor* Foundation, int32_t& ActorDepth); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayDeployedSound(struct ADeployable* Deployable); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPreviewStaticMeshAsset(int32_t PreviewVariantIndex, struct TSoftObjectPtr<UStaticMesh>& StaticMeshAsset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsDestroyed(struct AActor* Actor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool DoTrace(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<enum class EObjectTypeQuery> GetObjectTraceChannels(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetTraceIgnoreActors(struct TArray<struct AActor*>& OutIgnoreActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool PerformLineTrace(struct FVector TraceStart, struct FVector TraceEnd, bool TraceComplex, struct TArray<struct AActor*>& IgnoreActors, struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindClosestSocketPointOnActor(struct AActor* InActor, struct TArray<struct FName>& SocketsAndTags, struct FVector Origin, struct UActorComponent*& OutComponent, struct FTransform& OutTransform, struct FName& OutSocket, bool& FoundPoint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMeshVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTraceDistance(float& TraceDistance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateMeshPreview(struct FHitResult Hit, bool DidHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeploy(struct ADeployable* SpawnedDeployable); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckValidPlacement(struct FHitResult InHit, bool& IsValidPlacement, struct FText& InvalidReason); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Preview Material(bool ValidPlacement); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_F2A5421C4D141CEB2D751992D50E6C36(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_CEA16C5D424F96B896AF2BB339E5C750(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_948E897349D7ED52413C2997A58E4378(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActionCameraTraceHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_ValidateAndDeploy(struct FHitResult InHit, struct FTransform DeployTransform, struct AActor* FoundationActor, struct FItemData ItemData, int32_t VariantIndex); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_BeginRotationMode(struct FHitResult Hit, struct FTransform Transform, struct FRotator PlayerRotation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multi_BeginRotationMode(struct FTransform DeployableTransform, struct FRotator RelativeRotation, struct FTransform PlayerTransform, struct AActor* FoundationActor); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void InvalidPlacementText(bool ValidPlacement, struct FText InvalidReason); // (BlueprintCallable|BlueprintEvent)
	void OnContextMenuSegmentHighlightChanged(struct UUMG_ContextMenu_Radial_Item_C* Segment); // (BlueprintCallable|BlueprintEvent)
	void OpenRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void ChangePreviewItem(int32_t VariantIndex); // (BlueprintCallable|BlueprintEvent)
	void SpawnPreviewMesh(int32_t PreviewVariantIndex); // (BlueprintCallable|BlueprintEvent)
	void PreloadDeployables(); // (BlueprintCallable|BlueprintEvent)
	void Server_NotifyVariantChanged(int32_t SelectedVariantIndex); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void UpdateRotationState(bool IsRotating); // (BlueprintCallable|BlueprintEvent)
	void Server_UpdateRotationState(bool IsRotating); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_DeployableBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

