// BlueprintGeneratedClass BP_NPC_Slug_Hammerhead_L_Character.BP_NPC_Slug_Hammerhead_L_Character_C
struct ABP_NPC_Slug_Hammerhead_L_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Spawn3; 
	struct USceneComponent* Spawn2; 
	struct USceneComponent* Spawn1; 
	struct UDestructibleComponent* DM_SlugExplodePose; 
	struct UNiagaraComponent* NS_Hammerhead_Splash_3; 
	struct UNiagaraComponent* NS_Hammerhead_Splash_2; 
	struct UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	struct FAISetupRowHandle SmallerSlug; 
	struct TArray<struct ABP_NPC_Slug_Hammerhead_Character_C*> Slugs; 
	float StartHealthPercent; 
	struct ABP_SlugManager_C* SlugManager; 
	int32_t StatUID; 
	struct TMap<struct FStatsEnum, int32_t> ScaledStatsToAdd; 
	bool HasSplit; 

	void InitSlugManager(struct ABP_SlugManager_C* Manager); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SlugManager(); // (BlueprintCallable|BlueprintEvent)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddInitialScaledStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnNotifyEnd_DCE737964C96A2E6CE4FCBA14A377B89(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_DCE737964C96A2E6CE4FCBA14A377B89(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_DCE737964C96A2E6CE4FCBA14A377B89(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_DCE737964C96A2E6CE4FCBA14A377B89(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_DCE737964C96A2E6CE4FCBA14A377B89(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_7E9C1F7C4B6C0F6D88DA489C1E361E7F(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_7E9C1F7C4B6C0F6D88DA489C1E361E7F(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_7E9C1F7C4B6C0F6D88DA489C1E361E7F(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_7E9C1F7C4B6C0F6D88DA489C1E361E7F(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_7E9C1F7C4B6C0F6D88DA489C1E361E7F(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateCreatureGrowthStats(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_L_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

