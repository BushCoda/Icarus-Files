// WidgetBlueprintGeneratedClass UMG_BestiaryExperience.UMG_BestiaryExperience_C
struct UUMG_BestiaryExperience_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UTextBlock* Text; 
	struct FBestiaryDataRowHandle BestiaryGroup; 
	int32_t BestiaryProgress; 
	int32_t BestiaryMaxProgress; 

	void Remove(); // (BlueprintCallable|BlueprintEvent)
	void UpdateBeastAmount(int32_t AdditionalXP); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BestiaryExperience(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

