// WidgetBlueprintGeneratedClass UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C
struct UUMG_MetaResourceDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGridPanel* CurrencyGrid; 
	bool Initialised; 
	struct TMap<struct FMetaCurrencyRowHandle, struct UUMG_WorkshopCostLarge_C*> Row Handle; 
	bool UseOverride; 
	struct TArray<struct FMetaResource> OverrideResources; 
	int32_t MaxItemsPerRow; 
	float GridVerticalSpacing; 

	void CreateWidgets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TryInit(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MetaResourceDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

