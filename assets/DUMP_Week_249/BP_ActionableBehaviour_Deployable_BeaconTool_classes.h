// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C
struct UBP_ActionableBehaviour_Deployable_BeaconTool_C : UBP_ActionableBehaviour_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FItemData BeaconItemData; 

	void BlueprintDeploy(struct FTransform DeployTransform, struct AActor* FoundationActor, struct FItemData ItemData, int32_t VarientIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CustomDeploymentCheck(struct AActor* HitActor, bool& ValidPlacement, struct FText& Reason); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeploy(struct ADeployable* SpawnedDeployable); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool(int32_t EntryPoint); // (Final|UbergraphFunction)
};

