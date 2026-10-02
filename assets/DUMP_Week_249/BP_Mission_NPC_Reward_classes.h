// BlueprintGeneratedClass BP_Mission_NPC_Reward.BP_Mission_NPC_Reward_C
struct ABP_Mission_NPC_Reward_C : ABP_Mission_NPC_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool bLocalState; 
	struct FSessionFlagsRowHandle TriggeredFlag; 
	int32_t RewardSeed; 
	struct FName RewardRow; 
	struct TArray<struct FDynamicQuestRewardsRowHandle> Reward; 
	struct FSessionFlagsRowHandle ClaimedFlag; 
	struct FName RewardRow2; 
	struct FName RewardRow3; 

	void SelectedReward(struct FDynamicQuestRewardsRowHandle Reward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetItemsFromSeed(struct FDynamicQuestRewardsRowHandle Reward, int32_t Seed, struct TArray<struct FRewardItemEntry>& RewardItems, struct TArray<bool>& Scale); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateRewardItem(int32_t Seed, struct FDynamicQuestRewardItemsRowHandle QuestRewardItem, struct FRewardItemEntry& ItemEntry); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateReward(struct FDynamicQuestRewardsRowHandle& DynamicQuestReward); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SessionFlagUpdated(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void FixRewardArray(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_Reward(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

