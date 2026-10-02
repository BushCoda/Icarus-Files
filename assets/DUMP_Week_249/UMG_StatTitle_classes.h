// WidgetBlueprintGeneratedClass UMG_StatTitle.UMG_StatTitle_C
struct UUMG_StatTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* StatValue; 
	struct UImage* TitleIcon; 
	struct UTextBlock* TitleText; 
	struct FStatsEnum Stat; 
	bool ShouldShowIcon; 
	int32_t StatValueRaw; 

	void FailedToRetrieveStatTitle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_912710A14DB31FBA83B4ABB47E06B80D(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateStatValue(struct AActor* TargetOverride); // (BlueprintCallable|BlueprintEvent)
	void StatValueOverride(int32_t Value); // (BlueprintCallable|BlueprintEvent)
	void ChangeTextColor(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatTitle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

