// WidgetBlueprintGeneratedClass UMG_BioLab_WeaponInfo.UMG_BioLab_WeaponInfo_C
struct UUMG_BioLab_WeaponInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_4; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UImage* BossIcon; 
	struct UHorizontalBox* Cost; 
	struct UTextBlock* Desciption; 
	struct UTextBlock* Desciption_3; 
	struct UTextBlock* Desciption_4; 
	struct UTextBlock* Desciption_5; 
	struct UTextBlock* Flavour; 
	struct UTextBlock* Name; 
	struct UTextBlock* NameBG; 
	struct UImage* Pin_2; 
	struct UImage* Pin_3; 
	struct UImage* Pin_4; 
	struct UImage* Pin_5; 
	struct UTextBlock* ProcurementDescription; 
	struct UUMG_BasicButton_BioLab_Buy_C* UMG_BasicButton_BioLab_Buy_C_286; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem; 
	struct UUMG_ItemStats_C* UMG_ItemStats; 
	struct UUMG_RequiresDLCButton_C* UMG_RequiresDLCButton; 
	struct UImage* WeaponBackground; 
	struct UImage* WeaponImage; 
	struct FLivingItemShopItemsRowHandle LivingItem; 
	struct FMulticastInlineDelegate BackClicked; 
	struct UUMG_BioLab_PurchaseItemDetails_C* DetailsWidget; 
	struct TArray<struct UUMG_BioLab_UpgradeSlotChoice_C*> Upgrades; 
	struct UFMODEvent* ConfirmationPurchase; 
	struct FDLCPackageDataRowHandle DLC Data; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ShowForItem(struct FLivingItemShopItemsRowHandle Weapon, bool CanPurchase); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_WeaponInfo_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ConfirmBuy(); // (BlueprintCallable|BlueprintEvent)
	void CancelBuy(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Nothing2(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_WeaponInfo_UMG_BasicButton_BioLab_Buy_C_285_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_WeaponInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BackClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

