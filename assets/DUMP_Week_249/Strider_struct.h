// Enum Strider.ESlopeWarpQuality
enum class ESlopeWarpQuality : uint8 {
	Capsule = 0,
	PerFootRay = 1,
	PerFootShape = 2,
	LODBased = 3,
	ESlopeWarpQuality_MAX = 4
};

// Enum Strider.ESlopeRollCompensation
enum class ESlopeRollCompensation : uint8 {
	None = 0,
	AdjustHips = 1,
	AdjustFeet = 2,
	ESlopeRollCompensation_MAX = 3
};

// Enum Strider.ESlopeDetectionMode
enum class ESlopeDetectionMode : uint8 {
	ManualSlope = 0,
	AutomaticSlope = 1,
	ESlopeDetectionMode_MAX = 2
};

// Enum Strider.EStrideVectorMethod
enum class EStrideVectorMethod : uint8 {
	ManualVelocity = 0,
	ActorVelocity = 1,
	EStrideVectorMethod_MAX = 2
};

// ScriptStruct Strider.AnimNode_AccelerationWarp
struct FAnimNode_AccelerationWarp : FAnimNode_Base {
	struct FPoseLink InputPose; 
	float Acceleration; 
	float Direction; 
	float Alpha; 
	struct FVector UpAxis; 
	float TorsoBendRatio; 
	float MaxTorsoBend; 
	float Smoothing; 
	struct FBoneChain SpineChain; 
};

// ScriptStruct Strider.BoneChain
struct FBoneChain {
	struct TArray<struct FBoneChainLink> BoneChain; 
};

// ScriptStruct Strider.BoneChainLink
struct FBoneChainLink {
	struct FBoneReference bone; 
	float Weight; 
};

// ScriptStruct Strider.AnimNode_BankWarp
struct FAnimNode_BankWarp : FAnimNode_Base {
	struct FPoseLink InputPose; 
	float BankValue; 
	float Alpha; 
	struct FVector UpAxis; 
	struct FVector ForwardAxis; 
	float TwistRate; 
	float MaxTwist; 
	float LeanRate; 
	float MaxLean; 
	float Smoothing; 
	struct FBoneReference RootBone; 
	struct FBoneChain SpineChain; 
	struct TArray<struct FBoneReference> RootBonesToAdjust; 
};

// ScriptStruct Strider.AnimNode_OrientationWarp
struct FAnimNode_OrientationWarp : FAnimNode_Base {
	struct FPoseLink InputPose; 
	float Direction; 
	float Offset; 
	float UpperBodyAlpha; 
	struct FVector UpAxis; 
	float Alpha; 
	float MaxWarpDelta; 
	float Smoothing; 
	struct FBoneReference RootBone; 
	struct FBoneChain SpineChain; 
	struct TArray<struct FBoneReference> RootBonesToCounterAdjust; 
};

// ScriptStruct Strider.AnimNode_SlopeWarp
struct FAnimNode_SlopeWarp : FAnimNode_SkeletalControlBase {
	struct FVector SlopeNormal; 
	struct FVector SlopePoint; 
	enum class ESlopeDetectionMode SlopeDetectionMode; 
	enum class ESlopeRollCompensation SlopeRollCompensation; 
	struct FVector IKRootLeftVector; 
	float MaxSlopeAngle; 
	float HeightOffset; 
	float SlopeSmoothingRate; 
	float AllowExtensionPercent; 
	float DownSlopeShiftRate; 
	struct FBoneReference IkRoot; 
	struct FHipAdjustment HipAdjustment; 
	struct TArray<struct FLimbDefinition> Limbs; 
	struct TArray<struct FBoneReference> AdditionalBonesToAdjustWithHips; 
};

// ScriptStruct Strider.LimbDefinition
struct FLimbDefinition {
	struct FBoneReference Tip; 
	struct FBoneReference IkTarget; 
	int32_t BoneCount; 
};

// ScriptStruct Strider.HipAdjustment
struct FHipAdjustment {
	struct FBoneReference Hips; 
	float AdjustmentRatio; 
	float MaxRecoveryRate; 
};

// ScriptStruct Strider.AnimNode_StrideWarp
struct FAnimNode_StrideWarp : FAnimNode_SkeletalControlBase {
	float StrideScale; 
	float Direction; 
	float Twist; 
	float AllowExtensionPercent; 
	struct FStridePivot StridePivot; 
	struct FHipAdjustment HipAdjustment; 
	struct TArray<struct FLimbDefinition> Limbs; 
	struct TArray<struct FBoneReference> AdditionalBonesToAdjustWithHips; 
};

// ScriptStruct Strider.StridePivot
struct FStridePivot {
	struct FBoneReference Root; 
	bool bProjectToGround; 
	float Offset; 
	enum class EStrideVectorMethod StrideVectorMethod; 
	float Smoothing; 
	bool bChooseNearestAxis; 
};

