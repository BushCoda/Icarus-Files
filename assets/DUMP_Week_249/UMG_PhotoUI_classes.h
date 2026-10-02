// WidgetBlueprintGeneratedClass UMG_PhotoUI.UMG_PhotoUI_C
struct UUMG_PhotoUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Flash; 
	struct UUMG_KeybindPrompt_C* Ascend; 
	struct UBorder* Border_Dev; 
	struct UBorder* Border_Shortcuts; 
	struct UUMG_CameraSetting_LookAtPlayer_C* CameraSetting_LookAtPlayer; 
	struct UUMG_CameraSetting_MaintainHeight_C* CameraSetting_MaintainHeight; 
	struct UW_PostProcessEntry_ToggleCollision_C* CameraSetting_ToggleCollision; 
	struct UW_PostProcessEntry_Checkbox_C* Checkbox_PathLoop; 
	struct UHorizontalBox* Controls; 
	struct UUMG_KeybindPrompt_C* Decend; 
	struct UUMG_KeybindPrompt_C* Exit; 
	struct UImage* FrameBottomLeft; 
	struct UImage* FrameBottomRight; 
	struct UImage* FrameTopLeft; 
	struct UImage* FrameTopRight; 
	struct UUMG_KeybindPrompt_C* HideUI; 
	struct UImage* Image_195; 
	struct UHorizontalBox* KeyPrompts; 
	struct UW_PostProcessEntry_BloomIntensity_C* PostProcessSetting_BloomIntensity; 
	struct UW_PostProcessEntry_BloomThreshold_C* PostProcessSetting_BloomThreshold; 
	struct UW_PostProcessEntry_DoF_C* PostProcessSetting_DoF; 
	struct UW_PostProcessEntry_DofFStop_C* PostProcessSetting_DofFStop; 
	struct UW_PostProcessEntry_Gamma_C* PostProcessSetting_Gamma; 
	struct UW_PostProcessEntry_MotionBlur_C* PostProcessSetting_MotionBlur; 
	struct UW_PostProcessEntry_Saturation_C* PostProcessSetting_Saturation; 
	struct UW_PostProcessEntry_Vinette_C* PostProcessSetting_Vignette; 
	struct UEditableTextBox* PresetNameBox; 
	struct UUMG_MultiToggle_C* PresetSelector; 
	struct UScrollBox* SettingsContainer; 
	struct UUMG_KeybindPrompt_C* TakePhoto; 
	struct UTextBlock* Text_ReferenceActor; 
	struct UEditableTextBox* TextBox_SavedCameraPath; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ClearRecord; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_EndRecord; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_PathLoad; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_PathSave; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_SetReference; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_StartPlayback; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_StartRecord; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_StopPlayback; 
	struct UUMG_Camera_Shortcut_C* UMG_Camera_Shortcut_HideUI; 
	struct UUMG_Camera_Shortcut_C* UMG_Camera_Shortcut_Sprint; 
	struct UUMG_CameraSetting_DetachFromPlayer_C* UMG_CameraSetting_DetachFromPlayer; 
	struct UUMG_CameraSetting_Exposure_C* UMG_CameraSetting_Exposure; 
	struct UUMG_CameraSetting_FOV_C* UMG_CameraSetting_FOV; 
	struct UUMG_CameraSetting_Resolution_C* UMG_CameraSetting_Resolution; 
	struct UUMG_CameraSetting_ScrollSpeed_C* UMG_CameraSetting_ScrollSpeed; 
	struct UUMG_CameraSetting_Smoothing_C* UMG_CameraSetting_Smoothing; 
	struct UUMG_CameraSetting_Speed_C* UMG_CameraSetting_Speed; 
	struct UVerticalBox* VerticalBox_CameraPaths; 
	struct UW_PostProcessEntry_Checkbox_Radio_ScrollFOV_C* W_PostProcessEntry_Checkbox_Radio_ScrollFOV; 
	struct UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C* W_PostProcessEntry_Checkbox_Radio_ScrollMove; 
	struct UW_PostProcessEntry_ISO_C* W_PostProcessEntry_ISO; 
	struct UW_PostProcessEntry_MaxAperture_C* W_PostProcessEntry_MaxAperture; 
	struct APawn* SpectatorActor; 
	struct TArray<struct UW_PostProcessEntry_C*> SettingsEntries; 
	struct FMulticastInlineDelegate PostProcessSettingsUpdated; 
	struct UBP_SpectatorSaveGame_C* SaveGame; 
	bool ControlsVisible; 
	struct FTimerHandle DelayedStartTimer; 
	struct AActor* PathReferenceActor; 

	void GetLookAtActor(struct AActor*& OutActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCameraPathActor(struct ACameraPathRecorder*& OutActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PhotoTaken(); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleControlsVisible(); // (Public|BlueprintCallable|BlueprintEvent)
	void InputChangePreset(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void ChangePreset(int32_t NewIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SaveCurrentPreset(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetEntryValuesFromPreset(struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset, bool Reset); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplySaveGame(); // (Public|BlueprintCallable|BlueprintEvent)
	void FillEmptySaveGame(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCurrentPresetName(int32_t PresetIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPresetName(struct FText PresetName); // (Public|BlueprintCallable|BlueprintEvent)
	void SavePresetToSaveGame(int32_t Index); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPresetFromSaveGame(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData>& Preset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Preset Name from Save Game(int32_t Index, struct FText& PresetName); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitSaveGame(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EntryFunction(struct FString Param); // (Public|BlueprintCallable|BlueprintEvent)
	void OnSettingChanged(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitEntries(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpectatorDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void SetGameFocus(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_PresetNameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_StartRecord_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_EndRecord_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_ClearRecord_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_StartPlayback_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_StopPlayback_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_PathSave_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_PathLoad_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void DelayStartRecording(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PhotoUI_TextBox_SavedCameraPath_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_PhotoUI_W_PostProcessEntry_Checkbox_K2Node_ComponentBoundEvent_11_EntryChanged__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_SetReference_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_PhotoUI(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PostProcessSettingsUpdated__DelegateSignature(struct FPostProcessSettings Settings); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

