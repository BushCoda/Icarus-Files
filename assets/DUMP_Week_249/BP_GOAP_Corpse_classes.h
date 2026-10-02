// BlueprintGeneratedClass BP_GOAP_Corpse.BP_GOAP_Corpse_C
struct ABP_GOAP_Corpse_C : AIcarusGOAPCorpseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara_Flies; 
	struct UInventoryComponent* Inventory; 
	struct FPoseSnapshot RagdollPose; 
	bool HasBeenSkinned; 
	bool CurrentlyBeingHarvested; 
	struct FItemsStaticRowHandle CorpseItem; 
	struct FName OnBackSimulateBelowBone; 
	struct FVector BackPositionOffset; 
	struct FRotator BackRotationOffset; 
	struct USkeletalMesh* BonesMesh; 
	struct USkeletalMesh* CarcassMesh; 
	bool IsSkeleton; 
	struct UPhysicsAsset* TPCarryPhysicsAsset; 
	struct FTimerHandle SettleTimer; 
	struct FPoseSnapshot NetworkedPose; 
	float MaxCorpseSettleTime; 
	struct FVector HackyFixForClients; 
	struct UPhysicsAsset* FPCarryPhysicsAsset; 
	struct UAnimSequence* TPCarryAnim_CHA; 
	struct UFMODEvent* HarvestBonesSound; 
	bool IsBabyAnimal; 
	struct TArray<struct FItemData> HittableRewards; 
	struct TArray<int32_t> RewardCount; 
	struct TArray<int32_t> MaxCount; 
	struct AIcarusPlayerCharacter* LastInteractPlayer; 
	struct FTimerHandle AttachProjectilesTimer; 
	struct TArray<struct FItemData> Projectiles; 
	bool EmptyCorpseWhenFinishedEating; 
	struct FTimerHandle SettleTickTimer; 
	struct UMaterialInstance* CarcassGfurMatOverride; 
	struct FTransform SlotableTransformRelativeOffset; 
	struct UNiagaraComponent* ExoticParticleSystem; 
	bool PopulatedContents; 
	int32_t CosmeticSkinIndex; 
	struct FItemRewardsRowHandle BlackmarketRewards; 
	bool AddDecayingCorpseModifier; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetSpawnTransformOffset(struct FTransform& OutTransformOffset); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ConvertBones&LeatherToCarbonPaste(struct TArray<struct FItemData>& Items, struct TArray<struct FItemData>& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddSessionFlagItems(struct TArray<struct FItemData>& Items); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCosmeticMaterials(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CosmeticSkinIndex(); // (BlueprintCallable|BlueprintEvent)
	void TryInitExoticFX(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetNextUID(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryGenerateChilledAlteration(struct UIcarusStatContainer* StatContainer, struct FItemData ReturnValue1, struct FItemData& ItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool AttachActorToSelf(struct AActor* AttachedActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayHarvestBonesEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayPickedUpSound(struct AIcarusPlayerCharacter* PickingUpPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSkeletalMeshCarryPhysics(struct USkeletalMeshComponent* SkeletalMeshComponent); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyRottingModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnCorpseFocused(bool IsThirdPerson); // (Public|BlueprintCallable|BlueprintEvent)
	struct FPoseSnapshot GetRagdollPose(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsSkeletonUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBonesFullyHarvestedSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HarvestBones(struct AIcarusPlayerController* PlayerController, float DamagePercent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EmptyCorpse(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_HackyFixForClients(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_NetworkedPose(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsSkeleton(); // (BlueprintCallable|BlueprintEvent)
	void GenerateItem(struct FItemTemplateRowHandle Item, int32_t Amount, struct FItemData& OutputItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickupCorpse(struct ABP_IcarusPlayerCharacterSurvival_C* TargetPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Populate Contents(float Multiplier, struct AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSkinnedStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasBeenSkinned(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ForceSettle(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void BeginDelayedSettle(); // (BlueprintCallable|BlueprintEvent)
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void HideInstigator(); // (Event|Public|BlueprintEvent)
	void OnItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupCorpseSettleTime(float NewMaxCorpseSettleTime); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayPickupFX(struct AIcarusPlayerCharacter* PickingUpPlayer); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void InitialiseAttachedActors(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnInstigatorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void AttachedActorPickedUp(struct AIcarusItem* Item); // (BlueprintCallable|BlueprintEvent)
	void SettleTick(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_GOAP_Corpse(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

