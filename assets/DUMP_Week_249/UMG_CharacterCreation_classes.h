// WidgetBlueprintGeneratedClass UMG_CharacterCreation.UMG_CharacterCreation_C
struct UUMG_CharacterCreation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BlackFadeIn; 
	struct UImage* Angle; 
	struct UImage* Angle_2; 
	struct UImage* Angle_3; 
	struct UImage* Angle_4; 
	struct UImage* Angle_5; 
	struct UImage* Angle_6; 
	struct UBorder* BlackFadeBorder; 
	struct UImage* BlackGradient; 
	struct UUMG_CharacterSetting_Visual_C* BodySelection; 
	struct UUMG_CharacterSetting_GridBase_C* CapColorSelectionGrid; 
	struct UUMG_BasicButton_2_C* CreateButton; 
	struct UEditableTextBox* CreateCharacterName; 
	struct UWidgetSwitcher* CustomizationOptions; 
	struct UUMG_CharacterSetting_Visual_C* DecalSelection; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* EditIcon; 
	struct UUMG_CharacterSetting_GridBase_C* EyeColourSelectionGrid; 
	struct UUMG_CharacterSetting_Visual_C* FacialHairSelection; 
	struct UUMG_CharacterSetting_Visual_C* HairStyleSelection; 
	struct UUMG_CharacterSetting_Visual_C* HeadSelection; 
	struct UGridPanel* HeadSelectionGrid; 
	struct UUMG_CharacterSetting_Visual_C* ScarSelection; 
	struct UUMG_CharacterSetting_GridBase_C* SkinToneSelectionGrid; 
	struct UUMG_CharacterSetting_GridBase_C* SuitColorSelectionGrid; 
	struct UImage* SuitImage; 
	struct UUMG_CharacterSetting_Visual_C* TattooSelection; 
	struct UUMG_CharacterSetting_Voice_C* VoiceSelection; 
	struct FMulticastInlineDelegate CharacterCustomizationUpdated; 
	enum class ECharacterBodyType CurrentBodyType; 
	struct FText TypedText; 
	struct FPreviewCameraSettingsEnum CurrentFocus; 
	int32_t NameLengthLimit; 
	enum class ECharacterCustomisationContext CustomisationContext; 
	struct FMulticastInlineDelegate CustomisationCompleted; 
	struct FCharacterCosmetics InitialCosmetics; 
	struct FMulticastInlineDelegate CharacterCreationRequest; 
	struct FMulticastInlineDelegate RequestCosmeticsUpdate; 
	bool IsGeneratingCustomisationOptions; 

	void GetCameraFocus(struct FPreviewCameraSettingsEnum& CameraFocus); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCosmeticData(struct FCharacterCosmetics& CosmeticData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetInitialCosmetics(struct FCharacterCosmetics InitialCosmetics); // (Public|BlueprintCallable|BlueprintEvent)
	void GetInitialCosmeticsForCategory(enum class ECharacterOptionCategory CategoryType, struct FCharacterCreationDataRowHandle& CosmeticDataRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UUMG_CharacterSetting_Base_C* GetSettingsWidgetForCategory(enum class ECharacterOptionCategory CategoryType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateDefaultSelections(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnCharacterCosmeticsUpdated(bool Success, struct FOnlineProfileCharacter UpdatedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void SendCosmeticUpdateRequest(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void VerifyCustomisationOptionContexts(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FString GetSelectedColorFromPanel(struct UPanelWidget* Target); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateCustomisationOptions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBodyType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SelectionUpdated(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GridSelectionUpdated(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FReqCreateCharacter GetCharacterResult(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CreateCharacterResult(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	void SendCharacterCreationRequest(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void NameChanged(struct FText& Text); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterCreation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RequestCosmeticsUpdate__DelegateSignature(struct FReqUpdateCosmetics Request, int32_t Retries); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CharacterCreationRequest__DelegateSignature(struct FReqCreateCharacter CharacterResult, int32_t NumRetries, bool SelectNewCharacter); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CustomisationCompleted__DelegateSignature(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CharacterCustomizationUpdated__DelegateSignature(struct FCharacterCosmetics CharacterData); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

