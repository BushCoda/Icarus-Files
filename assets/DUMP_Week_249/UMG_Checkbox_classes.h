// WidgetBlueprintGeneratedClass UMG_Checkbox.UMG_Checkbox_C
struct UUMG_Checkbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button1; 
	struct UImage* CheckboxImage; 
	struct USizeBox* SizeBox_1; 
	bool Checked; 
	struct FMulticastInlineDelegate Updated; 
	float Size; 

	void ManuallyCheck(bool Checked); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Checkbox(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Updated__DelegateSignature(bool Checked, bool WasForced); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

