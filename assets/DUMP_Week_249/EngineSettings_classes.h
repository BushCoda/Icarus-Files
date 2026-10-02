// Class EngineSettings.ConsoleSettings
struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; 
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; 
	struct TArray<struct FString> AutoCompleteMapPaths; 
	float BackgroundOpacityPercentage; 
	bool bOrderTopToBottom; 
	bool bDisplayHelpInAutoComplete; 
	struct FColor InputColor; 
	struct FColor HistoryColor; 
	struct FColor AutoCompleteCommandColor; 
	struct FColor AutoCompleteCVarColor; 
	struct FColor AutoCompleteFadedColor; 
};

// Class EngineSettings.GameMapsSettings
struct UGameMapsSettings : UObject {
	struct FString LocalMapOptions; 
	struct FSoftObjectPath TransitionMap; 
	bool bUseSplitscreen; 
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; 
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; 
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; 
	bool bOffsetPlayerGamepadIds; 
	struct FSoftClassPath GameInstanceClass; 
	struct FSoftObjectPath GameDefaultMap; 
	struct FSoftObjectPath ServerDefaultMap; 
	struct FSoftClassPath GlobalDefaultGameMode; 
	struct FSoftClassPath GlobalDefaultServerGameMode; 
	struct TArray<struct FGameModeName> GameModeMapPrefixes; 
	struct TArray<struct FGameModeName> GameModeClassAliases; 

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // (Final|Native|Public|BlueprintCallable)
	bool GetSkipAssigningGamepadToPlayer1(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UGameMapsSettings* GetGameMapsSettings(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class EngineSettings.GameNetworkManagerSettings
struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; 
	int32_t MaxDynamicBandwidth; 
	int32_t TotalNetBandwidth; 
	int32_t BadPingThreshold; 
	char bIsStandbyCheckingEnabled : 1; 
	float StandbyRxCheatTime; 
	float StandbyTxCheatTime; 
	float PercentMissingForRxStandby; 
	float PercentMissingForTxStandby; 
	float PercentForBadPing; 
	float JoinInProgressStandbyWaitTime; 
};

// Class EngineSettings.GameSessionSettings
struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; 
	int32_t MaxPlayers; 
	char bRequiresPushToTalk : 1; 
};

// Class EngineSettings.GeneralEngineSettings
struct UGeneralEngineSettings : UObject {
};

// Class EngineSettings.GeneralProjectSettings
struct UGeneralProjectSettings : UObject {
	struct FString CompanyName; 
	struct FString CompanyDistinguishedName; 
	struct FString CopyrightNotice; 
	struct FString Description; 
	struct FString Homepage; 
	struct FString LicensingTerms; 
	struct FString PrivacyPolicy; 
	struct FGuid ProjectID; 
	struct FString ProjectName; 
	struct FString ProjectVersion; 
	struct FString SupportContact; 
	struct FText ProjectDisplayedTitle; 
	struct FText ProjectDebugTitleInfo; 
	bool bShouldWindowPreserveAspectRatio; 
	bool bUseBorderlessWindow; 
	bool bStartInVR; 
	bool bAllowWindowResize; 
	bool bAllowClose; 
	bool bAllowMaximize; 
	bool bAllowMinimize; 
};

// Class EngineSettings.HudSettings
struct UHudSettings : UObject {
	char bShowHUD : 1; 
	struct TArray<struct FName> DebugDisplay; 
};

