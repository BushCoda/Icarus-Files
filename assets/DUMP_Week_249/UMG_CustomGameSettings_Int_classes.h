// WidgetBlueprintGeneratedClass UMG_CustomGameSettings_Int.UMG_CustomGameSettings_Int_C
struct UUMG_CustomGameSettings_Int_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_84; 
	struct UImage* DarkTint; 
	struct UHorizontalBox* OuterBox; 
	struct UTextBlock* SettingName; 
	struct USpinBox* SpinBox_Value; 
	struct UTextBlock* TextBlock_Value; 
	struct USlider* ValueSlider; 
	struct FName RowName; 
	struct FCustomGameStat SettingData; 
	bool CanEdit; 
	int32_t InitialValue; 
	struct FMulticastInlineDelegate OnSettingValueChanged; 

	void UpdateDefaultStateTextHighlighting(int32_t CurrentValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnValueChanged(int32_t Value); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_Int_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // (BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_Int_ValueSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetAlternate(bool Alternate); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CustomGameSettings_Int(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSettingValueChanged__DelegateSignature(struct FName RowName, int32_t NewValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

