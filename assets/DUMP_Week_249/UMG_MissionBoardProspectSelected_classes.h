// WidgetBlueprintGeneratedClass UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C
struct UUMG_MissionBoardProspectSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowMain; 
	struct UWidgetAnimation* SwitchAnimation; 
	struct UWidgetAnimation* OpenAnimation; 
	struct UUMG_BasicButton_2_C* BeginOperation; 
	struct UUMG_BasicButton_2_C* Cancel; 
	struct UHorizontalBox* Currency; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UTextBlock* Days_6; 
	struct UTextBlock* DaysText; 
	struct UTextBlock* DescriptionText; 
	struct UTextBlock* DifficultyTitle; 
	struct UImage* divider1; 
	struct UImage* divider1_2; 
	struct UTextBlock* FlavourText; 
	struct UImage* Gradient; 
	struct UTextBlock* Hours; 
	struct UImage* Image_141; 
	struct UImage* LowTimeWarningIcon; 
	struct UOverlay* Main; 
	struct UImage* menupattern; 
	struct UTextBlock* Minutes; 
	struct UImage* MissionDevice; 
	struct UVerticalBox* MissionDuration; 
	struct UVerticalBox* MissionSettings; 
	struct UTextBlock* ProspectName; 
	struct UImage* ProspectTexture; 
	struct UVerticalBox* Rewards; 
	struct UTextBlock* Seconds; 
	struct UBorder* StartError; 
	struct UBorder* TimeBorder; 
	struct UBorder* TimeColourBorder; 
	struct UImage* Trim2; 
	struct UHorizontalBox* TypesBox; 
	struct UUMG_DifficultySelect_C* UMG_DifficultySelect; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_MissionSpecialRewards_C* UMG_MissionSpecialRewards; 
	struct UUMG_MissionType_C* UMG_MissionType; 
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; 
	struct UVerticalBox* WorldStats; 
	struct FMulticastInlineDelegate OperationSelected; 
	struct FFProspectServerInfo Prospect Info; 
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; 
	enum class EMissionDifficulty CachedDifficulty; 
	struct FMulticastInlineDelegate OperationClosed; 
	struct FProspectListRowHandle Prospect; 
	struct FFactionMissionsRowHandle Faction Mission; 

	void UpdateSpecialRewards(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedProspectInfo(struct FFProspectServerInfo& Prospect Info); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateWorldStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowSelectedProspect(struct FFProspectServerInfo Prospect, struct FText StartError); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // (BlueprintEvent)
	void ManuallyUpdateDifficulty(enum class EMissionDifficulty CachedDifficulty); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MissionBoardProspectSelected_CancelOperation_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionBoardProspectSelected(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OperationClosed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OperationSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

