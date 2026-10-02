// WidgetBlueprintGeneratedClass UMG_ValidItemAttachments.UMG_ValidItemAttachments_C
struct UUMG_ValidItemAttachments_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* AttachmentIcons; 
	struct UBorder* AttachmentInfo; 
	struct UTextBlock* AttachmentText; 
	struct UImage* divider_3; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 

	void UpdateValidAttachments(struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ValidItemAttachments(int32_t EntryPoint); // (Final|UbergraphFunction)
};

