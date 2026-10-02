// WidgetBlueprintGeneratedClass BestiaryGroupRow.BestiaryGroupRow_C
struct UBestiaryGroupRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText BestiaryName; 
	struct FBestiaryDataRowHandle Bestiary; 

	void SetBestiary(struct FBestiaryDataRowHandle NewBestiary); // (BlueprintCallable|BlueprintEvent)
	void SetAsAll(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BestiaryGroupRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

