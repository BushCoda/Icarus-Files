// BlueprintGeneratedClass BP_ActionableBehaviour_Sledgehammer_Std.BP_ActionableBehaviour_Sledgehammer_Std_C
struct UBP_ActionableBehaviour_Sledgehammer_Std_C : UBP_ActionableBehaviour_Sledgehammer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusActor* RepairingActor; 
	struct ABP_Building_Base_C* LastBuildingHit; 
	bool HasRepairStat; 
	struct FName HeadAttachSocket; 
	enum class EPhysicalSurface LastSurfaceHit; 
	struct UFMODEvent* NoActionSound; 
	bool DidStrike; 
	bool DidRepair; 

	void PlayNoActionSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoTrace(struct FHitResult& OutHit, bool& Sucess); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanRepair(bool& TraceSuccess, bool& RepairSuccess); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Sledgehammer_Std(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

