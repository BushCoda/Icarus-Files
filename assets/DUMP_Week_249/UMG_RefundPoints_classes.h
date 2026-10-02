// WidgetBlueprintGeneratedClass UMG_RefundPoints.UMG_RefundPoints_C
struct UUMG_RefundPoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* ColourBorder; 
	struct UTextBlock* PointsText; 
	struct UImage* RetrainingIcon; 
	struct UImage* RetrainingIcon_2; 
	struct UButton* RetrainingPointsButton; 
	struct FCurrencyConversionsRowHandle ConverstionRow; 
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; 
	bool Initialised; 
	struct FLinearColor TextAndIconColour; 
	struct FLinearColor White; 
	struct FLinearColor Orange; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void MetaResourcesUpdate(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_RefundPoints(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

