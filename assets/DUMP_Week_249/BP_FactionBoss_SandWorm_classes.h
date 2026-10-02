// BlueprintGeneratedClass BP_FactionBoss_SandWorm.BP_FactionBoss_SandWorm_C
struct ABP_FactionBoss_SandWorm_C : ABP_FactionBoss_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHighlightableComponent* Highlightable; 
	struct UInventoryComponent* Inventory; 
	struct UInteractableComponent* Interactable; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* CritArea_CenterMouth; 
	struct UStaticMeshComponent* CritArea_Mouth; 
	struct UChildActorComponent* CollisionActor; 
	struct UNiagaraComponent* NS_Sand_Idle; 
	struct UTerrainAnchorComponent* TerrainAnchor; 
	struct USkeletalMeshComponent* SK_SandMould; 
	struct UCameraShakeSourceComponent* CameraShakeSource; 
	struct USceneComponent* DamageOrigin; 
	float Hide_Sand_Mound_Timeline_Mound_Offset_F55D28C74E446EC6879028B31F6064D7; 
	enum class ETimelineDirection Hide_Sand_Mound_Timeline__Direction_F55D28C74E446EC6879028B31F6064D7; 
	struct UTimelineComponent* Hide Sand Mound Timeline; 
	float Inverse_Sand_Mound_Timeline_Morph_Inverse_E74CB6DA4DF637FD6DE13093B965F1C7; 
	enum class ETimelineDirection Inverse_Sand_Mound_Timeline__Direction_E74CB6DA4DF637FD6DE13093B965F1C7; 
	struct UTimelineComponent* Inverse Sand Mound Timeline; 
	float Sand_Mound_Timeline_Rumble_Speed_8BD2BFB64651EAB846C8208F68127CF8; 
	float Sand_Mound_Timeline_Morph_Value_8BD2BFB64651EAB846C8208F68127CF8; 
	enum class ETimelineDirection Sand_Mound_Timeline__Direction_8BD2BFB64651EAB846C8208F68127CF8; 
	struct UTimelineComponent* Sand Mound Timeline; 
	float SecondaryEmerge_EmergeFXScale_30824AEA4664763349A51F86512F7C6F; 
	enum class ETimelineDirection SecondaryEmerge__Direction_30824AEA4664763349A51F86512F7C6F; 
	struct UTimelineComponent* SecondaryEmerge; 
	float FirstEmerge_EmergeFXScale_D87A7F1B48B4C975148696B25CC5EA43; 
	enum class ETimelineDirection FirstEmerge__Direction_D87A7F1B48B4C975148696B25CC5EA43; 
	struct UTimelineComponent* FirstEmerge; 
	enum class SandWormState CurrentState; 
	struct FName CurrentStateBlackboardKey; 
	float MusicOverrideThreatThreshold; 
	float BaseAudioThreat; 
	struct UCurveFloat* AudioThreatDistanceModifier; 
	float AudioDeathDelay; 
	float TimeOfDeath; 
	struct UFMODEvent* FMODEvent_FirstPreEmerge; 
	struct UFMODEvent* FMODEvent_SecondaryPreEmerge; 
	struct FName HeadBone; 
	float DamageRadiusAroundHead; 
	struct FPositionHistory HeadBonePositionHistory; 
	float HeadBoneVelocity; 
	enum class SandWormState LastFrameState; 
	struct UMaterialInstanceDynamic* Sand DynamicMaterial; 
	struct FVector HiddenMoundOffset; 
	struct FRotator InitialRotation; 
	bool IsUpsideDown; 
	struct UAnimMontage* DeathMontage; 
	float AttackVelocityLimit; 
	struct FMulticastInlineDelegate DamagedRetreat; 
	bool AffectsNavigationOnDeath; 
	struct UIcarusNavigationDirtier* NavigationDirtier; 
	bool SpawnCollisionActor; 
	struct AActor* CollisionActorClass; 
	bool PlayHitReactOnCrit; 
	struct UBP_UIProjectionComponent_AIAlert_C* BossProjectionComponent; 
	bool HasGeneratedRewards; 
	bool ScaleDropOnCooldown; 

	enum class EMusicConditionCombatState GetCombatMusicConditionOverride(struct AIcarusPlayerCharacter* TargetPlayer, float Threat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetThreatToPlayer(struct AIcarusPlayerCharacter* TargetPlayer); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnCurrentStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void FadeOutComponents(struct TArray<struct UPrimitiveComponent*>& ComponentList); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentState(); // (BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DropScales(struct AActor* Causer, int32_t DamageTaken); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ScaleStatForPlayerCount(struct FStatsEnum Stat, int32_t UnscaledValue, int32_t PlayerCount, int32_t& ScaledValue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseStatsAndTags(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanHitDamageTarget(struct AActor* TargetActor, struct FHitResult InHit); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateReplicatedBlackboardValues(); // (Public|BlueprintCallable|BlueprintEvent)
	void FirstEmerge__FinishedFunc(); // (BlueprintEvent)
	void FirstEmerge__UpdateFunc(); // (BlueprintEvent)
	void FirstEmerge__PlayEmergeFX__EventFunc(); // (BlueprintEvent)
	void SecondaryEmerge__FinishedFunc(); // (BlueprintEvent)
	void SecondaryEmerge__UpdateFunc(); // (BlueprintEvent)
	void SecondaryEmerge__PlayEmergeFX__EventFunc(); // (BlueprintEvent)
	void Sand Mound Timeline__FinishedFunc(); // (BlueprintEvent)
	void Sand Mound Timeline__UpdateFunc(); // (BlueprintEvent)
	void Inverse Sand Mound Timeline__FinishedFunc(); // (BlueprintEvent)
	void Inverse Sand Mound Timeline__UpdateFunc(); // (BlueprintEvent)
	void Hide Sand Mound Timeline__FinishedFunc(); // (BlueprintEvent)
	void Hide Sand Mound Timeline__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PlayPreEmergeEffects(bool IsFirstEmerge, struct FVector EmergeLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void PlayPreEmergeAudio(bool IsFirstEmerge); // (BlueprintCallable|BlueprintEvent)
	void MULTI_SetActorLocation(struct FVector NewLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void RaiseSandMound(); // (BlueprintCallable|BlueprintEvent)
	void LowerSandMound(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void OnBossDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FactionBoss_SandWorm(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void DamagedRetreat__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

