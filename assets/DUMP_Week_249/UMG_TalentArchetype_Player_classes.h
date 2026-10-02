// WidgetBlueprintGeneratedClass UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C
struct UUMG_TalentArchetype_Player_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ReqLvlPulse; 
	struct UButton* Button; 
	struct UImage* IconWidget; 
	struct UBorder* LockedBorder; 
	struct UTextBlock* RequiredLevelText; 
	struct UBorder* TextAndIconBorder; 
	struct UTextBlock* TextWidget; 
	struct UImage* Underline; 
	struct FMulticastInlineDelegate OnClicked; 
	struct FText Text; 
	struct FTalentArchetypesRowHandle Archetype; 
	bool Selected; 
	struct FSlateBrush IconBrush; 
	struct FSlateBrush SelectedBrush; 
	struct FButtonStyle ButtonStyle; 
	struct FSlateColor TextColour; 
	struct FSlateColor SelectedTextColour; 
	struct FSlateColor NormalTextColour; 
	struct FSlateColor HoveredTextColour; 
	struct UTalentViewInterface* View; 
	int32_t Required Level; 
	struct UFMODEvent* FMOD_ButtonClick; 

	void UpdateRequiredLevel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Refresh(); // (BlueprintCallable|BlueprintEvent)
	void Select(); // (BlueprintCallable|BlueprintEvent)
	void Deselect(); // (BlueprintCallable|BlueprintEvent)
	void On Model State Changed(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentArchetype_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnClicked__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

