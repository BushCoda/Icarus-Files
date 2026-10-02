// BlueprintGeneratedClass BP_SettlementNPCController.BP_SettlementNPCController_C
struct ABP_SettlementNPCController_C : AIcarusNPCController {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetDynamicSubtreesToInject(struct TMap<struct FGameplayTag, struct UBehaviorTree*>& DynamicSubtrees); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementNPCController(int32_t EntryPoint); // (Final|UbergraphFunction)
};

