// BlueprintGeneratedClass BP_NPC_Ape_Character.BP_NPC_Ape_Character_C
struct ABP_NPC_Ape_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* NS_Regen; 
	struct UNiagaraComponent* NS_Enraged; 
	struct USphereComponent* CriticalArea_HeadResistL; 
	struct USphereComponent* CriticalArea_HeadResistR; 
	struct USphereComponent* CriticalArea_Stomach_Resist; 
	struct USphereComponent* CriticalArea_Fist_R_Resist; 
	struct USphereComponent* CriticalArea_Fist_L_Resist; 
	struct USphereComponent* BodyBlocker2; 
	struct USphereComponent* BodyBlocker; 
	struct USphereComponent* ArmRBlocker; 
	struct USphereComponent* ArmLBlocker; 
	struct USphereComponent* TailBlocker2; 
	struct USphereComponent* TailBlocker4; 
	struct USphereComponent* CriticalArea_HeadResist; 
	struct USphereComponent* CriticalArea_EyeR; 
	struct USphereComponent* CriticalArea_EyeL; 
	struct USphereComponent* CriticalArea_DateHole; 
	struct USphereComponent* CriticalArea_Throat; 
	struct UBP_JumpLerpComponent_C* BP_JumpLerpComponent; 
	struct UStaticMeshComponent* LogMesh; 
	struct UStaticMeshComponent* RockMesh; 
	struct USphereComponent* TreeColliderSphere; 
	struct UInteractableComponent* Interactable; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct UInventoryComponent* Inventory; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	float TimelineRegenFX_Regen_056C3E8B48E14AFBB7564ABDF27440E8; 
	enum class ETimelineDirection TimelineRegenFX__Direction_056C3E8B48E14AFBB7564ABDF27440E8; 
	struct UTimelineComponent* TimelineRegenFX; 
	float Enrage_EnrageActivate_15F76CBA40B85F0AF4C56DB7EE806D5D; 
	enum class ETimelineDirection Enrage__Direction_15F76CBA40B85F0AF4C56DB7EE806D5D; 
	struct UTimelineComponent* Enrage; 
	float LogLerp_NewTrack_0_5289F6C14A5E89FAA6FBE3B5AA84F543; 
	enum class ETimelineDirection LogLerp__Direction_5289F6C14A5E89FAA6FBE3B5AA84F543; 
	struct UTimelineComponent* LogLerp; 
	enum class EGOAPProperty FastestActiveState; 
	struct FName AttackTypeStateKey; 
	bool IsCarryingLog; 
	struct FName IsCarryingLogKey; 
	struct FName ClosestLogKey; 
	struct FTransform LogTransform; 
	struct TArray<struct TSoftObjectPtr<UFMODEvent>> HarvestAudio; 
	bool IsHangingInTree; 
	struct FName IsInTreeKey; 
	struct TSoftObjectPtr<UFMODEvent> BranchBreakAudio; 
	bool IsOnTrunk; 
	struct FName IsOnTrunkKey; 
	bool ShouldMusicStart; 
	struct FName ShouldMusicStartKey; 
	struct UCurveFloat* AudioThreatDistanceModifier; 
	struct UMaterialInstanceDynamic* ApeDynamicMaterial; 
	struct UNiagaraComponent* LeftHandNS; 
	struct UNiagaraComponent* RightHandNS; 
	struct UNiagaraSystem* Trail System Template; 
	bool Enraged; 
	bool HasGeneratedRewards; 

	enum class EMusicConditionCombatState GetCombatMusicConditionOverride(struct AIcarusPlayerCharacter* TargetPlayer, float Threat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetThreatToPlayer(struct AIcarusPlayerCharacter* TargetPlayer); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsDeadApeOnGround(bool& OnGround, struct FVector& GroundLoc, float& FallRate); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ShouldMusicStart(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsOnTrunk(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsFlying(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsHangingInTree(); // (BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddInitialScaledStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowThrowLogMesh(bool Show); // (Public|BlueprintCallable|BlueprintEvent)
	void FinishLogLerp(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateLogLerp(float Alpha); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowLogMesh(bool Show, bool ShowDestroy); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsCarryingLog(); // (BlueprintCallable|BlueprintEvent)
	void ShowRockMesh(bool Show); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t NPCResistDamage(struct FIcarusDamagePacket& DamagePacket); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LogLerp__FinishedFunc(); // (BlueprintEvent)
	void LogLerp__UpdateFunc(); // (BlueprintEvent)
	void Enrage__FinishedFunc(); // (BlueprintEvent)
	void Enrage__UpdateFunc(); // (BlueprintEvent)
	void TimelineRegenFX__FinishedFunc(); // (BlueprintEvent)
	void TimelineRegenFX__UpdateFunc(); // (BlueprintEvent)
	void OnLoaded_2FD46EBD40421ADB9685BCB94EE2189C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_9DC183FF45BFB632856AA293329AE988(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_NPC_Ape_Character_TreeColiderSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void StartLogLerp(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_NPC_Ape_Character_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void UpdateCreatureGrowthStats(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Multi_PlayLogBreakAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multi_ShowRockMesh(bool Show); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multi_StartEnrageEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multi_StopEnrageEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multi_RegEffects(bool enable); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void PlayDeathMontageAndCleanUp(); // (BlueprintCallable|BlueprintEvent)
	void FallAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void OnDeaded(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ShowHideProxyMesh(bool bShow, int32_t MeshIndex); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Ape_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

