// WidgetBlueprintGeneratedClass UMG_MissionObjective.UMG_MissionObjective_C
struct UUMG_MissionObjective_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimationCollapse; 
	struct UWidgetAnimation* Reveal; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UBorder* Complete; 
	struct UBorder* CompletedBox; 
	struct UImage* Glow; 
	struct UImage* Gradient; 
	struct UVerticalBox* MainVertBox; 
	struct URichTextBlock* ObjectiveTextBlock; 
	struct UVerticalBox* SubQuests; 
	struct UBorder* TintingBorder; 
	bool CachedComplete; 
	bool CachedParentComplete; 
	struct AQuest* CachedQuest; 
	struct TMap<struct FQuestsEnum, struct UUMG_MissionObjective_C*> Quest Enum; 
	struct UDataTable* Incomplete Text Style Set; 
	struct UDataTable* Complete Text Style Set; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void Setup(struct AQuest* Quest); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetParentComplete(bool bParentComplete); // (BlueprintCallable|BlueprintEvent)
	void ForceCompleteAnimation(); // (BlueprintCallable|BlueprintEvent)
	void UpdateStyle(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionObjective(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

