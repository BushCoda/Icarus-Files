// BlueprintGeneratedClass BP_ActionableBehaviour_OpenBag.BP_ActionableBehaviour_OpenBag_C
struct UBP_ActionableBehaviour_OpenBag_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float HitTraceDistance; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_OpenBag(int32_t EntryPoint); // (Final|UbergraphFunction)
};

