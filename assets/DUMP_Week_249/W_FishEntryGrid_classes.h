// WidgetBlueprintGeneratedClass W_FishEntryGrid.W_FishEntryGrid_C
struct UW_FishEntryGrid_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* FishImage; 
	struct UTextBlock* Percent; 
	struct FFishDataEnum Fish; 
	float PercentValue; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_FishEntryGrid(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

