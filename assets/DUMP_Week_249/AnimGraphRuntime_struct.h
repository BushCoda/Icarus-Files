// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
struct FBoneSocketTarget {
	bool bUseSocket; 
	struct FBoneReference BoneReference; 
	struct FSocketReference SocketReference; 
};

// ScriptStruct AnimGraphRuntime.SocketReference
struct FSocketReference {
	struct FName SocketName; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; 
	int32_t LODThreshold; 
	float ActualAlpha; 
	enum class EAnimAlphaInputType AlphaInputType; 
	bool bAlphaBoolEnabled; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; 
	float Y; 
	float Z; 
	float PlayRate; 
	bool bLoop; 
	bool bResetPlayTimeWhenBlendSpaceChanges; 
	float StartPosition; 
	struct UBlendSpaceBase* BlendSpace; 
	struct UBlendSpaceBase* PreviousBlendSpace; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; 
	int32_t LODThreshold; 
	struct FName SourceSocketName; 
	struct FName PivotSocketName; 
	struct FVector LookAtLocation; 
	struct FVector SocketAxis; 
	float Alpha; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; 
	float AngularDampingOverride; 
	struct FBoneReference RelativeSpaceBone; 
	struct FBoneReference BoundBone; 
	struct FBoneReference ChainEnd; 
	struct FVector BoxExtents; 
	struct FVector LocalJointOffset; 
	float GravityScale; 
	struct FVector GravityOverride; 
	float LinearSpringConstant; 
	float AngularSpringConstant; 
	float WindScale; 
	struct FVector ComponentLinearAccScale; 
	struct FVector ComponentLinearVelScale; 
	struct FVector ComponentAppliedLinearAccClamp; 
	float AngularBiasOverride; 
	int32_t NumSolverIterationsPreUpdate; 
	int32_t NumSolverIterationsPostUpdate; 
	struct FAnimPhysConstraintSetup ConstraintSetup; 
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; 
	float SphereCollisionRadius; 
	struct FVector ExternalForce; 
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; 
	enum class AnimPhysCollisionType CollisionType; 
	enum class AnimPhysSimSpaceType SimulationSpace; 
	char bUseSphericalLimits : 1; 
	char bUsePlanarLimit : 1; 
	char bDoUpdate : 1; 
	char bDoEval : 1; 
	char bOverrideLinearDamping : 1; 
	char bOverrideAngularBias : 1; 
	char bOverrideAngularDamping : 1; 
	char bEnableWind : 1; 
	char bUseGravityOverride : 1; 
	char bLinearSpring : 1; 
	char bAngularSpring : 1; 
	char bChain : 1; 
	struct FRotationRetargetingInfo RetargetingSettings; 
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo {
	bool bEnabled; 
	struct FTransform Source; 
	struct FTransform Target; 
	enum class ERotationComponent RotationComponent; 
	struct FVector TwistAxis; 
	bool bUseAbsoluteAngle; 
	float SourceMinimum; 
	float SourceMaximum; 
	float TargetMinimum; 
	float TargetMaximum; 
	enum class EEasingFuncType EasingType; 
	struct FRuntimeFloatCurve CustomCurve; 
	bool bFlipEasing; 
	float EasingWeight; 
	bool bClamp; 
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; 
	struct FTransform PlaneTransform; 
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; 
	struct FVector SphereLocalOffset; 
	float LimitRadius; 
	enum class ESphericalLimitType LimitType; 
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; 
	enum class AnimPhysLinearConstraintType LinearYLimitType; 
	enum class AnimPhysLinearConstraintType LinearZLimitType; 
	struct FVector LinearAxesMin; 
	struct FVector LinearAxesMax; 
	enum class AnimPhysAngularConstraintType AngularConstraintType; 
	enum class AnimPhysTwistAxis TwistAxis; 
	enum class AnimPhysTwistAxis AngularTargetAxis; 
	float ConeAngle; 
	struct FVector AngularLimitsMin; 
	struct FVector AngularLimitsMax; 
	struct FVector AngularTarget; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; 
	struct FPoseLink Additive; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	int32_t LODThreshold; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
	enum class EAnimAlphaInputType AlphaInputType; 
	bool bAlphaBoolEnabled; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; 
	struct TArray<struct FVector> AngularOffsets; 
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit {
	struct FVector LimitMin; 
	struct FVector LimitMax; 
	struct FBoneReference bone; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; 
	struct FPoseLink B; 
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	enum class EBoneControlSpace TransformsSpace; 
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; 
	struct FBoneReference TargetBone; 
	bool bBlendTranslation; 
	bool bBlendRotation; 
	bool bBlendScale; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; 
	struct TArray<float> BlendTime; 
	enum class EBlendListTransitionType TransitionType; 
	enum class EAlphaBlendOption BlendType; 
	bool bResetChildOnActivation; 
	struct UCurveFloat* CustomBlendCurve; 
	struct UBlendProfile* BlendProfile; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; 
	char ActiveEnumValue; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; 
	struct UCurveFloat* DrivingCurve; 
	float Multiplier; 
	float RangeMin; 
	float RangeMax; 
	float RemappedMin; 
	float RemappedMax; 
	struct FName ParameterName; 
	struct FBoneReference TargetBone; 
	enum class EDrivenDestinationMode DestinationMode; 
	enum class EDrivenBoneModificationMode ModificationMode; 
	enum class EComponentType SourceComponent; 
	char bUseRange : 1; 
	char bAffectTargetTranslationX : 1; 
	char bAffectTargetTranslationY : 1; 
	char bAffectTargetTranslationZ : 1; 
	char bAffectTargetRotationX : 1; 
	char bAffectTargetRotationY : 1; 
	char bAffectTargetRotationZ : 1; 
	char bAffectTargetScaleX : 1; 
	char bAffectTargetScaleY : 1; 
	char bAffectTargetScaleZ : 1; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; 
	enum class EBoneControlSpace EffectorLocationSpace; 
	struct FBoneSocketTarget EffectorTarget; 
	struct FBoneReference TipBone; 
	struct FBoneReference RootBone; 
	float Precision; 
	int32_t MaxIterations; 
	bool bStartFromTail; 
	bool bEnableRotationLimit; 
	struct TArray<float> RotationLimitPerJoints; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; 
	struct TArray<struct FConstraint> ConstraintSetup; 
	struct TArray<float> ConstraintWeights; 
};

// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint {
	struct FBoneReference TargetBone; 
	enum class EConstraintOffsetOption OffsetOption; 
	enum class ETransformConstraintType TransformType; 
	struct FFilterOptionPerAxis PerAxis; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; 
	struct FBoneReference TargetBone; 
	bool bCopyTranslation; 
	bool bCopyRotation; 
	bool bCopyScale; 
	enum class EBoneControlSpace ControlSpace; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; 
	struct FBoneReference TargetBone; 
	bool bCopyTranslation; 
	bool bCopyRotation; 
	bool bCopyScale; 
	enum class CopyBoneDeltaMode CopyMode; 
	float TranslationMultiplier; 
	float RotationMultiplier; 
	float ScaleMultiplier; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; 
	char bUseAttachedParent : 1; 
	char bCopyCurves : 1; 
	bool bCopyCustomAttributes; 
	char bUseMeshPose : 1; 
	struct FName RootBoneToCopy; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; 
	struct FName SourceBinding; 
	float Alpha; 
	struct TScriptInterface<ICurveSourceInterface> CurveSource; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	struct FTransform EffectorTransform; 
	struct FBoneSocketTarget EffectorTarget; 
	struct FBoneReference TipBone; 
	struct FBoneReference RootBone; 
	float Precision; 
	int32_t MaxIterations; 
	enum class EBoneControlSpace EffectorTransformSpace; 
	enum class EBoneRotationSource EffectorRotationSource; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; 
	struct FBoneReference LeftHandFK; 
	struct FBoneReference RightHandIK; 
	struct FBoneReference LeftHandIK; 
	struct TArray<struct FBoneReference> IKBonesToMove; 
	float HandFKWeight; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; 
	struct TArray<struct FPoseLink> BlendPoses; 
	struct TArray<struct FInputBlendPose> LayerSetup; 
	struct TArray<float> BlendWeights; 
	bool bMeshSpaceRotationBlend; 
	bool bMeshSpaceScaleBlend; 
	enum class ECurveBlendOption CurveBlendOption; 
	bool bBlendRootMotionBasedOnRootBone; 
	int32_t LODThreshold; 
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; 
	struct FGuid SkeletonGuid; 
	struct FGuid VirtualBoneGuid; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; 
	int32_t MaxIterations; 
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; 
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; 
	struct FBoneReference FKFootBone; 
	int32_t NumBonesInLimb; 
	float MinRotationAngle; 
	enum class EAxis FootBoneForwardAxis; 
	enum class EAxis HingeRotationAxis; 
	bool bEnableRotationLimit; 
	bool bEnableKneeTwistCorrection; 
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData {
};

// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain {
};

// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink {
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; 
	struct FBoneSocketTarget LookAtTarget; 
	struct FVector LookAtLocation; 
	struct FAxis LookAt_Axis; 
	bool bUseLookUpAxis; 
	enum class EInterpolationBlend InterpolationType; 
	struct FAxis LookUp_Axis; 
	float LookAtClamp; 
	float InterpolationTime; 
	float InterpolationTriggerThreashold; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink Base; 
	struct FPoseLink Additive; 
	bool bMeshSpaceAdditive; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; 
	struct FVector Translation; 
	struct FRotator Rotation; 
	struct FVector Scale; 
	enum class EBoneModificationMode TranslationMode; 
	enum class EBoneModificationMode RotationMode; 
	enum class EBoneModificationMode ScaleMode; 
	enum class EBoneControlSpace TranslationSpace; 
	enum class EBoneControlSpace RotationSpace; 
	enum class EBoneControlSpace ScaleSpace; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; 
	struct TArray<float> CurveValues; 
	struct TArray<struct FName> CurveNames; 
	float Alpha; 
	enum class EModifyCurveApplyMode ApplyMode; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; 
	struct TArray<float> DesiredAlphas; 
	struct FInputScaleBias AlphaScaleBias; 
	bool bAdditiveNode; 
	bool bNormalizeAlpha; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; 
	enum class EBoneControlSpace DisplaySpace; 
	bool bRelativeToRefPose; 
	struct FVector Translation; 
	struct FRotator Rotation; 
	struct FVector Scale; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; 
	enum class EAlphaBlendOption BlendOption; 
	struct UCurveFloat* CustomCurve; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; 
	float PoseWeight; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; 
	struct TArray<struct FBoneReference> SourceBones; 
	struct TArray<struct FBoneReference> OnlyDriveBones; 
	struct TArray<struct FPoseDriverTarget> PoseTargets; 
	struct FBoneReference EvalSpaceBone; 
	struct FRBFParams RBFParams; 
	enum class EPoseDriverSource DriveSource; 
	enum class EPoseDriverOutput DriveOutput; 
	char bOnlyDriveSelectedBones : 1; 
	int32_t LODThreshold; 
};

// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams {
	int32_t TargetDimensions; 
	enum class ERBFSolverType SolverType; 
	float Radius; 
	bool bAutomaticRadius; 
	enum class ERBFFunctionType Function; 
	enum class ERBFDistanceMethod DistanceMethod; 
	enum class EBoneAxis TwistAxis; 
	float WeightThreshold; 
	enum class ERBFNormalizeMethod NormalizeMethod; 
	struct FVector MedianReference; 
	float MedianMin; 
	float MedianMax; 
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; 
	struct FRotator TargetRotation; 
	float TargetScale; 
	enum class ERBFDistanceMethod DistanceMethod; 
	enum class ERBFFunctionType FunctionType; 
	bool bApplyCustomCurve; 
	struct FRichCurve CustomCurve; 
	struct FName DrivenName; 
	bool bIsHidden; 
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform {
	struct FVector TargetTranslation; 
	struct FRotator TargetRotation; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; 
	struct FPoseSnapshot Snapshot; 
	enum class ESnapshotSourceMode Mode; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; 
	bool bShuffleMode; 
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; 
	float ChanceToPlay; 
	int32_t MinLoopCount; 
	int32_t MaxLoopCount; 
	float MinPlayRate; 
	float MaxPlayRate; 
	struct FAlphaBlend BlendIn; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; 
	struct FVector OverrideWorldGravity; 
	struct FVector ExternalForce; 
	struct FVector ComponentLinearAccScale; 
	struct FVector ComponentLinearVelScale; 
	struct FVector ComponentAppliedLinearAccClamp; 
	struct FSimSpaceSettings SimSpaceSettings; 
	float CachedBoundsScale; 
	struct FBoneReference BaseBoneRef; 
	enum class ECollisionChannel OverlapChannel; 
	enum class ESimulationSpace SimulationSpace; 
	bool bForceDisableCollisionBetweenConstraintBodies; 
	char bEnableWorldGeometry : 1; 
	char bOverrideWorldGravity : 1; 
	char bTransferBoneVelocities : 1; 
	char bFreezeIncomingPoseOnStart : 1; 
	char bClampLinearTranslationLimitToRefPose : 1; 
	float WorldSpaceMinimumScale; 
	float EvaluationResetTime; 
};

// ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct FSimSpaceSettings {
	float MasterAlpha; 
	float VelocityScaleZ; 
	float MaxLinearVelocity; 
	float MaxAngularVelocity; 
	float MaxLinearAcceleration; 
	float MaxAngularAcceleration; 
	float ExternalLinearDrag; 
	struct FVector ExternalLinearDragV; 
	struct FVector ExternalLinearVelocity; 
	struct FVector ExternalAngularVelocity; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; 
	float Pitch; 
	float Yaw; 
	struct FInputScaleBiasClamp PitchScaleBiasClamp; 
	struct FInputScaleBiasClamp YawScaleBiasClamp; 
	struct FRotator MeshToComponent; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; 
	struct FBoneReference SourceBone; 
	float Multiplier; 
	enum class EBoneAxis RotationAxisToRefer; 
	bool bIsAdditive; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; 
	int32_t LODThreshold; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
	enum class EAnimAlphaInputType AlphaInputType; 
	bool bAlphaBoolEnabled; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; 
	float DefaultChainLength; 
	struct FBoneReference ChainStartBone; 
	struct FBoneReference ChainEndBone; 
	struct FVector TargetLocation; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	enum class EScaleChainInitialLength ChainInitialLength; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; 
	float ExplicitTime; 
	bool bShouldLoop; 
	bool bTeleportToExplicitTime; 
	enum class ESequenceEvalReinit ReinitializationBehavior; 
	float StartPosition; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; 
	struct FName SlotName; 
	bool bAlwaysUpdateSourcePose; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; 
	struct FBoneReference EndBone; 
	enum class ESplineBoneAxis BoneAxis; 
	bool bAutoCalculateSpline; 
	int32_t PointCount; 
	struct TArray<struct FTransform> ControlPoints; 
	float Roll; 
	float TwistStart; 
	float TwistEnd; 
	struct FAlphaBlend TwistBlend; 
	float Stretch; 
	float Offset; 
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData {
	struct FBoneReference bone; 
	int32_t RefSkeletonIndex; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; 
	float MaxDisplacement; 
	float SpringStiffness; 
	float SpringDamping; 
	float ErrorResetThresh; 
	char bLimitDisplacement : 1; 
	char bTranslateX : 1; 
	char bTranslateY : 1; 
	char bTranslateZ : 1; 
	char bRotateX : 1; 
	char bRotateY : 1; 
	char bRotateZ : 1; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	struct FBoneReference TrailBone; 
	int32_t ChainLength; 
	enum class EAxis ChainBoneAxis; 
	char bInvertChainBoneAxis : 1; 
	char bLimitStretch : 1; 
	char bLimitRotation : 1; 
	char bUsePlanarLimit : 1; 
	char bActorSpaceFakeVel : 1; 
	char bReorientParentToChild : 1; 
	float MaxDeltaTime; 
	float RelaxationSpeedScale; 
	struct FRuntimeFloatCurve TrailRelaxationSpeed; 
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; 
	struct TArray<struct FRotationLimit> RotationLimits; 
	struct TArray<struct FVector> RotationOffsets; 
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; 
	float StretchLimit; 
	struct FVector FakeVelocity; 
	struct FBoneReference BaseJoint; 
	float LastBoneRotationAnimAlphaBlend; 
};

// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit {
	struct FVector LimitMin; 
	struct FVector LimitMax; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; 
	struct FReferenceBoneFrame TwistFrame; 
	struct FAxis TwistPlaneNormalAxis; 
	float RangeMax; 
	float RemappedMin; 
	float RemappedMax; 
	struct FAnimCurveParam Curve; 
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame {
	struct FBoneReference bone; 
	struct FAxis Axis; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; 
	float StartStretchRatio; 
	float MaxStretchScale; 
	struct FVector EffectorLocation; 
	struct FBoneSocketTarget EffectorTarget; 
	struct FVector JointTargetLocation; 
	struct FBoneSocketTarget JointTarget; 
	struct FAxis TwistAxis; 
	enum class EBoneControlSpace EffectorLocationSpace; 
	enum class EBoneControlSpace JointTargetLocationSpace; 
	char bAllowStretching : 1; 
	char bTakeRotationFromEffectorSpace : 1; 
	char bMaintainEffectorRelRot : 1; 
	char bAllowTwist : 1; 
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; 
	struct FPoseLink B; 
	enum class EAnimAlphaInputType AlphaInputType; 
	char bAlphaBoolEnabled : 1; 
	char bResetChildOnActivation : 1; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
};

// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory {
	struct TArray<struct FVector> Positions; 
	float Range; 
};

// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry {
	struct TArray<float> Values; 
};

// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; 
	bool bApplyCustomCurve; 
	struct FRichCurve CustomCurve; 
	enum class ERBFDistanceMethod DistanceMethod; 
	enum class ERBFFunctionType FunctionType; 
};

