// WidgetBlueprintGeneratedClass UMG_ContextMenu_Base.UMG_ContextMenu_Base_C
struct UUMG_ContextMenu_Base_C : UContextMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FText MenuName; 
	struct TSoftObjectPtr<UTexture2D> MenuIcon; 

	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CloseMenu(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HidePanelDisplay(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

