// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8 {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8 {
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData {
	struct FNodeHierarchyData Hierarchy; 
};

// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData {
	struct TArray<struct FNodeObject> Nodes; 
	struct TArray<struct FTransform> Transforms; 
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; 
};

// ScriptStruct AnimationCore.NodeObject
struct FNodeObject {
	struct FName Name; 
	struct FName ParentName; 
};

// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint {
	struct FConstraintDescription Operator; 
	struct FName SourceNode; 
	struct FName TargetNode; 
	float Weight; 
	bool bMaintainOffset; 
};

// ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription {
	bool bTranslation; 
	bool bRotation; 
	bool bScale; 
	bool bParent; 
	struct FFilterOptionPerAxis TranslationAxes; 
	struct FFilterOptionPerAxis RotationAxes; 
	struct FFilterOptionPerAxis ScaleAxes; 
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis {
	bool bX; 
	bool bY; 
	bool bZ; 
};

// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset {
	struct FVector Translation; 
	struct FQuat Rotation; 
	struct FVector Scale; 
	struct FTransform Parent; 
};

// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData {
	struct FConstraintDescriptor Constraint; 
	float Weight; 
	bool bMaintainOffset; 
	struct FTransform Offset; 
	struct FTransform CurrentTransform; 
};

// ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor {
	enum class EConstraintType Type; 
};

// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter {
	struct FFilterOptionPerAxis TranslationFilter; 
	struct FFilterOptionPerAxis RotationFilter; 
	struct FFilterOptionPerAxis ScaleFilter; 
};

// ScriptStruct AnimationCore.CCDIKChainLink
struct FCCDIKChainLink {
};

// ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform {
	struct FVector Location; 
	struct FRotator Rotation; 
	struct FVector Scale; 
};

// ScriptStruct AnimationCore.FABRIKChainLink
struct FFABRIKChainLink {
};

// ScriptStruct AnimationCore.Axis
struct FAxis {
	struct FVector Axis; 
	bool bInLocalSpace; 
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx {
	struct FFilterOptionPerAxis AxesFilterOption; 
};

// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : FConstraintDescriptionEx {
	struct FAxis LookAt_Axis; 
	struct FAxis LookUp_Axis; 
	bool bUseLookUp; 
	struct FVector LookUpTarget; 
};

// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class ETransformConstraintType TransformType; 
};

// ScriptStruct AnimationCore.NodeChain
struct FNodeChain {
	struct TArray<struct FName> Nodes; 
};

// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale {
	struct FVector Location; 
	struct FQuat Rotation; 
};

