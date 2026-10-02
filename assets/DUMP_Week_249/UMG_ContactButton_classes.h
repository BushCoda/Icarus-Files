// WidgetBlueprintGeneratedClass UMG_ContactButton.UMG_ContactButton_C
struct UUMG_ContactButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverBorder; 
	struct UImage* BackgroundImage; 
	struct UButton* Button_123; 
	struct UImage* Image_98; 
	struct UOverlay* MainOverlay; 
	struct USizeBox* SizeBoxHoverBorder; 
	struct UTextBlock* Text; 
	struct FText Name; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct FMulticastInlineDelegate Clicked; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ContactButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

