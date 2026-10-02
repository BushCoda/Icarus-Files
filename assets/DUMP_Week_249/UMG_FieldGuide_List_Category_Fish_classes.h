// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C
struct UUMG_FieldGuide_List_Category_Fish_C : UUMG_FieldGuide_List_Category_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EFishRarity Rarity; 
	enum class EFishType Type; 
	struct FMulticastInlineDelegate FilterFish; 

	void ClickedInternal(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish(int32_t EntryPoint); // (Final|UbergraphFunction)
	void FilterFish__DelegateSignature(enum class EFishRarity Rarity, enum class EFishType Type); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

