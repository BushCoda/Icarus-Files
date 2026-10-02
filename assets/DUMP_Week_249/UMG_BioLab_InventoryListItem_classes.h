// WidgetBlueprintGeneratedClass UMG_BioLab_InventoryListItem.UMG_BioLab_InventoryListItem_C
struct UUMG_BioLab_InventoryListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UBorder* Button_Background; 
	struct UBorder* Button_border; 
	struct UImage* Gradient; 
	struct UImage* Gradient_HoverAnimate; 
	struct UImage* Image_67; 
	struct UScaleBox* PatternScalebox; 
	struct UImage* SelectionIndicatorAnimate; 
	struct UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot1; 
	struct UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot2; 
	struct UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot3; 
	struct UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot4; 
	struct UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot5; 
	struct UImage* WeaponIcon; 
	struct UTextBlock* WeaponName; 
	struct TArray<struct UUMG_BioLab_UpgradeSlotMain_C*> UpgradeSlots; 
	struct FItemData ItemData; 
	bool Is Selected; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void RefreshAnimation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_InventoryListItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

