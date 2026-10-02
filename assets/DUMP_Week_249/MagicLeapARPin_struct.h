// Enum MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8 {
	SingleUserSingleSession = 0,
	SingleUserMultiSession = 1,
	MultiUserMultiSession = 2,
	EMagicLeapARPinType_MAX = 3
};

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	None = 0,
	LowMapQuality = 1,
	UnableToLocalize = 2,
	Unavailable = 3,
	PrivilegeDenied = 4,
	InvalidParam = 5,
	UnspecifiedFailure = 6,
	PrivilegeRequestPending = 7,
	StartupPending = 8,
	SharedWorldNotEnabled = 9,
	NotImplemented = 10,
	PinNotFound = 11,
	EMagicLeapPassableWorldError_MAX = 12
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
struct FMagicLeapARPinState {
	float Confidence; 
	float ValidRadius; 
	float RotationError; 
	float TranslationError; 
	enum class EMagicLeapARPinType PinType; 
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
struct FMagicLeapARPinQuery {
	struct TSet<enum class EMagicLeapARPinType> Types; 
	int32_t MaxResults; 
	struct FVector TargetPoint; 
	float Radius; 
	bool bSorted; 
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
struct FMagicLeapARPinObjectIdList {
	struct TSet<struct FString> ObjectIdList; 
};

