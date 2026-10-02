// BlueprintGeneratedClass BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C
struct UBTS_AbortMoveIfStuck_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TimeoutTime; 
	float CMPerSecondTimeoutThreshold; 
	float TimeSpentBelowThreshold; 
	bool CurrentlyPlayingMontage; 
	bool ShouldClearKeyOnAbort; 
	struct FBlackboardKeySelector KeyToClearOnAbort; 
	struct FVector LastPawnLocation; 
	struct FName LastFailedMoveTargetLocationKey; 
	struct AAIController* AIControllerRef; 
	struct AIcarusNPCGOAPCharacter* GOAPCharacterRef; 
	struct FVector PreviousMovementTarget; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_AbortMoveIfStuck(int32_t EntryPoint); // (Final|UbergraphFunction)
};

