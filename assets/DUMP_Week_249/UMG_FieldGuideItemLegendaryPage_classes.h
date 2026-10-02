// WidgetBlueprintGeneratedClass UMG_FieldGuideItemLegendaryPage.UMG_FieldGuideItemLegendaryPage_C
struct UUMG_FieldGuideItemLegendaryPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* Ammo; 
	struct UVerticalBox* AmmoBox; 
	struct UUMG_FieldGuideItem_LegendaryBaseStats_C* BaseStats; 
	struct UImage* Image_96; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UUMG_FieldGuideItem_Legendary_Cost_C* LegendaryWeaponCost; 
	struct UUMG_FieldGuideItem_LegendaryWeapon_Slots_C* LegendaryWeaponSlots; 
	struct UUMG_FieldGuideItem_Meta_C* Meta; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemLegendaryPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

