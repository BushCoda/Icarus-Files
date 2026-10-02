// WidgetBlueprintGeneratedClass UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C
struct UUMG_TopLevelButton_ResumeLast_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CornerHovers; 
	struct UTextBlock* ButtonText; 
	struct UTextBlock* DescriptionText; 
	struct USizeBox* DescriptionTextBox; 
	struct UTextBlock* HostName; 
	struct UOverlay* HoverCorners; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_49; 
	struct UButton* ImageButton; 
	struct USizeBox* MainSizeBox; 
	struct UBorder* OuterFrame; 
	struct UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage; 
	struct FButtonStyle NormalStyle; 
	float Width; 
	struct FSlateBrush CategoryImageVariable; 
	bool IsOrange; 
	struct FText SetDescriptionText; 
	struct FMulticastInlineDelegate Hovered; 
	float ImageZoom; 

	void OrangeButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void SetLastProspectInfo(struct FAssociatedProspectInfo AssociatedProspect); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TopLevelButton_ResumeLast(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Hovered__DelegateSignature(struct UTexture2D*  Image); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

