// BlueprintGeneratedClass BP_BatNest.BP_BatNest_C
struct ABP_BatNest_C : ABP_Nest_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* Break; 
	struct UDestructibleComponent* DestructibleMesh; 
	struct UNiagaraComponent* Smoke; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* Attach_010; 
	struct USceneComponent* Attach_09; 
	struct USceneComponent* Attach_08; 
	struct USceneComponent* Attach_07; 
	struct USceneComponent* Attach_06; 
	struct USceneComponent* Attach_05; 
	struct USceneComponent* Attach_04; 
	struct USceneComponent* Attach_03; 
	struct USceneComponent* Attach_02; 
	struct USceneComponent* Attach_01; 
	struct USceneComponent* AttachPoints; 
	struct USceneComponent* SpawnLocation; 
	float Emissive_Intensity_Emission_Brightness_528BA2B14842961B15D9B3B3AEADC802; 
	enum class ETimelineDirection Emissive_Intensity__Direction_528BA2B14842961B15D9B3B3AEADC802; 
	struct UTimelineComponent* Emissive_Intensity; 
	float Light_Intensity_Emission_Brightness_421BABE64270D0A7266544BF81269576; 
	enum class ETimelineDirection Light_Intensity__Direction_421BABE64270D0A7266544BF81269576; 
	struct UTimelineComponent* Light_Intensity; 
	struct FRandomStream RandomStream; 
	int32_t Runtime_NumToSpawn; 
	bool HasBeenDestroyed; 
	int32_t Runtime_InitialSpawnCount; 
	struct TArray<struct AActor*> SpawnedBats; 
	struct FTimerHandle AdditionalSpawnTimer; 
	struct FName NestBlackboardKey; 
	struct FName AggressiveBlackboardKey; 
	struct FAISetupRowHandle SpawnBatType; 
	struct UStaticMesh* Destroyed Mesh State; 
	struct UDestructibleComponent* DM CRE Bat Nest Cave DES DM; 
	struct UDestructibleMesh* DestrucibleMesh; 
	struct FTimerHandle CheckPlayersNearbyTimer; 
	struct TArray<struct USceneComponent*> InitialSpawnPoints; 
	struct AController* LastDamagingPlayer; 
	struct FName CurrentTargetKey; 
	int32_t Setup_InitalSpawnMin; 
	int32_t Setup_InitalSpawnMax; 
	int32_t Setup_TotalActive; 

	void ModifyRotation(struct FRotator Input, struct FRotator& Output); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void NotifyCaveAISpawned(struct AActor* NewActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnSpawnedBatEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasBeenDestroyed(); // (BlueprintCallable|BlueprintEvent)
	void Emissive_Intensity__FinishedFunc(); // (BlueprintEvent)
	void Emissive_Intensity__UpdateFunc(); // (BlueprintEvent)
	void Light_Intensity__FinishedFunc(); // (BlueprintEvent)
	void Light_Intensity__UpdateFunc(); // (BlueprintEvent)
	void StartSpawning(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath_Event(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void OnDestroyedFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void SpawnBat(struct FVector& Location, struct FRotator Rotation, bool StartAggressive); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void TrySpawnAdditionalBats(); // (BlueprintCallable|BlueprintEvent)
	void StopSpawning(); // (BlueprintCallable|BlueprintEvent)
	void CheckPlayersNearby(); // (BlueprintCallable|BlueprintEvent)
	void SpawnVisuals(); // (BlueprintCallable|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_BatNest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

