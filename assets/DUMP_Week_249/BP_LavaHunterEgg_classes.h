// BlueprintGeneratedClass BP_LavaHunterEgg.BP_LavaHunterEgg_C
struct ABP_LavaHunterEgg_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UFMODAudioComponent* LavaEggAudio; 
	struct USkeletalMeshComponent* SK_LavaHunter_Egg; 
	struct UDestructibleComponent* Destructible; 
	struct USceneComponent* EggScale; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FAISetupRowHandle AIToSpawn; 
	float TimeBeforeHatch; 
	int32_t AILevel; 
	float TargetScale; 
	int32_t NumToSpawn; 
	struct FTimerHandle HatchTimer; 
	bool HasBroken; 
	int32_t StartingHealth; 

	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void StartHatch(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Multicast_BreakEgg(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnEggDestroyed(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void SpawnEggAI(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LavaHunterEgg(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

