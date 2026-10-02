// BlueprintGeneratedClass BTS_SweepBoneDamage.BTS_SweepBoneDamage_C
struct UBTS_SweepBoneDamage_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Active; 
	struct TMap<struct AActor*, float> HitActors; 
	struct TArray<struct FVector> LastTraceLocations; 
	struct AIcarusCharacter* IcarusCharacter; 
	float SecondaryHitCooldown; 
	bool DebugTrace; 
	struct TArray<struct FName> TraceSockets; 
	bool DealDamageDuringMontages; 
	float DamageRadius; 
	float SocketVelocityThreshold; 
	struct TArray<struct FPositionHistory> SocketHistory; 
	struct TArray<bool> SocketMovementState; 
	struct FBlackboardKeySelector LastHitActorBlackboardKey; 
	bool LaunchTargetSideways; 
	bool ToppleTrees; 
	float TreeToppleDistance; 
	bool IgnoreFriendlyFire; 

	void RecordLastHitActor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveStaleHitActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetDamageRadius(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldStopCharging(bool& ShouldStop); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TryAttack(struct APawn* ControlledPawn, bool& WasBlockingAttack); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SweepBoneDamage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

