// WidgetBlueprintGeneratedClass UMG_LootDisplay.UMG_LootDisplay_C
struct UUMG_LootDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ChanceText; 
	struct UUMG_ItemDisplay_C* UMG_ItemDisplay; 
	struct FItemsStaticRowHandle Item; 
	int32_t Chance; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_LootDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

