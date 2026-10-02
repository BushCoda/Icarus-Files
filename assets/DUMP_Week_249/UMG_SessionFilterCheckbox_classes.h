// WidgetBlueprintGeneratedClass UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C
struct UUMG_SessionFilterCheckbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button1; 
	struct UImage* CheckboxImage; 
	enum class ESessionFilterState Checked; 
	struct FMulticastInlineDelegate Updated; 

	void ManuallyCheck(enum class ESessionFilterState Checked); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void UpdateCheckbox(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SessionFilterCheckbox(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Updated__DelegateSignature(enum class ESessionFilterState Checked, bool WasForced); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

