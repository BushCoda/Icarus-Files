// BlueprintGeneratedClass BP_FactionBoss_Base.BP_FactionBoss_Base_C
struct ABP_FactionBoss_Base_C : AIcarusPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* MainMesh; 
	struct UBP_Flammable_FactionBoss_C* BP_Flammable_FactionBoss; 
	struct UExperienceComponent* Experience; 
	struct UBP_HitableBehaviour_Tree_C* BehaviourTree; 
	struct AActor* TargetActor; 
	struct FName TargetActorBlackboardKey; 
	bool CanAttackTargets; 
	bool IsBoss; 
	struct AActor* LastDamageCauser; 
	struct AController* LastDamageInstigator; 
	struct FMulticastInlineDelegate OnTransformUpdated; 

	void NotifyBossDeath(); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanHitDamageTarget(struct AActor* TargetActor, struct FHitResult InHit); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (Public|BlueprintCallable|BlueprintEvent)
	void OnMontageStarted(struct UAnimMontage* Montage); // (Public|BlueprintCallable|BlueprintEvent)
	void PreventAttacksForActiveMontage(bool AttacksEnabled); // (Public|BlueprintCallable|BlueprintEvent)
	void ScaleAndApplyStats(struct TMap<struct FStatsEnum, int32_t> StatList); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ScaleStatForPlayerCount(struct FStatsEnum Stat, int32_t UnscaledValue, int32_t PlayerCount, int32_t& ScaledValue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseStatsAndTags(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateReplicatedBlackboardValues(); // (Public|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetAnimatedMeshComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void MULTI_SetActorLocation(struct FVector NewLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SetDamageEnabled(bool bEnabled); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnBossDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FactionBoss_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnTransformUpdated__DelegateSignature(struct FTransform NewTransform); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

