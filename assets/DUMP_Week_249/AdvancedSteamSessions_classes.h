// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
struct UAdvancedSteamFriendsLibrary : UBlueprintFunctionLibrary {

	bool RequestSteamFriendInfo(struct FBPUniqueNetId UniqueNetId, bool bRequireNameOnly); // (Final|Native|Static|Public|BlueprintCallable)
	bool OpenSteamUserOverlay(struct FBPUniqueNetId UniqueNetId, enum class ESteamUserOverlayType DialogType); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsSteamInBigPictureMode(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsOverlayEnabled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool InitTextFiltering(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetSteamPersonaName(struct FBPUniqueNetId UniqueNetId); // (Final|Native|Static|Public|BlueprintCallable)
	void GetSteamGroups(struct TArray<struct FBPSteamGroupInfo>& SteamGroups); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSteamFriendGamePlayed(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintResultSwitch& Result, int32_t& AppId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UTexture2D* GetSteamFriendAvatar(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintAsyncResultSwitch& Result, enum class SteamAvatarSize AvatarSize); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FBPUniqueNetId GetLocalSteamIDFromSteam(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetFriendSteamLevel(struct FBPUniqueNetId UniqueNetId); // (Final|Native|Static|Public|BlueprintCallable)
	bool FilterText(struct FString TextToFilter, enum class EBPTextFilteringContext Context, struct FBPUniqueNetId TextSourceID, struct FString& FilteredText); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FBPUniqueNetId CreateSteamIDFromString(struct FString SteamID64); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
struct UAdvancedSteamWorkshopLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32_t& NumberOfItems); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetNumSubscribedWorkshopItems(int32_t& NumberOfItems); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSteamSessions.JoinSessionCallbackProxyAdvanced
struct UJoinSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct UJoinSessionCallbackProxyAdvanced* JoinAdvancedSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult, struct FName SessionName, struct FString Options); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
struct USteamRequestGroupOfficersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(struct UObject* WorldContextObject, struct FBPUniqueNetId GroupUniqueNetID); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
struct USteamWSRequestUGCDetailsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 

	struct USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(struct UObject* WorldContextObject, struct FBPSteamWorkshopID WorkShopID); // (Final|Native|Static|Public|BlueprintCallable)
};

