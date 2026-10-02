// WidgetBlueprintGeneratedClass UMG_TalentView_Outpost.UMG_TalentView_Outpost_C
struct UUMG_TalentView_Outpost_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* invertedarrow; 
	struct UImage* invertedarrow_2; 
	struct UImage* invertedarrow_3; 
	struct UImage* invertedarrow_4; 
	struct UImage* Noise; 
	struct UImage* Outpost_Background; 
	struct UUMG_PhysicalKeyPrompt_C* Pan; 
	struct UImage* Pattern; 
	struct UUMG_PhysicalKeyPrompt_C* Select; 
	struct UImage* Shadow; 
	struct UImage* Shadow_2; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct FLinearColor FALSE; 
	struct FMulticastInlineDelegate ProspectSelected; 
	struct TMap<struct FTalentsRowHandle, struct FProspectInfo> ProspectInfos; 
	struct TMap<struct FString, struct FTalentsRowHandle> ProspectDTKeys; 
	struct FMulticastInlineDelegate ProspectListUpdated; 

	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CanAddTalent(struct FRowHandle TalentRowHandle, bool& CanAddTalent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct UTalentModelInterface* TalentModel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFail_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ProspectClicked(struct FTalentsRowHandle Talent); // (BlueprintCallable|BlueprintEvent)
	void GenerateProspectsFromTalents(struct TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Outpost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectListUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

