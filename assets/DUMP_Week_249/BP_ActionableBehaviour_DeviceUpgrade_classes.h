// BlueprintGeneratedClass BP_ActionableBehaviour_DeviceUpgrade.BP_ActionableBehaviour_DeviceUpgrade_C
struct UBP_ActionableBehaviour_DeviceUpgrade_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FInventoryIDEnum InventoryID; 

	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_DeviceUpgrade(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

