// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; 
	struct TArray<struct FGameplayTag> ParentTags; 
};

// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag {
	struct FName TagName; 
};

// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; 
	struct TArray<struct FGameplayTag> TagDictionary; 
	struct TArray<char> QueryTokenStream; 
	struct FString UserDescription; 
	struct FString AutoDescription; 
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper {
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper {
};

// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect {
	struct FName OldTagName; 
	struct FName NewTagName; 
};

// ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode {
};

// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource {
	struct FName SourceName; 
	enum class EGameplayTagSourceType SourceType; 
	struct UGameplayTagsList* SourceTagList; 
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; 
};

// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; 
	struct FString DevComment; 
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; 
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo {
	struct FString RestrictedConfigName; 
	struct TArray<struct FString> Owners; 
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; 
	struct TArray<struct FString> RemapCategories; 
};

