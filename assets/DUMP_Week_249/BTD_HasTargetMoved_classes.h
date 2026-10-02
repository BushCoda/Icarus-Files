// BlueprintGeneratedClass BTD_HasTargetMoved.BTD_HasTargetMoved_C
struct UBTD_HasTargetMoved_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TriggerDistance; 
	struct FBlackboardKeySelector TargetActorOrLocation; 
	struct FVector StartingLocation; 

	void GetTargetLocation(struct FVector& Out); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionStart(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTD_HasTargetMoved(int32_t EntryPoint); // (Final|UbergraphFunction)
};

