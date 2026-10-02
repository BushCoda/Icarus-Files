// WidgetBlueprintGeneratedClass UMG_BioLab_Space.UMG_BioLab_Space_C
struct UUMG_BioLab_Space_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShopAnimation; 
	struct UWidgetAnimation* CurrencySideBar; 
	struct UWidgetAnimation* NorexSideBar; 
	struct UImage* Background; 
	struct UUMG_BasicButton_2_C* BuyButton; 
	struct UOverlay* BuyWeaponsPanel; 
	struct UBorder* CurrencyBoxes; 
	struct UUMG_BiolabResourceDisplay_C* CurrencyDisplay; 
	struct UImage* Image_3; 
	struct UImage* Image_291; 
	struct UImage* Image_447; 
	struct UImage* Image_561; 
	struct UImage* Image_764; 
	struct UUMG_BasicButton_2_C* InfoButton; 
	struct UOverlay* InfoOverlay; 
	struct UListView* InventoryListView; 
	struct UOverlay* LeftPanelContents; 
	struct USizeBox* Norex_Titlebar; 
	struct UVerticalBox* PlayerInventoryVBox; 
	struct URichTextBlock* RichTextBlock_216; 
	struct URichTextBlock* RichTextBlock_583; 
	struct UVerticalBox* SideBar; 
	struct UOverlay* SideBarOverlay; 
	struct UWidgetSwitcher* Switcher; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_BioLab_ShopPanel_C* UMG_BioLab_ShopPanel; 
	struct UUMG_BioLab_CustomisationPanel_C* UMG_BioLab_WeaponCustomisationPanel; 
	struct UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo; 
	struct UUMG_CurrencyExchangeRenToLicence_C* UMG_CurrencyExchangeRenToLicence; 
	struct UOverlay* WeaponCustomisationPanel; 
	struct UHorizontalBox* WeaponInventoryTitle; 
	struct UInventory* Inventory; 
	bool EventsRegistered; 
	int32_t NumValidItems; 
	struct UObject* LastItemSelected; 
	struct FAccountFlagsRowHandle GreatHuntsPromptAccountFlag; 
	int32_t NumSelected; 

	void Initialise(struct UInventory* Main, struct UInventory* Loadout); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void ShowWeaponCustomisation(); // (BlueprintCallable|BlueprintEvent)
	void ShowWeaponShop(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RegisterEvents(); // (BlueprintCallable|BlueprintEvent)
	void UnregisterEvents(); // (BlueprintCallable|BlueprintEvent)
	void OnMetaInventoryChanged(); // (BlueprintCallable|BlueprintEvent)
	void HandleListItemSelected(struct UObject* Item); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_UMG_BioLab_ShopPanel_K2Node_ComponentBoundEvent_4_ShowItem__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintEvent)
	void Play Animation(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void SetupGreatHuntsPrompt(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_InfoButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_6_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_Space(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

