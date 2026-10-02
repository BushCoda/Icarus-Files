// BlueprintGeneratedClass BP_ActionableBehaviour_Bow_Block.BP_ActionableBehaviour_Bow_Block_C
struct UBP_ActionableBehaviour_Bow_Block_C : UBP_ActionableBehaviour_Shield_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void StopBlocking(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Bow_Block(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

