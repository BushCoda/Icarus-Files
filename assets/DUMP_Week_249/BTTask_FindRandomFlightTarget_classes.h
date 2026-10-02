// BlueprintGeneratedClass BTTask_FindRandomFlightTarget.BTTask_FindRandomFlightTarget_C
struct UBTTask_FindRandomFlightTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetLocationKey; 
	bool PreferBehind; 
	float MaxTravelDistance; 
	float DesiredTargetHeight; 
	struct APawn* PawnRef; 
	struct FName OptionalTargetHeightKeyName; 

	void FindFreeFlightTarget(struct AActor* Target, struct FVector& TargetLocation, bool& WasSuccessful); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AdjustForDesiredTargetHeight(struct FVector RandomTargetDirection, struct FVector& AdjustedDirection); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindRandomFlightTarget(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

