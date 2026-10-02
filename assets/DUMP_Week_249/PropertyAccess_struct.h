// Enum PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8 {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8 {
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteByteToInt32 = 12,
	PromoteByteToInt64 = 13,
	PromoteByteToFloat = 14,
	PromoteInt32ToInt64 = 15,
	PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType_MAX = 17
};

// Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8 {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8 {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// ScriptStruct PropertyAccess.PropertyAccessLibrary
struct FPropertyAccessLibrary {
	struct TArray<struct FPropertyAccessSegment> PathSegments; 
	struct TArray<struct FPropertyAccessPath> SrcPaths; 
	struct TArray<struct FPropertyAccessPath> DestPaths; 
	struct FPropertyAccessCopyBatch CopyBatches[0x4]; 
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses; 
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses; 
	struct TArray<struct FPropertyAccessIndirection> Indirections; 
	struct TArray<int32_t> EventAccessIndices; 
};

// ScriptStruct PropertyAccess.PropertyAccessIndirection
struct FPropertyAccessIndirection {
	struct TFieldPath<FArrayProperty> ArrayProperty; 
	struct UFunction* Function; 
	int32_t ReturnBufferSize; 
	int32_t ReturnBufferAlignment; 
	int32_t ArrayIndex; 
	uint32_t Offset; 
	enum class EPropertyAccessObjectType ObjectType; 
	enum class EPropertyAccessIndirectionType Type; 
};

// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
struct FPropertyAccessIndirectionChain {
	struct TFieldPath<FProperty> Property; 
	int32_t IndirectionStartIndex; 
	int32_t IndirectionEndIndex; 
	int32_t EventId; 
};

// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
struct FPropertyAccessCopyBatch {
	struct TArray<struct FPropertyAccessCopy> Copies; 
};

// ScriptStruct PropertyAccess.PropertyAccessCopy
struct FPropertyAccessCopy {
	int32_t AccessIndex; 
	int32_t DestAccessStartIndex; 
	int32_t DestAccessEndIndex; 
	enum class EPropertyAccessCopyType Type; 
};

// ScriptStruct PropertyAccess.PropertyAccessPath
struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; 
	int32_t PathSegmentCount; 
	char bHasEvents : 1; 
};

// ScriptStruct PropertyAccess.PropertyAccessSegment
struct FPropertyAccessSegment {
	struct FName Name; 
	struct UStruct* Struct; 
	struct TFieldPath<FProperty> Property; 
	struct UFunction* Function; 
	int32_t ArrayIndex; 
	uint16_t Flags; 
};

