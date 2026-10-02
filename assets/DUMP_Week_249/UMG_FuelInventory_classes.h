// WidgetBlueprintGeneratedClass UMG_FuelInventory.UMG_FuelInventory_C
struct UUMG_FuelInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* AvailableFuel; 
	struct UUMG_SimpleProgressbar_C* EnergyBar; 
	struct UVerticalBox* Fuel; 
	struct UTextBlock* TextBlock_FuelTime; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_MissingRequirement_Warning_C* UMG_MissingRequirement_Warning; 
	struct AActor* LinkedActor; 
	struct FSlateColor FALSE; 
	struct FSlateColor TRUE; 

	void GetTransmutationTimeRemaining(struct FText& Days, struct FText& Hour, struct FText& Mins, struct FText& Secs); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetTransmutationEnergyRemaining(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnOutOfFuel(); // (BlueprintCallable|BlueprintEvent)
	void UpdateFuelTimer(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FuelInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

