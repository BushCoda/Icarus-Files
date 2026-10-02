// WidgetBlueprintGeneratedClass UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C
struct UUMG_CharacterSetting_GridBase_C : UUMG_CharacterSetting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUniformGridPanel* OptionsGrid; 
	struct UTextBlock* Text_SettingName; 
	float GridItemWidth; 
	int32_t NumColumns; 

	void ClearOptions(bool ClearIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void GetToggleButtonAtIndex(int32_t OptionIndex, struct UUMG_ToggleButton_ColorSelect_C*& Button, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddOption(struct FRowHandle Option, int32_t& Index); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnGridSelectionUpdated(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|BlueprintCallable|BlueprintEvent)
	struct UUMG_ToggleButton_ColorSelect_C* AddNewGridItem(struct FCharacterCreationDataRowHandle CharacterCustomisationRow, float WidthOverride, int32_t RowLength); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterSetting_GridBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

