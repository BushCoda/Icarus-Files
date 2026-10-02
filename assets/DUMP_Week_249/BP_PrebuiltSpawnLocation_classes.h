// BlueprintGeneratedClass BP_PrebuiltSpawnLocation.BP_PrebuiltSpawnLocation_C
struct ABP_PrebuiltSpawnLocation_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Cube1; 
	struct UBillboardComponent* Billboard; 
	struct UStaticMeshComponent* Cube; 
	struct AActor* SpawnedAI; 

	struct AActor* SpawnAI(struct FAISetupRowHandle& AISetup, int32_t BaseLevel); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PrebuiltSpawnLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

