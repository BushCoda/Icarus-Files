// WidgetBlueprintGeneratedClass UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C
struct UUMG_ErrorCodeDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Open; 
	struct UTextBlock* Code; 
	struct UTextBlock* Description; 
	struct UTextBlock* Description_Extra; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct USizeBox* MainContentSizeBox; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 

	void ShowError(struct FErrorCodesEnum ErrorCode, struct FString ErrorInfo); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_4D2B7E9F46CA79D0E764F180A7203968(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ErrorCodeDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

