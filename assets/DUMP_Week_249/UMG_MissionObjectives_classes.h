// WidgetBlueprintGeneratedClass UMG_MissionObjectives.UMG_MissionObjectives_C
struct UUMG_MissionObjectives_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UWidgetAnimation* QuestCompleteSwap; 
	struct UBackgroundBlur* BackgroundBlur_QuestList; 
	struct UImage* InfoDivider; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UInvalidationBox* InvalidationBox_3; 
	struct UVerticalBox* MainLayout; 
	struct UBorder* MissionBox; 
	struct UVerticalBox* MissionObjectives; 
	struct URichTextBlock* MissionOverview; 
	struct USizeBox* MissionState; 
	struct UBorder* OperationBox; 
	struct UTextBlock* OperationTitle; 
	struct UTextBlock* ProspectTitle; 
	struct UVerticalBox* QuestInfo; 
	struct UVerticalBox* QuestList; 
	struct UTextBlock* QuestName; 
	struct URetainerBox* QuestNameRetainer; 
	struct UVerticalBox* QuestVertbox; 
	struct UTextBlock* TextBlock_KeybindClose; 
	struct UOverlay* UserToggle; 
	struct FText MissionName; 
	bool bHasSetupQuest; 
	struct FText QuestText; 
	bool bDelay; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct UUMG_QuestObjectiveEntry_C* RecievingObjectives; 
	struct FProspectListRowHandle Prospect; 
	struct FText DropName; 
	struct AQuest* CachedQuest; 
	struct TMap<struct FQuestsEnum, struct UUMG_MissionObjective_C*> Quest Enum; 
	struct FSessionFlagsRowHandle MissionFailed; 
	struct FFactionMissionsRowHandle Faction Mission; 
	struct TMap<struct AQuest*, struct UUMG_MissionInfo_C*> InfoList; 

	void UpdateInfo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMissionNames(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Delay(); // (BlueprintCallable|BlueprintEvent)
	void FullClean(); // (BlueprintCallable|BlueprintEvent)
	void UserToggleVisible(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionObjectives(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

