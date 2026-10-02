// WidgetBlueprintGeneratedClass UMG_MissionReport.UMG_MissionReport_C
struct UUMG_MissionReport_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* RewardAnimation; 
	struct UWidgetAnimation* FadeIn; 
	struct UScrollBox* BadgeScrollbox; 
	struct UUMG_DifficultyModifiers_C* BaseReward; 
	struct UUMG_BasicButton_2_C* ContinueButton; 
	struct UHorizontalBox* Currency; 
	struct UVerticalBox* CurrencyRewards; 
	struct UUMG_DifficultyModifiers_C* Difficulty; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* divider_3; 
	struct UImage* divider_4; 
	struct UImage* divider_5; 
	struct UImage* divider_6; 
	struct UImage* divider_7; 
	struct UImage* divider_8; 
	struct UTextBlock* Error; 
	struct UUMG_MissionUnlockReward_C* ExoticUnlocks; 
	struct UVerticalBox* FactionMissionList; 
	struct UBorder* FailedGradient; 
	struct UImage* Frame; 
	struct UUMG_DifficultyModifiers_C* Hardcore; 
	struct UUMG_DifficultyModifiers_C* Insurance; 
	struct UBorder* LoadingScreen; 
	struct UVerticalBox* MissionRewards; 
	struct UTextBlock* NoRewards; 
	struct UVerticalBox* PlayerList; 
	struct UTextBlock* ProspectTitle; 
	struct UBorder* RewardsBorder; 
	struct UUMG_MissionUnlockReward_C* RewardUnlocks; 
	struct UScrollBox* RibbonsScrollbox; 
	struct UOverlay* SpecialUnlocks; 
	struct UUMG_DifficultyModifiers_C* Subtotal; 
	struct UWidgetSwitcher* Switcher; 
	struct UBorder* titledetail_2; 
	struct UBorder* titledetail_3; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; 
	struct UUMG_MissionTimer_C* UMG_MissionTimer; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_2; 
	struct FProspectInfo Prospect Info; 
	struct FAttachment Current Rewards; 
	struct TArray<struct UUMG_AccoladeMissionProgress_C*> RibbonAccolades; 
	struct TArray<struct UUMG_AccoladeMissionProgress_C*> BadgeAccolades; 
	bool Mission Complete; 
	struct FMissionReport Report; 

	void UpdateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddAccoladeToList(struct FAccoladesRowHandle Accolade, bool Complete); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitAccoladeList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Close(); // (BlueprintCallable|BlueprintEvent)
	void AnimateCompletedAccolades(); // (BlueprintCallable|BlueprintEvent)
	void ShowReport(struct FMissionReport Report); // (BlueprintCallable|BlueprintEvent)
	void ShowNoReport(); // (BlueprintCallable|BlueprintEvent)
	void Show(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionReport(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

