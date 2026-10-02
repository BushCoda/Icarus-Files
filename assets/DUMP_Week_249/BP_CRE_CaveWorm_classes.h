// BlueprintGeneratedClass BP_CRE_CaveWorm.BP_CRE_CaveWorm_C
struct ABP_CRE_CaveWorm_C : ABP_FactionBoss_SandWorm_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVocalisationComponent* Vocalisation; 
	struct USceneComponent* LootBagLocation; 
	struct UAudioContextComponent* AudioContext; 
	struct UStaticMeshComponent* SM_ROCK_CF_MED_01; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_02; 
	struct UStaticMeshComponent* SM_ROCK_CF_MED_06; 
	struct UStaticMeshComponent* SM_ROCK_CF_MED_03; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_01; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_05; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_03; 
	struct UStaticMeshComponent* Cylinder; 
	struct FTimerHandle SelfCleanupTimer; 
	float SelfCleanupDuration; 

	void CleanupSelf(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCurrentStateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FadeOutComponents(struct TArray<struct UPrimitiveComponent*>& ComponentList); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DropScales(struct AActor* Causer, int32_t DamageTaken); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnLootBag(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EMusicConditionCombatState GetCombatMusicConditionOverride(struct AIcarusPlayerCharacter* TargetPlayer, float Threat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CRE_CaveWorm(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

