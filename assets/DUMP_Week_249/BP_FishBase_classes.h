// BlueprintGeneratedClass BP_FishBase.BP_FishBase_C
struct ABP_FishBase_C : AFishActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UExperienceComponent* Experience; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; 
	float CorrectionUpdateTime; 
	struct FMulticastInlineDelegate FishDetached; 
	bool FishSetupInit; 
	struct FFishSetup FishSetupData_1; 
	struct UFMODAudioComponent* MovementAudio; 
	bool FishIsAggressive; 
	struct UFMODEvent* FMODEvent_Pickup; 

	void TryPlayPickupSound(struct AIcarusPlayerCharacter* PickingUpPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetMovementAudioPlayState(bool ShouldPlay); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryPlayAttackSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFishSetup(struct FFishSetup& FishSetup); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PickUp(struct AIcarusPlayerCharacterSurvival* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DetachFromLure(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckFishManager(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRepLocation(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void BPOnRep_Dead(); // (Event|Public|BlueprintEvent)
	void BPOnRep_Scale(); // (Event|Public|BlueprintEvent)
	void BPOnRep_AttachActor(); // (Event|Public|BlueprintEvent)
	void KillFish(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void AttackPlayer(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintEvent)
	void MULTI_PlayAttackFX(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void OnRep_AwarenessTarget(); // (Event|Public|BlueprintEvent)
	void MULTI_PlayPickupFX(struct AIcarusPlayerCharacter* PickingUpPlayer); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FishBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishDetached__DelegateSignature(enum class EFishDetatchReason Reason); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

