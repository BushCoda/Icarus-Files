// BlueprintGeneratedClass BP_Mount_Base.BP_Mount_Base_C
struct ABP_Mount_Base_C : AIcarusMountCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* JuvenileSpawnLocation; 
	struct UGeneticsComponent* Genetics; 
	struct UBP_JumpLerpComponent_C* BP_JumpLerpComponent; 
	struct USkeletalMeshComponent* PsuedoSaddle; 
	struct UBP_UIProjectionLocation_C* ProjectionLocation_Status; 
	struct UBP_UIProjectionComponent_MountStatus_C* BP_UIProjectionComponent_MountStatus; 
	struct UStomachComponent* Stomach; 
	struct USceneComponent* CargoInventoryOverflow; 
	struct USphereComponent* WeightCollider; 
	struct UBP_Weight_C* BP_Weight; 
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; 
	struct UAIVocalisationComponent* AIVocalisation; 
	struct UAudioOcclusionCharacterComponent* AudioOcclusionCharacter; 
	struct UBP_CreatureAudioComponent_C* BP_CreatureAudioComponent; 
	struct UAudioContextCreatureComponent* AudioContextCreature; 
	struct UBP_Flammable_Actor_C* BP_Flammable_Actor; 
	struct UBP_UIProjectionComponent_MountTooltip_C* BP_UIProjectionComponent_MountTooltip; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	struct UInventoryComponent* Inventory; 
	struct UBP_SwimmingComponent_C* BP_SwimmingComponent; 
	struct UCapsuleComponent* ClothAffector; 
	struct USphereComponent* HeadBlocker; 
	struct UGFurComponent* GFur; 
	struct UChildActorComponent* ChildActor_Seat; 
	struct FMulticastInlineDelegate MontageNotify; 
	struct FName AttackNotify; 
	struct FMulticastInlineDelegate MontageComplete; 
	enum class EMovementState DefaultMovementState; 
	enum class EMovementState SprintingMovementState; 
	struct UBehaviorTree* AttackBehaviour; 
	struct UContextMenuWidget* CurrentRadialMenu; 
	struct FName ContextBehaviour_Follow; 
	struct FName ContextBehaviour_Wander; 
	struct FName ContextBehaviour_Stand; 
	struct FName ContextBehaviour_Sit; 
	struct FName ContextBehaviour_Passive; 
	struct FName ContextBehaviour_Defensive; 
	struct FName ContextBehaviour_Aggressive; 
	struct AActor* ViewTargetActor; 
	struct FName SaddleAttachSocketName; 
	enum class EAIAudioState CurrentAudioState; 
	struct FSaddlesRowHandle SaddleData; 
	struct AController* LastController; 
	struct FName MovementStateKey; 
	struct FName CombatStateKey; 
	struct FMulticastInlineDelegate ModifierUpdated; 
	struct ABP_MountPreview_C* MountPreview; 
	struct UUMG_UserInterface_Base_C* UserInterfaceRef; 
	struct UIcarusLinkedActorPanelBase* MountInventoryInterface; 
	struct FName AnchorLocationKey; 
	struct FName FootstepVfxBone_FL; 
	struct FName FootstepVfxBone_FR; 
	struct FName FootstepVfxBone_BL; 
	struct FName FootstepVfxBone_BR; 
	struct FName JumpVfxBone_Root; 
	struct UNiagaraSystem* FrontFootVfx; 
	struct UNiagaraSystem* RearFootVfx; 
	struct UNiagaraSystem* JumpVfx; 
	enum class EMountMovementBehaviourState DefaultMountMovementBehaviour; 
	enum class EMountCombatBehaviourState DefaultMountCombatBehaviour; 
	int32_t CosmeticSkinIndex; 
	bool SupportsSkinVariation; 
	bool HaveStatsUpdated; 
	int32_t UpdatedSkinIndex; 
	struct FTimerHandle RetryTeleportTimer; 
	float LastTeleportTime; 
	int32_t LastLevelAchieved; 
	struct FTimerHandle FrozenTeleportTimer; 
	enum class EMountConsumptionBehaviourState DefaultMountConsumptionBehaviour; 
	bool HasPerformedInitialCosmeticUpdate; 
	int32_t TempSprintSpeedStatUID; 
	enum class EMountGrazingBehaviourState DefaultMountGrazingBehaviour; 
	float InitialLogicPauseTime; 
	struct FTimerHandle FallingOutOfWorldTimer; 
	float TimeStartedFalling; 
	bool IsInCave; 
	float TimeSpentFalling; 
	struct TMap<struct FGameplayTag, struct UBehaviorTree*> CachedSubtreeOverrides; 
	float MontagePlaySpeed; 
	struct UMatineeCameraShake* FootstepScreenShake; 
	float FootstepScreenShakeMinSpeed; 
	float FootstepInnerRadius; 
	float FootstepOuterRadius; 
	struct FName ActionMontageSection; 
	struct FTimerHandle AlternateAttackCooldownTimer; 
	struct TMap<struct FGameplayTag, struct UBehaviorTree*> AdditionalDynamicSubtreeOverrides; 
	bool ShouldPromptForNameOnClaim; 
	bool ShouldBroadcastChatMessageOnDeath; 
	int32_t MiamsaModifierID; 
	int32_t Miamsa_Effectiveness; 

	bool StripItemTags(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex, struct FGameplayTagContainer& ItemTags); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsSlotValidForItem(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetMountGrazingBehaviour(enum class EMountGrazingBehaviourState& GrazingBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountConsumptionBehaviour(enum class EMountConsumptionBehaviourState& ConsumptionBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountCombatBehaviour(enum class EMountCombatBehaviourState& CombatBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountMovementBehaviour(enum class EMountMovementBehaviourState& MovementBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsThirdPersonToggleBlocked(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void MiasmaCheck(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySetupPassengerSeats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetPassengerSeatActors(struct TArray<struct ASeatBase*>& Seat); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAdditionalWidgetForHUD(struct UUserWidget*& OutUserWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitaliseDynamicBehaviourTreeInjection(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAlternateAttack(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AlternateAttackCooldownElapsed(); // (Public|BlueprintCallable|BlueprintEvent)
	bool TryAlternateAttack(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TeleportToSafeLocation(struct FVector& NewWorldLocation); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckMountFallingOutOfWorld(); // (Public|BlueprintCallable|BlueprintEvent)
	bool UnfreezeNPC(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryTeleportWhileFrozen(); // (Public|BlueprintCallable|BlueprintEvent)
	bool FreezeNPC(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseBehaviourTree(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetDistanceToFollowTarget(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnTeleportLocationFound(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryTeleportToOwner(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCharacterSlidingUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_CosmeticSkinIndex(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCosmeticMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnJuvenile(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCarcassStats(struct TArray<struct FIcarusStatReplicated>& Custom Stats); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnBakePreviewComplete(bool bSuccess); // (Protected|BlueprintCallable|BlueprintEvent)
	void BakeInventoryPreviewToTexture(bool BakeToTemporaryTexture, struct UTextureRenderTarget2D*& TemporaryTexture); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SynchroniseBlackboardBehaviourState(); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateCargoDropBag(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFootstepParticleEffects(enum class ECreatureFootstepType Footstep Type, enum class ECreatureFootstepDirection Footstep Direction); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateItemOverflowTransform(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveAudioState(enum class EAIAudioState& State); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanJumpInternal(); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool TryJump(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_SaddleData(); // (BlueprintCallable|BlueprintEvent)
	void CleanupInstigatorNPC(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAudioState(); // (Private|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentAudioState(); // (BlueprintCallable|BlueprintEvent)
	bool GetSeatActor(struct ASeatBase*& Seat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool TryAttack(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsPointWithinFOV(struct FVector TargetLocation, float DotLimit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void FindNewViewTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct AActor* GetCurrentAnimationTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GenerateContextMenuItemDataForCombatState(enum class EMountCombatBehaviourState CombatState, struct FContextMenuItemData& ContextMenuItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GenerateContextMenuItemDataForMovementState(enum class EMountMovementBehaviourState MovementState, struct FContextMenuItemData& ContextMenuItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNextToggleCombatState(enum class EMountCombatBehaviourState& CombatState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNextToggleMovementState(enum class EMountMovementBehaviourState& MovementState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnContextMenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateMenuItem(struct AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32_t ItemIndex); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CloseRadialMenu(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OpenRadialBehaviourMenu(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDesiredCombatState(enum class EMountCombatBehaviourState& MovementState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetDesiredMovementState(enum class EMountMovementBehaviourState& MovementState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateBlackboardValues(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UInventoryComponent* GetInventoryComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FindNewOwner(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseSaddle(struct AActor* SaddleActorClass, struct FItemData SaddleItem); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FAISetupRowHandle GetAISetupRowHandle(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnAttackNotify(struct UAnimMontage* Montage, struct FName NotifyName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B75B49357D(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B71FC1EF80(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void OnLoaded_4228A280491960ACB36ABABC56C2BB4C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_CB2AA5F94482EB4F2280E595F48EE7C8(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void Multicast_PlayActionMontage(struct UAnimMontage* Montage, float PlayRate, struct FName Section); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Server_PlayActionMontage(struct UAnimMontage* Montage, struct FStaminaActionCostsRowHandle StaminaCost, float PlayRate, struct FName Section); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multicast_AbortMontage(struct UAnimMontage* Montage); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveUnpossessed(struct AController* OldController); // (Event|Public|BlueprintEvent)
	void OnItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void Mounted(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Dismounted(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OwnerCharacterUpdated(); // (Event|Protected|BlueprintEvent)
	void OnVocalisationAnimNotify(enum class EAIVocalisationType VocalisationType); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void MULTI_OnHurt(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ApplySaddleFurCullingMask(struct TSoftObjectPtr<UTexture2D> CullingMask); // (BlueprintCallable|BlueprintEvent)
	void TrySetupSaddleCosmetics(); // (BlueprintCallable|BlueprintEvent)
	void OnJumped(); // (Event|Public|BlueprintEvent)
	void Local_PlayActionMontage(struct UAnimMontage* Montage, float PlayRate, struct FName Section); // (BlueprintCallable|BlueprintEvent)
	void MountCombatBehaviourUpdated(enum class EMountCombatBehaviourState NewCombatBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void MountMovementBehaviourUpdated(enum class EMountMovementBehaviourState NewMovementBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRagdollSettled(); // (BlueprintCallable|BlueprintEvent)
	void SpawnHitEffects(struct FTransform SpawnTransform, enum class EPhysicalSurface HitSurface, struct AActor* HitActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetDesiredMovementState(enum class EMountMovementBehaviourState DesiredState); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetDesiredCombatState(enum class EMountCombatBehaviourState DesiredState); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnDisplayHidden(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OpenMountInventory(struct AController* Controller); // (BlueprintCallable|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void TickStatUpdate(); // (BlueprintCallable|BlueprintEvent)
	void GrantBestiaryProgressOnLevel(int32_t Level); // (BlueprintCallable|BlueprintEvent)
	void UpdateAvoidance(); // (BlueprintCallable|BlueprintEvent)
	void MountConsumptionBehaviourUpdated(enum class EMountConsumptionBehaviourState NewConsumptionBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void SetDesiredConsumptionState(enum class EMountConsumptionBehaviourState DesiredState); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UnbindFromCosmeticStatUpdate(); // (BlueprintCallable|BlueprintEvent)
	void MountGrazingBehaviourUpdated(enum class EMountGrazingBehaviourState NewGrazingBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void SetDesiredGrazingState(enum class EMountGrazingBehaviourState DesiredState); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // (Event|Public|BlueprintEvent)
	void SetCaveState(bool IsInCave, struct AActor* CaveActor); // (Public|BlueprintCallable|BlueprintEvent)
	void Server_PerformAlternateAttack(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ValidateGenetics(); // (BlueprintCallable|BlueprintEvent)
	void OnGeneticsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void SetupGeneticsSkinVariation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mount_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ModifierUpdated__DelegateSignature(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void MontageComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void MontageNotify__DelegateSignature(struct UAnimMontage* Montage, struct FName NotifyName); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

