// BlueprintGeneratedClass BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C
struct UBP_ActionableBehaviour_Pyromancy_Flame_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_InspectionToolSpawner_C* HeldActor; 
	struct TArray<struct UObject*> StoredMontages; 
	bool IsChanneling; 
	struct FHitResult FlammableHit; 
	struct UFlammableInstance* FlammableInstance; 
	bool DebugInstance; 
	bool ChannelIgnite; 
	bool CastIgnite; 

	void TryExtinguish(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryIgnite(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

