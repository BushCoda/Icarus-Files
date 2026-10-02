// WidgetBlueprintGeneratedClass LoadoutRow.LoadoutRow_C
struct ULoadoutRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText LoadoutName; 

	void AddLoadout(struct FName Loadout); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_LoadoutRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

