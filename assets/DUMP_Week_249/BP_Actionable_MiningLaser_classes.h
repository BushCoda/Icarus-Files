// BlueprintGeneratedClass BP_Actionable_MiningLaser.BP_Actionable_MiningLaser_C
struct UBP_Actionable_MiningLaser_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_SkeletalItem_Mining_Laser_C* SKItem; 
	bool DoFire; 
	struct UFMODAudioComponent* FMOD_Audio_Component; 
	struct UFMODEvent* WeaponAudio; 
	int32_t FillablePerTick; 
	int32_t TracesPerSecond; 
	struct FHitResult LastTrace; 
	float Heat; 
	char ReplicatedHeat; 
	float SecondsToReachMaxHeat; 
	float SecondsToCooldown; 
	bool IsOverheated; 
	struct FTimerHandle DelayedStart; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCurrentHeat(float Heat); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCurrentHeat(float& Heat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnHitEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTargetPosition(struct FVector& HitLocation, struct FVector& CrosshairEndPoint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFirePositionAndRotation(struct FBallisticData BallisticData, struct FVector& FirePosition, struct FRotator& FireRotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyMiningDamage(struct FHitResult TraceHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	bool PerformMiningTrace(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessFillableAndDurability(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanFire(bool& CanFire); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TickTimer(); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void StopFire(); // (BlueprintCallable|BlueprintEvent)
	void PlayCameraShake(bool Initial); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void MULTI_OnOverheated(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void DelayStartMining(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_MiningLaser(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

