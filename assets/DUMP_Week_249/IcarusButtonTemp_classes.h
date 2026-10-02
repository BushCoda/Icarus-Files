// WidgetBlueprintGeneratedClass IcarusButtonTemp.IcarusButtonTemp_C
struct UIcarusButtonTemp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UTextBlock* TextBlock_61; 
	struct FText Text; 
	struct FMulticastInlineDelegate OnClicked; 

	struct FSlateColor GetTextColor(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_IcarusButtonTemp(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

