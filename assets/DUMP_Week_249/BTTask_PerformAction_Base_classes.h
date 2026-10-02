// BlueprintGeneratedClass BTTask_PerformAction_Base.BTTask_PerformAction_Base_C
struct UBTTask_PerformAction_Base_C : UBTTask_PlayMontage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName ActionNotifyName; 
	struct TMap<struct FStatsEnum, int32_t> ActionStats; 
	struct UIcarusStatContainer* OwnerStatContainer; 
	bool FinishOnActionExecution; 

	void GetActionStats(struct TMap<struct FStatsEnum, int32_t>& ActionStats); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnMontageNotifyBegin(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnMontageComplete(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void OnMontageInterrupted(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

