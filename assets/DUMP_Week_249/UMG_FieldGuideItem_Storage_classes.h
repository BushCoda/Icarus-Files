// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Storage.UMG_FieldGuideItem_Storage_C
struct UUMG_FieldGuideItem_Storage_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* CreatesGrid; 
	struct UImage* Image; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void GetStorageForResource(struct FIcarusResourcesEnum Resource); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Item Uses(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Storage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

