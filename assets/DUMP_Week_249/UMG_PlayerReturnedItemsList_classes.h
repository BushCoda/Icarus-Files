// WidgetBlueprintGeneratedClass UMG_PlayerReturnedItemsList.UMG_PlayerReturnedItemsList_C
struct UUMG_PlayerReturnedItemsList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* InventoryOverlay; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_DisplayOnlyInventory_C* UMG_DisplayOnlyInventory; 
	struct FText TitleOverride; 
	bool MakeRed; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlayerReturnedItemsList(int32_t EntryPoint); // (Final|UbergraphFunction)
};

