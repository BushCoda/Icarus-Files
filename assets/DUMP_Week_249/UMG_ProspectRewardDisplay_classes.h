// WidgetBlueprintGeneratedClass UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C
struct UUMG_ProspectRewardDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USizeBox* MetaPlaceholder; 
	struct UHorizontalBox* ResourceDisplay; 
	struct FText RewardName; 
	struct FSlateBrush RewardIcon; 

	void SetMissionReward(struct FFactionMissionsRowHandle Mission); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

