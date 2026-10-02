// WidgetBlueprintGeneratedClass UMG_Talent_GreatHunt.UMG_Talent_GreatHunt_C
struct UUMG_Talent_GreatHunt_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* DownArrow; 
	struct UImage* DownArrow_Small; 
	struct UImage* LeftArrow; 
	struct UImage* LeftArrow_Small; 
	struct UOverlay* MainOverlay; 
	struct UImage* RightArrow; 
	struct UImage* RightArrow_Small; 
	struct UOverlay* TalentOverlay; 
	struct UImage* TypeImage; 
	struct UOverlay* TypeOverlay; 
	struct UUMG_Talent_Mission_Common_C* UMG_Talent_Mission_Common; 
	struct UImage* UpArrow; 
	struct UImage* UpArrow_Small; 
	struct FMulticastInlineDelegate ProspectMissionClicked; 
	int64_t ExpireTime; 
	struct UFMODEvent* FMODEvent_Hovered; 
	struct UFMODEvent* FMODEvent_Clicked; 
	int32_t RemaingTime; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	struct UFMODEvent* FMODEvent_ClickFailed; 
	struct FGreatHuntsRowHandle GreatHunt; 

	void OnProspectSelectedHandler(struct FTalentsRowHandle GreatHuntTalent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetArrowImageForTalent(struct FTalentsRowHandle RowHandle, struct UImage*& ArrowImage, struct UImage*& SmallArrowImage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateDirection(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTalentType(bool& bIsNormalTalent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetIsOpenWorld(bool IsOpenWorld); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void Set Zoom Level(int32_t Level, float Scale); // (BlueprintCallable|BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void ResetTalentState(); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Talent_GreatHunt_UMG_Talent_Mission_Common_K2Node_ComponentBoundEvent_0_ProspectMissionClicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_GreatHunt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectMissionClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

