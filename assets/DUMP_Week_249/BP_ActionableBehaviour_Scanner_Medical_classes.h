// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_Medical.BP_ActionableBehaviour_Scanner_Medical_C
struct UBP_ActionableBehaviour_Scanner_Medical_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float HitTraceDistance; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	void GetScannedActor(struct AActor*& HitActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Medical(int32_t EntryPoint); // (Final|UbergraphFunction)
};

