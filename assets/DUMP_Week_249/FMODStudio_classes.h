// Class FMODStudio.FMODAmbientSound
struct AFMODAmbientSound : AActor {
	struct UFMODAudioComponent* AudioComponent; 
};

// Class FMODStudio.FMODAsset
struct UFMODAsset : UObject {
	struct FGuid AssetGuid; 
};

// Class FMODStudio.FMODAudioComponent
struct UFMODAudioComponent : USceneComponent {
	struct UFMODEvent* Event; 
	struct TMap<struct FName, float> ParameterCache; 
	struct FString ProgrammerSoundName; 
	char bEnableTimelineCallbacks : 1; 
	bool bUseListenerRotation; 
	char bAutoDestroy : 1; 
	char bStopWhenOwnerDestroyed : 1; 
	struct FMulticastInlineDelegate OnEventStopped; 
	struct FMulticastInlineDelegate OnTimelineMarker; 
	struct FMulticastInlineDelegate OnTimelineBeat; 
	struct FFMODAttenuationDetails AttenuationDetails; 
	struct FFMODOcclusionDetails OcclusionDetails; 

	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void SetVolume(float Volume); // (Final|Native|Public|BlueprintCallable)
	void SetTimelinePosition(int32_t Time); // (Final|Native|Public|BlueprintCallable)
	void SetProperty(enum class EFMODEventProperty Property, float Value); // (Final|Native|Public|BlueprintCallable)
	void SetProgrammerSoundName(struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetPitch(float Pitch); // (Final|Native|Public|BlueprintCallable)
	void SetPaused(bool paused); // (Final|Native|Public|BlueprintCallable)
	void SetParameter(struct FName Name, float Value); // (Final|Native|Public|BlueprintCallable)
	void SetEvent(struct UFMODEvent* NewEvent, bool bKeepParameterValues); // (Final|Native|Public|BlueprintCallable)
	void Release(); // (Final|Native|Public|BlueprintCallable)
	void Play(); // (Final|Native|Public|BlueprintCallable)
	void KeyOff(); // (Final|Native|Public|BlueprintCallable)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable)
	int32_t GetTimelinePosition(); // (Final|Native|Public|BlueprintCallable)
	float GetProperty(enum class EFMODEventProperty Property); // (Final|Native|Public|BlueprintCallable)
	void GetParameterValue(struct FName Name, float& UserValue, float& FinalValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetParameter(struct FName Name); // (Final|Native|Public|BlueprintCallable)
	int32_t GetLength(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class FMODStudio.FMODBank
struct UFMODBank : UFMODAsset {
};

// Class FMODStudio.FMODBankLookup
struct UFMODBankLookup : UObject {
	struct UDataTable* DataTable; 
	struct FString MasterBankPath; 
	struct FString MasterAssetsBankPath; 
	struct FString MasterStringsBankPath; 
};

// Class FMODStudio.FMODBlueprintStatics
struct UFMODBlueprintStatics : UBlueprintFunctionLibrary {

	void VCASetVolume(struct UFMODVCA* Vca, float Volume); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadBankSampleData(struct UFMODBank* Bank); // (Final|Native|Static|Public|BlueprintCallable)
	void UnloadBank(struct UFMODBank* Bank); // (Final|Native|Static|Public|BlueprintCallable)
	void SetOutputDriverByName(struct FString NewDriverName); // (Final|Native|Static|Public|BlueprintCallable)
	void SetOutputDriverByIndex(int32_t NewDriverIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void SetLocale(struct FString Locale); // (Final|Native|Static|Public|BlueprintCallable)
	void SetGlobalParameterByName(struct FName Name, float Value); // (Final|Native|Static|Public|BlueprintCallable)
	struct UFMODAudioComponent* PlayEventAttached(struct UFMODEvent* Event, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy, enum class EFMODValid& IsValid, bool bUseListenerRotation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FFMODEventInstance PlayEventAtLocation(struct UObject* WorldContextObject, struct UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay, bool bUseListenerRotation); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FFMODEventInstance PlayEvent2D(struct UObject* WorldContextObject, struct UFMODEvent* Event, bool bAutoPlay); // (Final|Native|Static|Public|BlueprintCallable)
	void MixerSuspend(); // (Final|Native|Static|Public|BlueprintCallable)
	void MixerResume(); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadBankSampleData(struct UFMODBank* Bank); // (Final|Native|Static|Public|BlueprintCallable)
	void LoadBank(struct UFMODBank* Bank, bool bBlocking, bool bLoadSampleData); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsBankLoaded(struct UFMODBank* Bank); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FString> GetOutputDrivers(); // (Final|Native|Static|Public|BlueprintCallable)
	void GetGlobalParameterValueByName(struct FName Name, float& UserValue, float& FinalValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	float GetGlobalParameterByName(struct FName Name); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FFMODEventInstance> FindEventInstances(struct UObject* WorldContextObject, struct UFMODEvent* Event); // (Final|Native|Static|Public|BlueprintCallable)
	struct UFMODEvent* FindEventByName(struct FString Name); // (Final|Native|Static|Public|BlueprintCallable)
	struct UFMODAsset* FindAssetByName(struct FString Name); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceStop(struct FFMODEventInstance EventInstance, bool Release); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceSetVolume(struct FFMODEventInstance EventInstance, float Volume); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceSetTransform(struct FFMODEventInstance EventInstance, struct FTransform& Location); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void EventInstanceSetProperty(struct FFMODEventInstance EventInstance, enum class EFMODEventProperty Property, float Value); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceSetPitch(struct FFMODEventInstance EventInstance, float Pitch); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceSetPaused(struct FFMODEventInstance EventInstance, bool paused); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceSetParameter(struct FFMODEventInstance EventInstance, struct FName Name, float Value); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceRelease(struct FFMODEventInstance EventInstance); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstancePlay(struct FFMODEventInstance EventInstance); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceKeyOff(struct FFMODEventInstance EventInstance); // (Final|Native|Static|Public|BlueprintCallable)
	bool EventInstanceIsValid(struct FFMODEventInstance EventInstance); // (Final|Native|Static|Public|BlueprintCallable)
	void EventInstanceGetParameterValue(struct FFMODEventInstance EventInstance, struct FName Name, float& UserValue, float& FinalValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	float EventInstanceGetParameter(struct FFMODEventInstance EventInstance, struct FName Name); // (Final|Native|Static|Public|BlueprintCallable)
	void BusStopAllEvents(struct UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE stopMode); // (Final|Native|Static|Public|BlueprintCallable)
	void BusSetVolume(struct UFMODBus* Bus, float Volume); // (Final|Native|Static|Public|BlueprintCallable)
	void BusSetPaused(struct UFMODBus* Bus, bool bPaused); // (Final|Native|Static|Public|BlueprintCallable)
	void BusSetMute(struct UFMODBus* Bus, bool bMute); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class FMODStudio.FMODBus
struct UFMODBus : UFMODAsset {
};

// Class FMODStudio.FMODEvent
struct UFMODEvent : UFMODAsset {
};

// Class FMODStudio.FMODEventControlSection
struct UFMODEventControlSection : UMovieSceneSection {
	struct FFMODEventControlChannel ControlKeys; 
};

// Class FMODStudio.FMODEventControlTrack
struct UFMODEventControlTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ControlSections; 
};

// Class FMODStudio.FMODEventParameterTrack
struct UFMODEventParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class FMODStudio.FMODPort
struct UFMODPort : UFMODAsset {
};

// Class FMODStudio.FMODSettings
struct UFMODSettings : UObject {
	bool bLoadAllBanks; 
	bool bLoadAllSampleData; 
	bool bEnableLiveUpdate; 
	bool bEnableEditorLiveUpdate; 
	struct FDirectoryPath BankOutputDirectory; 
	enum class EFMODSpeakerMode OutputFormat; 
	struct TArray<struct FFMODProjectLocale> Locales; 
	bool bVol0Virtual; 
	float Vol0VirtualLevel; 
	int32_t SampleRate; 
	bool bMatchHardwareSampleRate; 
	int32_t RealChannelCount; 
	int32_t TotalChannelCount; 
	int32_t DSPBufferLength; 
	int32_t DSPBufferCount; 
	int32_t FileBufferSize; 
	int32_t StudioUpdatePeriod; 
	struct FString InitialOutputDriverName; 
	bool bLockAllBuses; 
	struct FCustomPoolSizes MemoryPoolSizes; 
	int32_t LiveUpdatePort; 
	int32_t EditorLiveUpdatePort; 
	int32_t ReloadBanksDelay; 
	bool bEnableMemoryTracking; 
	struct TArray<struct FString> PluginFiles; 
	struct FString ContentBrowserPrefix; 
	struct FString ForcePlatformName; 
	struct FString MasterBankName; 
	struct FString SkipLoadBankName; 
	struct FString StudioBankKey; 
	struct FString WavWriterPath; 
	enum class EFMODLogging LoggingLevel; 
	struct FString OcclusionParameter; 
	struct FString AmbientVolumeParameter; 
	struct FString AmbientLPFParameter; 
};

// Class FMODStudio.FMODSnapshot
struct UFMODSnapshot : UFMODEvent {
};

// Class FMODStudio.FMODSnapshotReverb
struct UFMODSnapshotReverb : UReverbEffect {
	struct FGuid AssetGuid; 
};

// Class FMODStudio.FMODVCA
struct UFMODVCA : UFMODAsset {
};

