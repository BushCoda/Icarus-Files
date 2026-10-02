// WidgetBlueprintGeneratedClass ScriptedEventRow.ScriptedEventRow_C
struct UScriptedEventRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText EventName; 
	struct FScriptedEventsRowHandle ScriptedEvent; 

	void AddScriptedEvent(struct FText RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ScriptedEventRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

