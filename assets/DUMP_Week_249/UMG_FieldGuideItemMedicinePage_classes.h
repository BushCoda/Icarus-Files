// WidgetBlueprintGeneratedClass UMG_FieldGuideItemMedicinePage.UMG_FieldGuideItemMedicinePage_C
struct UUMG_FieldGuideItemMedicinePage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost; 
	struct UUMG_FieldGuideItems_Sets_C* Sets; 
	struct UUMG_FieldGuideItem_Stats_C* Stats; 
	struct UUMG_FieldGuideItem_Uses_C* Uses; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateStatsCraftUsesDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemMedicinePage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

