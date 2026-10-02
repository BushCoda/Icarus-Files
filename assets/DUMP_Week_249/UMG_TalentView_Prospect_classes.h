// WidgetBlueprintGeneratedClass UMG_TalentView_Prospect.UMG_TalentView_Prospect_C
struct UUMG_TalentView_Prospect_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UImage* BackgroundImage; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* invertedarrow; 
	struct UImage* invertedarrow_2; 
	struct UImage* invertedarrow_3; 
	struct UImage* invertedarrow_4; 
	struct UImage* Noise; 
	struct UUMG_PhysicalKeyPrompt_C* Pan; 
	struct UImage* Pattern; 
	struct UUMG_PhysicalKeyPrompt_C* Select_2; 
	struct UImage* Shadow; 
	struct UImage* Shadow_2; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; 
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TerrainSelection_C* UMG_TerrainSelection; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct FLinearColor FALSE; 
	struct FMulticastInlineDelegate ProspectSelected; 
	struct TMap<struct FTalentsRowHandle, struct FProspectInfo> ProspectInfos; 
	struct TMap<struct FString, struct FTalentsRowHandle> ProspectDTKeys; 
	struct FMulticastInlineDelegate ProspectListUpdated; 
	bool SelectingTerrain; 
	struct TMap<struct FTalentArchetypesRowHandle, struct TSoftObjectPtr<UTexture2D>> Archetype; 

	void OnLockedMissionsUpdated(struct TArray<struct FTimeLockedMissionInfo>& NewLockedMissions, struct TArray<struct FTimeLockedMissionInfo>& RemovedLockedMissions); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UTalentGraphWidget* GetGraphWidget_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct UTalentModelInterface* TalentModel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFail_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ProspectClicked(struct FTalentsRowHandle Talent, struct FText Error); // (BlueprintCallable|BlueprintEvent)
	void GenerateProspects(struct TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // (BlueprintEvent)
	void UpdateTerrainSelection(); // (BlueprintCallable|BlueprintEvent)
	void ReturnToTerrainSelection(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetSelectedArchetype(struct FTalentArchetypesRowHandle& Archetype); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetEncryptedState(enum class EOnProspectAvailability Status); // (BlueprintCallable|BlueprintEvent)
	void SetIsOpenWorld(bool OpenWorld); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Prospect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectListUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo, struct FText Error); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

