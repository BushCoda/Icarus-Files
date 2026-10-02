// WidgetBlueprintGeneratedClass UMG_TalentView_Mount.UMG_TalentView_Mount_C
struct UUMG_TalentView_Mount_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UImage* Arrow; 
	struct UImage* Arrow1; 
	struct UImage* Arrow3; 
	struct UImage* Arrow4; 
	struct UImage* bot; 
	struct UImage* bot_2; 
	struct UImage* bot_3; 
	struct UImage* CreatureImage; 
	struct UImage* Gradient; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* Mid; 
	struct UImage* Mid_2; 
	struct UImage* Mid_3; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct UTextBlock* PointsText; 
	struct UBorder* TextBorder; 
	struct UImage* Top; 
	struct UImage* Top_2; 
	struct UImage* Top_3; 
	struct UUMG_RefundPoints_C* UMG_RefundPoints; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TreePoints_C* UMG_TreePoints; 
	struct UWidgetSwitcher* WidgetSwitcher_PointAmount; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct UMountCharacterState* OwningMountCharacterState; 
	struct TArray<struct FTalentArchetypesRowHandle> InitialisedArchetypes; 

	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetArchetype(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTalentNotifiers(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Mount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

