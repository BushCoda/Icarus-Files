// WidgetBlueprintGeneratedClass UMG_ShelterDisplay.UMG_ShelterDisplay_C
struct UUMG_ShelterDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LowPulse; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UProgressBar* Level; 
	struct UImage* ShelterIcon; 
	struct UTextBlock* ShelterText; 
	float CurrentProgress; 
	bool LowImage; 
	struct FProgressBarStyle NormalStyle; 
	bool UsePlayerShelter; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetProgress(float Percent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ShelterDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

