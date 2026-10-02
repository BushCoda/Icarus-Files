// WidgetBlueprintGeneratedClass UMG_StatTitleSmall.UMG_StatTitleSmall_C
struct UUMG_StatTitleSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* StatValue; 
	struct UImage* TitleIcon; 
	struct FStatsEnum Stat; 
	int32_t CurrentValue; 

	void OnLoaded_46C6B22141961101A41777A9059B59B1(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void UpdateStatValue(); // (BlueprintCallable|BlueprintEvent)
	void StatValueOverride(int32_t Value); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatTitleSmall(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

