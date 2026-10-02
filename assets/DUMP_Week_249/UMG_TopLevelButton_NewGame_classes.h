// WidgetBlueprintGeneratedClass UMG_TopLevelButton_NewGame.UMG_TopLevelButton_NewGame_C
struct UUMG_TopLevelButton_NewGame_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UWidgetAnimation* ExpandDrawer; 
	struct UWidgetAnimation* CornerHovers; 
	struct UBorder* Border_Main; 
	struct UTextBlock* ButtonDescription; 
	struct UTextBlock* ButtonText; 
	struct UOverlay* HoverCorners; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_49; 
	struct UImage* Image_Gradient; 
	struct UButton* ImageButton; 
	struct USizeBox* MainSizeBox; 
	struct UBorder* OuterFrame; 
	struct UUMG_AvailableResourceList_C* UMG_AvailableResourceList_145; 
	struct UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage; 
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
	struct TArray<struct FResourceAvailabilityData> AvailableResources; 
	float ImageZoom; 

	struct FLinearColor GetAccentColor(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OrangeButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ToggleDrawer(); // (BlueprintCallable|BlueprintEvent)
	void OnDrawerAnimationComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TopLevelButton_ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TopLevelButton_NewGame(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnUnhovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnHovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

