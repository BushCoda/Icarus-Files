// WidgetBlueprintGeneratedClass UMG_CraftingQueueElement.UMG_CraftingQueueElement_C
struct UUMG_CraftingQueueElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button_131; 
	struct UBorder* Count; 
	struct UTextBlock* CountText; 
	struct UImage* IconImage; 
	struct UBorder* NumberBorder; 
	struct UTextBlock* TextBlock_35; 
	struct UBorder* TimeBorder; 
	struct UTextBlock* TimeText; 
	struct FMulticastInlineDelegate Selected; 
	struct FProcessingItem CachedRecipe; 
	struct UUMG_RecipeToolTip_C* RecipeToolTip; 
	struct AActor* LinkedActor; 
	int32_t CurrentTotalCount; 
	float TotalCraftTime; 
	int32_t QueueElement; 
	bool FrontOfQueue; 
	float SingleCraftTime; 

	void CalcCraftTime(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetNoRecipe(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTrigger(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetQueueElement(int32_t Number); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasValidRecipe(bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRecipe(struct FProcessingItem& Recipe); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateState(bool Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRecipe(struct FProcessingItem ProcessorRecipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Init(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCraftTime(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void StatsChanged(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CraftingQueueElement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Selected__DelegateSignature(struct UUMG_CraftingQueueElement_C* SelectedRecipe); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

