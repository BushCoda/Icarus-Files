// BlueprintGeneratedClass BP_Great_Hunt_Device.BP_Great_Hunt_Device_C
struct ABP_Great_Hunt_Device_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* AudioLoop; 
	struct UWidgetComponent* WorldBoss_4; 
	struct UWidgetComponent* WorldBoss_5; 
	struct UWidgetComponent* WorldBoss_2; 
	struct UWidgetComponent* WorldBoss_3; 
	struct UWidgetComponent* GreatHunt; 
	struct UWidgetComponent* WorldBoss_6; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct USceneComponent* Scene_Lights; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct FDialogueRowHandle Dialogue; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct FMulticastInlineDelegate BossSpawnsUpdated; 
	struct TArray<struct UWidgetComponent*> ScreenWidgets; 
	struct TArray<struct FFBossRespawnData> BossData; 
	int32_t CurrentIndex; 
	int32_t FillerBosses; 

	void SelectWidgetsForProspect(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupInWorldBossWidget(struct UWidgetComponent* Target, struct FWorldBossesRowHandle Boss); // (Public|BlueprintCallable|BlueprintEvent)
	void GrantBestiaryProgress(struct FProcessingItem Item); // (Public|BlueprintCallable|BlueprintEvent)
	void PrepareBossData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_BossData(); // (BlueprintCallable|BlueprintEvent)
	void GetBossInfo(struct FWorldBossesRowHandle Boss, bool& bFound, int32_t& Spawned, int32_t& Total, float& TimeUntillRespawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Radio_Interact(struct AActor* Interactor); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BossUpdate(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Great_Hunt_Device(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BossSpawnsUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

