// WidgetBlueprintGeneratedClass UMG_ProspectRewardWorkshop.UMG_ProspectRewardWorkshop_C
struct UUMG_ProspectRewardWorkshop_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Check; 
	struct UImage* Glow; 
	struct USizeBox* IconSizeBox; 
	struct UImage* Image_104; 
	struct UButton* TalentButton; 
	struct UProgressBar* UnlockedBar; 
	struct FWorkshopItemsRowHandle Item; 
	bool bUnlocked; 

	void Set Reward(struct FWorkshopItemsRowHandle Reward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardWorkshop(int32_t EntryPoint); // (Final|UbergraphFunction)
};

