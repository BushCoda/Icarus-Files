// BlueprintGeneratedClass BP_SpectatorSaveGame.BP_SpectatorSaveGame_C
struct UBP_SpectatorSaveGame_C : USaveGame {
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset1; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset2; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset3; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset5; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset4; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset6; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset7; 
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset8; 
	int32_t Index; 
	struct TArray<struct FText> PresetNames; 

	void SetPresetName(struct FText PresetName, int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetPresetName(int32_t Index); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPreset(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset); // (Public|BlueprintCallable|BlueprintEvent)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> GetPreset(int32_t Index); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

