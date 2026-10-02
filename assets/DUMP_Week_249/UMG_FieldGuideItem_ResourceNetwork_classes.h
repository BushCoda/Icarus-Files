// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C
struct UUMG_FieldGuideItem_ResourceNetwork_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* FuelGrid; 
	struct UImage* Image_59; 
	struct UHorizontalBox* ProvidesBox; 
	struct UHorizontalBox* RequiresBox; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void AddFieldGuideItem_SpecialResources(); // (Public|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void AddFieldGuideItem_Storage(struct FIcarusResourcesEnum ResourceType, enum class EResourceNetworkFlowType FlowType, int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void AddFieldGuideItem(struct FIcarusResourcesEnum ResourceType, enum class EResourceNetworkFlowType FlowType, int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateResourceNetworkDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

