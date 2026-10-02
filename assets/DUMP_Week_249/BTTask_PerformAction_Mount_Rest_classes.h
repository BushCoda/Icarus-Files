// BlueprintGeneratedClass BTTask_PerformAction_Mount_Rest.BTTask_PerformAction_Mount_Rest_C
struct UBTTask_PerformAction_Mount_Rest_C : UBTTask_PerformAction_Mount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool EnableOvernightSleeping; 
	float SleepDuration; 
	float SleepDurationDeviation; 
	struct FVector2D NighttimeStartStop; 
	float TimeStartedSleeping; 
	struct FVector2D RandomisedNighttimeStartStop; 

	void IsItNighttime(bool& Yes); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_Mount_Rest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

