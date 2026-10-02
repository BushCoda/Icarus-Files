// WidgetBlueprintGeneratedClass UMG_Titlebar.UMG_Titlebar_C
struct UUMG_Titlebar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TitleText; 
	struct FText Text; 
	bool DisplayWeight; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Titlebar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

