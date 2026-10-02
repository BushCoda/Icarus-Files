// BlueprintGeneratedClass BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C
struct UBP_ActionableBehaviour_Hold_BuildingRepairTool_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* OwningActor; 
	struct AActor* BehaviourOwner; 
	float TraceDistance; 
	struct ABP_Building_Base_C* LastBuildingHit; 
	struct TArray<struct UObject*> StoredMontages; 
	struct FString HitAnimNotifyName; 
	struct FName HeadAttachSocket; 
	struct UFMODEvent* HitSound; 
	enum class EPhysicalSurface LastSurfaceHit; 
	bool ShowOutline; 

	void EndHold(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyRepair(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProcessDurability(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlaySwing(struct AIcarusPlayerCharacter* TargetPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHitSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetHitFromViewTraces(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool DoTrace(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanHold(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnLoaded_2B8B2B624CE5F97DAE6892B789BB7CFF(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void CompleteHold(bool Success); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void DoSwing(enum class EActionableEventType ActionType); // (BlueprintCallable|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ActionTimeout(); // (BlueprintCallable|BlueprintEvent)
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_EndHold(bool Success, struct AActor* ActorEndedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void Client_OnInstantRepaired(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void Server_SetLastSurfaceHit(enum class EPhysicalSurface Surface); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void SetSurfaceFromViewTrace(struct UPhysicalMaterial* HitPhysMat); // (BlueprintCallable|BlueprintEvent)
	void CancelSwing(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold_BuildingRepairTool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

