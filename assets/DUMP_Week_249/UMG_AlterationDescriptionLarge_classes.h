// WidgetBlueprintGeneratedClass UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C
struct UUMG_AlterationDescriptionLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UImage* divider_3; 
	struct UVerticalBox* Stats; 
	struct FAlterationsEnum Alteration; 

	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Reinitalise(struct FAlterationsEnum Alteration); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AlterationDescriptionLarge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

