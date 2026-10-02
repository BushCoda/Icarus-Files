// WidgetBlueprintGeneratedClass EpicRow.EpicRow_C
struct UEpicRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText SetupName; 
	struct FEpicCreaturesRowHandle EpicName; 

	void AddAI(struct FText RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_EpicRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

