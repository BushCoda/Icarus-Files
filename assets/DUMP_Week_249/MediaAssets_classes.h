// Class MediaAssets.MediaSource
struct UMediaSource : UObject {

	bool Validate(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void SetMediaOptionString(struct FName& Key, struct FString Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMediaOptionFloat(struct FName& Key, float Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMediaOptionBool(struct FName& Key, bool Value); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FString GetUrl(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MediaAssets.BaseMediaSource
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; 
};

// Class MediaAssets.FileMediaSource
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; 
	bool PrecacheFile; 

	void SetFilePath(struct FString Path); // (Final|Native|Public|BlueprintCallable)
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class MediaAssets.MediaComponent
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; 
	struct UMediaPlayer* MediaPlayer; 

	struct UMediaTexture* GetMediaTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMediaPlayer* GetMediaPlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MediaAssets.MediaTimeStampInfo
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; 
	int64_t SequenceIndex; 
};

// Class MediaAssets.MediaPlayer
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; 
	struct FMulticastInlineDelegate OnMediaClosed; 
	struct FMulticastInlineDelegate OnMediaOpened; 
	struct FMulticastInlineDelegate OnMediaOpenFailed; 
	struct FMulticastInlineDelegate OnPlaybackResumed; 
	struct FMulticastInlineDelegate OnPlaybackSuspended; 
	struct FMulticastInlineDelegate OnSeekCompleted; 
	struct FMulticastInlineDelegate OnTracksChanged; 
	struct FTimespan CacheAhead; 
	struct FTimespan CacheBehind; 
	struct FTimespan CacheBehindGame; 
	bool NativeAudioOut; 
	bool PlayOnOpen; 
	char Shuffle : 1; 
	char Loop : 1; 
	struct UMediaPlaylist* Playlist; 
	int32_t PlaylistIndex; 
	struct FTimespan TimeDelay; 
	float HorizontalFieldOfView; 
	float VerticalFieldOfView; 
	struct FRotator ViewRotation; 
	struct FGuid PlayerGuid; 

	bool SupportsSeeking(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool SupportsScrubbing(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool SupportsRate(float Rate, bool Unthinned); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // (Final|Native|Public|BlueprintCallable)
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // (Final|Native|Public|BlueprintCallable)
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable)
	void SetTimeDelay(struct FTimespan TimeDelay); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool SetRate(float Rate); // (Final|Native|Public|BlueprintCallable)
	bool SetNativeVolume(float Volume); // (Final|Native|Public|BlueprintCallable)
	void SetMediaOptions(struct UMediaSource* Options); // (Final|Native|Public|BlueprintCallable)
	bool SetLooping(bool Looping); // (Final|Native|Public|BlueprintCallable)
	void SetDesiredPlayerName(struct FName PlayerName); // (Final|Native|Public|BlueprintCallable)
	void SetBlockOnTime(struct FTimespan& Time); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // (Final|Native|Public|BlueprintCallable)
	bool Seek(struct FTimespan& Time); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool Rewind(); // (Final|Native|Public|BlueprintCallable)
	bool Reopen(); // (Final|Native|Public|BlueprintCallable)
	bool Previous(); // (Final|Native|Public|BlueprintCallable)
	void PlayAndSeek(); // (Final|Native|Public|BlueprintCallable)
	bool Play(); // (Final|Native|Public|BlueprintCallable)
	bool Pause(); // (Final|Native|Public|BlueprintCallable)
	bool OpenUrl(struct FString URL); // (Final|Native|Public|BlueprintCallable)
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool OpenSource(struct UMediaSource* MediaSource); // (Final|Native|Public|BlueprintCallable)
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // (Final|Native|Public|BlueprintCallable)
	bool OpenFile(struct FString FilePath); // (Final|Native|Public|BlueprintCallable)
	bool Next(); // (Final|Native|Public|BlueprintCallable)
	bool IsReady(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPreparing(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPaused(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLooping(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsConnecting(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsClosed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsBuffering(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasError(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetViewRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetVerticalFieldOfView(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetUrl(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMediaTimeStampInfo* GetTimeStamp(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTimespan GetTimeDelay(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTimespan GetTime(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPlaylistIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMediaPlaylist* GetPlaylist(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetPlayerName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetMediaName(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetHorizontalFieldOfView(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTimespan GetDuration(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FName GetDesiredPlayerName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void Close(); // (Final|Native|Public|BlueprintCallable)
	bool CanPlayUrl(struct FString URL); // (Final|Native|Public|BlueprintCallable)
	bool CanPlaySource(struct UMediaSource* MediaSource); // (Final|Native|Public|BlueprintCallable)
	bool CanPause(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MediaAssets.MediaPlaylist
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; 

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // (Final|Native|Public|BlueprintCallable)
	bool RemoveAt(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool Remove(struct UMediaSource* MediaSource); // (Final|Native|Public|BlueprintCallable)
	int32_t Num(); // (Final|Native|Public|BlueprintCallable)
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // (Final|Native|Public|BlueprintCallable)
	struct UMediaSource* GetRandom(int32_t& OutIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UMediaSource* GetNext(int32_t& InOutIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UMediaSource* Get(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool AddUrl(struct FString URL); // (Final|Native|Public|BlueprintCallable)
	bool AddFile(struct FString FilePath); // (Final|Native|Public|BlueprintCallable)
	bool Add(struct UMediaSource* MediaSource); // (Final|Native|Public|BlueprintCallable)
};

// Class MediaAssets.MediaSoundComponent
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; 
	bool DynamicRateAdjustment; 
	float RateAdjustmentFactor; 
	struct FFloatRange RateAdjustmentRange; 
	struct UMediaPlayer* MediaPlayer; 

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // (Final|Native|Public|BlueprintCallable)
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // (Final|Native|Public|BlueprintCallable)
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // (Final|Native|Public|BlueprintCallable)
	struct UMediaPlayer* GetMediaPlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetEnvelopeValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class MediaAssets.MediaTexture
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
	bool AutoClear; 
	struct FLinearColor ClearColor; 
	bool EnableGenMips; 
	char NumMips; 
	bool NewStyleOutput; 
	enum class MediaTextureOutputFormat OutputFormat; 
	float CurrentAspectRatio; 
	enum class MediaTextureOrientation CurrentOrientation; 
	struct UMediaPlayer* MediaPlayer; 

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // (Final|Native|Public|BlueprintCallable)
	int32_t GetWidth(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTextureNumMips(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMediaPlayer* GetMediaPlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetHeight(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAspectRatio(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MediaAssets.PlatformMediaSource
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; 
};

// Class MediaAssets.StreamMediaSource
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; 
};

// Class MediaAssets.TimeSynchronizableMediaSource
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; 
	int32_t FrameDelay; 
	double TimeDelay; 
};

