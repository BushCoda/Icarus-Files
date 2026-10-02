// BlueprintGeneratedClass BP_IcarusGameState.BP_IcarusGameState_C
struct ABP_IcarusGameState_C : AIcarusGameStateSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_VoxelResourceDistribution_C* BP_VoxelResourceDistribution; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AIcarusPlayerCharacter* Host; 
	struct FText Text; 
	struct ABP_DialogueManager_C* DialogueManager; 
	struct TArray<struct FVector> DamageOffsets; 
	int32_t DamageOffsetIndex; 
	int32_t LastDamageTime; 
	struct TArray<struct FDamageNumberDetail> PendingDamageNumbers; 
	float LastDamageNumberTime; 
	float DAMAGE_NUMBER_RATE_LIMIT; 
	bool DebugBallistics; 
	bool DebugCrosshair; 
	bool DebugCaveVolumes; 

	void HadRecentDamageNumber(bool& Recent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DequeueDamageNumber(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDamageOffset(struct FVector& Offset); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitDamageOffsets(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSessionSpawnGroup(int32_t& PlayerSpawnGroup, bool& Initialised); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Log(struct FString Description); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multi_SpawnFloatingDamageNumbers(struct FVector Location, enum class EIcarusDamageType DamageType, int32_t Value, struct FCriticalHitAreasEnum CriticalHit, struct AController* Instigator); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SpawnFloatingDamageNumbers(struct AActor* Actor, struct FIcarusDamagePacket& DamagePacket); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Multi_DamageLogging(struct AActor* Actor, struct FIcarusDamagePacket DamagePacket); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void QuestCleanup(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGameState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

