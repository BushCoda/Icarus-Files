// BlueprintGeneratedClass BP_Gravestone.BP_Gravestone_C
struct ABP_Gravestone_C : AGravestoneBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionComponent_GraveStone_C* BP_UIProjectionComponent_GraveStoneProxyMesh; 
	struct UStaticMeshComponent* GraveStoneProxyMesh; 
	struct UAudioContextComponent* AudioContext; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_UIProjectionComponent_GraveStone_C* BP_UIProjectionComponent_GraveStone; 
	struct UVocalisationComponent* Vocalisation; 
	struct FName UserID; 
	bool IsMale; 
	struct FMulticastInlineDelegate PlayerStateUpdated; 
	struct FTimerHandle SettleTimer; 
	float MaxCorpseSettleTime; 
	struct FPoseSnapshot RagdollPose; 
	struct FPoseSnapshot NetworkedPose; 
	bool NeedsArmourUpdate; 
	struct UHighlightableComponent* HighlightableComponent; 
	struct FGravestoneData TempData; 
	struct FVocalisationsRowHandle DeathVocalisation; 
	struct UFMODEvent* RagdollAudioEvent; 
	float RagdollAudioUpdateFrequency; 
	struct FTimerHandle RagdollAudioUpdateTimer; 
	struct FName RagdollAudioSocket; 
	struct UFMODAudioComponent* RagdollAudioComponent; 
	float RagdollAudioLastCollisionTime; 
	float RagdollAudioNoCollisionTimeoutLength; 
	struct TSoftObjectPtr<USkeletalMesh> TPMeshSoftReference; 
	struct FVector CachedBagPosition; 
	bool StartedRagDollNoAnchor; 

	void GetTooltipClassOverride(struct TSoftClassPtr<UObject>& ClassOverride); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTooltipRenderLocation(struct FHitResult InteractableHit, struct FVector& WorldLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetGravestoneData(struct FGravestoneData& Data); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoPoseSnapshot(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetGravestoneInventory(struct UInventory*& Inventory); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void StopRagdollAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRagdollAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayRagdollAudio(struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Scream(); // (Public|BlueprintCallable|BlueprintEvent)
	void ServerHandleAssignedPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void HandleAssignedPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnReloadAssignedPlayerKill(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateHighlightMeshes(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerArmour(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FPoseSnapshot GetRagdollPose(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_NetworkedPose(); // (BlueprintCallable|BlueprintEvent)
	void BeginRagdoll(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Apply Cosmetics(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AttachProjectiles(struct USceneComponent* CharacterRoot, struct AActor* ProjectileOwnerToIgnore); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitMeshes(struct AIcarusPlayerCharacter* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPlayerGravestone(struct ABP_IcarusPlayerControllerSurvival_C* PlayerController, struct FPoseSnapshot DeathPose, struct FVector DeathVelocity); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interaction_Revive(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void Interaction_Loot(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void Revive(float HealthRestoredPercent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AttachProjectilesNextFrame(struct USceneComponent* CharacterRoot, struct AActor* ProjectileOwnerToIgnore); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ForceSettle(); // (BlueprintCallable|BlueprintEvent)
	void BeginDelayedSettle(); // (BlueprintCallable|BlueprintEvent)
	void HideInstigator(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnRep_GravestoneData(); // (Event|Protected|BlueprintEvent)
	void OnRep_AssignedPlayerCharacterID(); // (Event|Protected|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__SkeletalMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void OnRep_PlayerArmour(); // (Event|Protected|BlueprintEvent)
	void TerrainAnchorChanged(); // (BlueprintCallable|BlueprintEvent)
	void NetMulticast_Unstuck(struct FVector NewLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void HaveTerrainAnchorPositionBag(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Gravestone(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PlayerStateUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

