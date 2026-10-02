// WidgetBlueprintGeneratedClass UMG_ExperienceGained.UMG_ExperienceGained_C
struct UUMG_ExperienceGained_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UTextBlock* Text; 
	struct FExperienceEventsRowHandle ExperienceEvent; 
	struct FString Sign; 
	int32_t GrantedXP; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Remove(); // (BlueprintCallable|BlueprintEvent)
	void UpdateXPAmount(int32_t AdditionalXP); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExperienceGained(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

