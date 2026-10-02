// BlueprintGeneratedClass BP_Actionable_Behaviour_ToggleElectric.BP_Actionable_Behaviour_ToggleElectric_C
struct UBP_Actionable_Behaviour_ToggleElectric_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 

	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Behaviour_ToggleElectric(int32_t EntryPoint); // (Final|UbergraphFunction)
};

