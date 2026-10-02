// WidgetBlueprintGeneratedClass UMG_SleepChecks.UMG_SleepChecks_C
struct UUMG_SleepChecks_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* BaseColourBorder; 
	struct UTextBlock* BoxText; 
	struct UButton* ButtonCheck; 
	struct UBorder* CheckboxBorder; 
	struct UImage* CheckIcon; 
	struct UImage* Icon; 
	struct FLinearColor ValidGreen; 
	struct FLinearColor InValidRed; 
	struct FText SleepText; 
	struct FText Tooltip Text Field; 
	struct UObject* IconImage; 

	void UpdateSleepCount(int32_t Count, int32_t Total); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetValidStyle(bool IsValid); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SleepChecks(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

