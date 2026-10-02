// BlueprintGeneratedClass BP_SettlementBuilding_LoggingCamp.BP_SettlementBuilding_LoggingCamp_C
struct ABP_SettlementBuilding_LoggingCamp_C : ABP_SettlementBuilding_C {
	struct UStaticMeshComponent* SM_Proxy_5; 
	struct UStaticMeshComponent* SM_Proxy_4; 
	struct UStaticMeshComponent* SM_Proxy_3; 
	struct UStaticMeshComponent* SM_Proxy_2; 
	float DeltaProduction; 
	int32_t WoodProductionPerDayPerNPC; 
	float MaxDistanceToNearestTree; 

	bool CanConstructBuildingAtLocation(struct UObject* WorldContextObject, struct FVector& Location, struct FRotator& Rotation, struct FText& FailureReason); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TickActiveBuilding(float ProspectTimeDelta); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

