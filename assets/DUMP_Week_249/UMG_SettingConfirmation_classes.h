// WidgetBlueprintGeneratedClass UMG_SettingConfirmation.UMG_SettingConfirmation_C
struct UUMG_SettingConfirmation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* No; 
	struct UTextBlock* TextBlock; 
	struct UTextBlock* TextBlock_114; 
	struct UUMG_BasicButton_2_C* Yes; 
	struct FMulticastInlineDelegate Result; 
	struct FText Text; 
	float Remaining; 
	int32_t RemainingInt; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BasicButton_147_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingConfirmation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Result__DelegateSignature(bool Result); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

