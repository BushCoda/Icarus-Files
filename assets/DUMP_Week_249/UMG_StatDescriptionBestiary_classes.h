// WidgetBlueprintGeneratedClass UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C
struct UUMG_StatDescriptionBestiary_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	int32_t StatValue; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 
	bool IsActive; 
	struct FStatsEnum Stat; 

	void Initialise(struct FStatsEnum Stat, int32_t Value); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Active State(bool Active); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatDescriptionBestiary(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

