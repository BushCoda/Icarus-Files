// WidgetBlueprintGeneratedClass UMG_EncumbranceBarActor.UMG_EncumbranceBarActor_C
struct UUMG_EncumbranceBarActor_C : UUserWidget {
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
	struct AActor* LinkedActor; 

	void SetWeightBar(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetWeightText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void WeightUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_EncumbranceBarActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

