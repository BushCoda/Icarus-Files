// WidgetBlueprintGeneratedClass UMG_DarkTitlebar.UMG_DarkTitlebar_C
struct UUMG_DarkTitlebar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TitleText; 
	struct FText Text; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateText(struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DarkTitlebar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

