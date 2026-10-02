// BlueprintGeneratedClass BP_ActionableBehaviour_SledgeHammer_Repair_Hold.BP_ActionableBehaviour_SledgeHammer_Repair_Hold_C
struct UBP_ActionableBehaviour_SledgeHammer_Repair_Hold_C : UBP_ActionableBehaviour_Hold_BuildingRepairTool_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool HasRepairStat; 
	struct UFMODEvent* NoActionSound; 
	struct FName HeadAttachSociketName; 

	void Is Max Durability(struct AActor* HitActor, bool& AtMax); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void EndHold(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_SledgeHammer_Repair_Hold(int32_t EntryPoint); // (Final|UbergraphFunction)
};

