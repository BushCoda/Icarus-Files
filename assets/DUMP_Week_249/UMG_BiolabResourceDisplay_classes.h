// WidgetBlueprintGeneratedClass UMG_BiolabResourceDisplay.UMG_BiolabResourceDisplay_C
struct UUMG_BiolabResourceDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGridPanel* CurrencyGrid; 
	struct USpacer* Spacer_45; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	bool Initialised; 
	struct TMap<struct FMetaCurrencyRowHandle, struct UUMG_WorkshopCostLarge_C*> Row Handle; 
	bool UseOverride; 
	struct TArray<struct FMetaResource> OverrideResources; 
	int32_t MaxItemsPerRow; 
	float GridVerticalSpacing; 
	bool bBiomassOnly; 
	bool bShowExchangeButton; 
	struct UUMG_Biolab_Exchange_C* ExchangeUI; 

	void CreateWidgets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TryInit(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BiolabResourceDisplay_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnPurchaseComplete(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BiolabResourceDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

