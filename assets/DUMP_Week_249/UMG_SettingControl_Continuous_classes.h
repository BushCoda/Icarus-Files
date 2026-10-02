// WidgetBlueprintGeneratedClass UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C
struct UUMG_SettingControl_Continuous_C : USettingWidget_ContinuousRange {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* SettingText; 
	struct USlider* SliderControl; 
	struct UProgressBar* SliderProgress; 
	float MinValue; 
	float MaxValue; 
	int32_t DecimalPlaces; 
	float StepSize; 
	float CurrentValue; 
	bool Apply During Drag; 

	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateRangeValue(bool ForceRefresh); // (Protected|BlueprintCallable|BlueprintEvent)
	void UpdateRangeText(float Value); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature(); // (BlueprintEvent)
	void SetStepSize(float StepSize); // (Event|Public|BlueprintEvent)
	void SetRange(float MinVal, float MaxVal); // (Event|Public|BlueprintEvent)
	void Setup(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetValue(float Value, bool bForceRefresh); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Apply(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetApplyDuringDrag(bool bApplyDuringDrag); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_Continuous(int32_t EntryPoint); // (Final|UbergraphFunction)
};

