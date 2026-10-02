// WidgetBlueprintGeneratedClass UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C
struct UUMG_PriorityMissionOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BottomDivider; 
	struct UImage* BottomDivider_2; 
	struct UTextBlock* Days; 
	struct UTextBlock* Days_2; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UUMG_ButtonIcon_C* DismissButton; 
	struct UTextBlock* Hours; 
	struct UImage* Image_5; 
	struct UImage* Image_6; 
	struct UTextBlock* Minutes; 
	struct UTextBlock* PrioirtyMissionDescription; 
	struct UUMG_BasicButton_2_C* PriorityMissionButton; 
	struct UTextBlock* PriorityMissionName; 
	struct UOverlay* PriorityMissions; 
	struct UImage* ProspectImage; 
	struct UTextBlock* Seconds; 
	struct UBorder* TechBorder; 
	struct UImage* TechImage; 
	struct UTextBlock* TechTierText; 
	struct UHorizontalBox* Time; 
	struct UBorder* TimeColourBorder; 
	struct UImage* TopDivider; 
	struct UImage* TopDivider_2; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_ProspectRewardDisplay_C* UMG_ProspectRewardDisplay; 
	struct FMulticastInlineDelegate StartMission; 
	struct FMulticastInlineDelegate DismissOverlay; 
	struct FProspectListRowHandle Prospect; 
	struct FFactionMissionsRowHandle Mission; 

	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FProspectListRowHandle NewMission); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PriorityMissionOverlay_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_PriorityMissionOverlay_PriorityMissionButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Dismiss(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_PriorityMissionOverlay(int32_t EntryPoint); // (Final|UbergraphFunction)
	void DismissOverlay__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StartMission__DelegateSignature(struct FFactionMissionsRowHandle Mission, struct FProspectListRowHandle Prospect); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

