// WidgetBlueprintGeneratedClass UMG_RecipeElementBase.UMG_RecipeElementBase_C
struct UUMG_RecipeElementBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t CurrentAmount; 
	struct AActor* LinkedActor; 
	struct UUserWidget* CachedToolTip; 
	bool DisableTooltip; 
	int32_t Multiplier; 

	void UpdateTooltip(enum class ProcessorPreview State); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateTooltip(struct UUserWidget*& Tooltip); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckElement(bool& bCanSatisfy); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetPlayerInventories(struct TArray<struct UInventory*>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CurrentAmountUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetCurrentAmount(int32_t CurrentAmount); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateStateRecipe(bool ForceSetColor, enum class ProcessorPreview ForcedColor); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElementBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

