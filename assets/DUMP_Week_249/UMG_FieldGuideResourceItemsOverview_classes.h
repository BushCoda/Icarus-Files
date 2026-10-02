// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C
struct UUMG_FieldGuideResourceItemsOverview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* Grid; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 
	struct FMulticastInlineDelegate OnResourceClicked; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Resource Detail(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnResourceClicked__DelegateSignature(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

