// WidgetBlueprintGeneratedClass UMG_QuestRewardOption.UMG_QuestRewardOption_C
struct UUMG_QuestRewardOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UUMG_BasicButton_2_C* ClaimButtoin; 
	struct UTextBlock* Description; 
	struct UTextBlock* RewardName; 
	struct UHorizontalBox* Rewards; 
	struct UImage* WeatherFrame; 
	struct FDynamicQuestRewardsRowHandle DynamicQuestReward; 
	float Multiplier; 
	struct FMulticastInlineDelegate QuestRewardSelected; 
	struct ABP_Reward_Transport_Pod_Selection_C* LinkedActor; 
	int32_t Seed; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_QuestRewardOption(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QuestRewardSelected__DelegateSignature(struct FDynamicQuestRewardsRowHandle QuestReward); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

