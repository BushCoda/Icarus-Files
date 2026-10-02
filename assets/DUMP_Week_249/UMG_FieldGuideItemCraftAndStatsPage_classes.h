// WidgetBlueprintGeneratedClass UMG_FieldGuideItemCraftAndStatsPage.UMG_FieldGuideItemCraftAndStatsPage_C
struct UUMG_FieldGuideItemCraftAndStatsPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* FuelGrid; 
	struct UImage* Image; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost; 
	struct UVerticalBox* ResourceBox; 
	struct UUMG_FieldGuideItem_Stats_C* Stats; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemCraftAndStatsPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

