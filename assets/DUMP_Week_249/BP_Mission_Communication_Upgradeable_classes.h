// BlueprintGeneratedClass BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C
struct ABP_Mission_Communication_Upgradeable_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight8; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight7; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight6; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight5; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight1; 
	struct UIcarusStaticMeshComponent* GH; 
	struct USkeletalMeshComponent* T4_SKMesh; 
	struct UStaticMeshComponent* T4; 
	struct USkeletalMeshComponent* T2_SKMesh; 
	struct UIcarusStaticMeshComponent* T3; 
	struct UIcarusStaticMeshComponent* T2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct USceneComponent* Scene_Lights; 
	struct USkeletalMeshComponent* GH_SKMesh; 
	struct UWidgetComponent* GreatHunt; 
	struct UWidgetComponent* WorldBoss_4; 
	struct UWidgetComponent* WorldBoss_5; 
	struct UWidgetComponent* WorldBoss_2; 
	struct UWidgetComponent* WorldBoss_3; 
	struct UWidgetComponent* WorldBoss_6; 
	struct UFMODAudioComponent* CommunicatorAudio; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UCameraComponent* Camera; 
	int32_t Seed; 
	struct TArray<struct FDynamicQuestsRowHandle> AvailableQuests; 
	struct TArray<enum class EDynamicQuestDifficulty> Difficulty; 
	enum class EOnProspectAvailability UpgradeStatus; 
	struct FMulticastInlineDelegate UpgradeStatusUpdated; 
	bool EnergyIsActive; 
	struct TArray<struct UWidgetComponent*> ScreenWidgets; 
	int32_t FillerBosses; 
	struct TArray<struct FFBossRespawnData> BossData; 
	struct FMulticastInlineDelegate BossSpawnsUpdated; 
	struct TArray<struct ABP_GH_DenEntrance_C*> CachedDens; 

	void TriggerBossEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_BossData(); // (BlueprintCallable|BlueprintEvent)
	void PrepareBossData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupInWorldBossWidget(struct UWidgetComponent* Target, struct FWorldBossesRowHandle Boss); // (Public|BlueprintCallable|BlueprintEvent)
	void GetBossInfo(struct FWorldBossesRowHandle Boss, struct FGreatHuntCreatureInfoRowHandle CreatureInfo, bool& bFound, int32_t& Spawned, int32_t& Total, float& TimeUntillRespawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SelectWidgetsForProspect(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_RadioInteract(struct AActor* Interactor); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCommunicatorUpgradeAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_UpgradeStatus(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDynamicQuests(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSeed(); // (Public|BlueprintCallable|BlueprintEvent)
	void RollQuest(int32_t Seed, struct FDynamicQuestsRowHandle& Quest); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopulateQuests(int32_t Seed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void SelectQuest(struct FDynamicQuestsRowHandle Quest); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnEnergyStateUpdated(bool IsActive); // (BlueprintEvent)
	void BossUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_Communication_Upgradeable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BossSpawnsUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void UpgradeStatusUpdated__DelegateSignature(enum class EOnProspectAvailability UpgradeStatus); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

