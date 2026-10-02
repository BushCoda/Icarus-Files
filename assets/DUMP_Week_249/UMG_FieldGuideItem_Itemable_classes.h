// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Itemable.UMG_FieldGuideItem_Itemable_C
struct UUMG_FieldGuideItem_Itemable_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_2; 
	struct UBorder* Border_4; 
	struct UBorder* Border_93; 
	struct UBorder* Border_125; 
	struct UImage* FieldGuideHidden; 
	struct UHorizontalBox* HorizontalBox_Variations; 
	struct UUMG_FieldGuideResourceHowToObtain_C* HowToObtain; 
	struct UImage* Image_53; 
	struct UTextBlock* ItemDescription; 
	struct UTextBlock* ItemFlavour; 
	struct UImage* ItemIcon; 
	struct UTextBlock* ItemName; 
	struct UTextBlock* StackSizeText; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct UTextBlock* VariationText; 
	struct FLinearColor WorkshopPurple; 
	struct UTextBlock* Target; 

	void Populate Itemable Detail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateColor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Itemable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

