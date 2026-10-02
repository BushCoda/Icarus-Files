// WidgetBlueprintGeneratedClass UMG_SettingTooltipHover.UMG_SettingTooltipHover_C
struct UUMG_SettingTooltipHover_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* HoverButton; 
	struct UUMG_SettingTooltipText_C* TextWidget; 
	struct TArray<bool> States; 
	struct TArray<struct FText> Descriptions; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Set Requirements(struct TArray<struct FText>& Descriptions, struct TArray<bool>& States); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingTooltipHover(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

