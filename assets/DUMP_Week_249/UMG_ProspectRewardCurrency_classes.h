// WidgetBlueprintGeneratedClass UMG_ProspectRewardCurrency.UMG_ProspectRewardCurrency_C
struct UUMG_ProspectRewardCurrency_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USizeBox* IconSizeBox; 
	struct UTextBlock* ResourceCount; 
	struct UImage* ResourceIcon; 
	struct FWorkshopCost Reward; 

	void Set Reward(struct FWorkshopCost Reward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardCurrency(int32_t EntryPoint); // (Final|UbergraphFunction)
};

