// WidgetBlueprintGeneratedClass UMG_ValidMounts.UMG_ValidMounts_C
struct UUMG_ValidMounts_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AttachmentInfo; 
	struct UImage* divider_3; 
	struct UTextBlock* MountText; 
	struct UUniformGridPanel* UniformGridPanel; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 

	void GetRowColNums(int32_t IconCount, int32_t& Row, int32_t& Col); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update Valid Mounts(struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ValidMounts(int32_t EntryPoint); // (Final|UbergraphFunction)
};

