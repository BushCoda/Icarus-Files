// WidgetBlueprintGeneratedClass CF_SaveLoadout.CF_SaveLoadout_C
struct UCF_SaveLoadout_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox; 
	struct UEditableText* Text; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 

	void OnHandleItemSet(struct UDebugProspectRow_C* Row); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_SaveLoadout(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

