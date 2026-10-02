// WidgetBlueprintGeneratedClass UMG_InsurancePanel.UMG_InsurancePanel_C
struct UUMG_InsurancePanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* ColourCornerInsurance; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_219; 
	struct UBorder* InsuranceBG; 
	struct UUMG_Checkbox_C* InsuranceCheck; 
	struct UHorizontalBox* InsuranceCostBox; 
	struct UVerticalBox* InsurancePanel; 
	struct UTextBlock* InsuranceRewardInfo; 
	struct UTextBlock* InsuranceTitle; 
	struct UBorder* OnDropInsuranceInfoBox; 
	bool Initialised; 
	bool LastInsuranceValue; 
	struct UUMG_PlayerLoadoutPanel_C* LoadoutUI; 
	bool ShowOnDropExtraInfo; 

	void UpdateInsuranceAvailable(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInsuranceEnabled(bool& Insured); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FindMetaItemCost(struct FItemsStaticRowHandle ItemRow, bool& Found, struct TArray<struct FWorkshopCost>& Cost); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateInsuranceCost(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLoadoutChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void SetPendingProspectInfo(struct FProspectInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void OnEnvirosuitChanged(); // (BlueprintCallable|BlueprintEvent)
	void OnInsuranceCheckChanged(bool Checked, bool WasForced); // (BlueprintCallable|BlueprintEvent)
	void SetPlayerLoadout(struct UUMG_PlayerLoadoutPanel_C* Loadout); // (BlueprintCallable|BlueprintEvent)
	void ForceInsuranceLocked(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InsurancePanel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

