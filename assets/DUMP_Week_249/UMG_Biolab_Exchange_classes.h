// WidgetBlueprintGeneratedClass UMG_Biolab_Exchange.UMG_Biolab_Exchange_C
struct UUMG_Biolab_Exchange_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Amount; 
	struct UBorder* Amount_2; 
	struct UUMG_IconTextButton_C* Buy_Cancel; 
	struct UCustomComboBox* Buy_Combobox; 
	struct UUMG_IconTextButton_C* Buy_Confirm; 
	struct UTextBlock* Buy_Currency; 
	struct UImage* Buy_Currency_Image; 
	struct UImage* Buy_Currency_Output; 
	struct UTextBlock* Buy_Currency_SummedOutput; 
	struct UUMG_BasicButton_2_C* BuyButton; 
	struct UOverlay* BuyOverlay; 
	struct UUMG_BiolabResourceDisplay_C* CurrencyDisplay; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_7; 
	struct UImage* Image_9; 
	struct UImage* Image_10; 
	struct UImage* Image_97; 
	struct UImage* Image_291; 
	struct UUMG_ButtonIcon_C* LeftButton; 
	struct UUMG_ButtonIcon_C* LeftButton_2; 
	struct UUMG_ButtonIcon_C* LeftButton_3; 
	struct UUMG_ButtonIcon_C* LeftButton_11; 
	struct UTextBlock* Norex_Currency_Buy; 
	struct UTextBlock* Norex_Currency_Sell; 
	struct UImage* Norex_Currrency_Output; 
	struct URichTextBlock* RichText; 
	struct URichTextBlock* RichText_2; 
	struct URichTextBlock* RichText_3; 
	struct URichTextBlock* RichText_4; 
	struct UUMG_ButtonIcon_C* RightButton; 
	struct UUMG_ButtonIcon_C* RightButton_2; 
	struct UUMG_ButtonIcon_C* RightButton_3; 
	struct UUMG_ButtonIcon_C* RightButton_11; 
	struct UEditableText* SelectedAmount; 
	struct UEditableText* SelectedAmount_Sell; 
	struct UUMG_IconTextButton_C* Sell_Cancel; 
	struct UCustomComboBox* Sell_Combobox; 
	struct UUMG_IconTextButton_C* Sell_Confirm; 
	struct UTextBlock* Sell_Currency; 
	struct UImage* Sell_Currency_Image; 
	struct UTextBlock* Sell_Currency_SummedOutput; 
	struct UUMG_BasicButton_2_C* SellButton; 
	struct UOverlay* SellOverlay; 
	struct UWidgetSwitcher* Switcher; 
	struct UUMG_BiolabResourceDisplay_C* UMG_BiolabResourceDisplay_2; 
	int32_t Multiplier; 
	struct FCurrencyConversionsRowHandle Currency_Conversion; 
	bool Initialised; 
	struct FMulticastInlineDelegate PurchaseComplete; 

	void UpdateCount_Sell(int32_t Count); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindCurrencyExchange(struct FMetaCurrencyRowHandle Input, struct FMetaCurrencyRowHandle Output, struct FCurrencyConversionsRowHandle& Conversion); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCurrecy(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDectorators(struct FString& Decorator Image, struct FString& Decorator Text); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateConversion(); // (Public|BlueprintCallable|BlueprintEvent)
	void FetchCurrentCreditCount(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCount_Buy(int32_t Count); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void MetaResourcesUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // (BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void Back(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Success(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Exotic_Exchange_LeftButton_10_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Exotic_Exchange_RightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_Sell_Combobox_K2Node_ComponentBoundEvent_7_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_Buy_Combobox_K2Node_ComponentBoundEvent_8_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_BuyButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_SellButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_RightButton_2_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_RightButton_1_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_LeftButton_2_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_LeftButton_1_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_SelectedAmount_Sell_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_Sell_Confirm_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Biolab_Exchange_Sell_Cancel_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Biolab_Exchange(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PurchaseComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

