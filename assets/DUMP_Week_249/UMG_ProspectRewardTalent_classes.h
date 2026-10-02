// WidgetBlueprintGeneratedClass UMG_ProspectRewardTalent.UMG_ProspectRewardTalent_C
struct UUMG_ProspectRewardTalent_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Blueprint; 
	struct UImage* Check; 
	struct UBorder* CountBorder; 
	struct UImage* Glow; 
	struct USizeBox* IconSizeBox; 
	struct UImage* Image_47; 
	struct UTextBlock* Numerator; 
	struct UProgressBar* UnlockedBar; 
	struct UProgressBar* UnlockedCount; 
	int32_t Points; 
	bool bUnlocked; 

	void Set Reward(int32_t Points); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardTalent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

