// WidgetBlueprintGeneratedClass UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C
struct UUMG_CropPlot_CultivationRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* AvailableFuel; 
	struct UImage* divider; 
	struct UProgressBar* GrowthProgressBar; 
	struct UUMG_ItemDisplay_C* UMG_ItemDisplay; 
	struct UCultivation* Cultivation; 
	float MaxCultivationTime; 
	int32_t CurrentCultivationStage; 
	float ElapsedTime; 

	void CalculateElapsedTime(float& ElapsedGrowthTime); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void CalculateMaturityPercentage(float& PercentMature); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetupIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetCultivation(struct UCultivation* Cultivation); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CropPlot_CultivationRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

