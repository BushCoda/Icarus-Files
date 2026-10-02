// WidgetBlueprintGeneratedClass W_SpectatorUI.W_SpectatorUI_C
struct UW_SpectatorUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button_168; 
	struct UScrollBox* FilteredActionBox; 
	struct UTextBlock* HelpText; 
	struct UButton* ResetButton; 
	struct UOverlay* UI; 
	struct UUMG_MultiToggle_C* UMG_MultiToggle; 
	struct UW_PostProcessEntry_BloomIntensity_C* W_PostProcessEntry_BloomIntensity; 
	struct UW_PostProcessEntry_BloomThreshold_C* W_PostProcessEntry_BloomThreshold; 
	struct UW_PostProcessEntry_CameraSmoothing_C* W_PostProcessEntry_CameraSmoothing; 
	struct UW_PostProcessEntry_DoF_C* W_PostProcessEntry_DoF; 
	struct UW_PostProcessEntry_DofFStop_C* W_PostProcessEntry_DofFStop; 
	struct UW_PostProcessEntry_DofRadius_C* W_PostProcessEntry_DofRadius; 
	struct UW_PostProcessEntry_Gamma_C* W_PostProcessEntry_Gamma; 
	struct UW_PostProcessEntry_MotionBlur_C* W_PostProcessEntry_MotionBlur; 
	struct UW_PostProcessEntry_MouseSmoothing_C* W_PostProcessEntry_MouseSmoothing; 
	struct UW_PostProcessEntry_Saturation_C* W_PostProcessEntry_Saturation; 
	struct UW_PostProcessEntry_ToggleCollision_C* W_PostProcessEntry_ToggleCollision; 
	struct UW_PostProcessEntry_ToggleProjection_C* W_PostProcessEntry_ToggleProjection; 
	struct UW_PostProcessEntry_Vinette_C* W_PostProcessEntry_Vinette; 
	struct UW_ProjectionInterface_Spectator_C* W_ProjectionInterface_Spectator; 
	struct APawn* SpectatorActor; 
	struct TArray<struct FName> InputConsumeArray; 
	struct TArray<struct UW_PostProcessEntry_C*> PostProcessEntries; 
	struct FMulticastInlineDelegate SettingsUpdated; 
	struct UBP_SpectatorSaveGame_C* SaveGame; 

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InputChangePreset(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void ChangePreset(int32_t NewIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SaveCurrentPreset(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetEntryValuesFromPreset(struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset, bool Reset); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplySaveGame(); // (Public|BlueprintCallable|BlueprintEvent)
	void FillEmptySaveGame(); // (Public|BlueprintCallable|BlueprintEvent)
	void SavePresetToSaveGame(int32_t Index); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPresetFromSaveGame(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData>& Preset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitSaveGame(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EntryFunction(struct FString Param); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePostProcess(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitEntries(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FText Get_HelpText_Text_1(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InventoryPressed(); // (BlueprintCallable|BlueprintEvent)
	void SpectatorDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void ToggleHelpScreen(); // (BlueprintCallable|BlueprintEvent)
	void SetGameFocus(); // (BlueprintCallable|BlueprintEvent)
	void CustomEvent_1(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Button_167_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // (BlueprintEvent)
	void ExecuteUbergraph_W_SpectatorUI(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SettingsUpdated__DelegateSignature(struct FPostProcessSettings Settings); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

