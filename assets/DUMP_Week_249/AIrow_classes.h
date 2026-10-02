// WidgetBlueprintGeneratedClass AIrow.AIRow_C
struct UAIRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText SetupName; 
	struct FAISetupRowHandle AISetup; 

	void AddAI(struct FText RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_AIRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

