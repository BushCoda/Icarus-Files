// BlueprintGeneratedClass BP_ActionableBehaviour_Milk_Cow.BP_ActionableBehaviour_Milk_Cow_C
struct UBP_ActionableBehaviour_Milk_Cow_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float HitTraceDistance; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	struct FAlterationsEnum MilkAlteration; 

	enum class EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ManualAction(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Milk_Cow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

