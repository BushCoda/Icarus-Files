// WidgetBlueprintGeneratedClass CF_SaveLoadPrebuilt.CF_SaveLoadPrebuilt_C
struct UCF_SaveLoadPrebuilt_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusButtonTemp_C* CleanupAllPrebuilt; 
	struct UComboBoxString* ComboBoxString_144; 
	struct UIcarusButtonTemp_C* DestroyAllBuildings; 
	struct UEditableTextBox* EditableTextBox_143; 
	struct UTextBlock* FeedbackText; 
	struct UIcarusButtonTemp_C* LoadButton; 
	struct UComboBoxString* Origin; 
	struct UIcarusButtonTemp_C* SaveButton; 
	struct UIcarusButtonTemp_C* SaveButton_Adv; 
	struct UComboBoxString* Spawn; 
	struct TMap<struct FString, int32_t> SaveNameToSlotMap; 
	int32_t NextEmptySaveSlot; 
	struct FSerializedGrid DontDeleteStructLoading; 
	struct TSoftClassPtr<UObject> GridBaseClass; 
	struct TMap<struct FString, struct AActor*> Out Actors; 
	struct APrebuiltStructure* LoadedClass; 

	struct AActor* GetSpawn(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct AActor* GetOrigin(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateOrigin(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSaves(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_92ED3CD8470278AA4735C186CB6B15F0(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void FailedFeedback(); // (BlueprintCallable|BlueprintEvent)
	void OverwrittenFeedback(int32_t Slot); // (BlueprintCallable|BlueprintEvent)
	void NewSaveFeedback(int32_t Slot); // (BlueprintCallable|BlueprintEvent)
	void LoadFeedback(int32_t Slot); // (BlueprintCallable|BlueprintEvent)
	void FinishThenClearFeedback(); // (BlueprintCallable|BlueprintEvent)
	void DestroyBuildingsFeedback(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__CF_SaveLoadPrebuilt_SaveButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__CF_SaveLoadPrebuilt_CleanupAllPrebuilt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_SaveLoadPrebuilt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

