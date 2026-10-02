// BlueprintGeneratedClass BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C
struct UBP_ActionableBehaviour_DropGItem_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void DropItem(enum class EActionableEventType ActionType); // (BlueprintCallable|BlueprintEvent)
	void CancelDrop(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_DropGItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

