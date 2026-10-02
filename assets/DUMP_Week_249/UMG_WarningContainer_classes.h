// WidgetBlueprintGeneratedClass UMG_WarningContainer.UMG_WarningContainer_C
struct UUMG_WarningContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BlinkAll; 
	struct UUMG_Warning_C* Exposure; 
	struct UUMG_Warning_C* Food; 
	struct UUMG_Warning_C* Health; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UUMG_Warning_C* Oxgen; 
	struct UUMG_Warning_C* RepairWarning; 
	struct UUMG_Warning_C* ShearingWarning; 
	struct UUMG_Warning_C* UpgradeWarning; 
	struct UUMG_Warning_C* Water; 
	float WarnThreshold_Water; 
	float WarnThreshold_Health; 
	float WarnThreshold_Food; 
	float WarnThreshold_Oxygen; 
	float WarnThreshold_Exposure; 
	struct FFMODEventInstance Sound; 
	struct UPlayerCharacterState* PlayerCharacterState; 

	void OnShearingWarningUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnUpgradeWarningUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRepairWarningUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetAudioPlayState(bool ShouldPlay); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void OnAliveChanged(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnExposureUpdated(float NewExposure); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHealthUpdated(struct UActorState* ActorState, float NewHealth); // (Public|BlueprintCallable|BlueprintEvent)
	void OnOxygenUpdated(int32_t NewOxygen); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFoodUpdated(int32_t NewFood); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnWaterUpdated(int32_t NewWater); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_WarningContainer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

