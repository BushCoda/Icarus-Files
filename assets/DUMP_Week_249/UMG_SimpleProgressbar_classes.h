// WidgetBlueprintGeneratedClass UMG_SimpleProgressbar.UMG_SimpleProgressbar_C
struct UUMG_SimpleProgressbar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UProgressBar* Bar; 
	struct UImage* Image_199; 
	struct UTextBlock* ProgressTitle; 
	struct FLinearColor FillColour; 
	struct FText ProgressBarName; 
	float Progress; 

	float Get_Bar_Percent_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FLinearColor GetBarColours(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SimpleProgressbar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

