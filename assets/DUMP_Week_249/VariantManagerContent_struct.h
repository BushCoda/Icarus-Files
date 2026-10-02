// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129
};

// ScriptStruct VariantManagerContent.FunctionCaller
struct FFunctionCaller {
	struct FName FunctionName; 
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment {
	struct FString PropertyName; 
	int32_t PropertyIndex; 
	struct FString ComponentName; 
};

// ScriptStruct VariantManagerContent.VariantDependency
struct FVariantDependency {
	struct TSoftObjectPtr<UVariantSet> VariantSet; 
	struct TSoftObjectPtr<UVariant> Variant; 
	bool bEnabled; 
};

