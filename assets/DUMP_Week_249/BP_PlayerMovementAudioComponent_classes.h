// BlueprintGeneratedClass BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C
struct UBP_PlayerMovementAudioComponent_C : UPlayerMovementAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct FRuntimeFloatCurve DummyCustomCurve; 
	struct TArray<struct FFBoneAudioSetting> BoneSettings; 
	struct FName BackpackAttachPoint; 
	bool Debug; 
	struct TArray<struct FDebugFloatHistory> DebugFloatHistory; 
	struct FVector2D DebugWindowSize; 
	struct TArray<struct FVector> DebugOffsetsFromPlayer; 
	struct TArray<struct FFBoneAudio> BoneAudio; 
	bool BoneAudioEnabled; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; 
	struct FName FocusedItemAttachPoint; 
	struct FName WorldMovementAttachPoint; 
	struct UFMODEvent* WorldMovementEvent; 
	struct UFMODEvent* EnterWaterEvent; 
	struct UFMODEvent* EnterLavaEvent; 
	struct UFMODEvent* ExitWaterEvent; 
	struct UFMODEvent* StartSwimmingEvent; 
	struct UFMODEvent* StopSwimmingEvent; 
	int32_t ChestSlotIndex; 
	int32_t PantsSlotIndex; 
	struct USkeletalMeshComponent* FPMesh; 
	struct UFMODAudioComponent* WorldMovementComponent; 
	struct UFMODEvent* BackpackFootstepEvent; 
	struct FItemAudioDataRowHandle BackpackRowHandle; 
	struct FItemAudioDataRowHandle UtilityRowHandle; 
	struct UFMODEvent* FocusedItemFootstepEvent; 
	bool PlayerOnGround; 
	bool PlayerSwimming; 
	bool PlayerInWater; 
	bool PlayerIsOnMount; 
	bool InUpdateRange; 
	int32_t BackpackSlotIndex; 
	float UpdateDistanceThresholdSquared; 
	bool IsLocalPlayer; 
	float MaxWaterDepth; 
	enum class EPlayerFoliageFMODParam CurrentFoliageType; 
	enum class EPhysicalSurface CurrentWaterType; 
	float LastEnteredWaterTime; 
	float MinTimeInWaterToPlaySwimSound; 
	float SwimmingChangedCooldownLength; 
	float SwimmingChangedCooldownEndTime; 
	struct FVector WaterImmersionTraceStartOffset; 
	struct FArmourSetsEnum ChestArmourType; 
	struct FArmourSetsEnum LegsArmourType; 
	float FoliageTraceRadiusBuffer; 
	float FoliageCheckFrequencyLocalPlayer; 
	float FoliageCheckFrequencyOtherPlayer; 
	struct FTimerHandle ClothCollisionUpdateTimerHandle; 
	float HighestClothHit; 
	struct UFMODAudioComponent* ClothHitAudioComponent; 
	struct UFMODEvent* ClothCollisionFMODEvent; 
	struct FVector2D ClothHitRange; 
	float ClothCollisionUpdateFrequency; 
	struct UFMODEvent* LadderFootFMODEvent; 
	struct UFMODEvent* LadderHandFMODEvent; 
	float LastLadderPosition; 
	struct UBP_LadderClimbAudioDataBase_C* LadderNotifyData; 
	struct FName FocusedItemFootstepAnimSoundName; 
	struct UFMODEvent* PlayerEnterSaddleSound; 
	enum class EWaterStoredFMODParam Water Stored Value; 

	void Play Mount Saddle Audio(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetEnterWaterEvent(enum class EPhysicalSurface Surface, struct UFMODEvent*& Event); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnSeatChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnEquipmentUpdated(struct UInventory* Inventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFootstep(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance); // (Public|BlueprintCallable|BlueprintEvent)
	void OnPlayerDeath(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateClothCollision(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnClothCollision(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DistanceCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFoliage(); // (Public|BlueprintCallable|BlueprintEvent)
	void PerspectiveChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void UnderwaterChanged(bool Underwater); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseBoneAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWaterImmersion(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBoneParameters(float DeltaSeconds); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayLandInWaterSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWorldMovementParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartWorldMovementComponent(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFocusedItemUpdated(struct AIcarusItem* FocusedItem); // (Public|BlueprintCallable|BlueprintEvent)
	void TryPlayFocusedItemFootstep(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryPlayBackpackFootstep(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBackpackAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnUtilityItemChanged(struct FItemsStaticRowHandle Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnBackpackItemChanged(struct FItemsStaticRowHandle Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldLadderNotifyPlay(struct FFLadderClimbAnimNotifyData NotifyData, float position, float LastPosition, bool IsReversePlay, bool& ShouldPlay); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetSocketForAppendage(enum class EAudioPlayerAppendageType Appendage, struct FName& SocketName); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TraceForLadder(struct USkeletalMeshComponent* Mesh, enum class EAudioPlayerAppendageType Appendage, bool& LadderFound, enum class EPhysicalSurface& Surface); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayLadderClimbNotify(struct FFLadderClimbAnimNotifyData Data); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForFakeAnimNotifies(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlayerIsMoving(bool& IsMoving); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetClothHitComponentPlayState(bool ShouldPlay); // (Private|BlueprintCallable|BlueprintEvent)
	void SetUnderwater(bool Underwater); // (Private|BlueprintCallable|BlueprintEvent)
	void GetFoliageEnumFromTagContainer(struct FGameplayTagContainer TagContainer, enum class EPlayerFoliageFMODParam& FoliageType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateGroundState(bool& GroundStateChanged); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SwimmingChanged(bool Swimming); // (Public|BlueprintCallable|BlueprintEvent)
	void TraceForWaterImmersion(bool& InWater, float& Immersion, enum class EPhysicalSurface& WaterType); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TraceForFoliage(enum class EPlayerFoliageFMODParam& FoliageType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_UtilityRowHandle(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_BackpackRowHandle(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LegsArmourType(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ChestArmourType(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerMovementAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

