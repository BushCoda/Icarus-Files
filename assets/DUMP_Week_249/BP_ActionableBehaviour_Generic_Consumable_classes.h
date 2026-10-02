// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Consumable.BP_ActionableBehaviour_Generic_Consumable_C
struct UBP_ActionableBehaviour_Generic_Consumable_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 

	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Consumable(int32_t EntryPoint); // (Final|UbergraphFunction)
};

