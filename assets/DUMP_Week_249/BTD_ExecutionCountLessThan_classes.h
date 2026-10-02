// BlueprintGeneratedClass BTD_ExecutionCountLessThan.BTD_ExecutionCountLessThan_C
struct UBTD_ExecutionCountLessThan_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t NumExecutions; 
	int32_t TargetNumber; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecutionStart(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTD_ExecutionCountLessThan(int32_t EntryPoint); // (Final|UbergraphFunction)
};

