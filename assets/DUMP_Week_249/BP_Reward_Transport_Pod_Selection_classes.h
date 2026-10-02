// BlueprintGeneratedClass BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C
struct ABP_Reward_Transport_Pod_Selection_C : ABP_Reward_Transport_Pod_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName Reward1; 
	struct FName Reward2; 
	struct FName Reward3; 
	struct TArray<int32_t> RewardSeeds; 
	struct TArray<struct FDynamicQuestRewardsRowHandle> RewardOptions; 
	struct FRandomStream RandomStream; 
	bool bRewardGenerated; 
	bool bRewardAddedToInventory; 
	bool bRewardCollected; 
	int32_t RewardSeed1; 
	int32_t RewardSeed2; 
	int32_t RewardSeed3; 

	void GetItemsFromSeed(struct FDynamicQuestRewardsRowHandle Reward, int32_t Seed, struct TArray<struct FRewardItemEntry>& RewardItems, struct TArray<bool>& Scale); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateRewardItem(int32_t Seed, struct FDynamicQuestRewardItemsRowHandle QuestRewardItem, struct FRewardItemEntry& ItemEntry); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForRewardCollected(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayerSelectedReward(struct FDynamicQuestRewardsRowHandle Reward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopulateRewardsArray(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateReward(struct FDynamicQuestRewardsRowHandle& DynamicQuestReward); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Reward_Transport_Pod_Selection(int32_t EntryPoint); // (Final|UbergraphFunction)
};

