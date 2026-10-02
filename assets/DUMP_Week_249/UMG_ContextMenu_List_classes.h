// WidgetBlueprintGeneratedClass UMG_ContextMenu_List.UMG_ContextMenu_List_C
struct UUMG_ContextMenu_List_C : UUMG_ContextMenu_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BackFill; 
	struct UBorder* ItemBorder; 
	struct UVerticalBox* ItemContainer; 
	struct UUMG_ContextMenu_List_Item_C* DefaultListItemClass; 
	struct UUMG_ContextMenu_List_Group_C* DefaultListGroupClass; 
	bool UseGroupContainers; 
	struct TMap<struct FContextMenuGroupTypesRowHandle, struct UUMG_ContextMenu_List_Group_C*> GroupWidgets; 
	struct FVector2D ScreenPadding; 

	void FitPositionToScreen(struct FVector2D InPosition, struct FVector2D& OutPosition); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnCloseInventory(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOrCreateGroup(struct FContextMenuGroupTypesRowHandle GroupRowHandle, struct UUMG_ContextMenu_List_Group_C*& GroupWidget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void NeedsAnyGroups(struct TArray<struct FContextMenuItemData>& ContextMenuItems, bool& NeedsGroups); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnWidgetSelected(struct UUMG_ContextMenu_List_Item_C* ItemClicked); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // (Public|BlueprintCallable|BlueprintEvent)
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CloseMenu(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_List(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

