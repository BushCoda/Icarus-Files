// WidgetBlueprintGeneratedClass UMG_BeehiveBreeding.UMG_BeehiveBreeding_C
struct UUMG_BeehiveBreeding_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* BenchName; 
	struct UImage* Image_179; 
	struct UTextBlock* ResourcesPerMin_2; 
	struct UUMG_BeehiveUpgradeLock_C* UMG_BeehiveUpgradeLock; 
	struct UUMG_ExtractionElement_C* UMG_ExtractionElement; 
	struct UUMG_InventoryItemWithBackgroundImage_C* UMG_InventoryItemWithBackgroundImage; 
	struct USizeBox* Upgrade; 
	struct AActor* LinkedActor; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialize(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void UpdateUpgrades(bool Active); // (BlueprintCallable|BlueprintEvent)
	void UpdateTick(float Progress); // (BlueprintCallable|BlueprintEvent)
	void UpdateText(struct FText InText); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BeehiveBreeding(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

