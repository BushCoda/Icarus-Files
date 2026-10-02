// WidgetBlueprintGeneratedClass UMG_Credits_Section.UMG_Credits_Section_C
struct UUMG_Credits_Section_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* LargeSections; 
	struct UTextBlock* NameCredits; 
	struct UTextBlock* SubSections; 
	struct FText Title; 
	struct FText Sub Title; 
	struct FText Credits; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Credits_Section(int32_t EntryPoint); // (Final|UbergraphFunction)
};

