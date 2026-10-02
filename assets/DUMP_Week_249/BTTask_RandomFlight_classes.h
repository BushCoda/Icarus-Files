// BlueprintGeneratedClass BTTask_RandomFlight.BTTask_RandomFlight_C
struct UBTTask_RandomFlight_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float FlightDuration; 
	float FlightDurationRandomDeviation; 
	struct APawn* PawnRef; 
	int32_t TargetDir; 
	struct FVector LastMoveInput; 
	struct FTimerHandle CompleteFlightTimer; 
	struct FTimerHandle NewDirTimer; 
	float DesiredTurnSpeed; 
	struct ACharacter* CharacterRef; 
	float ObstacleAvoidanceTraceDistance; 
	bool IsPathAheadBlocked; 
	float PathBlockDistance; 
	int32_t LastTurnDirection; 
	float TargetHeight; 
	float TargetHeightRandomDeviation; 
	float DesiredHeight; 
	float HeightBias; 
	float MaxAscendDescendRate; 
	float CurrentZInput; 
	bool FirstDirection; 
	float MovementBlendInDuration; 
	float MovementBlendOutDuration; 
	struct TArray<int32_t> ValidFlightDirections; 
	float MinTurnMovementDuration; 
	float MaxTurnMovementDuration; 
	float MinForwardMovementDuration; 
	float MaxForwardMovementDuration; 
	float RandomFlightDuration; 
	float MaxTurnRate; 
	float MaxRotationPerTurn; 
	struct FRotator TurnStartingRotation; 
	struct FBlackboardKeySelector TargetFlightHeight; 

	void BlendInOutInput(struct FVector MoveInput, struct FVector& BlendedInput); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetNextMoveInput(float DeltaSeconds, struct FVector& DesiredMoveInput); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetApproximateTerrainDistance(float& Distance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCurrentTerrainDistance(float& Distance); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTurnRate(float& TurnRate, int32_t& Direction); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void FinishFlight(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void NewDir(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ForceNewDir(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_RandomFlight(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

