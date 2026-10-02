// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C
struct UUMG_OnProspectNotification_DynamicMissionComplete_C : UUMG_OnProspectNotificationBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* NotificationTitle; 
	struct UBorder* RewardBorder; 
	struct UVerticalBox* RewardsBox; 
	struct UTextBlock* rewardstext; 

	void SetMissionReward(int32_t Credits, int32_t Experience); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete(int32_t EntryPoint); // (Final|UbergraphFunction)
};

