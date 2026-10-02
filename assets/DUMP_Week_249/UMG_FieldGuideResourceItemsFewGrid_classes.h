// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C
struct UUMG_FieldGuideResourceItemsFewGrid_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CategoryLabel; 
	struct UUMG_IcarusGrid_C* Grid; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Resource Detail(struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

