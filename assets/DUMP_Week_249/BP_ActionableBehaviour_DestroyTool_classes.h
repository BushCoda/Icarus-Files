// BlueprintGeneratedClass BP_ActionableBehaviour_DestroyTool.BP_ActionableBehaviour_DestroyTool_C
struct UBP_ActionableBehaviour_DestroyTool_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_InspectionToolSpawner_C* HeldActor; 
	struct AActor* TraceHitActor; 
	enum class EComponentMobility PreviousMobility; 

	void DestroyAllSpawns(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_DestroyTool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

