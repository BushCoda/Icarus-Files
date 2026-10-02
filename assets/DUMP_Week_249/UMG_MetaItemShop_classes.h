// WidgetBlueprintGeneratedClass UMG_MetaItemShop.UMG_MetaItemShop_C
struct UUMG_MetaItemShop_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* PurchaseClose; 
	struct UWidgetAnimation* PurchaseLoad; 
	struct UWidgetAnimation* FadeLoadingScreen; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UHorizontalBox* FiltersBox; 
	struct UHorizontalBox* FiltersBox_2; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_6; 
	struct UImage* Image_7; 
	struct UImage* Image_63; 
	struct UImage* Image_89; 
	struct UImage* Image_93; 
	struct UUMG_Inventory_C* MainInventory; 
	struct UBorder* ShopClosed; 
	struct UTextBlock* ShopClosedText; 
	struct UGridPanel* ShopItems; 
	struct UUMG_ToggleButton_MenuHeader_C* Tab1; 
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_2; 
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_3; 
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_4; 
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_5; 
	int32_t PurchaseIndex; 
	struct FText TempCost; 
	struct FMargin ShopItemPadding; 

	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PurchaseMetaItem(int32_t Index); // (BlueprintCallable|BlueprintEvent)
	void PurchaseItemConfirmed(); // (BlueprintCallable|BlueprintEvent)
	void PurchaseItemFailed(); // (BlueprintCallable|BlueprintEvent)
	void Opened(); // (BlueprintCallable|BlueprintEvent)
	void PurchaseOutcome(bool Success); // (BlueprintCallable|BlueprintEvent)
	void ShopUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MetaItemShop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

