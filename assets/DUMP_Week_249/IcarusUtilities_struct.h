// Enum IcarusUtilities.EPanningDirection
enum class EPanningDirection : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Both = 2,
	EPanningDirection_MAX = 3
};

// Enum IcarusUtilities.EValid
enum class EValid : uint8 {
	Valid = 0,
	NotValid = 1,
	EValid_MAX = 2
};

// ScriptStruct IcarusUtilities.RowEnum
struct FRowEnum : FIntEnum {
};

// ScriptStruct IcarusUtilities.RowHandle
struct FRowHandle : FRowHandleInternal {
	struct TWeakObjectPtr<struct UIcarusDataTable> DataTablePtr; 
	struct FName RowName; 
	struct FName DataTableName; 
};

// ScriptStruct IcarusUtilities.IcarusTableRowBase
struct FIcarusTableRowBase : FTableRowBase {
	struct TArray<struct UObject*> CachedHardReferences; 
};

// ScriptStruct IcarusUtilities.FeatureLevelsRowHandle
struct FFeatureLevelsRowHandle : FRowHandle {
};

// ScriptStruct IcarusUtilities.MultiRowHandle
struct FMultiRowHandle {
	struct FName RowName; 
};

// ScriptStruct IcarusUtilities.FeatureLevelData
struct FFeatureLevelData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText ShortName; 
	struct FString Description; 
	struct FLinearColor Color; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	bool bEnableForCook; 
	bool bEnableForShip; 
	bool bEnableForPreview; 
};

// ScriptStruct IcarusUtilities.FeatureLevelsEnum
struct FFeatureLevelsEnum : FRowEnum {
};

// ScriptStruct IcarusUtilities.RowMetadata
struct FRowMetadata : FTableRowBase {
	struct FFeatureLevelsRowHandle RequiredFeatureLevel; 
	bool bIsDeprecated; 
	struct FString Notes; 
	struct TMap<struct FName, struct FString> ExtraMetadata; 
};

