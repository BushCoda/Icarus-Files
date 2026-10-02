// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C
struct UUMG_FieldGuideItem_Workshop_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* ReplicationCost; 
	struct UUMG_IcarusGrid_C* ResearchCost; 

	void Populate Workshop Detail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Workshop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

