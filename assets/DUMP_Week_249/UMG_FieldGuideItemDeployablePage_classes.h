// WidgetBlueprintGeneratedClass UMG_FieldGuideItemDeployablePage.UMG_FieldGuideItemDeployablePage_C
struct UUMG_FieldGuideItemDeployablePage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UTextBlock* ItemRecipes; 
	struct UUMG_FieldGuideItem_Uses_C* ItemUses; 
	struct USizeBox* RecipeCost; 
	struct UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost; 
	struct UUMG_IcarusGrid_C* RelatedDevices; 
	struct UVerticalBox* RelatedDevicesBox; 
	struct UUMG_FieldGuideItem_ResourceNetwork_C* ResourceNetwork; 
	struct UUMG_FieldGuideItems_Sets_C* Sets; 
	struct UUMG_FieldGuideItem_Stats_C* Stats; 
	struct UUMG_FieldGuideItem_Storage_C* Storage; 

	void PopulateResourceDetail(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateDeployableDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemDeployablePage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

