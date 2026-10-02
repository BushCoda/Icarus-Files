// WidgetBlueprintGeneratedClass FishDataRow.FishDataRow_C
struct UFishDataRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText FishName; 
	struct FFishDataRowHandle Fish; 

	void SetFish(struct FFishDataRowHandle NewFish); // (BlueprintCallable|BlueprintEvent)
	void SetAsAll(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_FishDataRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

