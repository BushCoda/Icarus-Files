// BlueprintGeneratedClass BP_LavaFlyerNest.BP_LavaFlyerNest_C
struct ABP_LavaFlyerNest_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_EggFlies_FX; 
	struct UPointLightComponent* PointLight; 
	struct UDestructibleComponent* SM_LavaHunter_EggCluster_DM; 
	struct UStaticMeshComponent* BaseMound; 
	struct UFMODAudioComponent* LavaEggAudio; 
	struct USkeletalMeshComponent* SK_LavaHunter_Egg; 
	struct USceneComponent* EggScale; 
	struct USceneComponent* DefaultSceneRoot; 
	float GrowthTimeline_LightAlpha_C2E7A14A47ABC783FBD671A31A092316; 
	float GrowthTimeline_GrowthAlpha_C2E7A14A47ABC783FBD671A31A092316; 
	enum class ETimelineDirection GrowthTimeline__Direction_C2E7A14A47ABC783FBD671A31A092316; 
	struct UTimelineComponent* GrowthTimeline; 
	struct FAISetupRowHandle AIToSpawn; 
	float TimeBeforeHatch; 
	int32_t AILevel; 
	int32_t NumToSpawn; 
	struct FTimerHandle HatchTimer; 
	bool HasBroken; 
	int32_t StartingHealth; 
	struct FTimerHandle CheckPlayersNearbyTimer; 
	struct FVector BaseEggScale; 
	float SpawnTime; 
	struct UMaterialInstanceDynamic* DynamicEggMaterial; 
	bool IsSpawning; 

	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GrowthTimeline__FinishedFunc(); // (BlueprintEvent)
	void GrowthTimeline__UpdateFunc(); // (BlueprintEvent)
	void StartHatch(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Multicast_BreakEgg(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnEggDestroyed(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void SpawnEggAI(); // (BlueprintCallable|BlueprintEvent)
	void CheckPlayersNearby(); // (BlueprintCallable|BlueprintEvent)
	void StartSpawningFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void BeginHatching(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDamaged(struct FIcarusDamagePacket DamagePacket); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LavaFlyerNest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

