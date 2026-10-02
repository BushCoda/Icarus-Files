// WidgetBlueprintGeneratedClass UMG_RewardDisplay.UMG_RewardDisplay_C
struct UUMG_RewardDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct USizeBox* IconSizeBox; 
	struct USizeBox* MetaPlaceholder; 
	struct UHorizontalBox* Resources; 
	struct UTextBlock* RewardAmountText; 
	struct UTextBlock* RewardNameText; 
	struct FText RewardName; 
	struct FSlateBrush RewardIcon; 

	void SetRewardColor(struct FLinearColor Color); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetRewardIcon(struct TSoftObjectPtr<UTexture2D> Icon); // (Public|BlueprintCallable|BlueprintEvent)
	void SetCoinReward(int32_t Amount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetExoticReward(struct FMetaResource Exotic); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetItemReward(struct FMetaItem MetaItem); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RewardDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

