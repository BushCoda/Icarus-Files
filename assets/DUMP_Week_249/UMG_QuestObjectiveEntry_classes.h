// WidgetBlueprintGeneratedClass UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C
struct UUMG_QuestObjectiveEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimationCollapse; 
	struct UWidgetAnimation* Reveal; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UBorder* Complete; 
	struct UBorder* CompletedBox; 
	struct UImage* Glow; 
	struct UImage* Gradient; 
	struct USizeBox* InfoContainer; 
	struct UVerticalBox* MainVertBox; 
	struct URichTextBlock* ObjectiveTextBlock; 
	struct UBorder* TintingBorder; 
	bool CachedComplete; 
	bool CachedParentComplete; 
	struct AQuest* CachedQuest; 
	int32_t VisibleState; 
	struct UDataTable* Complete Text Style Set; 
	struct UDataTable* Incomplete Text Style Set; 

	void Finished_54BD1BA940CD590F99FE70B029DA39D5(); // (BlueprintCallable|BlueprintEvent)
	void Finished_E810283B4FB239E8364D2C8C80E2C89B(); // (BlueprintCallable|BlueprintEvent)
	void Finished_150A755A4DAA0F7702CFB689A47AFB20(); // (BlueprintCallable|BlueprintEvent)
	void Finished_FA89F8484A04F5B013BEE5B07F351D47(); // (BlueprintCallable|BlueprintEvent)
	void Setup(struct FText Text, bool Complete, bool ParentComplete, bool SubObjective); // (BlueprintCallable|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void UpdateStyle(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_QuestObjectiveEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

