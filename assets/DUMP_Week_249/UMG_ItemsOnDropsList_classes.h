// WidgetBlueprintGeneratedClass UMG_ItemsOnDropsList.UMG_ItemsOnDropsList_C
struct UUMG_ItemsOnDropsList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* ItemsOnDropsContainer; 
	struct UVerticalBox* ItemsOnDropsPanel; 
	struct UBorder* NoItemsDeployedMessage; 
	struct UTextBlock* Text_ClickToReclaim; 
	bool Initialised; 
	bool EDITOR_ShowFakeProspectData; 
	bool CanReclaimLoadouts; 

	void LoadOnDropItems(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLoadoutInsuranceClaimed(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLoadoutDeleted(); // (BlueprintCallable|BlueprintEvent)
	void RebuildLoadoutList(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemsOnDropsList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

