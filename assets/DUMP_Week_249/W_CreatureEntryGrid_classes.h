// WidgetBlueprintGeneratedClass W_CreatureEntryGrid.W_CreatureEntryGrid_C
struct UW_CreatureEntryGrid_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* CreatureImage; 
	struct UTextBlock* Name; 
	struct UTextBlock* Name_2; 
	struct FAISetupRowHandle Creature; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_CreatureEntryGrid(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

