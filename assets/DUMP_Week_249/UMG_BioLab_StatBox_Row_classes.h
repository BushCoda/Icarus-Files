// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C
struct UUMG_BioLab_StatBox_Row_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ComparisonArrow; 
	struct UTextBlock* ComparisonStat; 
	struct UTextBlock* StatName; 
	struct UTextBlock* StatValue; 

	void ShowComparison(struct FStatComparisonResult Comparison); // (BlueprintCallable|BlueprintEvent)
	void HideComparison(); // (BlueprintCallable|BlueprintEvent)
	void ShowStatValue(struct FStatsRowHandle Stat, int32_t Value); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_StatBox_Row(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

