// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox.UMG_BioLab_StatBox_C
struct UUMG_BioLab_StatBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* StatContents; 
	struct FItemData Base Item; 
	struct FItemData Comparison Item; 
	struct TMap<struct FStatsRowHandle, struct UUMG_BioLab_StatBox_Row_C*> Stats; 

	void SetBaseItem(struct FItemData BaseItem); // (BlueprintCallable|BlueprintEvent)
	void SetComparisonItem(struct FItemData ComparisonItem); // (BlueprintCallable|BlueprintEvent)
	void ClearComparison(); // (BlueprintCallable|BlueprintEvent)
	void ShowComparison(); // (BlueprintCallable|BlueprintEvent)
	void ShowBaseStats(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_StatBox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

