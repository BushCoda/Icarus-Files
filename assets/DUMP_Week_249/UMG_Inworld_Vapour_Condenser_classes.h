// WidgetBlueprintGeneratedClass UMG_Inworld_Vapour_Condenser.UMG_Inworld_Vapour_Condenser_C
struct UUMG_Inworld_Vapour_Condenser_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* WaveProgressAnimation; 
	struct UWidgetAnimation* BorderAnimation; 
	struct UOverlay* ActiveOverlay; 
	struct UTextBlock* CompletionsCount; 
	struct UOverlay* DeactiveOverlay; 
	struct UOverlay* EnzymeOverlay; 
	struct UOverlay* ExoticOverlay; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_96; 
	struct UTextBlock* RewardText; 
	struct UTextBlock* StatusText; 
	struct UProgressBar* WaveProgress; 
	struct UTextBlock* WaveProgressText; 
	struct UTextBlock* WaveText; 

	void UpdateCompletions(int32_t CurrentCompletions, int32_t MaxCompletions); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update State(bool Active, bool Has Material, bool Can Harvest Exotics); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Wave(int32_t Current Wave, struct FHordeRowHandle Current Horde, float Progress); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Inworld_Vapour_Condenser(int32_t EntryPoint); // (Final|UbergraphFunction)
};

