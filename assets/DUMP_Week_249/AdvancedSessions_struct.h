// Enum AdvancedSessions.EBPOnlinePresenceState
enum class EBPOnlinePresenceState : uint8 {
	Online = 0,
	Offline = 1,
	Away = 2,
	ExtendedAway = 3,
	DoNotDisturb = 4,
	Chat = 5,
	EBPOnlinePresenceState_MAX = 6
};

// Enum AdvancedSessions.EBPUserPrivileges
enum class EBPUserPrivileges : uint8 {
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateOnline = 2,
	CanUseUserGeneratedContent = 3,
	EBPUserPrivileges_MAX = 4
};

// Enum AdvancedSessions.EOnlineAdvertisementType
enum class EOnlineAdvertisementType : uint8 {
	DontAdvertise = 0,
	ViaPingOnly = 1,
	ViaOnlineService = 2,
	ViaOnlineServiceAndPing = 3,
	EOnlineAdvertisementType_MAX = 4
};

// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class EOnlineComparisonOpRedux : uint8 {
	Equals = 0,
	NotEquals = 1,
	GreaterThan = 2,
	GreaterThanEquals = 3,
	LessThan = 4,
	LessThanEquals = 5,
	EOnlineComparisonOpRedux_MAX = 6
};

// Enum AdvancedSessions.EBPOnlineSessionState
enum class EBPOnlineSessionState : uint8 {
	NoSession = 0,
	Creating = 1,
	Pending = 2,
	Starting = 3,
	InProgress = 4,
	Ending = 5,
	Ended = 6,
	Destroying = 7,
	EBPOnlineSessionState_MAX = 8
};

// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class EBPServerPresenceSearchType : uint8 {
	AllServers = 0,
	ClientServersOnly = 1,
	DedicatedServersOnly = 2,
	EBPServerPresenceSearchType_MAX = 3
};

// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class EBlueprintAsyncResultSwitch : uint8 {
	OnSuccess = 0,
	AsyncLoading = 1,
	OnFailure = 2,
	EBlueprintAsyncResultSwitch_MAX = 3
};

// Enum AdvancedSessions.EBlueprintResultSwitch
enum class EBlueprintResultSwitch : uint8 {
	OnSuccess = 0,
	OnFailure = 1,
	EBlueprintResultSwitch_MAX = 2
};

// Enum AdvancedSessions.ESessionSettingSearchResult
enum class ESessionSettingSearchResult : uint8 {
	Found = 0,
	NotFound = 1,
	WrongType = 2,
	ESessionSettingSearchResult_MAX = 3
};

// Enum AdvancedSessions.EBPLoginStatus
enum class EBPLoginStatus : uint8 {
	NotLoggedIn = 0,
	UsingLocalProfile = 1,
	LoggedIn = 2,
	EBPLoginStatus_MAX = 3
};

// ScriptStruct AdvancedSessions.BPFriendInfo
struct FBPFriendInfo {
	struct FString DisplayName; 
	struct FString RealName; 
	enum class EBPOnlinePresenceState OnlineState; 
	struct FBPUniqueNetId UniqueNetId; 
	bool bIsPlayingSameGame; 
	struct FBPFriendPresenceInfo PresenceInfo; 
};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
struct FBPFriendPresenceInfo {
	bool bIsOnline; 
	bool bIsPlaying; 
	bool bIsPlayingThisGame; 
	bool bIsJoinable; 
	bool bHasVoiceSupport; 
	enum class EBPOnlinePresenceState PresenceState; 
	struct FString StatusString; 
};

// ScriptStruct AdvancedSessions.BPUniqueNetId
struct FBPUniqueNetId {
};

// ScriptStruct AdvancedSessions.BPOnlineUser
struct FBPOnlineUser {
	struct FBPUniqueNetId UniqueNetId; 
	struct FString DisplayName; 
	struct FString RealName; 
};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
struct FBPOnlineRecentPlayer : FBPOnlineUser {
	struct FString LastSeen; 
};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
struct FSessionsSearchSetting {
};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
struct FSessionPropertyKeyPair {
};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
struct FBPUserOnlineAccount {
};

