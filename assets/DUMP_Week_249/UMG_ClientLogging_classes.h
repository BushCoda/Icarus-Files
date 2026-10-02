// WidgetBlueprintGeneratedClass UMG_ClientLogging.UMG_ClientLogging_C
struct UUMG_ClientLogging_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UListView* LogList; 
	int32_t MaxListItems; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLogEntryAdded(struct FIcarusLogEntry& LogEntry); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitLogList(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ClientLogging(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

