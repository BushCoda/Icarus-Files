// WidgetBlueprintGeneratedClass CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C
struct UCF_DeveloperProspectLoad_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox; 
	struct UTextBlock* FilePath; 
	struct UTextBlock* LastSavedDate; 
	struct UTextBlock* MapName; 
	struct UTextBlock* ProspectDTKey; 
	struct UTextBlock* ProspectID; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 

	void CheckMapIsValid(struct FString MapName, bool& IsMapValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleArg(int32_t Index, struct FString Arg); // (BlueprintCallable|BlueprintEvent)
	void OnHandleItemSet(struct UDebugProspectRow_C* Row); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnHandleExecute(struct UDebugProspectRow_C* Row); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void ExecuteUbergraph_CF_DeveloperProspectLoad(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

