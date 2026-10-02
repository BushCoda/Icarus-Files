// WidgetBlueprintGeneratedClass UMG_TopLevelButton.UMG_TopLevelButton_C
struct UUMG_TopLevelButton_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ExpandDrawer; 
	struct UWidgetAnimation* CornerHovers; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UBorder* Border_Main; 
	struct UTextBlock* ButtonText; 
	struct UImage* CategoryImage; 
	struct UTextBlock* DescriptionText; 
	struct USizeBox* DescriptionTextBox; 
	struct UHorizontalBox* HorizontalBox_BottomDrawer; 
	struct UOverlay* HoverCorners; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_49; 
	struct UImage* Image_81; 
	struct UImage* Image_182; 
	struct UImage* Image_Dot_1; 
	struct UImage* Image_Dot_2; 
	struct UImage* Image_Dot_3; 
	struct UImage* Image_Gradient; 
	struct UImage* Image_TextBackground; 
	struct UButton* ImageButton; 
	struct USizeBox* MainSizeBox; 
	struct UBorder* OuterFrame; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Continue; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_NewGame; 
	struct FButtonStyle NormalStyle; 
	float Width; 
	struct FSlateBrush CategoryImageVariable; 
	bool IsOrange; 
	struct FText SetDescriptionText; 
	bool WantsDrawerHidden; 
	bool ExpandDrawerOnSelect; 
	struct FLinearColor AccentColor; 
	struct FMulticastInlineDelegate OnHovered; 
	struct FMulticastInlineDelegate OnUnhovered; 

	struct FLinearColor GetAccentColor(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OrangeButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ToggleDrawer(); // (BlueprintCallable|BlueprintEvent)
	void OnDrawerAnimationComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TopLevelButton_ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TopLevelButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnUnhovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnHovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

