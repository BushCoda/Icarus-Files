// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_LegendaryBaseStats.UMG_FieldGuideItem_LegendaryBaseStats_C
struct UUMG_FieldGuideItem_LegendaryBaseStats_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* AlterationList; 
	struct UUMG_IcarusGrid_C* CreatesGrid; 
	struct UImage* Image_96; 
	struct UVerticalBox* ModifierList; 
	struct UVerticalBox* SetBonusList; 
	struct USpacer* SetBonusSpacer; 
	struct UVerticalBox* StatList; 
	struct UUMG_FieldGuideItems_ToolDamage_C* ToolDamage; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateStatsView(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_LegendaryBaseStats(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

