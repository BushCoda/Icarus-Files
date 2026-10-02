// WidgetBlueprintGeneratedClass BiomeRow.BiomeRow_C
struct UBiomeRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText BiomeName; 
	struct FBiomesRowHandle Biome; 

	void SetBiome(struct FBiomesRowHandle New Biome); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BiomeRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

