// Enum ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8 {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8 {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8 {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping = 5,
	EWeightMapTargetCommon_MAX = 6
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy {
	enum class EClothingWindMethod_Legacy WindMethod; 
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; 
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; 
	struct FClothConstraintSetup_Legacy BendConstraintConfig; 
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; 
	float SelfCollisionRadius; 
	float SelfCollisionStiffness; 
	float SelfCollisionCullScale; 
	struct FVector Damping; 
	float Friction; 
	float WindDragCoefficient; 
	float WindLiftCoefficient; 
	struct FVector LinearDrag; 
	struct FVector AngularDrag; 
	struct FVector LinearInertiaScale; 
	struct FVector AngularInertiaScale; 
	struct FVector CentrifugalInertiaScale; 
	float SolverFrequency; 
	float StiffnessFrequency; 
	float GravityScale; 
	struct FVector GravityOverride; 
	bool bUseGravityOverride; 
	float TetherStiffness; 
	float TetherLimit; 
	float CollisionThickness; 
	float AnimDriveSpringStiffness; 
	float AnimDriveDamperStiffness; 
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy {
	float Stiffness; 
	float StiffnessMultiplier; 
	float StretchLimit; 
	float CompressionLimit; 
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon {
	struct FClothPhysicalMeshData PhysicalMeshData; 
	struct FClothCollisionData CollisionData; 
	bool bUseMultipleInfluences; 
	float SkinningKernelRadius; 
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData {
	struct TArray<struct FVector> Vertices; 
	struct TArray<struct FVector> Normals; 
	struct TArray<uint32_t> Indices; 
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; 
	struct TArray<float> InverseMasses; 
	struct TArray<struct FClothVertBoneData> BoneData; 
	int32_t MaxBoneWeights; 
	int32_t NumFixedVerts; 
	struct TArray<uint32_t> SelfCollisionIndices; 
	struct TArray<float> MaxDistances; 
	struct TArray<float> BackstopDistances; 
	struct TArray<float> BackstopRadiuses; 
	struct TArray<float> AnimDriveMultipliers; 
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap {
	struct TArray<float> Values; 
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy {
	struct FName MaskName; 
	enum class EWeightMapTargetCommon CurrentTarget; 
	float MaxValue; 
	float MinValue; 
	struct TArray<float> Values; 
	bool bEnabled; 
};

