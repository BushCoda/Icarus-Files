// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_AlterationDescriptionLarge.UMG_FieldGuideItems_AlterationDescriptionLarge_C
struct UUMG_FieldGuideItems_AlterationDescriptionLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UImage* divider_3; 
	struct UVerticalBox* Stats; 
	bool IsActive; 
	struct FAlterationsEnum Alteration; 
	bool Item; 
	bool Attachment; 
	bool HideDivider; 

	void Initialise(bool HideDivider); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Active State(bool Active); // (BlueprintCallable|BlueprintEvent)
	void Reinitalise(struct FAlterationsEnum Alteration, bool HideDivider); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItems_AlterationDescriptionLarge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

