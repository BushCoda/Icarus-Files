// WidgetBlueprintGeneratedClass UMG_TempAndHome.UMG_TempAndHome_C
struct UUMG_TempAndHome_C : UIcarusTemperatureBar {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CoolingDown; 
	struct UWidgetAnimation* WarmingUp; 
	struct UImage* C1; 
	struct UImage* C2; 
	struct UImage* C3; 
	struct UProgressBar* ColdAreaBar; 
	struct UProgressBar* ColdInsulationBar; 
	struct UHorizontalBox* Cooling; 
	struct UImage* ExternalTempIndicator; 
	struct UProgressBar* HotAreaBar; 
	struct UProgressBar* HotInsulationBar; 
	struct UImage* InternalTempIndicator; 
	struct UBorder* TemperatureBorder; 
	struct UImage* w1; 
	struct UImage* w2; 
	struct UImage* w3; 
	struct UHorizontalBox* Warming; 
	int32_t CurrentTemp_1; 
	bool Initialised; 
	struct UCurveLinearColor* TemperatureCurve; 
	float MaxInternalTemp; 
	float MinInternalTemp; 
	struct FTimerHandle AnimationTimer; 
	bool Modified; 
	int32_t PreviousTemp_1; 
	float SafeRegionMin_1; 
	float SafeRegionMax_1; 
	float ExternalTemp_1; 
	float Insulation_1; 
	float Heat_Insulation; 
	float Cold_Insulation; 

	void UpdateTempIndicator(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Stop Animations(); // (BlueprintCallable|BlueprintEvent)
	void UpdateTemperatureColour(struct FLinearColor NewColour); // (Event|Public|BlueprintEvent)
	void CheckAnimations(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TempAndHome(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

