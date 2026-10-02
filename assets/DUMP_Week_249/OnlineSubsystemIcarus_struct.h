// Enum OnlineSubsystemIcarus.ELobbyStatus
enum class ELobbyStatus : uint8 {
	Waiting = 0,
	Loading = 1,
	InGame = 2,
	ELobbyStatus_MAX = 3
};

// Enum OnlineSubsystemIcarus.ELoginFailure
enum class ELoginFailure : uint8 {
	LoginFailure_None = 0,
	LoginFailure_UndefinedID = 1,
	LoginFailure_EventNameNotSupplied = 2,
	LoginFailure_AuthTokenNotSupplied = 3,
	LoginFailure_UserIDNotSupplied = 4,
	LoginFailure_AuthTypeNotSupplied = 5,
	LoginFailure_VersionNotSuppliedOrLow = 6,
	LoginFailure_InvalidAuthToken = 7,
	LoginFailure_FailedToLoginThirdParty = 8,
	LoginFailure_MAX = 9
};

// Enum OnlineSubsystemIcarus.EThresholdType
enum class EThresholdType : uint8 {
	Absoulute = 0,
	Relative = 1,
	Percent = 2,
	EThresholdType_MAX = 3
};

// Enum OnlineSubsystemIcarus.EOnlinePresenceStatusIcarus
enum class EOnlinePresenceStatusIcarus : uint8 {
	ICARUS_PS_Online = 0,
	ICARUS_PS_Offline = 1,
	ICARUS_PS_Away = 2,
	ICARUS_PS_ExtendedAway = 3,
	ICARUS_PS_DoNotDisturb = 4,
	ICARUS_PS_MAX = 5
};

// ScriptStruct OnlineSubsystemIcarus.MatchUpdate
struct FMatchUpdate {
	struct FString MatchID; 
	struct FMatchMakingRequest MatchReq; 
	bool bMatchFound; 
	enum class ELobbyStatus LobbyStatus; 
	struct TArray<struct FPlayerID> PlayerIds; 
	struct FConnectionString ConnectionString; 
};

// ScriptStruct OnlineSubsystemIcarus.MatchMakingRequest
struct FMatchMakingRequest {
	struct FString PlayerName; 
	float Score; 
	struct FName MatchCode; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusChatMessage
struct FIcarusChatMessage {
	struct FString UserID; 
	struct FString PlayerName; 
	struct FString ChatMessage; 
};

// ScriptStruct OnlineSubsystemIcarus.CommonResponse
struct FCommonResponse {
	bool Result; 
	struct FString Reason; 
};

// ScriptStruct OnlineSubsystemIcarus.CommonStorageResponse
struct FCommonStorageResponse : FCommonResponse {
	struct FString Key; 
};

// ScriptStruct OnlineSubsystemIcarus.ReqCommonStorage
struct FReqCommonStorage {
	struct FString Key; 
};

// ScriptStruct OnlineSubsystemIcarus.StorageInfo
struct FStorageInfo {
	struct FString Key; 
	struct FString Hash; 
	struct FName HashType; 
	int32_t UncompressedLength; 
};

// ScriptStruct OnlineSubsystemIcarus.UpdateLobbyStatus
struct FUpdateLobbyStatus {
	struct FString MatchID; 
	enum class ELobbyStatus LobbyStatus; 
};

// ScriptStruct OnlineSubsystemIcarus.UpdateConnectionString
struct FUpdateConnectionString {
	struct FString MatchID; 
	struct FConnectionString ConnectionString; 
};

// ScriptStruct OnlineSubsystemIcarus.MatchMakingFilter
struct FMatchMakingFilter : FTableRowBase {
	struct FString MatchName; 
	struct FName MatchCode; 
	struct FString Description; 
	struct FThreshold Threshold; 
	int32_t MinPlayer; 
	int32_t MaxPlayer; 
	bool bDropInAndOut; 
	struct TArray<struct FString> Maps; 
};

// ScriptStruct OnlineSubsystemIcarus.Threshold
struct FThreshold {
	enum class EThresholdType ThresholdType; 
	float MinScore; 
	float MaxScore; 
};

// ScriptStruct OnlineSubsystemIcarus.PresencePropertyKeyPair
struct FPresencePropertyKeyPair {
};

// ScriptStruct OnlineSubsystemIcarus.OfflineFactionMission
struct FOfflineFactionMission {
	int32_t FactionMissionStatus; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusConnectionToken
struct FIcarusConnectionToken {
	int32_t ExpiredTime; 
	struct FString Token; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusEditorVersion
struct FIcarusEditorVersion {
	struct FIcarusBuildVersion Icarus; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusBuildVersion
struct FIcarusBuildVersion {
	int32_t Major; 
	int32_t Minor; 
	int32_t Patch; 
	int32_t Changelist; 
	struct FString BuildType; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusVersion
struct FIcarusVersion {
	struct FName Name; 
	struct FIcarusBuildVersion Version; 
	struct FBackendSchemaVersion BackendSchema; 
	struct FIcarusDataVersion Data; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusDataVersion
struct FIcarusDataVersion {
	int32_t Changelist; 
};

// ScriptStruct OnlineSubsystemIcarus.BackendSchemaVersion
struct FBackendSchemaVersion {
	int32_t Major; 
	int32_t Minor; 
	int32_t Changelist; 
};

// ScriptStruct OnlineSubsystemIcarus.ResUserTicket
struct FResUserTicket {
	bool Result; 
	struct FString Reason; 
	enum class ELoginFailure LoginFailure; 
};

// ScriptStruct OnlineSubsystemIcarus.ReqUserTicket
struct FReqUserTicket {
	struct FString UserID; 
	struct FString Ticket; 
};

// ScriptStruct OnlineSubsystemIcarus.IcarusProfile
struct FIcarusProfile {
	struct FString UserID; 
	struct FString PlayerName; 
};

