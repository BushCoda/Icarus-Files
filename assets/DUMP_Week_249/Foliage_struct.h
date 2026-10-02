// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8 {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask {
	char UseMask : 1; 
	float MaskThreshold; 
	char InvertMask : 1; 
};

// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; 
	struct UFoliageType* TypeInstance; 
	bool bIsAsset; 
	struct UFoliageType_InstancedStaticMesh* Type; 
};

// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance {
	struct FQuat Rotation; 
	struct FVector Location; 
	float Age; 
	struct FVector Normal; 
	float Scale; 
	struct UFoliageType* Type; 
};

