// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_Creature_Scanner.BP_ActionableBehaviour_Scanner_Creature_Scanner_C
struct UBP_ActionableBehaviour_Scanner_Creature_Scanner_C : UBP_ActionableBehaviour_Scanner_DeepOre_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float HitTraceDistance; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	void GetScannedActor(struct AActor*& HitActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority ResultPriorityCallback(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Creature_Scanner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

