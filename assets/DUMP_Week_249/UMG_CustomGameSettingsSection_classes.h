// WidgetBlueprintGeneratedClass UMG_CustomGameSettingsSection.UMG_CustomGameSettingsSection_C
struct UUMG_CustomGameSettingsSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Contents; 
	struct UTextBlock* SectionHeading; 
	enum class ECustomGameStatCategory SectionType; 
	enum class ECustomGameStatChangeability Context; 
	struct FMulticastInlineDelegate OnSettingChanged; 
	bool HasSettings; 
	struct FMulticastInlineDelegate OnSettingHovered; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void AddSetting(struct FName RowName, struct FCustomGameStat& CustomGameStatData, bool CanEdit, int32_t CurrentValue); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSettingValueChanged(struct FName RowName, int32_t NewValue); // (BlueprintCallable|BlueprintEvent)
	void SettingHovered(struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CustomGameSettingsSection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSettingHovered__DelegateSignature(struct FText Text); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnSettingChanged__DelegateSignature(struct FName SettingRowName, int32_t NewValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

