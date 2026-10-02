// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C
struct UBP_ActionableBehaviour_Deployable_Foliage_C : UBP_ActionableBehaviour_DeployableBase_C {
	struct UFLODRecord* PlacementRecord; 

	void OnDeploy(struct ADeployable* SpawnedDeployable); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckValidPlacement(struct FHitResult InHit, bool& IsValidPlacement, struct FText& InvalidReason); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPreviewStaticMeshAsset(int32_t PreviewVariantIndex, struct TSoftObjectPtr<UStaticMesh>& StaticMeshAsset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

