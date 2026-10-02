// BlueprintGeneratedClass BP_SettlementBuilding_Farm.BP_SettlementBuilding_Farm_C
struct ABP_SettlementBuilding_Farm_C : ABP_SettlementBuilding_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_Carrots_11; 
	struct UStaticMeshComponent* SM_Carrots_10; 
	struct UStaticMeshComponent* SM_Carrots_9; 
	struct UStaticMeshComponent* SM_Carrots_8; 
	struct UStaticMeshComponent* SM_Carrots_7; 
	struct UStaticMeshComponent* SM_Carrots_6; 
	struct UStaticMeshComponent* SM_Carrots_5; 
	struct UStaticMeshComponent* SM_Carrots_4; 
	struct UStaticMeshComponent* SM_Carrots_3; 
	struct UStaticMeshComponent* SM_Carrots_2; 
	struct UInstancedStaticMeshComponent* ISM_Mounds; 

	void SetupRandomCropLocations(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnTerrainAnchorStateChanged(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementBuilding_Farm(int32_t EntryPoint); // (Final|UbergraphFunction)
};

