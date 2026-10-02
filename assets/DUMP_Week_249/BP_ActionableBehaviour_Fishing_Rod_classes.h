// BlueprintGeneratedClass BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C
struct UBP_ActionableBehaviour_Fishing_Rod_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool ButtonPressed; 
	bool TimerStarted; 
	bool WaterEventFired; 
	bool LureInWater; 
	bool CompletedMinigame; 
	bool IsInspectingFish; 
	bool IsFiring; 
	float MinigameReactionTimer; 
	float ThrowOffset; 
	float DrawPower; 
	float MinFishingTimer; 
	float MaxFishingTimer; 
	float WaterRaytraceTimer; 
	float GroundRaytraceDistance; 
	float LastFireDrawPower; 
	struct FRangedWeaponData RangedWeaponData; 
	struct FTimerHandle MinigameTimer; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	struct ABP_SkeletalItem_Fishing_Rod_C* Rod; 
	struct UUMG_UserInterface_C* UserInterface; 
	struct FMulticastInlineDelegate InspectionStateChanged; 
	float DefaultDistance; 
	float DistanceIncrement; 
	bool HasSetDefault; 
	bool HasSetupIncrement; 
	struct FVector TargetLureLocation; 
	struct FMulticastInlineDelegate FishAdded; 
	float LureMovementDetectRadius; 
	bool IsFishInGoldenZone; 
	bool CanCancelInspect; 

	void Grant Experience(struct FItemData Fish); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldPlayReelingAnimation(bool& ShouldPlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetStatAdjustedDurability(int32_t DurabilityLoss, int32_t& RodDurabilityLoss, int32_t& LureDurabilityLoss); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupIncrementDistance(float Current Progress); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupFishMovement(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckMovementValidity(bool& IsValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FishMovement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetIfLureIsTooClose(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReelLogic(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFishLost(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFishCaught(); // (Public|BlueprintCallable|BlueprintEvent)
	void FishingMinigameLogic(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FishingTimerEnd(); // (Public|BlueprintCallable|BlueprintEvent)
	void FishingTimerStart(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsFullyCasted(bool& FullyCasted); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFishingRod(struct ABP_SkeletalItem_Fishing_Rod_C*& BP Skeletal Item Fishing Rod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Completed Reaction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetIfLureIsTooFar(); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetIfLureOnRod(bool& IsLureOffRod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ToggleCatchFishUI(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsLureInWater(bool& InWater); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCurrentDrawPercentage(float& Percentage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoThrow(float Power); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Server_Reel(bool Reel); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Server_QuickReel(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Reel(bool Reel); // (BlueprintCallable|BlueprintEvent)
	void Server_GrantFish(struct AIcarusPlayerCharacterSurvival* Fisher); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Reset Timer(); // (BlueprintCallable|BlueprintEvent)
	void CheckForWater(); // (BlueprintCallable|BlueprintEvent)
	void Multicast_PostThrow(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Server_RequestThrow(float Power); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void FishToInventory(); // (BlueprintCallable|BlueprintEvent)
	void Multicast_InspectFish(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ResetMinigame(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ResetOnLureDistance(); // (BlueprintCallable|BlueprintEvent)
	void Server_SetLureProgress(float CurrentProgress, bool IsInGoldenZone); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnActionAborted(enum class EActionableEventType EventType); // (Event|Public|BlueprintEvent)
	void SetUpdateProgress(); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void Server_ResetTargetLocation(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_DeliverFish(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multicast_FinishInspect(); // (BlueprintCallable|BlueprintEvent)
	void EndInspectingMontage(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Rod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishAdded__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void InspectionStateChanged__DelegateSignature(bool IsInspecting); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

