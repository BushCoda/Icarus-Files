// WidgetBlueprintGeneratedClass UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C
struct UUMG_EncumbranceBarLight_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UProgressBar* EncumbranceBar; 
	struct UTextBlock* Title; 
	struct UImage* WeightIcon; 
	struct UTextBlock* WeightText; 
	struct FSlateColor Green; 
	struct FSlateColor Red; 
	bool Initialised; 
	bool NeedsUpdate; 

	void SetWeightBar(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetWeightText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnPlayerWeightUpdated(int32_t CurrentWeight); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_EncumbranceBarLight(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

