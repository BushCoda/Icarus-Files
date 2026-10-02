// BlueprintGeneratedClass BP_HuntingClueSpawner.BP_HuntingClueSpawner_C
struct UBP_HuntingClueSpawner_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UBP_HuntingClueSpawnerInstanceGroup_C*> HuntingClueGroupInstances; 

	struct UBP_HuntingClueSpawnerInstanceGroup_C* SpawnGroupInstance(struct FHuntingClueSetup Setup); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetGroundLocation(struct FVector& ImpactPoint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAI(struct ACharacter*& AI); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SpawnBloodTrailClue(struct UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C* BloodTrailData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickBloodTrail(struct UBP_HuntingClueSpawnerInstanceGroup_C* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnFootprintClue(struct UBP_HuntingClueSpawnerInstanceGroup_Footprint_C* FootprintData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickFootprint(struct UBP_HuntingClueSpawnerInstanceGroup_C* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_E05133814F8E9C2E95E5F3B60BEECF3C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PreloadClueClass(int32_t GroupIndex); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_HuntingClueSpawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

