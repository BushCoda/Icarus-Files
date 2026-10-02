// BlueprintGeneratedClass BP_NPC_Slug_Hammerhead_Character.BP_NPC_Slug_Hammerhead_Character_C
struct ABP_NPC_Slug_Hammerhead_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Cocoon; 
	struct USceneComponent* Spawn3; 
	struct USceneComponent* Spawn2; 
	struct USceneComponent* Spawn1; 
	struct UDestructibleComponent* DM_SlugExplodePose; 
	struct UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	float Timeline_0_CocoonForm_8888DFFE40F1C3D852C4DA8AA78EDDE0; 
	enum class ETimelineDirection Timeline_0__Direction_8888DFFE40F1C3D852C4DA8AA78EDDE0; 
	struct UTimelineComponent* Timeline_1; 
	struct FAISetupRowHandle SmallerSlug; 
	struct TArray<struct ABP_NPC_Slug_Hammerhead_S_Character_C*> Slugs; 
	float StartHealthPercent; 
	bool OldActiveState; 
	int32_t StatUID; 
	struct TMap<struct FStatsEnum, int32_t> ScaledStatsToAdd; 
	float CocoonTime; 
	struct ABP_SlugManager_C* Slug Manager; 
	bool HasSplit; 
	struct UCharacterState* OtherActorState; 
	float DamagePercent; 

	void OnRep_Slug Manager(); // (BlueprintCallable|BlueprintEvent)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddInitialScaledStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSlugSpawnHP(struct AActor* Slug, bool DamageSlug); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetArmorPercent(int32_t Percent); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void OnNotifyEnd_01CCC6BA44B3524B807D58A9F8162B11(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_01CCC6BA44B3524B807D58A9F8162B11(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_01CCC6BA44B3524B807D58A9F8162B11(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_01CCC6BA44B3524B807D58A9F8162B11(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_01CCC6BA44B3524B807D58A9F8162B11(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_F3F32530413BA8F7542F50B5A9910F7A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_F3F32530413BA8F7542F50B5A9910F7A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_F3F32530413BA8F7542F50B5A9910F7A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_F3F32530413BA8F7542F50B5A9910F7A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_F3F32530413BA8F7542F50B5A9910F7A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateCocoonState(struct UActorState* ActorState, float NewArmor); // (BlueprintCallable|BlueprintEvent)
	void CocoonTimeout(); // (BlueprintCallable|BlueprintEvent)
	void Event Set Cocoon State(bool Active); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void UpdateCreatureGrowthStats(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetVisualsCocoonActive(bool bNewVisibility); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

