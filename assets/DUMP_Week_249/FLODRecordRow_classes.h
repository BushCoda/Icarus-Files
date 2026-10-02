// WidgetBlueprintGeneratedClass FLODRecordRow.FLODRecordRow_C
struct UFLODRecordRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText FLODRecordName; 
	struct UFLODRecord* FLODRecord; 

	void SetFLODRecord(struct UFLODRecord* FLODRecord); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_FLODRecordRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

