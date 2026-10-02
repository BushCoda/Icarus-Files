// WidgetBlueprintGeneratedClass UMG_TalentView_Solo.UMG_TalentView_Solo_C
struct UUMG_TalentView_Solo_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* ActiveMessage; 
	struct UHorizontalBox* ArchetypeBox; 
	struct UImage* bot; 
	struct UImage* bot_2; 
	struct UImage* bot_3; 
	struct UImage* Corner_5; 
	struct UImage* Corner_6; 
	struct UImage* Corner_7; 
	struct UImage* Corner_8; 
	struct UImage* Corner_9; 
	struct UImage* Corner_10; 
	struct UImage* Corner_11; 
	struct UImage* Corner_12; 
	struct UImage* Gradient; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_114; 
	struct UBorder* InactiveMessage; 
	struct UTextBlock* Message_2; 
	struct UTextBlock* Message_3; 
	struct UImage* Mid; 
	struct UImage* Mid_2; 
	struct UImage* Mid_3; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct UUMG_ButtonIcon_C* RefreshButton; 
	struct UOverlay* SoloActiveState; 
	struct UTextBlock* TextBlock_93; 
	struct UImage* Top; 
	struct UImage* Top_2; 
	struct UImage* Top_3; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_RefundPoints_C* UMG_RefundPoints; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TalentSwitcher_C* UMG_TalentSwitcher; 
	struct UUMG_TreePoints_C* UMG_TreePoints; 
	struct UTextBlock* Warning_2; 
	struct UTextBlock* Warning_3; 
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
	void BndEvt__UMG_TalentView_Solo_UMG_TalentSwitcher_K2Node_ComponentBoundEvent_1_SwitchTalents__DelegateSignature(bool Solo); // (BlueprintEvent)
	void BndEvt__UMG_TalentView_Solo_RefreshButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTalentNotifiers(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Solo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SwitchTalents__DelegateSignature(bool Solo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

