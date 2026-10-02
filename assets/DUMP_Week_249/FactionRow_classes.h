// WidgetBlueprintGeneratedClass FactionRow.FactionRow_C
struct UFactionRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText SetupName; 
	struct FFactionMissionsRowHandle FactionRow; 

	void AddFaction(struct FText RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_FactionRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

