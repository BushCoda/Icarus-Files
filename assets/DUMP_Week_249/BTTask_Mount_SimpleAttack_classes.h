// BlueprintGeneratedClass BTTask_Mount_SimpleAttack.BTTask_Mount_SimpleAttack_C
struct UBTTask_Mount_SimpleAttack_C : UBTTask_PerformAction_Mount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool UseSweepDamage; 
	struct FVector LastAttackLocation; 
	struct TArray<struct AActor*> HitActors; 
	struct FVector ChargeStartLocation; 
	struct FBlackboardKeySelector TargetActor; 

	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void SweepDamage(bool& WasBlockingAttack); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_Mount_SimpleAttack(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

