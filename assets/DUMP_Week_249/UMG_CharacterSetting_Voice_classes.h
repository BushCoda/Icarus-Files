// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
struct UUMG_CharacterSetting_Voice_C : UUMG_CharacterSetting_TextBase_C {
	struct UFMODEvent* AuditionFMODEvent; 
	bool HasMadeInitialSelection; 

	void ClearOptions(bool ClearIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void IsValidVoice(struct FCharacterVoicesRowHandle RowHandle, bool& IsValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GenerateOptions(struct FCharacterVoicesRowHandle DefaultSelection); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetVoiceParameter(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayAuditionEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void ChangeSelection(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSelectionDisplayName(struct FText& DisplayName); // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

