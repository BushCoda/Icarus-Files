// WidgetBlueprintGeneratedClass UMG_TalentView_Workshop.UMG_TalentView_Workshop_C
struct UUMG_TalentView_Workshop_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* ArchetypeBox; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* Gradient; 
	struct UWidgetSwitcher* GraphWidgetSwitcher; 
	struct UImage* Noise; 
	struct UUMG_PhysicalKeyPrompt_C* Pan; 
	struct UImage* Pattern; 
	struct UImage* Pattern_2; 
	struct UUMG_PhysicalKeyPrompt_C* QuickCraft; 
	struct UUMG_PhysicalKeyPrompt_C* Select_2; 
	struct UUMG_CurrencyExchangeButton_C* UMG_CurrencyExchangeButton; 
	struct UUMG_CurrencyExchangeRedToRen_C* UMG_CurrencyExchangeRedToRen; 
	struct UUMG_CurrencyExchangeYellowToRen_C* UMG_CurrencyExchangeYellowToRen; 
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; 
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; 
	struct UUMG_TalentFilter_C* UMG_TalentFilter; 
	struct UUMG_TreePoints_C* UMG_TreePoints; 
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; 
	struct FText AvailableTalents; 
	bool Initialised; 

	struct UTalentGraphWidget* GetGraphWidget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // (BlueprintCallable|BlueprintEvent)
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // (Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ResearchResult(bool bSuccess); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Nothing3(); // (BlueprintCallable|BlueprintEvent)
	void Nothing2(); // (BlueprintCallable|BlueprintEvent)
	void ReplicationResult2(bool bSuccess, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentView_Workshop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

