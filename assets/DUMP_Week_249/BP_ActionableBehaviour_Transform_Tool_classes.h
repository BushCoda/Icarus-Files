// BlueprintGeneratedClass BP_ActionableBehaviour_Transform_Tool.BP_ActionableBehaviour_Transform_Tool_C
struct UBP_ActionableBehaviour_Transform_Tool_C : UBP_ActionableBehaviour_Base_C {
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
	void Server_UpdateActorTransform(struct AActor* TraceHitActor, struct FTransform NewTransform); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void RequestDynamicWidget(struct AIcarusPlayerControllerSurvival* Target, struct AActor* LinkedActor); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multi_UpdateActorTransform(struct AActor* Target, struct FTransform& NewTransform); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Transform_Tool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

