// WidgetBlueprintGeneratedClass CF_SaveLoadStructures.CF_SaveLoadStructures_C
struct UCF_SaveLoadStructures_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxString* ComboBoxString_144; 
	struct UIcarusButtonTemp_C* DestroyAllBuildings; 
	struct UEditableTextBox* EditableTextBox_143; 
	struct UTextBlock* FeedbackText; 
	struct UIcarusButtonTemp_C* LoadButton; 
	struct UIcarusButtonTemp_C* SaveButton; 
	struct TMap<struct FString, int32_t> SaveNameToSlotMap; 
	int32_t NextEmptySaveSlot; 
	struct FSerializedGrid DontDeleteStructLoading; 
	struct TSoftClassPtr<UObject> GridBaseClass; 

	void SlotsToItemStaticData(struct TArray<struct FInventorySlot>& Slots, struct TArray<struct FRowHandle>& ItemStaticRowHandle); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SerializeActorAndInventories(struct AActor* Actor, struct FSerializedActorWithInventories& SerializedActorWithInventories); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SerializeAllActorsSpawnedViaDeployables(struct UCheatSaveGame_C* Save); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SerializeGrids(struct UCheatSaveGame_C* Save); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SaveGameToSlot(struct UCheatSaveGame_C* Save); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecalcSaves(); // (Public|BlueprintCallable|BlueprintEvent)
	void AllowDestructionProcessing(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_3D89231042C0965053A8E8BC2BAD8DA2(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
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
	void ExecuteUbergraph_CF_SaveLoadStructures(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

