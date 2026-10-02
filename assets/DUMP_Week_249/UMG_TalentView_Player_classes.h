// WidgetBlueprintGeneratedClass UMG_TalentView_Player.UMG_TalentView_Player_C
struct UUMG_TalentView_Player_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UImage* bot; 
	struct UImage* bot_2; 
	struct UImage* bot_3; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Gradient; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_114; 
	struct UTextBlock* Message; 
	struct UImage* Mid; 
	struct UImage* Mid_2; 
	struct UImage* Mid_3; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct UBorder* SoloTreeMessage; 
	struct UTextBlock* TextBlock_93; 
	struct UImage* Top; 
	struct UImage* Top_2; 
	struct UImage* Top_3; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_RefundPoints_C* UMG_RefundPoints; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TalentSwitcher_C* UMG_TalentSwitcher_2; 
	struct UUMG_TreePoints_C* UMG_TreePoints; 
	struct UTextBlock* Warning; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	struct FLinearColor FALSE; 
	struct FMulticastInlineDelegate SwitchTalents; 

	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ShowSoloWarning(bool SoloTree); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void BndEvt__UMG_TalentView_Player_UMG_TalentSwitcher_1_K2Node_ComponentBoundEvent_2_SwitchTalents__DelegateSignature(bool Solo); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTalentNotifiers(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SwitchTalents__DelegateSignature(bool Solo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

