// WidgetBlueprintGeneratedClass UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C
struct UUMG_TerrainButtonPromptContents_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* BoostButton; 
	struct UHorizontalBox* BoostPanel; 
	struct UTextBlock* BoostText; 
	struct UUMG_Checkbox_C* DontShowAgainCheckbox; 
	struct FMulticastInlineDelegate BoostButtonClicked; 

	void DontShowAgain(bool& DontShowAgain); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void SetBoostPanelDetails(bool Visible, int32_t PlayerLevel, int32_t RenBoost, int32_t ExoticBoost); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TerrainButtonPromptContents(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BoostButtonClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

