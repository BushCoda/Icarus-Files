// BlueprintGeneratedClass BTTask_SimpleAttack.BTTask_SimpleAttack_C
struct UBTTask_SimpleAttack_C : UBTTask_PerformAction_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActor; 
	bool UseSweepDamage; 
	struct FVector LastAttackLocation; 
	struct FVector ChargeStartLocation; 
	struct TMap<struct AActor*, float> HitActors; 
	float MinZDistance; 
	float MinTimeBetweenSuccessiveHits; 

	void PostDamageDealt(struct AActor* TargetActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SweepDamage(bool& WasBlockingAttack); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SimpleAttack(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

