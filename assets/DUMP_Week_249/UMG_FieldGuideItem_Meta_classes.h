// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C
struct UUMG_FieldGuideItem_Meta_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description1; 
	struct UTextBlock* Description2; 
	struct UTextBlock* Description3; 
	struct UImage* Image_59; 
	struct UImage* Image1; 
	struct UVerticalBox* Image1Container; 
	struct UImage* Image2; 
	struct UVerticalBox* Image2Container; 
	struct UImage* Image3; 
	struct UVerticalBox* Image3Container; 
	struct UHorizontalBox* MetaGrid; 
	struct UVerticalBox* MetaOuterBox; 
	struct UTextBlock* MetaTitle; 
	struct UWidgetSwitcher* SwitcherNA; 

	void SetHeaderText(struct FText TextIn); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateMetaDetail(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Meta(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

