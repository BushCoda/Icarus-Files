// WidgetBlueprintGeneratedClass UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C
struct UUMG_ToggleButton_DropPoint_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UWidgetAnimation* Selected; 
	struct UImage* Glow; 
	struct UButton* ImageButton; 
	struct UImage* ImageIcon; 
	struct UImage* ImageIcon_Selected; 
	struct UTextBlock* Text_DropName; 
	struct FButtonStyle NormalStyle; 
	struct UTexture2D* ButtonIcon; 
	struct FDropGroupsRowHandle DropPointRowHandle; 
	struct FDropGroupData DropGroupData; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void VisuallyToggleButton(bool VisualToggledState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnAnimationComplete(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ToggleButton_DropPoint_ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ToggleButton_DropPoint_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_DropPoint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

