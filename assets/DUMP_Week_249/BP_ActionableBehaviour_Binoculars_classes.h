// BlueprintGeneratedClass BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C
struct UBP_ActionableBehaviour_Binoculars_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 

	void SetOverlay(bool InVisibility); // (Public|BlueprintCallable|BlueprintEvent)
	void SetFOV(float FOV); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Binoculars(int32_t EntryPoint); // (Final|UbergraphFunction)
};

