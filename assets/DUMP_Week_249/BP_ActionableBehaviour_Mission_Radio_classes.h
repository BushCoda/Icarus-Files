// BlueprintGeneratedClass BP_ActionableBehaviour_Mission_Radio.BP_ActionableBehaviour_Mission_Radio_C
struct UBP_ActionableBehaviour_Mission_Radio_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	void GetClosestMissionDevice(struct ABP_Mission_Communication_Upgradeable_C*& ClosestDevice); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Mission_Radio(int32_t EntryPoint); // (Final|UbergraphFunction)
};

