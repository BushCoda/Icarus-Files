// WidgetBlueprintGeneratedClass UMG_FieldGuideItemAnimalPartPage.UMG_FieldGuideItemAnimalPartPage_C
struct UUMG_FieldGuideItemAnimalPartPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* FuelGrid; 
	struct UImage* Image; 
	struct UImage* Image_59; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_Uses_C* ItemUses; 
	struct UUMG_FieldGuideItem_Meta_C* Meta; 
	struct UUMG_IcarusGrid_C* ProcurementGrid; 
	struct UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost; 
	struct UVerticalBox* ResourceBox; 
	struct UWidgetSwitcher* WidgetSwitcher_MetaOrProc; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateAnimalPartDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemAnimalPartPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

