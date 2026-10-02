// BlueprintGeneratedClass BP_Thumper.BP_Thumper_C
struct ABP_Thumper_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Thumper; 
	struct UFMODAudioComponent* FMODAudio_WarningLoop; 
	struct UPostProcessComponent* PostProcess; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	float Timeline_Pulse_Thickness_65643E4944BDF75F473635B6BB2F4B52; 
	float Timeline_Pulse_Opacity_65643E4944BDF75F473635B6BB2F4B52; 
	float Timeline_Pulse_Radius_65643E4944BDF75F473635B6BB2F4B52; 
	enum class ETimelineDirection Timeline_Pulse__Direction_65643E4944BDF75F473635B6BB2F4B52; 
	struct UTimelineComponent* Timeline_Pulse; 
	struct FTimerHandle ThumperUpdateHandle; 
	float RegenerationRadius; 
	struct TArray<struct AActor*> SpawnedEnemies; 
	float EnemySpawnRadius; 
	struct TArray<struct FAISetupEnum> SpawnPool; 
	struct UCurveFloat* ResourceCountDifficultyCurve; 
	float SpawnDifficultyFactor; 
	int32_t SpawnedLandSharkCount; 
	int32_t ElapsedSpawnCount; 
	struct UCurveFloat* EventDurationDifficultyCurve; 
	int32_t CooldownWaveCount; 
	bool IsThumperActive; 
	int32_t ReplicatedProgressPercent; 
	int32_t ReplicatedMissingResourceCount; 
	struct ABP_MapSearchArea_Custom_C* MapSearchArea; 
	int32_t ReplicatedNodesToRegenCount; 
	int32_t NumSpawnsSinceLastLandShark; 
	int32_t DamageSinceLastActivation; 
	int32_t DeactivationDamageThreshold; 
	float EventCompletionPercent; 
	float EventElapsedTime; 
	struct FOrchestrationEventsEnum Event to Check; 
	struct FTimerHandle DifficultyUpdateTimer; 
	struct FEpicCreaturesRowHandle EpicToSpawn; 
	int32_t NumWormsToSpawn; 

	void GetTooltipRenderLocation(struct FHitResult InteractableHit, struct FVector& WorldLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetTooltipClassOverride(struct TSoftClassPtr<UObject>& ClassOverride); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnThumperStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetTotalEventTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetRemainingTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsInCaveOrWater(struct FText& Message, bool& Placeable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickUpdateSpawnerDifficulty(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedActorDeath(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshState(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CompleteThumperEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsThumperActive(); // (BlueprintCallable|BlueprintEvent)
	void SetupSpawnerDifficulty(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNewAIToSpawn(struct FVector AtLocation, struct FAISetupEnum& AI_ToSpawn, struct FEpicCreaturesRowHandle& EpicCreature, struct FTransform& SpawnTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Timeline_Pulse__FinishedFunc(); // (BlueprintEvent)
	void Timeline_Pulse__UpdateFunc(); // (BlueprintEvent)
	void Timeline_Pulse__Audio Pulse__EventFunc(); // (BlueprintEvent)
	void OnNotifyEnd_E61ED4AE4E49330D4A3034A4C65BEFC5(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_E61ED4AE4E49330D4A3034A4C65BEFC5(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_E61ED4AE4E49330D4A3034A4C65BEFC5(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_E61ED4AE4E49330D4A3034A4C65BEFC5(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_E61ED4AE4E49330D4A3034A4C65BEFC5(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateThumperProgress(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_ThumperCompleteEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void TrySpawnHostiles(); // (BlueprintCallable|BlueprintEvent)
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void OnCurtainRaised(); // (BlueprintCallable|BlueprintEvent)
	void RadiusPulseEffect(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OnActorDamaged(struct FIcarusDamagePacket DamagePacket); // (BlueprintCallable|BlueprintEvent)
	void MULTI_DamagedEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SetWarningBeepEnabled(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void UpdateActiveStateNextNetworkTick(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Thumper(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

