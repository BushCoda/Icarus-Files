// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8 {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};

// ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions {
	struct FMediaPlayerTrackOptions Tracks; 
	struct FTimespan SeekTime; 
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen; 
	enum class EMediaPlayerOptionBooleanOverride Loop; 
};

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
struct FMediaPlayerTrackOptions {
	int32_t Audio; 
	int32_t Caption; 
	int32_t MetaData; 
	int32_t Script; 
	int32_t Subtitle; 
	int32_t Text; 
	int32_t Video; 
};

