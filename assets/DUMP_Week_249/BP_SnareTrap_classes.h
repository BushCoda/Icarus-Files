// BlueprintGeneratedClass BP_SnareTrap.BP_SnareTrap_C
struct ABP_SnareTrap_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* BaitLocation; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* CableEndPoint; 
	struct UCableComponent* Cable; 
	struct UStaticMeshComponent* SM_Bait; 
	struct UStaticMeshComponent* SM_Sticks; 
	struct USphereComponent* TriggerCollider; 
	float AnimTimeline_Reset_StickAngle_F9E6348249E647B8410AF695672B4BC0; 
	enum class ETimelineDirection AnimTimeline_Reset__Direction_F9E6348249E647B8410AF695672B4BC0; 
	struct UTimelineComponent* AnimTimeline_Reset; 
	float AnimTimeline_Trap_StickAngle_6A7C2757411096865DFAB2A47CB8DE49; 
	enum class ETimelineDirection AnimTimeline_Trap__Direction_6A7C2757411096865DFAB2A47CB8DE49; 
	struct UTimelineComponent* AnimTimeline_Trap; 
	struct ACharacter* TrappedCharacter; 
	float TrapRange; 
	struct ACharacter* LastTrappedCharacter; 
	struct TMap<struct FStatsEnum, int32_t> StatsToApplyWhileTrapped; 
	struct TArray<struct FTamesRowHandle> BaitedTameRows; 
	bool DoesWantDynamicSpawn; 
	struct FTimerHandle DynamicSpawnTimer; 
	bool IsDynamicSpawnBlocked; 
	float StickAnimOffset; 
	bool IsBaited; 

	struct FVector GetBaitLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct ACharacter*> GetCurrentlyTrappedCharacters(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool WantsDynamicSpawn(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct ACharacter* GetCurrentlyTrappedCharacter(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTrapOrigin(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetTrapRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_IsBaited(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupTrappedCharacter(struct ACharacter* TrappedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseTrappedCharacter(struct ACharacter* TrappedCharacter); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetBaitItem(struct FItemData& BaitItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetCurrentlyBaited(bool CurrentlyBaited); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetBestBoneToAttachTo(struct ACharacter* Character, struct FName& BestBoneOrSocket); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TrapCharacter(struct ACharacter* TrappedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TrappedCharacter(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void AnimTimeline_Trap__FinishedFunc(); // (BlueprintEvent)
	void AnimTimeline_Trap__UpdateFunc(); // (BlueprintEvent)
	void AnimTimeline_Reset__FinishedFunc(); // (BlueprintEvent)
	void AnimTimeline_Reset__UpdateFunc(); // (BlueprintEvent)
	void RemoveTrappedCharacter(struct ACharacter* Character); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_SnareTrap_TriggerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void SetCurrentlyTrappedCharacter(struct ACharacter* Character); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void RequestDynamicSpawn(); // (BlueprintCallable|BlueprintEvent)
	void ClearDynamicSpawnCooldown(); // (BlueprintCallable|BlueprintEvent)
	void NotifyDynamicCharacterSpawned(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void StartStopAnimTimeline(bool Start); // (BlueprintCallable|BlueprintEvent)
	void DelayedRevealSnareRope(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SnareTrap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

