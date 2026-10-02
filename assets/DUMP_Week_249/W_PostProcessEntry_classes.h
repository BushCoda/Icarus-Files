// WidgetBlueprintGeneratedClass W_PostProcessEntry.W_PostProcessEntry_C
struct UW_PostProcessEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate EntryChanged; 
	struct FMulticastInlineDelegate EntryFunction; 
	struct FFeatureLevelsEnum RequiredFeatureLevel; 

	bool IsEntryEnabled(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void InitFromDefaultValue(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSaveGameValue(struct FFPostProcessSaveData& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdatePostProcess(struct FPostProcessSettings& Settings); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_PostProcessEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void EntryFunction__DelegateSignature(struct FString Param); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void EntryChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

