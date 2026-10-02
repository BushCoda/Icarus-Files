// WidgetBlueprintGeneratedClass UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C
struct UUMG_FieldGuideItemVestigePage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* BestiaryGrid; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_IcarusGrid_C* ProcureGrid; 
	struct UUMG_IcarusGrid_C* SkinnedBy; 
	struct UUMG_FieldGuideItem_Uses_C* Uses; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_Bestiary; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_Procure; 
	struct UWidgetSwitcher* WidgetSwitcher_NA_SkinnedBy; 

	void DoBestiaryClickByRef(struct FBestiaryDataRowHandle Creature, int32_t Percent); // (Public|BlueprintCallable|BlueprintEvent)
	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemVestigePage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

