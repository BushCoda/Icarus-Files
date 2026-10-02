// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsGrid.UMG_FieldGuideResourceItemsGrid_C
struct UUMG_FieldGuideResourceItemsGrid_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CategoryLabel; 
	struct UUMG_FieldGuide_DLCCheckbox_C* DangerousHorizonsDLC; 
	struct UHorizontalBox* DLCFilterHorizontalBox; 
	struct UUMG_FieldGuide_DLCCheckbox_C* GreatHuntsDLC; 
	struct UUMG_IcarusGrid_C* Grid; 
	struct UUMG_FieldGuide_DLCCheckbox_C* HomesteadDLC; 
	struct UUMG_FieldGuide_DLCCheckbox_C* NewFrontiersDLC; 
	struct TArray<struct FFeatureLevelsRowHandle> FeatureLevelFilter; 
	struct FFeatureLevelsRowHandle FeatureLevel; 
	bool Is Checked; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Resource Detail(struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DLCBoxClicked(bool Active, struct FFeatureLevelsRowHandle FeatureLevel); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideResourceItemsGrid(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

