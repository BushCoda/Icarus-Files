// WidgetBlueprintGeneratedClass UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C
struct UUMG_FieldGuideItemPlantsPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* FuelGrid; 
	struct UUMG_IcarusGrid_C* GrownByGrid; 
	struct UUMG_IcarusGrid_C* GrownInGrid; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_Uses_C* ItemUses; 
	struct UUMG_FieldGuideItem_Meta_C* Meta; 
	struct UVerticalBox* ResourceBox; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_GrownBy; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_GrownIn; 
	struct UUMG_IcarusGrid_C* WorkshopPacks; 
	struct UVerticalBox* WorkshopPacksContainer; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulatePlantDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemPlantsPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

