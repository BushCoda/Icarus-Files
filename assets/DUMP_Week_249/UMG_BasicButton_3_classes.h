// WidgetBlueprintGeneratedClass UMG_BasicButton_3.UMG_BasicButton_2_C
struct UUMG_BasicButton_2_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AdditionalBorder; 
	struct UNamedSlot* AdditionalContent; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UTextBlock* ButtonText; 
	struct UOverlay* HighlightFlagOverlay; 
	struct UButton* ImageButton; 
	struct UScaleBox* ScaleBox_TextContainer; 
	struct USizeBox* SizeBox; 
	struct FButtonStyle NormalStyle; 
	float Width; 
	float Height; 
	enum class ETextJustify Justification; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct UUMG_QuestHelper_C* QuestHelper; 
	float Blur Strength; 
	struct FMargin TextPadding; 
	struct FText TooltipTextField; 
	struct UUMG_BasicTooltip_C* HoverTooltip; 
	bool UseHoverTooltip; 

	void UpdateTextColour(); // (Protected|BlueprintCallable|BlueprintEvent)
	void OnHover(); // (Public|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BasicButton_3(int32_t EntryPoint); // (Final|UbergraphFunction)
};

