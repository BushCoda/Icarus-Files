// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, bool& bFoundID, float& Progress); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.IpConnection
struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; 
};

// Class OnlineSubsystemUtils.IpNetDriver
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; 
	char AllowPlayerPortUnreach : 1; 
	uint32_t MaxPortCountToTry; 
	uint32_t ServerDesiredSocketReceiveBufferBytes; 
	uint32_t ServerDesiredSocketSendBufferBytes; 
	uint32_t ClientDesiredSocketReceiveBufferBytes; 
	uint32_t ClientDesiredSocketSendBufferBytes; 
	double MaxSecondsInReceive; 
	int32_t NbPacketsBetweenReceiveTimeTest; 
	float ResolutionConnectionTimeout; 
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.OnlineBeacon
struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; 
	float BeaconConnectionTimeout; 
	struct UNetDriver* NetDriver; 
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; 
	struct UNetConnection* BeaconConnection; 
	enum class EBeaconConnectionState ConnectionState; 

	void ClientOnConnected(); // (Final|Net|NetReliableNative|Event|Private|NetClient)
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; 
	struct TArray<struct AOnlineBeaconClient*> ClientActors; 
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; 
	struct AOnlineBeaconClient* ClientBeaconActorClass; 
	struct TArray<struct AOnlineBeaconClient*> ClientActors; 
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes; 
	struct TArray<struct FName> CompatibleUniqueNetIdTypes; 
	struct FName VoiceSubsystemNameOverride; 
};

// Class OnlineSubsystemUtils.OnlinePIESettings
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; 
	struct TArray<struct FPIELoginSettingsInternal> Logins; 
};

// Class OnlineSubsystemUtils.OnlineSessionClient
struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; 
	bool bHandlingDisconnect; 
};

// Class OnlineSubsystemUtils.PartyBeaconClient
struct APartyBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; 
	struct FPartyReservation PendingReservation; 
	enum class EClientRequestType RequestType; 
	bool bPendingReservationSent; 
	bool bCancelReservation; 

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSendReservationFull(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // (Net|NetReliableNative|Event|Public|NetClient)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; 
	bool bLogoutOnSessionTimeout; 
	float SessionTimeoutSecs; 
	float TravelSessionTimeoutSecs; 
};

// Class OnlineSubsystemUtils.PartyBeaconState
struct UPartyBeaconState : UObject {
	struct FName SessionName; 
	int32_t NumConsumedReservations; 
	int32_t MaxReservations; 
	int32_t NumTeams; 
	int32_t NumPlayersPerTeam; 
	struct FName TeamAssignmentMethod; 
	int32_t ReservedHostTeamNum; 
	int32_t ForceTeamNum; 
	bool bRestrictCrossConsole; 
	struct TArray<struct FString> PlatformCrossplayRestrictions; 
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; 
	bool bEnableRemovalRequests; 
	struct TArray<struct FPartyReservation> Reservations; 
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; 
	struct FSpectatorReservation PendingReservation; 
	enum class ESpectatorClientRequestType RequestType; 
	bool bPendingReservationSent; 
	bool bCancelReservation; 

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientSendReservationFull(); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // (Net|NetReliableNative|Event|Public|NetClient)
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // (Net|NetReliableNative|Event|Public|NetClient)
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; 
	bool bLogoutOnSessionTimeout; 
	float SessionTimeoutSecs; 
	float TravelSessionTimeoutSecs; 
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
struct USpectatorBeaconState : UObject {
	struct FName SessionName; 
	int32_t NumConsumedReservations; 
	int32_t MaxReservations; 
	bool bRestrictCrossConsole; 
	struct TArray<struct FSpectatorReservation> Reservations; 
};

// Class OnlineSubsystemUtils.TestBeaconClient
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ClientPing(); // (Net|NetReliableNative|Event|Public|NetClient)
};

// Class OnlineSubsystemUtils.TestBeaconHost
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable)
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
struct UVoipListenerSynthComponent : USynthComponent {

	bool IsIdling(); // (Final|Native|Public|BlueprintCallable)
};

