// WidgetBlueprintGeneratedClass UMG_String.UMG_String_C
struct UUMG_String_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_168; 
	struct UTextBlock* MyText; 
	struct UUdata_C* ItemString; 
	struct FLinearColor ItemBackgroundColor; 
	struct UObject* List Item Object; 
	struct FLinearColor TextColor; 
	bool ItemIsSelected; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_String(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

