// WidgetBlueprintGeneratedClass UMG_BioLab_ShopItem.UMG_BioLab_ShopItem_C
struct UUMG_BioLab_ShopItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UImage* BackgroundImage; 
	struct USizeBox* ComingSoonBox; 
	struct UHorizontalBox* CostBox; 
	struct UButton* ItemButton; 
	struct UUMG_BasicButton_BioLab_Buy_C* UMG_BasicButton_BioLab_Buy_C_4; 
	struct UUMG_RequiresDLCButton_C* UMG_RequiresDLCButton; 
	struct UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon; 
	struct UUMG_BasicButton_2_C* ViewButton; 
	struct USizeBox* WeaponBox; 
	struct UImage* WeaponIcon; 
	struct UTextBlock* WeaponName; 
	struct FLivingItemShopItemsRowHandle ShopItemRow; 
	struct UUMG_BioLab_PurchaseItemDetails_C* DetailsWidget; 
	struct FMulticastInlineDelegate ViewClicked; 
	struct UFMODEvent* ConfirmationPurchase; 
	struct FDLCPackageDataRowHandle DLC Data; 

	void CanAffordItem(bool& CanAfford); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ConfirmBuy(); // (BlueprintCallable|BlueprintEvent)
	void CancelBuy(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Nothing2(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_ShopItem_ViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_ShopItem_UMG_BasicButton_BioLab_Buy_C_3_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_ShopItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ViewClicked__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

