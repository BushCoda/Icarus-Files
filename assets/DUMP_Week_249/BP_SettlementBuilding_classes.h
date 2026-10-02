// BlueprintGeneratedClass BP_SettlementBuilding.BP_SettlementBuilding_C
struct ABP_SettlementBuilding_C : ASettlementBuilding {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ProxyMeshes; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	struct UBoxComponent* BuildBlocker; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct USceneComponent* ConstructionMarker_04; 
	struct USceneComponent* ConstructionMarker_03; 
	struct USceneComponent* ConstructionMarker_02; 
	struct USceneComponent* ConstructionMarker_01; 
	struct USceneComponent* Visualisers; 
	struct UStaticMeshComponent* StaticMesh3; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UStaticMeshComponent* StaticMesh; 
	struct TArray<struct FSettlementNPCTask> ActiveDefaultTasks; 
	struct UStaticMeshComponent* FoliageBlockingCube; 
	struct TArray<int32_t> VisibleProxyMeshes; 
	struct TArray<struct FSettlementProxyMeshConfig> ProxyMeshConfig; 

	void GetDisplayName(struct FText& Name); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDescription(struct FText& Description); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAutomaticItemProxyMeshes(struct UInventory* Inventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetProxyMeshVisiblity(int32_t ProxyMeshIndex, bool IsVisible); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateVisibleProxyMeshes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_VisibleProxyMeshes(); // (BlueprintCallable|BlueprintEvent)
	void ClearGrass(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanConstructBuildingAtLocation(struct UObject* WorldContextObject, struct FVector& Location, struct FRotator& Rotation, struct FText& FailureReason); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnBuildingActiveStateUpdated(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnBuildStateUpdated(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateConstructionVisualisers(bool Show); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void TemporarilyGhostSettlers(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementBuilding(int32_t EntryPoint); // (Final|UbergraphFunction)
};

