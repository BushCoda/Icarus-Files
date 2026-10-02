// BlueprintGeneratedClass BP_ActionableBehaviour_Fertalize_Crops.BP_ActionableBehaviour_Fertalize_Crops_C
struct UBP_ActionableBehaviour_Fertalize_Crops_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; 
	struct USurvivalCharacterState* SurvivalStateRef; 
	struct UFMODEvent* FMODEvent_Eat; 
	struct UFMODEvent* FMODEvent_Drink; 
	struct ABP_Crop_Plot_Base_C* As BP Crop Plot Base; 

	void PlayConsumeSound(struct AIcarusMountCharacter* Mount, struct UFMODEvent* Sound); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Fertalize_Crops(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

