// WidgetBlueprintGeneratedClass UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C
struct UUMG_FieldGuideItemCarcassPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_96; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_IcarusGrid_C* SkinnedBy; 
	struct UUMG_IcarusGrid_C* SkinningBench; 
	struct UVerticalBox* SkinningBenchBox; 
	struct UUMG_IcarusGrid_C* SkinningKife; 
	struct UUMG_IcarusGrid_C* Vestige; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_SkinnedBy; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_SkinningBench; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_SkinningKnife; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_Vestige; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemCarcassPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

