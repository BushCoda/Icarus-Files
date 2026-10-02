// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8 {
	SIT_Float = 0,
	SIT_Float2 = 1,
	SIT_Float3 = 2,
	SIT_Float4 = 3,
	SIT_Integer = 4,
	SIT_Image = 5,
	SIT_Unused_7 = 6,
	SIT_Unused_8 = 7,
	SIT_Integer2 = 8,
	SIT_Integer3 = 9,
	SIT_Integer4 = 10,
	SIT_MAX = 11
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault = 0,
	SGM_Baked = 1,
	SGM_OnLoadSync = 2,
	SGM_OnLoadSyncAndCache = 3,
	SGM_OnLoadAsync = 4,
	SGM_OnLoadAsyncAndCache = 5,
	SGM_MAX = 6
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8 {
	Size_1 = 0,
	Size_17 = 4,
	Size_33 = 5,
	Size_65 = 6,
	Size_129 = 7,
	Size_257 = 8,
	Size_513 = 9,
	Size_1025 = 10,
	Size_2049 = 11,
	Size_4097 = 12,
	Size_MAX = 13
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU = 0,
	SET_GPU = 1,
	SET_MAX = 2
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8 {
	ERL_17 = 0,
	ERL_33 = 1,
	ERL_65 = 2,
	ERL_129 = 3,
	ERL_257 = 4,
	ERL_513 = 5,
	ERL_1025 = 6,
	ERL_2049 = 7,
	ERL_4097 = 8,
	ERL_8193 = 9,
	ERL_MAX = 10
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
struct FSubstanceInstanceDesc {
	struct FString Name; 
	struct TArray<struct FSubstanceInputDesc> Inputs; 
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
struct FSubstanceInputDesc {
	struct FString Name; 
	enum class ESubstanceInputType Type; 
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	struct TArray<float> Min; 
	struct TArray<float> Max; 
	struct TArray<float> Default; 
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	struct TArray<int32_t> Min; 
	struct TArray<int32_t> Max; 
	struct TArray<int32_t> Default; 
};

// ScriptStruct SubstanceCore.SubstanceGraphDesc
struct FSubstanceGraphDesc {
	int32_t Index; 
	struct FString Label; 
	struct FString Description; 
	struct FString Category; 
	struct FString Keywords; 
	struct FString Author; 
	struct FString AuthorUrl; 
	struct FString UserTag; 
};

// ScriptStruct SubstanceCore.SubstanceConnection
struct FSubstanceConnection {
	struct FString OutputIdentifier; 
	struct FString InputImageIdentifier; 
};

