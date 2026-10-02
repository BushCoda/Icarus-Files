// WidgetBlueprintGeneratedClass UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C
struct UUMG_TalentView_Blueprint_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UImage* Gradient; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_114; 
	struct UImage* Pattern; 
	struct UImage* Pattern_2; 
	struct UUMG_BasicButton_2_C* RefreshBlueprintsButton; 
	struct UUMG_ButtonIcon_C* RefreshButton; 
	struct UTextBlock* TextBlock_93; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TreePoints_C* UMG_TreePoints; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct TMap<struct FTalentArchetypesRowHandle, struct TSoftObjectPtr<UTexture2D>> Backgrounds; 

	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void BndEvt__UMG_TalentView_Blueprint_RefreshButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Blueprint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

