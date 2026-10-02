// BlueprintGeneratedClass BPQC_HordeMode.BPQC_HordeMode_C
struct UBPQC_HordeMode_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*> NPCs; 
	struct AActor* Target; 
	struct FHordeRowHandle Horde Setup; 
	float Multiplier; 
	struct FHordeWaveRowHandle Current Wave; 
	struct TArray<float> Next Spawn; 
	struct TArray<int32_t> Number Spawned; 
	struct TArray<bool> Spawn Complete; 
	int32_t Current Wave Index; 
	struct FMulticastInlineDelegate HordeComplete; 
	int32_t Killed; 
	int32_t Total; 
	struct TArray<struct AActor*> SpawnLocations; 
	int32_t TotalNumberSpawned; 
	float MaximumQuestMarkerSpawnDistance; 
	bool Current; 
	struct TArray<int32_t> PerCreatureTotalSpawnCount; 
	float DelayBetweenSimultaneousSpawns; 

	void GetTotalNumberToSpawn(struct FHordeCreatureSetup HordeCreature, int32_t& TotalSpawnNum); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void GetTimeBetweenSpawns(struct FHordeCreatureSetup HordeCreature, float& TimeBetween); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetSimultaneousNumberOfAIToSpawn(struct FHordeCreatureSetup HordeCreature, int32_t& ToSpawn); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetOriginForSpawnEQS(struct FVector& Origin, bool& IsQuestMarker); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetProgress(float& Progress); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void On Creature End Play(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void On Creature Death(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void On Creature Spawned(struct ABP_IcarusNPCGOAPCharacter_C* NPC); // (Public|BlueprintCallable|BlueprintEvent)
	void AngerNPC(struct AIcarusNPCGOAPCharacter* NPC); // (Public|BlueprintCallable|BlueprintEvent)
	void Check Spawn(float Delta); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerNextWave(bool& Complete); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Check Complete(bool& Complete); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Stop Horde(); // (Public|BlueprintCallable|BlueprintEvent)
	void Trigger Horde(struct FHordeRowHandle HordeSetup, float Multiplier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BPQC_HordeMode(int32_t EntryPoint); // (Final|UbergraphFunction)
	void HordeComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

