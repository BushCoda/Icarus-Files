// WidgetBlueprintGeneratedClass UMG_SpeederBikeHUDInfo.UMG_SpeederBikeHUDInfo_C
struct UUMG_SpeederBikeHUDInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* FuelOverlay; 
	struct UTextBlock* FuelPct; 
	struct UProgressBar* FuelProgress; 
	struct AActor* BoundSpeederBike; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SpeederBikeHUDInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

