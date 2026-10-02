// BlueprintGeneratedClass BP_SettlementBuilding_FishingDock.BP_SettlementBuilding_FishingDock_C
struct ABP_SettlementBuilding_FishingDock_C : ABP_SettlementBuilding_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* FishingSpot; 
	struct USceneComponent* BuildingCheck_InWater; 
	struct USceneComponent* BuildingCheck_OnLand; 

	bool CanConstructBuildingAtLocation(struct UObject* WorldContextObject, struct FVector& Location, struct FRotator& Rotation, struct FText& FailureReason); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ExecuteUbergraph_BP_SettlementBuilding_FishingDock(int32_t EntryPoint); // (Final|UbergraphFunction)
};

