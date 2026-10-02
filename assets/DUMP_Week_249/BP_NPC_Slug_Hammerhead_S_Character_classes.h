// BlueprintGeneratedClass BP_NPC_Slug_Hammerhead_S_Character.BP_NPC_Slug_Hammerhead_S_Character_C
struct ABP_NPC_Slug_Hammerhead_S_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* Cocoon; 
	struct UInventoryComponent* Inventory; 
	struct UInteractableComponent* Interactable; 
	struct UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	float Timeline_0_CocoonForm_3A1A548A4FAE628BEF74B7BF2E5E26E9; 
	enum class ETimelineDirection Timeline_0__Direction_3A1A548A4FAE628BEF74B7BF2E5E26E9; 
	struct UTimelineComponent* Timeline_1; 
	bool HasGeneratedRewards; 
	struct FItemRewardsRowHandle LootRewards; 
	struct TArray<struct FItemData> Loot_1; 
	struct FItemData ModifiedItem; 
	bool IsFinalSlug; 
	bool OldActiveState; 
	int32_t StatUID; 
	struct TMap<struct FStatsEnum, int32_t> ScaledStatsToAdd; 
	float CocoonTime; 
	struct ABP_SlugManager_C* SlugManager; 
	struct FMulticastInlineDelegate SlugDeath; 
	struct UCharacterState* OtherActorState; 
	float DamagePercent; 

	void OnRep_SlugManager(); // (BlueprintCallable|BlueprintEvent)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddInitialScaledStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetArmorPercent(int32_t Percent); // (Public|BlueprintCallable|BlueprintEvent)
	void SetSlugSpawnHP(struct AActor* Slug, bool DamageSlug); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateSlugRewards(struct AIcarusPlayerCharacter* PlayerInstigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void OnNotifyEnd_1DFD81434DC93AC23F9660BBC7888683(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_1DFD81434DC93AC23F9660BBC7888683(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_1DFD81434DC93AC23F9660BBC7888683(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_1DFD81434DC93AC23F9660BBC7888683(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_1DFD81434DC93AC23F9660BBC7888683(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_027C5F424C4CE6600C103087547D20E7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_027C5F424C4CE6600C103087547D20E7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_027C5F424C4CE6600C103087547D20E7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_027C5F424C4CE6600C103087547D20E7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_027C5F424C4CE6600C103087547D20E7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_D7575411429F2D879ADFEAA43CB880D1(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_D7575411429F2D879ADFEAA43CB880D1(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_D7575411429F2D879ADFEAA43CB880D1(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_D7575411429F2D879ADFEAA43CB880D1(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_D7575411429F2D879ADFEAA43CB880D1(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateCocoonState(struct UActorState* ActorState, float NewArmor); // (BlueprintCallable|BlueprintEvent)
	void CocoonTimeout(); // (BlueprintCallable|BlueprintEvent)
	void Event Set Cocoon State(bool Active); // (BlueprintCallable|BlueprintEvent)
	void UpdateCreatureGrowthStats(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void SetSlugVisualsActive(bool bNewVisibility); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_S_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SlugDeath__DelegateSignature(struct AActor* Slug); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

