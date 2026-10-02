// WidgetBlueprintGeneratedClass UMG_InWorld_ArcadeMachine_Score_Entry.UMG_InWorld_ArcadeMachine_Score_Entry_C
struct UUMG_InWorld_ArcadeMachine_Score_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Text_Entry; 
	struct UArcadeMachineScoreObject* ScoreObject; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_InWorld_ArcadeMachine_Score_Entry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

