// BlueprintGeneratedClass BTS_SweepChargeDamage.BTS_SweepChargeDamage_C
struct UBTS_SweepChargeDamage_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector ChargeStartLocation; 
	bool Active; 
	struct TMap<struct AActor*, float> HitActors; 
	struct FVector LastAttackLocation; 
	struct FName ChargeAbortSection; 
	struct FName ChargeLoopSection; 
	struct AIcarusCharacter* IcarusCharacter; 
	float SecondaryHitCooldown; 
	struct TArray<struct FHitResult> LastCachedHits; 

	void RemoveStaleHitActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetChargeDamageRadius(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldStopCharging(bool& ShouldStop); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TryAttack(struct APawn* ControlledPawn, bool& WasBlockingAttack); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SweepChargeDamage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

