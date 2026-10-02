// WidgetBlueprintGeneratedClass Umg_GeneticLineage.Umg_GeneticLineage_C
struct UUmg_GeneticLineage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* GeneticName; 
	int32_t Level; 
	struct FText Progressive; 
	struct FGeneticLineagesRowHandle Lineage; 
	struct FText Flat; 

	void Initialise(struct FGeneticLineagesRowHandle Lineage); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_Umg_GeneticLineage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

