// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Legendary_Cost.UMG_FieldGuideItem_Legendary_Cost_C
struct UUMG_FieldGuideItem_Legendary_Cost_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* Cost; 
	struct UImage* Image_96; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceView(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Legendary_Cost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

