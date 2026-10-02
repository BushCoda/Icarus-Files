// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_DeepOre_Advanced.BP_ActionableBehaviour_Scanner_DeepOre_Advanced_C
struct UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C : UBP_ActionableBehaviour_Scanner_DeepOre_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FOreDepositRowHandle SelectedOreType; 
	struct TArray<struct FOreDepositRowHandle> OreTypes; 

	void CacheOreTypes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<struct AActor*> ExtraNearbyFilter(struct TArray<struct AActor*>& InNearbyActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CycleOreType(bool Forward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_DeepOre_Advanced(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

