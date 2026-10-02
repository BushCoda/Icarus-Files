// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_VesperCage.BP_ActionableBehaviour_Deployable_VesperCage_C
struct UBP_ActionableBehaviour_Deployable_VesperCage_C : UBP_ActionableBehaviour_DeployableBase_C {

	void HandleInvalidPlacementText(bool InvalidPlacement, struct FText InvalidReason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckValidPlacement(struct FHitResult InHit, bool& IsValidPlacement, struct FText& InvalidReason); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPreviewMeshPlacement(struct FVector AttemptedPlacePosition, struct FVector PlacePositionNormal, struct AActor* HitFloorActor, struct FTransform& OutPreviewTransform, struct FName& OutSnapSocket, struct AActor*& OutSnapActor, bool& OutActorSnapValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

