// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C
struct UUMG_ContextMenu_Radial_C : UUMG_ContextMenu_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BackgroundFade; 
	struct UTextBlock* ContentText; 
	struct UImage* ContextImage; 
	struct UBorder* InteractionFrame; 
	struct UNamedSlot* NamedSlot_RightPanel; 
	struct UOverlay* RadialMenu; 
	struct UTextBlock* TitleText; 
	struct UUMG_ContextMenu_Radial_Item_C* HighlightedSegment; 
	struct FMulticastInlineDelegate SegmentHighlightedChanged; 
	int32_t NumItems; 
	struct UUMG_ContextMenu_Radial_Item_C* DefaultSegmentWidgetClass; 
	bool IsOpen; 
	struct TArray<struct UUMG_ContextMenu_Radial_Item_C*> Items; 
	float ControllerDistanceMultiplier; 
	struct UUMG_ContextMenu_Radial_Item_C* LastHighlightedSegment; 

	void UpdateHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAngleAndDistance_Controller(float& Angle, float& Distance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTotalAngleAndDistance(float& Angle, float& Distance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetDistanceFromCentre_Mouse(float& InteractionLength); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAngle_Mouse(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // (Public|BlueprintCallable|BlueprintEvent)
	void Radial Menu Select(); // (Public|BlueprintCallable|BlueprintEvent)
	void SegmentHighlightedHandler(struct UUMG_ContextMenu_Radial_Item_C* NewHighlightedSegment); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ListenForActions(); // (BlueprintCallable|BlueprintEvent)
	void StopListeningForActions(); // (BlueprintCallable|BlueprintEvent)
	void OnClickedInput(); // (BlueprintCallable|BlueprintEvent)
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CloseMenu(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnMenuOpened(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_Radial(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SegmentHighlightedChanged__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* Segment); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

