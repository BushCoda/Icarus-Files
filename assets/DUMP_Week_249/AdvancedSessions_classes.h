// Class AdvancedSessions.AdvancedExternalUILibrary
struct UAdvancedExternalUILibrary : UBlueprintFunctionLibrary {

	void ShowWebURLUI(struct FString URLToShow, enum class EBlueprintResultSwitch& Result, struct TArray<struct FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ShowProfileUI(struct FBPUniqueNetId PlayerViewingProfile, struct FBPUniqueNetId PlayerToViewProfileOf, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ShowLeaderBoardUI(struct FString LeaderboardName, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ShowInviteUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ShowFriendsUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ShowAccountUpgradeUI(struct FBPUniqueNetId PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CloseWebURLUI(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
struct UAdvancedFriendsGameInstance : UGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; 
	bool bCallIdentityInterfaceEventsOnPlayerControllers; 
	bool bCallVoiceInterfaceEventsOnPlayerControllers; 
	bool bEnableTalkingStatusDelegate; 

	void OnSessionInviteReceived(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInviting, struct FString AppId, struct FBlueprintSessionResult& SessionToJoin); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnSessionInviteAccepted(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult& SessionToJoin); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnPlayerTalkingStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // (Event|Public|BlueprintEvent)
	void OnPlayerLoginStatusChanged(int32_t PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId NewPlayerUniqueNetID); // (Event|Public|BlueprintEvent)
	void OnPlayerLoginChanged(int32_t PlayerNum); // (Event|Public|BlueprintEvent)
};

// Class AdvancedSessions.AdvancedFriendsInterface
struct UAdvancedFriendsInterface : UInterface {

	void OnSessionInviteReceived(struct FBPUniqueNetId PersonInviting, struct FBlueprintSessionResult& SearchResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnSessionInviteAccepted(struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult& SearchResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnPlayerVoiceStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // (Event|Public|BlueprintEvent)
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId PlayerUniqueNetID); // (Event|Public|BlueprintEvent)
	void OnPlayerLoginChanged(int32_t PlayerNum); // (Event|Public|BlueprintEvent)
};

// Class AdvancedSessions.AdvancedFriendsLibrary
struct UAdvancedFriendsLibrary : UBlueprintFunctionLibrary {

	void SendSessionInviteToFriends(struct APlayerController* PlayerController, struct TArray<struct FBPUniqueNetId>& Friends, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SendSessionInviteToFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void IsAFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId, bool& IsFriend); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetStoredRecentPlayersList(struct FBPUniqueNetId UniqueNetId, struct TArray<struct FBPOnlineRecentPlayer>& PlayersList); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetStoredFriendsList(struct APlayerController* PlayerController, struct TArray<struct FBPFriendInfo>& FriendsList); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, struct FBPFriendInfo& Friend); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.AdvancedGameSession
struct AAdvancedGameSession : AGameSession {
	struct TMap<struct FUniqueNetIdRepl, struct FText> BanList; 
};

// Class AdvancedSessions.AdvancedIdentityLibrary
struct UAdvancedIdentityLibrary : UBlueprintFunctionLibrary {

	void SetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString NewAttributeValue, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetUserID(struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUserAccountRealName(struct FBPUserOnlineAccount& AccountInfo, struct FString& UserName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUserAccountDisplayName(struct FBPUserOnlineAccount& AccountInfo, struct FString& DisplayName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUserAccountAuthAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString& AuthAttribute, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString& AttributeValue, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetUserAccountAccessToken(struct FBPUserOnlineAccount& AccountInfo, struct FString& AccessToken); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUserAccount(struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount& AccountInfo, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetPlayerNickname(struct FBPUniqueNetId& UniqueNetId, struct FString& PlayerNickname); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetPlayerAuthToken(struct APlayerController* PlayerController, struct FString& AuthToken, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetLoginStatus(struct FBPUniqueNetId& UniqueNetId, enum class EBPLoginStatus& LoginStatus, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetAllUserAccounts(struct TArray<struct FBPUserOnlineAccount>& AccountInfos, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.AdvancedSessionsLibrary
struct UAdvancedSessionsLibrary : UBlueprintFunctionLibrary {

	void UniqueNetIdToString(struct FBPUniqueNetId& UniqueNetId, struct FString& String); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void SetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // (Final|Native|Static|Public|BlueprintCallable)
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(struct FSessionPropertyKeyPair SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(struct FName Key, struct FString Value, enum class EOnlineAdvertisementType Type); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(struct FName Key, int32_t Value, enum class EOnlineAdvertisementType Type); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(struct FName Key, float Value, enum class EOnlineAdvertisementType Type); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(struct FName Key, char Value, enum class EOnlineAdvertisementType Type); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(struct FName Key, bool Value, enum class EOnlineAdvertisementType Type); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool KickPlayer(struct UObject* WorldContextObject, struct APlayerController* PlayerToKick, struct FText KickReason); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsValidUniqueNetID(struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsValidSession(struct FBlueprintSessionResult& SessionResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void IsPlayerInSession(struct UObject* WorldContextObject, struct FBPUniqueNetId& PlayerToCheck, bool& bIsInSession); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool HasOnlineSubsystem(struct FName SubSystemName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetUniqueNetIDFromPlayerState(struct APlayerState* PlayerState, struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUniqueNetID(struct APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetUniqueBuildID(struct FBlueprintSessionResult SessionResult, int32_t& UniqueBuildId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetSessionState(struct UObject* WorldContextObject, enum class EBPOnlineSessionState& SessionState); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionSettings(struct UObject* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, enum class EBlueprintResultSwitch& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionPropertyString(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, struct FString& SettingValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FName GetSessionPropertyKey(struct FSessionPropertyKeyPair& SessionProperty); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionPropertyInt(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, int32_t& SettingValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionPropertyFloat(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, float& SettingValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionPropertyByte(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, char& SettingValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionPropertyBool(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, bool& SettingValue); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSessionID_AsString(struct FBlueprintSessionResult& SessionResult, struct FString& SessionId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetPlayerName(struct APlayerController* PlayerController, struct FString& PlayerName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetNumberOfNetworkPlayers(struct UObject* WorldContextObject, int32_t& NumNetPlayers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetNetPlayerIndex(struct APlayerController* PlayerController, int32_t& NetPlayerIndex); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetExtraSettings(struct FBlueprintSessionResult SessionResult, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetCurrentUniqueBuildID(int32_t& UniqueBuildId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetCurrentSessionID_AsString(struct UObject* WorldContextObject, struct FString& SessionId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void FindSessionPropertyIndexByName(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class EBlueprintResultSwitch& Result, int32_t& OutIndex); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void FindSessionPropertyByName(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingsName, enum class EBlueprintResultSwitch& Result, struct FSessionPropertyKeyPair& OutProperty); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EqualEqual_UNetIDUnetID(struct FBPUniqueNetId& A, struct FBPUniqueNetId& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool BanPlayer(struct UObject* WorldContextObject, struct APlayerController* PlayerToBan, struct FText BanReason); // (Final|Native|Static|Public|BlueprintCallable)
	void AddOrModifyExtraSettings(struct TArray<struct FSessionPropertyKeyPair>& SettingsArray, struct TArray<struct FSessionPropertyKeyPair>& NewOrChangedSettings, struct TArray<struct FSessionPropertyKeyPair>& ModifiedSettingsArray); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.AdvancedVoiceLibrary
struct UAdvancedVoiceLibrary : UBlueprintFunctionLibrary {

	bool UnRegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void UnRegisterLocalTalker(char LocalPlayerNum); // (Final|Native|Static|Public|BlueprintCallable)
	void UnRegisterAllLocalTalkers(); // (Final|Native|Static|Public|BlueprintCallable)
	bool UnMuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void StopNetworkedVoice(char LocalPlayerNum); // (Final|Native|Static|Public|BlueprintCallable)
	void StartNetworkedVoice(char LocalPlayerNum); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveAllRemoteTalkers(); // (Final|Native|Static|Public|BlueprintCallable)
	bool RegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool RegisterLocalTalker(char LocalPlayerNum); // (Final|Native|Static|Public|BlueprintCallable)
	void RegisterAllLocalTalkers(); // (Final|Native|Static|Public|BlueprintCallable)
	bool MuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool IsRemotePlayerTalking(struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsPlayerMuted(char LocalUserNumChecking, struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsLocalPlayerTalking(char LocalPlayerNum); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void IsHeadsetPresent(bool& bHasHeadset, char LocalPlayerNum); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetNumLocalTalkers(int32_t& NumLocalTalkers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class AdvancedSessions.AutoLoginUserCallbackProxy
struct UAutoLoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UAutoLoginUserCallbackProxy* AutoLoginUser(struct UObject* WorldContextObject, int32_t LocalUserNum); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
struct UCancelFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UCancelFindSessionsCallbackProxy* CancelFindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
struct UCreateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
struct UDestroySessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UDestroySessionCallbackProxyAdvanced* DestroyAdvacedSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.EndSessionCallbackProxy
struct UEndSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UEndSessionCallbackProxy* EndSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
struct UFindFriendSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UFindFriendSessionCallbackProxy* FindFriendSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
struct UFindSessionsCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 
	struct FMulticastInlineDelegate OnResultReturned; 

	bool SessionTick(float DeltaSeconds); // (Native|Public)
	struct UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, struct TArray<struct FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void FilterSessionResults(struct TArray<struct FBlueprintSessionResult>& SessionResults, struct TArray<struct FSessionsSearchSetting>& Filters, struct TArray<struct FBlueprintSessionResult>& FilteredResults); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.GetFriendsCallbackProxy
struct UGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UGetFriendsCallbackProxy* GetAndStoreFriendsList(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
struct UGetRecentPlayersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(struct UObject* WorldContextObject, struct FBPUniqueNetId& UniqueNetId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
struct UGetUserPrivilegeCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UGetUserPrivilegeCallbackProxy* GetUserPrivilege(struct UObject* WorldContextObject, enum class EBPUserPrivileges& PrivilegeToCheck, struct FBPUniqueNetId& PlayerUniqueNetID); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.LoginUserCallbackProxy
struct ULoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULoginUserCallbackProxy* LoginUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString UserID, struct FString UserToken, struct FString Type); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.LogoutUserCallbackProxy
struct ULogoutUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULogoutUserCallbackProxy* LogoutUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
struct USendFriendInviteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct USendFriendInviteCallbackProxy* SendFriendInvite(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetIDInvited); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
struct UUpdateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UUpdateSessionCallbackProxyAdvanced* UpdateSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

