// BlueprintGeneratedClass BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C
struct UBP_ActionableBehaviour_Hold_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	float HoldTimeStamp; 
	struct FMulticastInlineDelegate HoldCompleted; 
	float HoldLength; 
	bool AutoEnd; 
	int32_t ModifierUID; 
	struct FModifierStatesRowHandle HoldModifier; 
	struct AActor* HoldingOnActor; 

	struct USkeletalMeshComponent* GetAnimatingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetHoldLength(float& HeldTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemovePlayerModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddPlayerModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetHoldProgress(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool IsHoldFinished(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetPlayer(struct AIcarusPlayerCharacter*& OwningPlayer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsHolding(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void EndHold(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	void StartHold(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetHeldData(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetRemainingTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetHeldTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanHold(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_EndHold(bool Success, struct AActor* ActorEndedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void CompleteHold(bool Success); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnActionAborted(enum class EActionableEventType EventType); // (Event|Public|BlueprintEvent)
	void PerformActionFromMenu(struct AActor* InvokingActor); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void HoldCompleted__DelegateSignature(bool Success); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

