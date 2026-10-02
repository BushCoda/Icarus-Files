// WidgetBlueprintGeneratedClass UMG_CurrencyExchangeRenToLicence.UMG_CurrencyExchangeRenToLicence_C
struct UUMG_CurrencyExchangeRenToLicence_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Glow; 
	struct UButton* Button; 
	struct UImage* CurrencyExchnageImage; 
	struct UTextBlock* PointsText; 
	struct UTextBlock* RenText; 
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; 
	struct FSlateColor Text Colour; 
	struct FSlateColor Black; 
	struct FSlateColor ExoticPurple; 
	struct UUMG_Exotic_Exchange_C* ExchangeWindow; 
	struct FCurrencyConversionsRowHandle Currency Conversion; 

	void GetDectorators(bool Starting, struct FString& Decorator Image, struct FString& Decorator Text, struct FText& DisplayName); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Cancel(); // (BlueprintCallable|BlueprintEvent)
	void PurchaseLicence(); // (BlueprintCallable|BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void Back(); // (BlueprintCallable|BlueprintEvent)
	void Success(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CurrencyExchangeRenToLicence(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

