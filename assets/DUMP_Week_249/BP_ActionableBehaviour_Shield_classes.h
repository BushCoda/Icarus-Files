// BlueprintGeneratedClass BP_ActionableBehaviour_Shield.BP_ActionableBehaviour_Shield_C
struct UBP_ActionableBehaviour_Shield_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Owning Player; 

	void Setup(struct AActor* Owning Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void StopBlocking(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Shield(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

