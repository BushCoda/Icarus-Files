// BlueprintGeneratedClass BP_Actionable_Behaviour_ContainerEmpty.BP_Actionable_Behaviour_ContainerEmpty_C
struct UBP_Actionable_Behaviour_ContainerEmpty_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	int32_t UnitsConsumedOnWater; 
	int32_t CurrentEffectiveness; 
	int32_t CurrentPriority; 
	struct FAlterationsEnum CurrentAlterationForModifier; 

	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Behaviour_ContainerEmpty(int32_t EntryPoint); // (Final|UbergraphFunction)
};

