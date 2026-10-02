// BlueprintGeneratedClass BTS_SetCurrentMountAction.BTS_SetCurrentMountAction_C
struct UBTS_SetCurrentMountAction_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EMountAction MountAction; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecutionStart(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SetCurrentMountAction(int32_t EntryPoint); // (Final|UbergraphFunction)
};

