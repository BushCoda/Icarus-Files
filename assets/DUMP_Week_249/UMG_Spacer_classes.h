// WidgetBlueprintGeneratedClass UMG_Spacer.UMG_Spacer_C
struct UUMG_Spacer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider_3; 
	struct USpacer* Spacer; 
	struct USpacer* Spacer_123; 
	bool ShowDivider; 
	int32_t LeftRIghtPadding; 
	bool TopDownPadding; 

	void Initialise(bool ShowDivider); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Spacer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

