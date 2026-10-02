// WidgetBlueprintGeneratedClass UMG_ProspectRewardDisplayVertical.UMG_ProspectRewardDisplayVertical_C
struct UUMG_ProspectRewardDisplayVertical_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* BlueprintReward; 
	struct UVerticalBox* CurrencyReward; 
	struct UVerticalBox* LegendaryReward; 
	struct UVerticalBox* TalentReward; 
	struct UVerticalBox* WorkshopReward; 
	struct FText RewardName; 
	struct FSlateBrush RewardIcon; 
	struct FFactionMissionsRowHandle CachedMission; 
	struct FFactionMissionsRowHandle Temp; 

	bool HasFlag(struct FAccountFlagsRowHandle& AccountFlag); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetMissionReward(struct FFactionMissionsRowHandle Mission); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Retrigger(); // (BlueprintCallable|BlueprintEvent)
	void AccountFlagsUpdated(struct AIcarusPlayerState* PlayerState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardDisplayVertical(int32_t EntryPoint); // (Final|UbergraphFunction)
};

