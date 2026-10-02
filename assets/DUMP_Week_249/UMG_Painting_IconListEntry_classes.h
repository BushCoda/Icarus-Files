// WidgetBlueprintGeneratedClass UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C
struct UUMG_Painting_IconListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_HoverIcon; 
	struct UImage* Image_ItemIcon; 

	struct FSlateBrush Get_Image_HoverIcon_Brush_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void SetVisuallySelected(bool IsSelected); // (BlueprintCallable|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_Painting_IconListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

