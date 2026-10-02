// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8 {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8 {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
struct FInAppPurchaseProductInfo {
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
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
struct FInAppPurchaseRestoreInfo {
	struct FString Identifier; 
	struct FString ReceiptData; 
	struct FString TransactionIdentifier; 
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
struct FNamedInterfaceDef {
	struct FName InterfaceName; 
	struct FString InterfaceClassName; 
};

// ScriptStruct OnlineSubsystem.NamedInterface
struct FNamedInterface {
	struct FName InterfaceName; 
	struct UObject* InterfaceObject; 
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
struct FInAppPurchaseProductRequest {
	struct FString ProductIdentifier; 
	bool bIsConsumable; 
};

