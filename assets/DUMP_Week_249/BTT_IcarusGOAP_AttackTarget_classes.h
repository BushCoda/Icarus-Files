// BlueprintGeneratedClass BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C
struct UBTT_IcarusGOAP_AttackTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentTarget; 
	struct AActor* TargetActor; 
	struct FName MontageSection; 
	struct ABP_IcarusNPCGOAPCharacter_C* OwnerNPC; 
	struct FName NotifyName; 
	struct TSoftObjectPtr<UAnimMontage> MontageRef; 
	struct AAIController* OwnerController; 
	struct APawn* OwnerPawn; 
	float DamageRadius; 
	struct FGOAPActionsRowHandle GOAPAttackAction; 
	struct FName MontageSectionOverride; 
	struct FName DamageSourceSocketOverride; 

	struct FVector GetBestAttackSourceLocation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PlayHitEffects(struct AActor* HitActor, struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalcLaunchAmount(struct FVector Dir, struct FVector& OutForce); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void DoDamage(struct AController* Instigator, struct AActor* Causer, bool LaunchSelf); // (BlueprintCallable|BlueprintEvent)
	void AnimNotifyFired(struct UAnimMontage* Montage, struct FName NotifyName); // (BlueprintCallable|BlueprintEvent)
	void DoLaunch(bool IncludeSelf); // (BlueprintCallable|BlueprintEvent)
	void OnMontage(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_AttackTarget(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

