// WidgetBlueprintGeneratedClass UMG_QuestRewardOption_Single.UMG_QuestRewardOption_Single_C
struct UUMG_QuestRewardOption_Single_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UUMG_BasicButton_2_C* ClaimButtoin; 
	struct UTextBlock* Description; 
	struct UTextBlock* RewardName; 
	struct UHorizontalBox* Rewards; 
	struct UImage* WeatherFrame; 
	struct FDynamicQuestRewardsRowHandle CachedReward; 
	float Multiplier; 
	struct FMulticastInlineDelegate QuestRewardSelected; 
	struct ABP_Mission_NPC_Reward_C* LinkedActor; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_QuestRewardOption_Single(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QuestRewardSelected__DelegateSignature(struct FDynamicQuestRewardsRowHandle QuestReward); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

