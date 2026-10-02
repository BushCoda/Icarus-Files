// WidgetBlueprintGeneratedClass UMG_QuestObjectiveList.UMG_QuestObjectiveList_C
struct UUMG_QuestObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* QuestCompleteSwap; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UProgressBar* FactionOverallProgress; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UInvalidationBox* InvalidationBox_3; 
	struct UBorder* MissionBox; 
	struct UTextBlock* MissionTitle; 
	struct UBorder* OperationBox; 
	struct UTextBlock* OperationTitle; 
	struct UVerticalBox* QuestList; 
	struct UTextBlock* QuestName; 
	struct URetainerBox* QuestNameRetainer; 
	struct UBorder* Questsborder; 
	struct UVerticalBox* QuestVertbox; 
	struct UVerticalBox* SpecialObjectives; 
	struct UUMG_AudioWaveform_C* UMG_AudioWaveform; 
	struct FText MissionName; 
	bool Initialise; 
	struct FText QuestText; 
	struct TArray<struct UUMG_QuestObjectiveEntry_C*> ObjectiveWidgets; 
	struct TMap<struct AQuest*, struct UUMG_QuestObjectiveEntry_C*> WidgetMap; 
	bool HadQuest; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct UUMG_QuestObjectiveEntry_C* RecievingObjectives; 
	struct FProspectListRowHandle Prospect; 
	struct FText DropName; 

	void UpdateFactionMissionUI(struct FFactionMissionsRowHandle FactionMission); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateObjectiveStates(struct TArray<struct FQuestDescription>& QuestDescriptions); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateObjectiveCount(struct TArray<struct FQuestDescription>& QuestDescriptions); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_QuestObjectiveList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

