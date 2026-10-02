// WidgetBlueprintGeneratedClass UMG_BasicButton_BioLab_Buy.UMG_BasicButton_BioLab_Buy_C
struct UUMG_BasicButton_BioLab_Buy_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AdditionalBorder; 
	struct UNamedSlot* AdditionalContent; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UTextBlock* ButtonText; 
	struct UOverlay* HighlightFlagOverlay; 
	struct UButton* ImageButton; 
	struct UScaleBox* ScaleBox_TextContainer; 
	struct USizeBox* SizeBox; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct FButtonStyle NormalStyle; 
	float Width; 
	float Height; 
	enum class ETextJustify Justification; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct UUMG_QuestHelper_C* QuestHelper; 
	float Blur Strength; 
	struct FMargin TextPadding; 
	struct FLivingItemShopItemsRowHandle ShopItemRow; 
	bool bHasDLC; 
	bool bHasAccountFlag; 
	struct FDLCPackageDataRowHandle Required Package To Purchase; 
	struct FAccountFlagsRowHandle Required Account Flag; 
	struct FText ErrorText; 
	bool Can Purchase; 

	void HasDLCFlag(struct FText& Text); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasAccountFlag(struct FText& Text); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanAffordItem(bool& CanAfford); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTextColour(); // (Protected|BlueprintCallable|BlueprintEvent)
	void OnHover(); // (Public|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetCanPurchase(bool CanPurchase); // (BlueprintCallable|BlueprintEvent)
	void RefreshBuyButton(); // (BlueprintCallable|BlueprintEvent)
	void SetWeapon(struct FLivingItemShopItemsRowHandle ShopItemRow); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BasicButton_BioLab_Buy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

