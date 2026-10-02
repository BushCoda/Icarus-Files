// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C
struct UUMG_FieldGuide_List_Category_Items_C : UUMG_FieldGuide_List_Category_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate FilterItems; 
	struct FFieldGuideCategoriesRowHandle FieldGuideCategoryRow; 
	struct FItemsStaticRowHandle ItemRow; 

	void ClickedInternal(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Items(int32_t EntryPoint); // (Final|UbergraphFunction)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

