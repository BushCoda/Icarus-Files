// BlueprintGeneratedClass BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C
struct UBP_ActionableBehaviour_CurvedSplinePlace_C : UBP_ActionableBehaviour_SimplePlace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusSplineActor_C* WorkingSpline; 
	struct TMap<int32_t, enum class SplineTypes> ToolTypeMap; 
	int32_t ToolInt; 
	enum class SplineTypes SplineType; 
	enum class ESplinePointType ToolSplinePointType; 
	struct TMap<enum class SplineTypes, float> SplineTypeMaxDistance; 
	enum class NewSplinePlacementRule Snapping; 
	struct UFMODEvent* FMODEvent_SplinePlaced_Anchorable; 
	struct UFMODEvent* FMODEvent_SplinePlaced_Spline; 
	struct UFMODEvent* FMODEvent_SplinePlaced_Deployable; 
	float InspectorTraceRange; 
	struct FIcarusResourcesEnum LimitInspectorToType; 
	struct FTimerHandle SplineHighlightTimerHandle; 
	struct AResourceNetwork* FocusedNetwork; 
	struct UUMG_ResourceNetworkInspector_FullScreen_C* InspectorWidget; 
	struct AIcarusItem* OwningItem; 
	struct UFMODEvent* RemoveSplineAudio; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSnapping(enum class NewSplinePlacementRule Snapping); // (Public|BlueprintCallable|BlueprintEvent)
	void Play Disconnect Audio(struct FHitResult& Hit Result); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSplineStencilValue(bool bIsHovered, bool bIsFocused, bool bCorrectSplineType, struct FIcarusResourcesEnum& Key, int32_t& StencilValue); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetClosestWorldAndLocalPointsOnSpline(struct USplineComponent* Spline, struct FVector& WorldLocation, struct FVector& ClosestLocal, struct FVector& ClosestWorld); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HighlightTrace(struct AResourceNetwork*& HoveredNetwork); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HighlightPrimitive(struct UObject* Object, int32_t StencilValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearSplineNetworkHighlights(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSplineNetworkHighlighting(struct AResourceNetwork* HoveredNetwork, struct AResourceNetwork* FocusedNetwork); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InspectorLineTrace(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Try Link As Icarus Actor(struct AActor* Actor, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Cleanup Spline(bool CleanupWorkingSplineOnly); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessLastSplinePoint(struct FTransform& HitTransform, struct UBP_IcarusSplineSegment_C* SplineSegment, struct ABP_IcarusSplineActor_C* SplineActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSplineConnectionPointFromActor(struct AActor* Actor, enum class SplineTypes SplineType, struct FTransform& Transform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldSpaceTooCloseToAnySpline(struct FVector WorldSpaceLocation, bool& bLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ActorIsLinkable(struct AIcarusActor* IcarusActor, bool& Linkable); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayNegativeFeedback(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlaySplinePointPlacedAudio(enum class ECurvedSplinePlaceContext Context, struct FHitResult& Hit); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SplineAnchorableHitCheck(struct AActor* HitActor, bool& CanPlacePoint); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_Snapping(); // (BlueprintCallable|BlueprintEvent)
	void FindSegmentFromComponent(struct ABP_IcarusSplineActor_C* SplineActor, struct UPrimitiveComponent* HitComponent, struct UBP_IcarusSplineSegment_C*& SplineSegment, int32_t& SegmentIndex, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool& ShouldTrace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ValidPlacementCheck(struct FHitResult Hit, bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActionCameraTraceHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void MULTI_PlaySplinePointPlacedAudio(struct UFMODEvent* FMODEvent, struct FVector Location, enum class EPhysicalSurface Surface); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void TickHighlight(); // (BlueprintCallable|BlueprintEvent)
	void OnDynamicWidgetDisplayed(); // (BlueprintCallable|BlueprintEvent)
	void OnMenuOpened(); // (BlueprintCallable|BlueprintEvent)
	void ServerCleanupWorkingSpline(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerClearTracedSpline(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerUpdateSplinePointType(enum class ESplinePointType ToolSplinePointType); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayDisconnectAudio(struct FHitResult& Hit Result); // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Server_ClientRequestHit(struct FHitResult& Hit); // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

