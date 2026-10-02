// WidgetBlueprintGeneratedClass CF_PrintWorldStats.CF_PrintWorldStats_C
struct UCF_PrintWorldStats_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FStatsRowHandle, int32_t> WorldStats; 

	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_PrintWorldStats(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

