// WidgetBlueprintGeneratedClass UMG_Transform_Tool.UMG_Transform_Tool_C
struct UUMG_Transform_Tool_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* Button_Confirm; 
	struct UButton* Button_MouseBlocker; 
	struct USpinBox* SpinBox_RX; 
	struct USpinBox* SpinBox_RY; 
	struct USpinBox* SpinBox_RZ; 
	struct USpinBox* SpinBox_SX; 
	struct USpinBox* SpinBox_SY; 
	struct USpinBox* SpinBox_SZ; 
	struct USpinBox* SpinBox_TX; 
	struct USpinBox* SpinBox_TY; 
	struct USpinBox* SpinBox_TZ; 
	struct UTextBlock* TitleText; 
	struct UTextBlock* TitleText_ActorName; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon_Reset; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon_SwitchCoords; 
	struct UVerticalBox* VerticalBox_Main; 
	enum class EActionableEventType Event Type; 
	struct UBP_ActionableBehaviour_Transform_Tool_C* ToolBehaviour; 
	struct AActor* Trace Hit Actor; 
	struct FTransform OriginalTransform; 
	bool IsLocalCoords; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateLinkedActorTransform(); // (BlueprintCallable|BlueprintEvent)
	void OnValueChanged(float InValue); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Transform_Tool_Button_Confirm_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Transform_Tool_UMG_ButtonIcon_Reset_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void SetSliderValues(struct FTransform Transform); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Transform_Tool_UMG_ButtonIcon_SwitchCoords_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Transform_Tool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

