// WidgetBlueprintGeneratedClass UMG_LegendaryItem_Button.UMG_LegendaryItem_Button_C
struct UUMG_LegendaryItem_Button_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UBorder* WeaponBackground; 
	struct UBorder* WeaponBackgroundHover; 
	struct UBorder* WeaponBorder; 
	struct UBorder* WeaponBorderHover; 
	struct UButton* WeaponButton; 
	struct UImage* WeaponFront; 
	struct UTextBlock* WeaponName; 
	struct FMulticastInlineDelegate ItemClicked; 
	struct FLivingItemShopItemsRowHandle LegendaryItem; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetItem(struct FLivingItemShopItemsRowHandle LivingItem); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_LegendaryItem_Button_WeaponButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_GreatHunt_Interface_WeaponButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_GreatHunt_Interface_WeaponButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_LegendaryItem_Button(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ItemClicked__DelegateSignature(struct FLivingItemShopItemsRowHandle LegendaryItem); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

