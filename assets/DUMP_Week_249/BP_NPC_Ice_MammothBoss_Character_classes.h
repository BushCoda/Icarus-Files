// BlueprintGeneratedClass BP_NPC_Ice_MammothBoss_Character.BP_NPC_Ice_MammothBoss_Character_C
struct ABP_NPC_Ice_MammothBoss_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* BodyBlocker; 
	struct USphereComponent* LegBlocker; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UInteractableComponent* Interactable; 
	struct UInventoryComponent* Inventory; 
	struct UNiagaraComponent* NS_SnowParticles; 
	struct USceneComponent* SpawnBirdLocation; 
	struct UDestructibleComponent* IceArmourDM2; 
	struct UDestructibleComponent* IceArmourDM4; 
	struct UDestructibleComponent* IceArmourDM1; 
	struct UDestructibleComponent* IceArmourDM5; 
	struct UDestructibleComponent* IceArmourDM3; 
	struct USphereComponent* CritArea_Tusk3; 
	struct USphereComponent* CritArea_Tusk4; 
	struct USceneComponent* IceArmourSpawnLocation; 
	struct USkeletalMeshComponent* IceArmour2; 
	struct USkeletalMeshComponent* IceArmour1; 
	struct USkeletalMeshComponent* IceArmour5; 
	struct USkeletalMeshComponent* IceArmour4; 
	struct USkeletalMeshComponent* IceArmour3; 
	struct USphereComponent* CritArea_Tusk2; 
	struct USphereComponent* CritArea_Tusk1; 
	struct USceneComponent* StompLoc; 
	struct USceneComponent* Alert; 
	enum class EGOAPProperty FastestActiveState; 
	struct TArray<struct USkeletalMeshComponent*> IceArmour; 
	int32_t CurrentDamageResistance; 
	float CurrentHP; 
	struct TArray<struct UDestructibleComponent*> IceArmourDM; 
	int32_t Index; 
	struct UDestructibleComponent* Item; 
	struct UDestructibleComponent* ChunkToDestroy; 
	struct TArray<struct AActor*> SpawnedBirds; 
	bool HasBrokenIce; 
	struct TMap<struct FStatsEnum, int32_t> ScaledStatsToAdd; 
	int32_t StatUID; 
	bool ShouldMusicStart; 
	struct FName ShouldMusicStartKey; 
	struct UCurveFloat* AudioThreatDistanceModifier; 
	bool HasGeneratedRewards; 
	struct TArray<struct ABP_Mammoth_IcePillar_C*> IcePillars; 
	int32_t PillarsToDestroy; 

	enum class EMusicConditionCombatState GetCombatMusicConditionOverride(struct AIcarusPlayerCharacter* TargetPlayer, float Threat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetThreatToPlayer(struct AIcarusPlayerCharacter* TargetPlayer); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ShouldMusicStart(); // (BlueprintCallable|BlueprintEvent)
	void AddInitialScaledStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RegenerateArmor(); // (Public|BlueprintCallable|BlueprintEvent)
	void RegenerateDM(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheWaterfallLocations(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnActionMontageNotify(struct FName NotifyName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnNotifyEnd_AAB122104315833E31B06D858D645CD6(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_AAB122104315833E31B06D858D645CD6(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_AAB122104315833E31B06D858D645CD6(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_AAB122104315833E31B06D858D645CD6(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_AAB122104315833E31B06D858D645CD6(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnArmorUpdated(struct UActorState* ActorState, float NewArmor); // (BlueprintCallable|BlueprintEvent)
	void BreakDM(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void InitIceAdded(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCreatureGrowthStats(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void AddIcePillar(struct ABP_Mammoth_IcePillar_C*& Pillar, int32_t MaxPillars); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void RemovePillar(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Ice_MammothBoss_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

