// BlueprintGeneratedClass BP_PlayerPreviewManager.BP_PlayerPreviewManager_C
struct ABP_PlayerPreviewManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ULevelStreamingDynamic* LoadedStreamingLevel; 
	struct TSoftObjectPtr<UWorld> CurrentWorld; 
	struct ABP_PlayerPreview_HAB_Selection_C* PreviewCharacter; 
	struct FCharacterCosmetics CosmeticData; 
	struct FPreviewCameraSettingsEnum CameraFocus; 
	struct TSoftObjectPtr<UWorld> DesiredDiorama; 
	float CurrentFadeAmount; 

	void EndLevelLoadEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void BeginLevelLoadEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCharacterPreview(struct FCharacterCosmetics CosmeticData, struct FPreviewCameraSettingsEnum NewCameraFocus, struct TSoftObjectPtr<UWorld> Diorama, bool ForceWearSpacesuit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CharacterPreviewUpdated(struct FCharacterCosmetics CosmeticData); // (Protected|BlueprintCallable|BlueprintEvent)
	void UpdateCurrentDiorama(); // (BlueprintCallable|BlueprintEvent)
	void OnLevelLoaded(); // (BlueprintCallable|BlueprintEvent)
	void DisableDioramaPreview(bool IsEndingPlay); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerPreviewManager(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

