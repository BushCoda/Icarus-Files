// WidgetBlueprintGeneratedClass UMG_OutOfBounds.UMG_OutOfBounds_C
struct UUMG_OutOfBounds_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeIn; 
	struct UBorder* StaticImage; 
	struct UTextBlock* TimerText; 
	float RemainingTime; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayFadeIn(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_OutOfBounds(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

