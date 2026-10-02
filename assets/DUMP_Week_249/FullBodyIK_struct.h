// Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8 {
	Direction = 0,
	Location = 1,
	EPoleVectorOption_MAX = 2
};

// Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8 {
	Free = 0,
	Limit = 1,
	Locked = 2,
	EFBIKBoneLimitType_MAX = 3
};

// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput {
	bool bForceEffectorRotationTarget; 
	bool bOnlyApplyWhenReachedToTarget; 
};

// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption {
	struct FRigElementKey Item; 
	bool bEnabled; 
	bool bUseStiffness; 
	struct FVector LinearStiffness; 
	struct FVector AngularStiffness; 
	bool bUseAngularLimit; 
	struct FFBIKBoneLimit AngularLimit; 
	bool bUsePoleVector; 
	enum class EPoleVectorOption PoleVectorOption; 
	struct FVector PoleVector; 
	struct FRotator OffsetRotation; 
};

// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit {
	enum class EFBIKBoneLimitType LimitType_X; 
	enum class EFBIKBoneLimitType LimitType_Y; 
	enum class EFBIKBoneLimitType LimitType_Z; 
	struct FVector Limit; 
};

// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption {
	bool bDrawDebugHierarchy; 
	bool bColorAngularMotionStrength; 
	bool bColorLinearMotionStrength; 
	bool bDrawDebugAxes; 
	bool bDrawDebugEffector; 
	bool bDrawDebugConstraints; 
	struct FTransform DrawWorldOffset; 
	float DrawSize; 
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Root; 
	struct TArray<struct FFBIKEndEffector> Effectors; 
	struct TArray<struct FFBIKConstraintOption> Constraints; 
	struct FSolverInput SolverProperty; 
	struct FMotionProcessInput MotionProperty; 
	bool bPropagateToChildren; 
	struct FFBIKDebugOption DebugOption; 
	struct FRigUnit_FullbodyIK_WorkData WorkData; 
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData {
};

// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput {
	float LinearMotionStrength; 
	float MinLinearMotionStrength; 
	float AngularMotionStrength; 
	float MinAngularMotionStrength; 
	float DefaultTargetClamp; 
	float Precision; 
	float Damping; 
	int32_t MaxIterations; 
	bool bUseJacobianTranspose; 
};

// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector {
	struct FRigElementKey Item; 
	struct FVector position; 
	float PositionAlpha; 
	int32_t PositionDepth; 
	struct FQuat Rotation; 
	float RotationAlpha; 
	int32_t RotationDepth; 
	float Pull; 
};

