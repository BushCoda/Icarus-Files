// WidgetBlueprintGeneratedClass UMG_Talentview_GreatHunt.UMG_Talentview_GreatHunt_C
struct UUMG_Talentview_GreatHunt_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_ButtonIcon_C* BackButton; 
	struct UUMG_BasicButton_2_C* ButtonBack; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* HuntImage; 
	struct UHorizontalBox* Outpost_Fill; 
	struct UUMG_BasicButton_2_C* OutpostfillClose; 
	struct UUMG_GreatHunt_Selection_C* UMG_GreatHunt_Selection; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct FLinearColor FALSE; 
	struct FMulticastInlineDelegate ProspectSelected; 
	struct TMap<struct FTalentsRowHandle, struct FProspectInfo> ProspectInfos; 
	struct TMap<struct FString, struct FTalentsRowHandle> ProspectDTKeys; 
	struct FMulticastInlineDelegate ProspectListUpdated; 
	bool SelectingHunt; 
	struct FIcarusProspect Icarus Prospect; 
	struct FMulticastInlineDelegate HuntSelected; 
	struct FTalentArchetypesRowHandle LastArchetype; 
	struct FMulticastInlineDelegate ShowLegendaryWeapon; 
	struct FLivingItemShopItemsRowHandle Weapon; 
	struct FMulticastInlineDelegate BackPressed; 
	bool OnOutpost; 
	struct TMap<struct FTalentArchetypesRowHandle, struct TSoftObjectPtr<UTexture2D>> HuntImages; 

	void MakeProspectServerInfo(struct FTalentsRowHandle RowHandle, struct FProspectInfo& ProspectInfo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLockedMissionsUpdated(struct TArray<struct FTimeLockedMissionInfo>& NewLockedMissions, struct TArray<struct FTimeLockedMissionInfo>& RemovedLockedMissions); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct UTalentModelInterface* TalentModel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFail_C8504B744B246ADD83374EBF0BB15C39(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_C8504B744B246ADD83374EBF0BB15C39(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void ProspectClicked(struct FTalentsRowHandle Talent, struct FText Error); // (BlueprintCallable|BlueprintEvent)
	void GenerateProspects(struct TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateHuntSelection(); // (BlueprintCallable|BlueprintEvent)
	void ReturnToHuntSelection(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetSelectedArchetype(struct FTalentArchetypesRowHandle& Archetype); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetEncryptedState(enum class EOnProspectAvailability Status); // (BlueprintCallable|BlueprintEvent)
	void SetIsOpenWorld(bool OpenWorld); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_1_TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype, struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_2_ShowLegendaryWeapon__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_UMG_ButtonIcon_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_4_ShowOutpostFill__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_OutpostfillClose_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Talentview_GreatHunt_ButtonBack_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Talentview_GreatHunt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BackPressed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ShowLegendaryWeapon__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void HuntSelected__DelegateSignature(bool bShowingHuntSelection, struct FTalentArchetypesRowHandle TalentArchetype, struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectListUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo, struct FTalentsRowHandle Talent, struct FText Error); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

