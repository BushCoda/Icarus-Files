// WidgetBlueprintGeneratedClass UMG_InventoryDropZone.UMG_InventoryDropZone_C
struct UUMG_InventoryDropZone_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CornerAnimation2; 
	struct UWidgetAnimation* CornerAnimation; 
	struct UBorder* BG; 
	struct UImage* CornerArrow; 
	struct UImage* CornerArrow_2; 
	struct UImage* CornerArrow_3; 
	struct UImage* CornerArrow_4; 
	struct UOverlay* Corners; 
	struct UImage* Dropshadow; 
	struct UTextBlock* DropZoneText; 
	struct UBorder* Frame; 
	struct UImage* Image_434; 
	struct UBorder* TextBorder; 
	struct FLinearColor BorderColour_Base; 
	struct FLinearColor BorderColour_Hover; 
	struct FSlateColor TextColour_Base; 
	struct FSlateColor TextColour_Hover; 

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryDropZone(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

