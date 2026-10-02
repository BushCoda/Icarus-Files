// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C
struct UUMG_FieldGuideItem_Attachments_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* Attachements; 
	struct UImage* Image_96; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateAttachmentView(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_Attachments(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

