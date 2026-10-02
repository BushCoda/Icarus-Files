// BlueprintGeneratedClass BP_NPC_LavaHunter_Character.BP_NPC_LavaHunter_Character_C
struct ABP_NPC_LavaHunter_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UInteractableComponent* Interactable; 
	struct UInventoryComponent* Inventory; 
	struct UCapsuleComponent* CriticalArea_Underbelly_Low; 
	struct UCapsuleComponent* CriticalArea_Underbelly_High; 
	struct USphereComponent* CriticalArea_Eye_R; 
	struct UTerrainAnchorComponent* TerrainAnchor; 
	struct USceneComponent* Alert; 
	float FlameOffEffectScale_FlameScale_5CEB42A54A5C9F1408E004B7C0FE8CB6; 
	enum class ETimelineDirection FlameOffEffectScale__Direction_5CEB42A54A5C9F1408E004B7C0FE8CB6; 
	struct UTimelineComponent* FlameOffEffectScale; 
	float FlameOnEffectScale_FlameScale_7243327C4E03A8C319A5A89588EA0612; 
	enum class ETimelineDirection FlameOnEffectScale__Direction_7243327C4E03A8C319A5A89588EA0612; 
	struct UTimelineComponent* FlameOnEffectScale; 
	enum class LavaHunterState CurrentState; 
	bool IsDormant; 
	struct UIcarusNavigationDirtier* NavigationDirtier; 
	bool HasLaidEgg; 
	bool IsWounded; 
	bool IsFlameOn; 
	struct UMaterialInstanceDynamic* DynamicMeshMaterial; 
	bool HasGeneratedRewards; 

	int32_t GetSpawnAttractorEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetSpawnBlockerEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_IsDormant(); // (BlueprintCallable|BlueprintEvent)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PlayFootstepParticleEffects(enum class ECreatureFootstepType Type, enum class ECreatureFootstepDirection Direction); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_IsFlameOn(); // (BlueprintCallable|BlueprintEvent)
	void UpdateVocalisationState(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FCriticalHitAreasEnum GetDefaultCriticalArea(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DropCarapce(struct AActor* Causer, int32_t DamageTaken); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateUndergroundWidgetVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanUseStingAttack(bool& WantsToSting); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FlameOnEffectScale__FinishedFunc(); // (BlueprintEvent)
	void FlameOnEffectScale__UpdateFunc(); // (BlueprintEvent)
	void FlameOffEffectScale__FinishedFunc(); // (BlueprintEvent)
	void FlameOffEffectScale__UpdateFunc(); // (BlueprintEvent)
	void OnNotifyEnd_69810BD742AC08DD5ACBFDAB28AE369C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_69810BD742AC08DD5ACBFDAB28AE369C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_69810BD742AC08DD5ACBFDAB28AE369C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_69810BD742AC08DD5ACBFDAB28AE369C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_69810BD742AC08DD5ACBFDAB28AE369C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void UpdateVisibilityBasedAnimTickOption(); // (Event|Protected|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void StartFlameOnFX(); // (BlueprintCallable|BlueprintEvent)
	void StopFlameOnFX(); // (BlueprintCallable|BlueprintEvent)
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection); // (Public|BlueprintCallable|BlueprintEvent)
	void DelayedShowHideHealthBar(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_LavaHunter_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

