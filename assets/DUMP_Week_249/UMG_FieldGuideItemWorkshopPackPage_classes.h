// WidgetBlueprintGeneratedClass UMG_FieldGuideItemWorkshopPackPage.UMG_FieldGuideItemWorkshopPackPage_C
struct UUMG_FieldGuideItemWorkshopPackPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_96; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_Uses_C* ItemUses; 
	struct UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost; 
	struct UUMG_FieldGuideItems_Sets_C* Sets; 
	struct UUMG_FieldGuideItem_Stats_C* Stats; 
	struct UUMG_IcarusGrid_C* SuppliesGrid; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_Supplies; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemWorkshopPackPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

