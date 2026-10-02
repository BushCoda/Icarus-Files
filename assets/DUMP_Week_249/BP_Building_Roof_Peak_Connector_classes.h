// BlueprintGeneratedClass BP_Building_Roof_Peak_Connector.BP_Building_Roof_Peak_Connector_C
struct ABP_Building_Roof_Peak_Connector_C : ABP_Building_Ramp_C {
	struct UBPC_EnvironmentalBuildupChild_C* BPC_EnvironmentalBuildupChild; 

	void GetBlockingBypass(struct ABP_Building_Base_C* BuildingClass, struct TArray<struct FVectorPair>& BlockingPreRotate, struct FTransform GridSpaceTransform, struct TArray<struct FVectorPair>& BypassBlocking); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

