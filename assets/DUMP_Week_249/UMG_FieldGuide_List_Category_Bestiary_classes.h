// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C
struct UUMG_FieldGuide_List_Category_Bestiary_C : UUMG_FieldGuide_List_Category_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTerrainsRowHandle Map; 
	struct FAtmospheresRowHandle Atmosphere; 
	struct FMulticastInlineDelegate FilterBestiary; 

	void ClickedInternal(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary(int32_t EntryPoint); // (Final|UbergraphFunction)
	void FilterBestiary__DelegateSignature(struct FTerrainsRowHandle Map, struct FAtmospheresRowHandle Atmosphere); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

