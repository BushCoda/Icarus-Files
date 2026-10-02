// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_SettlementBuilding.BP_ActionableBehaviour_Deployable_SettlementBuilding_C
struct UBP_ActionableBehaviour_Deployable_SettlementBuilding_C : UBP_ActionableBehaviour_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_SettlementBuilding_VariantInfo_C* AdditionalInfoWidget; 

	bool GetSettlementBuildingRow(int32_t CustomIndex, struct FSettlementBuildingsRowHandle& BuildingRow, struct FDeployableSetupRowHandle& DeployableVariant); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetContextMenuInfo(struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetPreviewActorOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMeshPreview(struct FHitResult Hit, bool DidHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckValidPlacement(struct FHitResult InHit, bool& IsValidPlacement, struct FText& InvalidReason); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnContextMenuSegmentHighlightChanged(struct UUMG_ContextMenu_Radial_Item_C* Segment); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Deployable_SettlementBuilding(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

