// BlueprintGeneratedClass BP_Basic_Turret.BP_Basic_Turret_C
struct ABP_Basic_Turret_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* RangeDisplay; 
	struct UChildActorComponent* PerceptionProxy; 
	struct USceneComponent* NPCTarget; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Top_Light_Basic; 
	struct UStaticMeshComponent* PlacementSegment; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* Bracket; 
	struct USceneComponent* YawPivot; 
	struct USceneComponent* PitchPivot; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UCameraComponent* Camera; 
	struct UArrowComponent* Arrow; 
	struct USceneComponent* Muzzle; 
	struct UStaticMeshComponent* Gun; 
	float RecoilTimeline_Alpha_B71F448C40E368FA50AEA1A459CC20E5; 
	enum class ETimelineDirection RecoilTimeline__Direction_B71F448C40E368FA50AEA1A459CC20E5; 
	struct UTimelineComponent* RecoilTimeline; 
	struct UNiagaraSystem* FireParticle; 
	struct TArray<struct AActor*> TargetsInRange; 
	struct AActor* SelectedTarget; 
	bool HasAmmo; 
	bool HasTarget; 
	bool HasLock; 
	bool NoTargetsInRange; 
	bool HasPower; 
	struct FRotator CurrentTurrentRotation; 
	struct FRotator TargetTurrentRotation; 
	int32_t ShotsToFire; 
	float MuzzleFireCoolDownTime; 
	float MuzzleIndividualShotCoolDown; 
	int32_t InventoryAmmoAmount; 
	struct TArray<struct FItemsStaticRowHandle> ValidAmmoTypes; 
	struct UMaterialInstanceDynamic* PlacementSegmentMaterial; 
	struct FTurretRowHandle TURRET_ROW_HANDLE; 
	float MAX_MUZZLE_PITCH; 
	float MIN_MUZZLE_PITCH; 
	float MAX_MUZZLE_YAW; 
	float MUZZLE_MOVE_SPEED; 
	float MUZZLE_RETURN_SPEED; 
	float PERMIT_BEGIN_FIRE_ANGLE; 
	int32_t MUZZLE_BURST_FIRE_SHOTS; 
	float MUZZLE_TARGET_CHECK_TIME; 
	float MUZZLE_COOL_DOWN_PERIOD; 
	float MUZZLE_BURST_FIRE_RATE; 
	float IdleTimer; 
	struct ABP_ProxyPerceptionPawn_C* PerceptionProxyPawn; 
	struct FLinearColor LastAmmoCounterColour; 
	float LastAmmoCounterPercent; 
	float MaxDeployedYaw; 
	float MinDeployedYaw; 
	float MaxDeployedPitch; 
	float MinDeployedPitch; 
	struct UDestructibleMesh* DM_Gun; 
	struct TArray<struct FAIRelationshipsRowHandle> HostileRelationships; 

	bool StripItemTags(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex, struct FGameplayTagContainer& ItemTags); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsSlotValidForItem(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ApplyTurretStats(struct FItemsStaticRowHandle Ammo, struct FItemData& ItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TargetCheck(struct AActor* SelfTargetable, struct AActor* OtherActorTargetable, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecalcRotationExtents(); // (Public|BlueprintCallable|BlueprintEvent)
	void ClampMinMaxRotation(struct FRotator InRotation, struct FRotator& OutRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialisePerceptionProxy(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFiredProjectileHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAmmoCounter(); // (Public|BlueprintCallable|BlueprintEvent)
	void EnergyNetworkStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayLockOnTargetAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Rotate(struct USceneComponent* Component, bool YawRotation, float DeltaTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Rebind Turret Stats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RandomlyAdjustForPerProjectileAccuracy(struct FVector2D InAccuracy, struct FRotator InRotator, struct FRotator& ModRotator); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetValidAmmoTypes(struct TArray<struct FItemsStaticRowHandle>& ValidAmmoTypes); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoType(struct FItemsStaticRowHandle& ItemType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_InventoryAmmoAmount(); // (BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoCount(int32_t& OutAmmoCount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Client_UpdateTurretRotation(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasLock(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_HasTarget(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_HasAmmo(); // (BlueprintCallable|BlueprintEvent)
	void ConditionalRepTargetRotation(struct FRotator NewRotation); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateStatusLight(); // (Public|BlueprintCallable|BlueprintEvent)
	void ConditionalFire(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void GetHasLock(bool& Lock); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateHasAmmo(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetPercentActorHealth(struct AActor* Actor, int32_t& HealthPercentOut); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMaxAngleToTarget(struct AActor* InTarget, float& MaxAngleOut); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ApplySpread(struct FRotator BaseDirection, struct FRotator& OutSpreadDirection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ConsumeAmmo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsTargetableFromMaxRotation(bool Location); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FireAtTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAvailableTargets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateShotTimers(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTurretRotation(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void RecoilTimeline__FinishedFunc(); // (BlueprintEvent)
	void RecoilTimeline__UpdateFunc(); // (BlueprintEvent)
	void OnLoaded_CF4FB6C84552BC45838031BE1D8C4A99(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PickNewTarget(); // (BlueprintCallable|BlueprintEvent)
	void Multicast_PlayEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void DoUpdate(); // (BlueprintCallable|BlueprintEvent)
	void OnDoRebind(); // (BlueprintCallable|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void MultiPlayAddAmmoAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void Event Actor Broken(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Basic_Turret(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

