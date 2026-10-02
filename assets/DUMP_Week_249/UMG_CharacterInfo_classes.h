// WidgetBlueprintGeneratedClass UMG_CharacterInfo.UMG_CharacterInfo_C
struct UUMG_CharacterInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_Name; 
	struct UTextBlock* CharacterName; 
	struct UTextBlock* ExpAmountText; 
	struct UProgressBar* ExperienceBar; 
	struct UTextBlock* LevelText_4; 
	struct USizeBox* SizeBox_1; 
	float NewVar_1; 
	struct UUMG_SettingTooltipText_C* CustomTooltipWidget; 
	bool HideName; 
	struct AActor* CharacterOverride; 
	struct FCharacterGrowthRowHandle GrowthHandle; 
	bool IsDisplayedOnTooltip; 

	void GetActorState(struct UCharacterState*& CharacterState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetExpAmount(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* CharacterOverride, struct FCharacterGrowthRowHandle GrowthHandle); // (BlueprintCallable|BlueprintEvent)
	void OnExperienceUpdated(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

