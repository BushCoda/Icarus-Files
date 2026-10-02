// BlueprintGeneratedClass BP_SettlementBuilding_Watertower.BP_SettlementBuilding_Watertower_C
struct ABP_SettlementBuilding_Watertower_C : ABP_SettlementBuilding_C {
	float DeltaWaterProduction; 
	int32_t WaterProductionPerDay; 
	struct FSettlementNPCTask CurrentTask; 

	void TickActiveBuilding(float ProspectTimeDelta); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

