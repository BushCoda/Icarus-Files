// Enum OnlineSubsystemEOS.ELogLevel
enum class ELogLevel : uint8 {
	LL_Off = 0,
	LL_Fatal = 1,
	LL_Error = 2,
	LL_Warning = 3,
	LL_Info = 4,
	LL_Verbose = 5,
	LL_VeryVerbose = 6,
	LL_MAX = 7
};

// Enum OnlineSubsystemEOS.ELeaderboardAggregation
enum class ELeaderboardAggregation : uint8 {
	EOS_LA_Min = 0,
	EOS_LA_Max = 1,
	EOS_LA_Sum = 2,
	EOS_LA_Latest = 3
};

// ScriptStruct OnlineSubsystemEOS.StatData
struct FStatData {
	struct FString StatName; 
	int32_t Value; 
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardDef
struct FLeaderboardDef {
	struct FString LeaderboardId; 
	struct FString StatName; 
	int64_t StartTime; 
	int64_t EndTime; 
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardsRecordData
struct FLeaderboardsRecordData {
	struct FProductUserId UserID; 
	struct FString DisplayName; 
	int32_t Rank; 
	int32_t Score; 
};

// ScriptStruct OnlineSubsystemEOS.ProductUserId
struct FProductUserId {
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardsScoreData
struct FLeaderboardsScoreData {
	struct FProductUserId UserID; 
	int32_t Score; 
};

// ScriptStruct OnlineSubsystemEOS.PlayerAchievementData
struct FPlayerAchievementData {
	struct FString AchievementId; 
	float Progress; 
	struct FDateTime UnlockTime; 
	struct TMap<struct FString, struct FStatProgress> Stats; 
	bool bIsUnlocked; 
};

// ScriptStruct OnlineSubsystemEOS.StatProgress
struct FStatProgress {
	struct FString StatName; 
	int32_t CurValue; 
	int32_t ThresholdValue; 
};

// ScriptStruct OnlineSubsystemEOS.AchievementsDef
struct FAchievementsDef {
	struct FString AchievementId; 
	struct FString UnlockedDisplayName; 
	struct FString UnlockedDescription; 
	struct FString LockedDisplayName; 
	struct FString LockedDescription; 
	struct FString FlavorText; 
	struct FString UnlockedIconURL; 
	struct FString LockedIconURL; 
	bool bIsHidden; 
	struct TArray<struct FAchivementsStatInfo> StatInfo; 
};

// ScriptStruct OnlineSubsystemEOS.AchivementsStatInfo
struct FAchivementsStatInfo {
	struct FString StatName; 
	int32_t ThresholdValue; 
};

// ScriptStruct OnlineSubsystemEOS.AuthToken
struct FAuthToken {
	int32_t ApiVersion; 
	struct FString App; 
	struct FString ClientId; 
	struct FString AccessToken; 
	struct FString ExpiresAt; 
	struct FString RefreshToken; 
	struct FString RefreshExpiresAt; 
};

// ScriptStruct OnlineSubsystemEOS.AccountId
struct FAccountId {
};

