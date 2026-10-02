// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Uses.UMG_FieldGuideItem_Uses_C
struct UUMG_FieldGuideItem_Uses_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* CreatesGrid; 
	struct UImage* Image_59; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void GetUsesOfResource(struct FIcarusResourcesEnum Resource); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Item Uses(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Uses(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

