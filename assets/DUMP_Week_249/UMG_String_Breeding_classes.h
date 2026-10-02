// WidgetBlueprintGeneratedClass UMG_String_Breeding.UMG_String_Breeding_C
struct UUMG_String_Breeding_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* MyText; 
	struct UTextBlock* MyText_2; 
	struct UTextBlock* MyText_3; 
	struct UTextBlock* MyText_4; 
	struct UTextBlock* MyText_5; 
	struct UTextBlock* MyText_6; 
	struct UTextBlock* MyText_7; 
	struct UTextBlock* MyText_8; 
	struct UTextBlock* MyText_9; 
	struct UTextBlock* MyText_10; 
	struct UTextBlock* MyText_11; 
	struct UTextBlock* MyText_12; 
	struct UTextBlock* MyText_13; 
	struct UTextBlock* MyText_14; 
	struct UUdata_Breeding_C* ItemString; 
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
	void ExecuteUbergraph_UMG_String_Breeding(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

