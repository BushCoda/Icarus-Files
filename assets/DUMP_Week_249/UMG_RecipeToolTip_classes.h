// WidgetBlueprintGeneratedClass UMG_RecipeToolTip.UMG_RecipeToolTip_C
struct UUMG_RecipeToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeIn; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UHorizontalBox* Elements; 
	struct UTextBlock* FishInputText; 
	struct UHorizontalBox* HorizontalBox_Variations; 
	struct UImage* Image_53; 
	struct UTextBlock* Name; 
	struct UBorder* NameBorder; 
	struct UHorizontalBox* OutputBox; 
	struct UTextBlock* PossibleOutputs; 
	struct UTextBlock* PromptText; 
	struct USpacer* Spacer; 
	struct USpacer* Spacer_396; 
	struct UTextBlock* TextBlock_217; 
	struct UUMG_IcarusGrid_C* UMG_IcarusGrid; 
	struct UUMG_ItemStats_C* UMG_ItemStats_C_4; 
	struct UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer; 
	struct UUMG_ValidItemAttachments_C* UMG_ValidItemAttachments; 
	struct UUMG_ValidMounts_C* UMG_ValidMounts; 
	struct UTextBlock* VariationText; 
	struct FProcessingItem Recipe; 
	struct AActor* LinkedActor; 
	bool UpdateStateRecipe; 
	bool ShowOutput; 
	struct AActor* CraftingActor; 
	struct FItemData ClientRequestAlterationsItem; 

	bool HasFishInput(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClientRequestAlterationData(struct FItemData& Item); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetAlterationPreview(struct FItemData Item, struct TArray<struct FAlterationsEnum>& CraftedAlterations); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTrigger(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void FullUpdate(); // (BlueprintCallable|BlueprintEvent)
	void OnClientRequestAlterationDataResponse(struct TArray<struct FItemResourceGeneratedAlterationResult>& Results); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnVisibilityUpdated(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeToolTip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

