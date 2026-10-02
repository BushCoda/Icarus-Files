// BlueprintGeneratedClass BP_Faction_Mission_Spawner.BP_Faction_Mission_Spawner_C
struct ABP_Faction_Mission_Spawner_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventoryComponent* Inventory; 
	struct USkeletalMeshComponent* SK_Spawner; 
	struct UNiagaraComponent* NS_Spawner; 
	struct USceneComponent* SpawnerFX; 
	struct UBP_HitableBehaviour_CreatureSpawner_C* BP_HitableBehaviour_CreatureSpawner; 
	struct UDestructibleComponent* DestructibleMesh; 
	struct UDurableComponent* Durable; 
	struct UNiagaraComponent* NS_DestructionParticle; 
	struct USceneComponent* SpawnLocation; 
	struct FRandomStream RandomStream; 
	struct UFMODEvent* DestructionAudio; 
	bool bDestroyed; 
	bool bActive; 
	struct FEpicCreaturesRowHandle Epic; 
	struct FAISetupRowHandle Creature; 
	float TimeBetweenSpawns; 
	struct FMulticastInlineDelegate CreatureSpawned; 
	int32_t MaxCreatures; 
	float MinimumPlayerDistance; 
	struct TArray<struct AActor*> Creatures; 
	bool bSpawnOneThenStop; 
	bool bStartedSpawning; 
	int32_t TotalMaximumSpawnCount; 
	int32_t RecordedNumSpawned; 
	int32_t TetherDistance; 
	bool ApplyRegenOnReturn; 
	bool TeleportOnReturnIfBlocked; 
	bool CleanupAIOnTerrainAnchorInvalidation; 
	struct FScalingRulesEnum Scaling_DenHealth; 
	struct FScalingRulesEnum Scaling_CreatureLevel; 
	int32_t BonusScaledCreatureLevel; 
	struct FScalingRulesEnum Scaling_ConcurrentCreatureCount; 
	struct FScalingRulesEnum Scaling_TotalSpawnCount; 
	struct FScalingRulesEnum Scaling_TimeBetweenSpawns; 
	bool bGeneratedRewards; 
	struct FItemRewardsRowHandle LootRewards; 
	struct TArray<struct AActor*> SpawnedAI; 
	bool DoDelayedCleanupOnDestroy; 
	int32_t LevelHardCap; 

	void OnDamaged(struct FIcarusDamagePacket DamagePacket); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateExtraSpawnerLoot(struct TArray<struct FItemData>& Items); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GenerateLootItems(struct AIcarusPlayerCharacter* InstigatingPlayer, struct TArray<struct FItemData>& Loot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateItem(struct FItemTemplateRowHandle Item, int32_t Amount, struct FItemData& OutputItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryCleanup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartDelayedCleanup(float MinCleanupDelay); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsPlayerNearby(bool& PlayerNearby); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanSpawn(bool& bCanSpawn); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnCreatureSpawned(struct AActor* Creature); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_bDestroyed(); // (BlueprintCallable|BlueprintEvent)
	void Spawn Creature(); // (BlueprintCallable|BlueprintEvent)
	void DestroyUpdate(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void SetSpawnerActive(bool bActive); // (BlueprintCallable|BlueprintEvent)
	void AttemptSpawn(); // (BlueprintCallable|BlueprintEvent)
	void SetAsWorldSpawner(); // (BlueprintCallable|BlueprintEvent)
	void OnActorKilled(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void OnCreatureDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void ReviveSpawner(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnCreatureKilled(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void OnTerrainAnchorUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateHighlight(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void DoStartDelayedClean(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_Spawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CreatureSpawned__DelegateSignature(struct AActor* SpawnedActor); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

