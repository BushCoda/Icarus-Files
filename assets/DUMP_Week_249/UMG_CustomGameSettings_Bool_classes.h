// WidgetBlueprintGeneratedClass UMG_CustomGameSettings_Bool.UMG_CustomGameSettings_Bool_C
struct UUMG_CustomGameSettings_Bool_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_84; 
	struct UUMG_Checkbox_C* CheckBox; 
	struct UImage* DarkTint; 
	struct UButton* HoverButton; 
	struct UHorizontalBox* OuterBox; 
	struct UTextBlock* SettingName; 
	struct FName RowName; 
	struct FCustomGameStat SettingData; 
	bool CanEdit; 
	bool InitialValue; 
	struct FMulticastInlineDelegate OnValueChanged; 
	struct FMulticastInlineDelegate OnSettingHovered; 
	struct FText Description; 

	void UpdateDefaultStateTextHighlighting(bool CurrentValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_Bool_CheckBox_K2Node_ComponentBoundEvent_0_Updated__DelegateSignature(bool Checked, bool WasForced); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetAlternate(bool Alternate); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_Bool_HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_CustomGameSettings_Bool(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnSettingHovered__DelegateSignature(struct FText Text); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnValueChanged__DelegateSignature(struct FName RowName, int32_t NewValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

