// Enum FMODStudio.EFMODEventProperty
enum class EFMODEventProperty : uint8 {
	ChannelPriority = 0,
	ScheduleDelay = 1,
	ScheduleLookahead = 2,
	MinimumDistance = 3,
	MaximumDistance = 4,
	Count = 5,
	EFMODEventProperty_MAX = 6
};

// Enum FMODStudio.EFMODValid
enum class EFMODValid : uint8 {
	Valid = 0,
	NotValid = 1,
	EFMODValid_MAX = 2
};

// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class EFMOD_STUDIO_STOP_MODE : uint8 {
	ALLOWFADEOUT = 0,
	IMMEDIATE = 1,
	EFMOD_STUDIO_STOP_MODE_MAX = 2
};

// Enum FMODStudio.EFMODEventControlKey
enum class EFMODEventControlKey : uint8 {
	Stop = 0,
	Play = 1,
	EFMODEventControlKey_MAX = 2
};

// Enum FMODStudio.EFMODSpeakerMode
enum class EFMODSpeakerMode : uint8 {
	Stereo = 0,
	Surround_5_2 = 1,
	Surround_7_2 = 2,
	EFMODSpeakerMode_MAX = 3
};

// Enum FMODStudio.EFMODLogging
enum class EFMODLogging : uint8 {
	LEVEL_NONE = 0,
	LEVEL_ERROR = 1,
	LEVEL_WARNING = 2,
	LEVEL_LOG = 4,
	LEVEL_MAX = 5
};

// ScriptStruct FMODStudio.FMODAssetLookupRow
struct FFMODAssetLookupRow : FTableRowBase {
	struct FString PackageName; 
	struct FString AssetName; 
};

// ScriptStruct FMODStudio.FMODOcclusionDetails
struct FFMODOcclusionDetails {
	bool bEnableOcclusion; 
	enum class ECollisionChannel OcclusionTraceChannel; 
	bool bUseComplexCollisionForOcclusion; 
};

// ScriptStruct FMODStudio.FMODAttenuationDetails
struct FFMODAttenuationDetails {
	char bOverrideAttenuation : 1; 
	float MinimumDistance; 
	float MaximumDistance; 
};

// ScriptStruct FMODStudio.FMODLocalizedBankTable
struct FFMODLocalizedBankTable : FTableRowBase {
	struct UDataTable* Banks; 
};

// ScriptStruct FMODStudio.FMODLocalizedBankRow
struct FFMODLocalizedBankRow : FTableRowBase {
	struct FString Path; 
};

// ScriptStruct FMODStudio.FMODEventInstance
struct FFMODEventInstance {
};

// ScriptStruct FMODStudio.FMODEventControlChannel
struct FFMODEventControlChannel : FMovieSceneByteChannel {
};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate {
	struct FFMODEventControlChannel ControlKeys; 
};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct FMODStudio.FMODProjectLocale
struct FFMODProjectLocale {
	struct FString LocaleName; 
	struct FString LocaleCode; 
	bool bDefault; 
};

// ScriptStruct FMODStudio.CustomPoolSizes
struct FCustomPoolSizes {
	int32_t Desktop; 
	int32_t Mobile; 
	int32_t PS4; 
	int32_t SWITCH; 
	int32_t XboxOne; 
};

