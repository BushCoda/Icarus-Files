// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8 {
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	AddOrUpdateReservation = 7,
	EClientRequestType_MAX = 8
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult {
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2 {
	struct FString ItemName; 
	struct FString ItemId; 
	struct FString ValidationInfo; 
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer {
	struct FString OfferId; 
	struct FText Title; 
	struct FText Description; 
	struct FText LongDescription; 
	struct FText RegularPriceText; 
	int32_t RegularPrice; 
	struct FText PriceText; 
	int32_t NumericPrice; 
	struct FString CurrencyCode; 
	struct FDateTime ReleaseDate; 
	struct FDateTime ExpirationDate; 
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; 
	struct TMap<struct FString, struct FString> DynamicFields; 
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2 {
	struct FString ItemName; 
	struct FString ItemId; 
	struct FString ValidationInfo; 
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
struct FInAppPurchaseReceiptInfo {
	struct FString ItemName; 
	struct FString ItemId; 
	struct FString ValidationInfo; 
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2 {
	struct FString Identifier; 
	struct FString TransactionIdentifier; 
	struct FString DisplayName; 
	struct FString DisplayDescription; 
	struct FString DisplayPrice; 
	float RawPrice; 
	struct FString CurrencyCode; 
	struct FString CurrencySymbol; 
	struct FString DecimalSeparator; 
	struct FString GroupingSeparator; 
	struct FString ReceiptData; 
	struct TMap<struct FString, struct FString> DynamicFields; 
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2 {
	struct FString ProductIdentifier; 
	bool bIsConsumable; 
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation {
	struct FUniqueNetIdRepl UniqueId; 
	struct FString ValidationStr; 
	struct FString Platform; 
	bool bAllowCrossplay; 
	float ElapsedTime; 
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal {
	struct FString ID; 
	struct FString Token; 
	struct FString Type; 
	struct TArray<char> TokenBytes; 
};

// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping {
	struct FString PlatformName; 
	struct FString PlatformType; 
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation {
	int32_t TeamNum; 
	struct FUniqueNetIdRepl PartyLeader; 
	struct TArray<struct FPlayerReservation> PartyMembers; 
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; 
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation {
	struct FUniqueNetIdRepl SpectatorId; 
	struct FPlayerReservation Spectator; 
};

