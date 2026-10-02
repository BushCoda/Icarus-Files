// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_Sets.UMG_FieldGuideItems_Sets_C
struct UUMG_FieldGuideItems_Sets_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_59; 
	struct UUMG_IcarusGrid_C* SetGrid; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Set Detail(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItems_Sets(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

