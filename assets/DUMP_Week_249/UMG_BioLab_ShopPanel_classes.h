// WidgetBlueprintGeneratedClass UMG_BioLab_ShopPanel.UMG_BioLab_ShopPanel_C
struct UUMG_BioLab_ShopPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ComingSoon; 
	struct UUMG_CenterAlignedHorizontal_C* General; 
	struct UImage* Image_57; 
	struct UGridPanel* ShopGrid; 
	struct UHorizontalBox* Special; 
	int32_t ShopGridRowSize; 
	float ShopGridSpacingVertical; 
	float ShopGridSpacingHorizontal; 
	bool EventsRegistered; 
	struct FMulticastInlineDelegate ShowItem; 

	void UMG_BioLab_ShopPanel_AutoGenFunc(struct FLivingItemShopItemsRowHandle Weapon); // (Public|BlueprintCallable|BlueprintEvent)
	void GetItemsToShow(struct TArray<struct FLivingItemShopItemsRowHandle>& ItemsToShow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FillShopGrid(struct TArray<struct FLivingItemShopItemsRowHandle>& ShopItemsToShow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMetaCurrencyChanged(); // (BlueprintCallable|BlueprintEvent)
	void RegisterEvents(); // (BlueprintCallable|BlueprintEvent)
	void UnregisterEvents(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_ShopPanel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowItem__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

