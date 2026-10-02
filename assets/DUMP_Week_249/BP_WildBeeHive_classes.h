// BlueprintGeneratedClass BP_WildBeeHive.BP_WildBeeHive_C
struct ABP_WildBeeHive_C : ABP_Nest_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* BeeNestAudio; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* SpawnLocation; 
	struct UDestructibleComponent* DestructibleMesh; 
	struct FRandomStream RandomStream; 
	int32_t NumToSpawn; 
	bool HasBeenDestroyed; 
	int32_t InitialSpawnCount; 
	struct TArray<struct AActor*> SpawnedBees; 
	struct FTimerHandle AdditionalSpawnTimer; 
	struct FName NestBlackboardKey; 
	struct FName AggressiveBlackboardKey; 
	struct FAISetupRowHandle SpawnType; 
	struct UStaticMesh* Destroyed Mesh State; 
	struct UDestructibleMesh* DestrucibleMesh; 
	struct FTimerHandle CheckPlayersNearbyTimer; 
	struct FName BeeCurrentTargetKey; 
	struct AController* LastDamagingPlayer; 

	void NotifyCaveAISpawned(struct AActor* NewActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnDestroyedStateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedBeeEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasBeenDestroyed(); // (BlueprintCallable|BlueprintEvent)
	void StartSpawning(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath_Event(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void OnDestroyedFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void SpawnBee(struct FVector& Location, struct FRotator Rotation, bool StartAggressive); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void TrySpawnAdditionalBees(); // (BlueprintCallable|BlueprintEvent)
	void StopSpawning(); // (BlueprintCallable|BlueprintEvent)
	void CheckPlayersNearby(); // (BlueprintCallable|BlueprintEvent)
	void SpawnVisuals(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WildBeeHive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

