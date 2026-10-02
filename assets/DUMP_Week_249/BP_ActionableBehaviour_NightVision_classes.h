// BlueprintGeneratedClass BP_ActionableBehaviour_NightVision.BP_ActionableBehaviour_NightVision_C
struct UBP_ActionableBehaviour_NightVision_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_SKItem_NightVision_C* SKItem; 

	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_NightVision(int32_t EntryPoint); // (Final|UbergraphFunction)
};

