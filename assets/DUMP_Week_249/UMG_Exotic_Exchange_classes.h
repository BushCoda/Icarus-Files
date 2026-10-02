// WidgetBlueprintGeneratedClass UMG_Exotic_Exchange.UMG_Exotic_Exchange_C
struct UUMG_Exotic_Exchange_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Amount; 
	struct USizeBox* AmountSize; 
	struct UUMG_IconTextButton_C* Cancel; 
	struct UUMG_IconTextButton_C* Confirm; 
	struct UTextBlock* CreditsCurrency; 
	struct UTextBlock* Currency1Value; 
	struct UTextBlock* Currency2Value; 
	struct UTextBlock* ExoticsCurrency; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_6; 
	struct UImage* Image_8; 
	struct UImage* Image_97; 
	struct UImage* Image_178; 
	struct UUMG_ButtonIcon_C* LeftButton; 
	struct UUMG_ButtonIcon_C* LeftButton_11; 
	struct URichTextBlock* RichText; 
	struct URichTextBlock* RichText_2; 
	struct UUMG_ButtonIcon_C* RightButton; 
	struct UUMG_ButtonIcon_C* RightButton_11; 
	struct UEditableText* SelectedAmount; 
	struct UTextBlock* SummedCurrency; 
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; 
	int32_t Multiplier; 
	struct FCurrencyConversionsRowHandle Currency_Conversion; 
	bool Initialised; 
	struct FMulticastInlineDelegate PurchaseComplete; 

	void GetDectorators(struct FString& Decorator Image, struct FString& Decorator Text, struct FText& DisplayName); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateConversion(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FetchCurrentCreditCount(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCount(int32_t Count); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void MetaResourcesUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // (BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Back(); // (BlueprintCallable|BlueprintEvent)
	void Success(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Exotic_Exchange_LeftButton_10_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Exotic_Exchange_RightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Exotic_Exchange(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PurchaseComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

