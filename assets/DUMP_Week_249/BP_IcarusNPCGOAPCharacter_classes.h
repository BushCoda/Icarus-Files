// BlueprintGeneratedClass BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C
struct ABP_IcarusNPCGOAPCharacter_C : AIcarusNPCGOAPCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_AI_DPSTest_C* BP_AI_DPSTest; 
	struct USphereComponent* CriticalArea_Head; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USphereComponent* HeadBlocker; 
	struct UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AI; 
	struct UCapsuleComponent* ClothAffector; 
	struct UHighlightableComponent* Highlightable; 
	struct UAudioContextCreatureComponent* AudioContext; 
	struct UAudioOcclusionCharacterComponent* AudioOcclusionCharacter; 
	struct UBP_Flammable_Actor_C* Flammable; 
	struct UAIVocalisationComponent* AIVocalisation; 
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; 
	struct UBP_CreatureAudioComponent_C* CreatureAudio; 
	struct UExperienceComponent* Experience; 
	struct UBP_SwimmingComponent_C* BP_SwimmingComponent; 
	struct USplineComponent* PredictionSpline; 
	struct UBoxComponent* PredictionBox; 
	struct USceneComponent* Scene; 
	struct UWidgetComponent* GOAP_Debugger; 
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> DeathAnimations; 
	struct AController* CachedController; 
	struct AActor* CurrentTarget_1; 
	struct FTimerHandle ReplicateVarsTimer; 
	bool DebugWidgetSetup; 
	struct TArray<struct FVector> CurrentPath; 
	struct FVector MeshLocation; 
	struct FRotator MeshRotation; 
	struct FVector DeathVelocity_1; 
	struct FMulticastInlineDelegate CheckAIDistance; 
	enum class EStealthAttackType WasStealthDamage; 
	struct FMulticastInlineDelegate OnActionNotify; 
	struct FVector SpawnLocation; 
	enum class EAIAudioState CurrentAudioState; 
	struct FTimerHandle TalentHighlightUpdateTick; 
	float LastJumpTime; 
	struct FTimerHandle RetryJumpTimer; 
	enum class EStealthAttackType LastHitStealthState; 
	bool ShouldDestroyIfStuckOnSpawn; 
	float ReplicatedBlackboardVarsUpdateTime; 
	struct FName HeadSocket; 
	bool DebugJumpTrace; 
	bool GenerateAimAssistTargetComponent; 
	struct FName CurrentTargetKey; 
	bool LookAtNearbyPerceivedTargets; 
	struct AActor* LookAtTargetActor; 
	float NearbyLookAtDotLimit; 
	float NearbyLookAtDotLimit_CurrentTarget; 
	float OverrideAimAssistCollisionRadius; 
	bool ShouldRagdollOnDeath; 
	int32_t ExoticInfusedCreatureType; 
	struct USkeletalMesh* TempMesh; 
	struct UDamageType* LastDamageType; 
	struct FMulticastInlineDelegate RagdollCollision; 
	struct FMulticastInlineDelegate ActorDeath; 
	float FirstHit; 
	struct TArray<struct FIcarusStatReplicated> Custom Stats; 
	bool ShouldReplaceWithCorpseOnSettle; 
	struct FVector InitialRelativeMeshLocation; 
	struct FVector PreSettleMeshLocation; 
	struct FTransform LocalRagdollTransform; 
	float NextJumpDelay; 

	struct FCriticalHitAreasEnum GetDefaultCriticalArea(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool& Return, struct TArray<struct FFCHCollisionStruct>& Intersections); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCHBounds(bool& Return, struct UBoxComponent*& Box); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PredictMovement(float Time, bool& Return); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetPrediction(bool& Return); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTargetHealth(bool& Return, float& Health); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ValidateSkeleton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRagdolledMeshTransform(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCarcassStats(struct TArray<struct FIcarusStatReplicated>& Custom Stats); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_ExoticInfusedCreatureType(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyExoticInfusedFX(); // (Public|BlueprintCallable|BlueprintEvent)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SpawnLootBag(struct FTransform AtTransform, struct AIcarusActor* LootBagClassOverride); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct AActor* GetCurrentAnimationTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void FindNewLookAtTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupController(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReattachProjectilesToCorpse(struct AActor* CorpseActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideFromShelterCapture(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionMontageNotify(struct FName NotifyName); // (Public|BlueprintCallable|BlueprintEvent)
	bool UpdateMovementState(enum class EMovementState NewState); // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnCharacterSlidingUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TryJumpOverObstacle(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTalentHighlight(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentAudioState(); // (BlueprintCallable|BlueprintEvent)
	void UpdateAudioState(enum class EAIAudioState NewState); // (Public|BlueprintCallable|BlueprintEvent)
	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage*& OutMontage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnStatContainerUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CheckNearbyPlayers(); // (Public|BlueprintCallable|BlueprintEvent)
	void GatherIntersectionss(struct AActor* Actor, struct TArray<struct FFCHCollisionStruct>& HitIntersections); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnGOAPActionSet(struct UIcarusGOAPAction* Action); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AIPredictionUpdate(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_3553718246F29B8ED504B3939080E771(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_46D0D8B742825800C0F3B8B239D00770(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void MULTI_MontageJumpToSection(struct FName Section, struct UAnimMontage* Montage); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_StopMontage(struct UAnimMontage* Montage, float InBlendOutTime); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnCharacterStanceUpdated(enum class EGOAPCharacterStance PreviousStance, enum class EGOAPCharacterStance NewStance); // (Event|Public|BlueprintEvent)
	void MULTI_PlayGOAPActionMontage(struct FGOAPActionsRowHandle Action, struct FName Section, bool ClientsOnly); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlayMontage(struct TSoftObjectPtr<UAnimMontage> Montage, struct FName Section, bool ClientsOnly); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnRagdollSettled(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // (Event|Public|BlueprintEvent)
	void MULTI_OnHurt(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayVocalisation(enum class EAIVocalisationType VocalisationType); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnHitEffects(struct FTransform SpawnTransform, enum class EPhysicalSurface HitSurface, struct AActor* HitActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisibilityBasedAnimTickOption(); // (Event|Protected|BlueprintEvent)
	void OnVocalisationAnimNotify(enum class EAIVocalisationType VocalisationType); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection); // (Public|BlueprintCallable|BlueprintEvent)
	void SetRagdollEnabled(bool bShouldRagdoll); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void Do_Multicast_ActorDeath(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ActorDeath__DelegateSignature(struct AActor* Actor); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void RagdollCollision__DelegateSignature(struct FHitResult Hit); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnActionNotify__DelegateSignature(struct UAnimMontage* Montage, struct FName NotifyName); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CheckAIDistance__DelegateSignature(struct ABP_IcarusNPCGOAPCharacter_C* AI); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

