// WidgetBlueprintGeneratedClass UMG_CurrencyExchangeRedToRen.UMG_CurrencyExchangeRedToRen_C
struct UUMG_CurrencyExchangeRedToRen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Glow; 
	struct UImage* CurrencyExchnageImage; 
	struct UTextBlock* PointsText; 
	struct UButton* RetrainingPointsButton; 
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; 
	struct FSlateColor Text Colour; 
	struct FSlateColor Black; 
	struct FSlateColor ExoticPurple; 
	struct UUMG_Exotic_Exchange_C* ExchangeWindow; 
	struct FCurrencyConversionsRowHandle Currency Conversion; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CurrencyExchangeRedToRen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

