// Class OnlineSubsystemEOS.AchievementsUnlockProxy
struct UAchievementsUnlockProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UAchievementsUnlockProxy* UnlockAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TArray<struct FString>& AchievementIds); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemEOS.EOSNetConnection
struct UEOSNetConnection : UIpConnection {
	bool bIsPassthrough; 
};

// Class OnlineSubsystemEOS.EOSNetDriver
struct UEOSNetDriver : UIpNetDriver {
};

// Class OnlineSubsystemEOS.GetStatsCallbackProxy
struct UGetStatsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFail; 

	struct UGetStatsCallbackProxy* GetStats(struct FProductUserId& ProductUserId, struct TArray<struct FString>& StatsName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy
struct ULeaderboardQueryDefinitionProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULeaderboardQueryDefinitionProxy* QueryLeaderboardDefinitions(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy
struct ULeaderboardQueryRecordsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULeaderboardQueryRecordsCallbackProxy* QueryLeaderboardRecords(struct FName LeaderboarId); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy
struct ULeaderboardQueryScoresCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULeaderboardQueryScoresCallbackProxy* QueryLeaderboardScore(struct TArray<struct FProductUserId>& ProductUserIds, struct FName LeaderboarId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemEOS.OnlineSubsystemEOSConfig
struct UOnlineSubsystemEOSConfig : UDeveloperSettings {
	struct FString ProductName; 
	struct FString ProductVersion; 
	struct FString ProductId; 
	struct FString SandboxId; 
	struct FString DeploymentId; 
	struct FString SupportTicketingKey; 
	struct FString SupportTicketingURL; 
	struct FString ClientId; 
	struct FString ClientSecret; 
	enum class ELogLevel LogLevel; 
};

// Class OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary
struct UOnlineSubsystemEOSFunctionLibrary : UBlueprintFunctionLibrary {

	struct FString ProductUserIdToString(struct FProductUserId& ProductUserId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FProductUserId ProductUserIdFromString(struct FString AccountId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsAuthorised(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FProductUserId GetProductUserId(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetCachedEOSAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TArray<struct FPlayerAchievementData>& OutAchievements); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool GetCachedEOSAchievement(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString AchievementId, struct FPlayerAchievementData& OutAchievement); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct TArray<struct FAchievementsDef> GetAchivementsDefinition(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FAccountId GetAccountId(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString EpicAccountIdToString(struct FAccountId& AccountId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FAccountId EpicAccountIdFromString(struct FString AccountId); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class OnlineSubsystemEOS.UpdateStatsCallbackProxy
struct UUpdateStatsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFail; 

	struct UUpdateStatsCallbackProxy* UpdateStats(struct FProductUserId& ProductUserId, struct TArray<struct FStatData>& Stats); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

