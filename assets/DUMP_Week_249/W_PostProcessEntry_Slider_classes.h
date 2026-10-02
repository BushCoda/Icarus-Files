// WidgetBlueprintGeneratedClass W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C
struct UW_PostProcessEntry_Slider_C : UW_PostProcessEntry_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCheckBox* CheckBox_201; 
	struct USlider* Slider; 
	struct USpinBox* SpinBox_Value; 
	struct UTextBlock* TextBlock_UnitTitle; 
	struct UTextBlock* Title; 
	struct UTextBlock* Value; 
	struct FText Name; 
	int32_t FontSize; 
	float TextFill; 
	float DefaultSliderValue; 
	bool HasEnableBox; 
	struct FVector2D MinMaxSliderValues; 
	int32_t SpinBoxFractionalDigits; 
	struct FString UnitTitle; 
	float SliderDelta; 

	void CalculateExponentialDelta(float InDelta, float& OutDelta); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSliderEnabled(); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsEntryEnabled(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSaveGameValue(struct FFPostProcessSaveData& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitFromDefaultValue(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetSliderText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetSliderValue(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_PostProcessEntry_Slider(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

