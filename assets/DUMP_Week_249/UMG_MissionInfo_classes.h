// WidgetBlueprintGeneratedClass UMG_MissionInfo.UMG_MissionInfo_C
struct UUMG_MissionInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimationCollapse; 
	struct UWidgetAnimation* Reveal; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UBorder* Complete; 
	struct UBorder* CompletedBox; 
	struct URichTextBlock* Description; 
	struct UImage* Glow; 
	struct UImage* Gradient; 
	struct UVerticalBox* MainVertBox; 
	struct UVerticalBox* SubQuests; 
	struct UBorder* TintingBorder; 
	struct AQuest* CachedQuest; 
	bool bComplete; 

	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void Setup(struct AQuest* Quest); // (BlueprintCallable|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

