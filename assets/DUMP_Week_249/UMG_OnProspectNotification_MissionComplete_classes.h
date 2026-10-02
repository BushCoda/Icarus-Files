// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C
struct UUMG_OnProspectNotification_MissionComplete_C : UUMG_OnProspectNotificationBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* MissionNameBorder; 
	struct UTextBlock* MissionNameText; 
	struct UTextBlock* NotificationTitle; 
	struct UBorder* RewardBorder; 
	struct UVerticalBox* RewardsBox; 
	struct UTextBlock* rewardstext; 

	void GetMissionDropName(struct FFactionMissionsRowHandle& MissionRowHandle, struct FText& MissionDropName); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetMissionReward(struct FFactionMissionsRowHandle Mission, bool IsCurrentMission, struct TArray<struct FMetaResource>& ResourcesReceived); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

