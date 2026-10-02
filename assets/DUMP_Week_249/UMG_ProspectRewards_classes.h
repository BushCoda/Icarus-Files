// WidgetBlueprintGeneratedClass UMG_ProspectRewards.UMG_ProspectRewards_C
struct UUMG_ProspectRewards_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Access; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* NoRewards; 
	struct UHorizontalBox* RewardsHBox; 
	struct UTextBlock* RewardType; 
	struct FAttachment Reward; 
	struct FText RewardName; 
	struct FFactionMissionsRowHandle Mission; 

	void SetMission(struct FFactionMissionsRowHandle Mission); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewards(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

