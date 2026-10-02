// WidgetBlueprintGeneratedClass UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C
struct UUMG_FieldGuideItemFishPage_C : UFieldGuidePageWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* FilletAt_L; 
	struct UHorizontalBox* FilletAt_R; 
	struct UHorizontalBox* FishingGrid; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_96; 
	struct UImage* Image_255; 
	struct UImage* ImageFishing; 
	struct UUMG_FieldGuideItem_Itemable_C* Itemable; 
	struct UHorizontalBox* TearingApartGrid; 

	void DoFishLinkClickedByRef(struct FFishDataRowHandle Creature, bool Discovered); // (Public|BlueprintCallable|BlueprintEvent)
	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateFishDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemFishPage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

