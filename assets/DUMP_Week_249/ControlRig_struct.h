// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8 {
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8 {
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5
};

// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8 {
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8 {
	Initial = 0,
	Current = 1,
	Max = 2
};

// Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	EControlRigClampSpatialMode_MAX = 3
};

// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8 {
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	EControlRigDrawSettings_MAX = 4
};

// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8 {
	Axes = 0,
	Max = 1
};

// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	EControlRigAnimEasingType_MAX = 31
};

// Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8 {
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EControlRigRotationOrder_MAX = 6
};

// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8 {
	Verlet = 0,
	SemiExplicitEuler = 1,
	ECRSimPointIntegrateType_MAX = 2
};

// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8 {
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8 {
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8 {
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8 {
	Replace = 0,
	Additive = 1,
	Max = 2
};

// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8 {
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8 {
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8 {
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ERigControlType_MAX = 10
};

// Enum ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8 {
	Append = 0,
	Replace = 1,
	ReplaceLocalTransform = 2,
	ReplaceGlobalTransform = 3,
	Max = 4
};

// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8 {
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8 {
	None = 0,
	RequestAutoKey = 1,
	Max = 2
};

// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8 {
	None = 0,
	Bone = 1,
	Space = 2,
	Control = 4,
	Curve = 8,
	All = 15,
	ERigElementType_MAX = 16
};

// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8 {
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Enum ControlRig.EAimMode
enum class EAimMode : uint8 {
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8 {
	Override = 0,
	Additive = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8 {
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8 {
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8 {
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8 {
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8 {
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8 {
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2
};

// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8 {
	Init = 0,
	Update = 1,
	Invalid = 2,
	EControlRigState_MAX = 3
};

// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	struct TArray<struct FConstraintNodeData> UserData; 
};

// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData {
	struct FTransform RelativeParent; 
	struct FConstraintOffset ConstraintOffset; 
	struct FName LinkedNode; 
	struct TArray<struct FTransformConstraint> Constraints; 
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	struct FPoseLink Source; 
	struct TMap<struct FName, uint16_t> ControlRigBoneMapping; 
	struct TMap<struct FName, uint16_t> ControlRigCurveMapping; 
	struct TMap<struct FName, uint16_t> InputToCurveMappingUIDs; 
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; 
	struct FControlRigIOSettings InputSettings; 
	struct FControlRigIOSettings OutputSettings; 
	bool bExecute; 
};

// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings {
	bool bUpdatePose; 
	bool bUpdateCurves; 
};

// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	struct UControlRig* ControlRigClass; 
	struct UControlRig* ControlRig; 
	float Alpha; 
	enum class EAnimAlphaInputType AlphaInputType; 
	char bAlphaBoolEnabled : 1; 
	char bSetRefPoseFromSkeleton : 1; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
	struct TMap<struct FName, struct FName> InputMapping; 
	struct TMap<struct FName, struct FName> OutputMapping; 
	int32_t LODThreshold; 
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	struct TWeakObjectPtr<struct UControlRig> ControlRig; 
};

// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve {
	struct FName Source; 
	struct FName Target; 
};

// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone {
	struct FName Source; 
	struct FName Target; 
};

// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent {
	struct USceneComponent* Component; 
	struct FName ElementName; 
	enum class ERigElementType ElementType; 
	enum class EControlRigComponentMapDirection Direction; 
};

// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement {
	struct FComponentReference ComponentReference; 
	int32_t TransformIndex; 
	struct FName TransformName; 
	enum class ERigElementType ElementType; 
	struct FName ElementName; 
	enum class EControlRigComponentMapDirection Direction; 
	struct FTransform Offset; 
	float Weight; 
	enum class EControlRigComponentSpace Space; 
	struct USceneComponent* SceneComponent; 
	int32_t ElementIndex; 
	int32_t SubIndex; 
};

// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : FRigVMExecuteContext {
};

// ScriptStruct ControlRig.ControlRigDrawContainer
struct FControlRigDrawContainer {
	struct TArray<struct FControlRigDrawInstruction> Instructions; 
};

// ScriptStruct ControlRig.ControlRigDrawInstruction
struct FControlRigDrawInstruction {
	struct FName Name; 
	enum class EControlRigDrawSettings PrimitiveType; 
	struct TArray<struct FVector> Positions; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.ControlRigDrawInterface
struct FControlRigDrawInterface : FControlRigDrawContainer {
};

// ScriptStruct ControlRig.GizmoActorCreationParam
struct FGizmoActorCreationParam {
};

// ScriptStruct ControlRig.ControlRigGizmoDefinition
struct FControlRigGizmoDefinition {
	struct FName GizmoName; 
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	struct FPoseLink InputPose; 
};

// ScriptStruct ControlRig.CRFourPointBezier
struct FCRFourPointBezier {
	struct FVector A; 
	struct FVector B; 
	struct FVector C; 
	struct FVector D; 
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; 
	struct TArray<struct FControlRigSequenceObjectReferences> References; 
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences {
	struct TArray<struct FControlRigSequenceObjectReference> Array; 
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference {
	struct UControlRig* ControlRigClass; 
};

// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy {
};

// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool {
	struct TMap<struct FString, bool> Values; 
};

// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext {
};

// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer {
	float TimeStep; 
	float AccumulatedTime; 
	float TimeLeftForStep; 
};

// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring {
	int32_t SubjectA; 
	int32_t SubjectB; 
	float Coefficient; 
	float Equilibrium; 
};

// ScriptStruct ControlRig.CRSimPoint
struct FCRSimPoint {
	float Mass; 
	float Size; 
	float LinearDamping; 
	float InheritMotion; 
	struct FVector position; 
	struct FVector LinearVelocity; 
};

// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint {
	enum class ECRSimConstraintType Type; 
	int32_t SubjectA; 
	int32_t SubjectB; 
	struct FVector DataA; 
	struct FVector DataB; 
};

// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : FCRSimContainer {
	struct TArray<struct FCRSimPoint> Points; 
	struct TArray<struct FCRSimLinearSpring> Springs; 
	struct TArray<struct FCRSimPointForce> Forces; 
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; 
	struct TArray<struct FCRSimPointConstraint> Constraints; 
	struct TArray<struct FCRSimPoint> PreviousStep; 
};

// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision {
	struct FTransform Transform; 
	enum class ECRSimSoftCollisionType ShapeType; 
	float MinimumDistance; 
	float MaximumDistance; 
	enum class EControlRigAnimEasingType FalloffType; 
	float Coefficient; 
	bool bInverted; 
};

// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce {
	enum class ECRSimPointForceType ForceType; 
	struct FVector Vector; 
	float Coefficient; 
	bool bNormalize; 
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; 
	bool bApplyBoneFilter; 
	struct FInputBlendPose BoneFilter; 
	struct FMovieSceneFloatChannel Weight; 
	struct FMovieSceneEvaluationOperand Operand; 
};

// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo {
	int32_t ControlIndex; 
	int32_t TotalChannelIndex; 
	int32_t ChannelIndex; 
	int32_t ParentControlIndex; 
	struct FName ChannelTypeName; 
};

// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve {
	struct FName ParameterName; 
	struct FMovieSceneIntegerChannel ParameterCurve; 
};

// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve {
	struct FName ParameterName; 
	struct FMovieSceneByteChannel ParameterCurve; 
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FEnumParameterNameAndCurve> Enums; 
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; 
};

// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy {
	struct TArray<struct FRigBone> Bones; 
	struct TMap<struct FName, int32_t> NameToIndexMapping; 
	struct TArray<struct FName> Selection; 
};

// ScriptStruct ControlRig.RigElement
struct FRigElement {
	struct FName Name; 
	int32_t Index; 
};

// ScriptStruct ControlRig.RigBone
struct FRigBone : FRigElement {
	struct FName ParentName; 
	int32_t ParentIndex; 
	struct FTransform InitialTransform; 
	struct FTransform GlobalTransform; 
	struct FTransform LocalTransform; 
	struct TArray<int32_t> Dependents; 
	enum class ERigBoneType Type; 
};

// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy {
	struct TArray<struct FRigControl> Controls; 
	struct TMap<struct FName, int32_t> NameToIndexMapping; 
	struct TArray<struct FName> Selection; 
};

// ScriptStruct ControlRig.RigControl
struct FRigControl : FRigElement {
	enum class ERigControlType ControlType; 
	struct FName DisplayName; 
	struct FName ParentName; 
	int32_t ParentIndex; 
	struct FName SpaceName; 
	int32_t SpaceIndex; 
	struct FTransform OffsetTransform; 
	struct FRigControlValue InitialValue; 
	struct FRigControlValue Value; 
	enum class ERigControlAxis PrimaryAxis; 
	bool bIsCurve; 
	bool bAnimatable; 
	bool bLimitTranslation; 
	bool bLimitRotation; 
	bool bLimitScale; 
	bool bDrawLimits; 
	struct FRigControlValue MinimumValue; 
	struct FRigControlValue MaximumValue; 
	bool bGizmoEnabled; 
	bool bGizmoVisible; 
	struct FName GizmoName; 
	struct FTransform GizmoTransform; 
	struct FLinearColor GizmoColor; 
	struct TArray<int32_t> Dependents; 
	bool bIsTransientControl; 
	struct UEnum* ControlEnum; 
};

// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue {
	struct FRigControlValueStorage FloatStorage; 
	struct FTransform Storage; 
};

// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage {
	float Float00; 
	float Float01; 
	float Float02; 
	float Float03; 
	float Float10; 
	float Float11; 
	float Float12; 
	float Float13; 
	float Float20; 
	float Float21; 
	float Float22; 
	float Float23; 
	float Float30; 
	float Float31; 
	float Float32; 
	float Float33; 
	bool bValid; 
};

// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer {
	struct TArray<struct FRigCurve> Curves; 
	struct TMap<struct FName, int32_t> NameToIndexMapping; 
	struct TArray<struct FName> Selection; 
};

// ScriptStruct ControlRig.RigCurve
struct FRigCurve : FRigElement {
	float Value; 
};

// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement {
	struct FRigElementKey Key; 
	uint16_t Index; 
	int32_t ContainerVersion; 
};

// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey {
	enum class ERigElementType Type; 
	struct FName Name; 
};

// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef {
};

// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer {
	struct FRigBoneHierarchy BoneHierarchy; 
	struct FRigSpaceHierarchy SpaceHierarchy; 
	struct FRigControlHierarchy ControlHierarchy; 
	struct FRigCurveContainer CurveContainer; 
	int32_t Version; 
};

// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy {
	struct TArray<struct FRigSpace> Spaces; 
	struct TMap<struct FName, int32_t> NameToIndexMapping; 
	struct TArray<struct FName> Selection; 
};

// ScriptStruct ControlRig.RigSpace
struct FRigSpace : FRigElement {
	enum class ERigSpaceType SpaceType; 
	struct FName ParentName; 
	int32_t ParentIndex; 
	struct FTransform InitialTransform; 
	struct FTransform LocalTransform; 
};

// ScriptStruct ControlRig.RigMirrorSettings
struct FRigMirrorSettings {
	enum class EAxis MirrorAxis; 
	enum class EAxis AxisToFlip; 
	struct FString OldName; 
	struct FString NewName; 
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent {
	struct TArray<enum class ERigElementType> Types; 
	struct TArray<struct FString> Contents; 
	struct TArray<struct FTransform> LocalTransforms; 
	struct TArray<struct FTransform> GlobalTransforms; 
};

// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext {
};

// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection {
};

// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext {
};

// ScriptStruct ControlRig.RigPose
struct FRigPose {
	struct TArray<struct FRigPoseElement> Elements; 
};

// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement {
	struct FCachedRigElement Index; 
	struct FTransform GlobalTransform; 
	struct FTransform LocalTransform; 
	float CurveValue; 
};

// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent {
	struct TArray<struct FRigInfluenceMap> Maps; 
	struct TMap<struct FName, int32_t> EventToIndex; 
};

// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap {
	struct FName EventName; 
	struct TArray<struct FRigInfluenceEntry> Entries; 
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex; 
};

// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry {
	struct FRigElementKey Source; 
	struct TArray<struct FRigElementKey> AffectedList; 
};

// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier {
	struct TArray<struct FRigElementKey> AffectedList; 
};

// ScriptStruct ControlRig.RigUnit
struct FRigUnit : FRigVMStruct {
};

// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; 
};

// ScriptStruct ControlRig.RigUnit_SimBase
struct FRigUnit_SimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AccumulateBase
struct FRigUnit_AccumulateBase : FRigUnit_SimBase {
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
struct FRigUnit_AccumulateVectorRange : FRigUnit_AccumulateBase {
	struct FVector Value; 
	struct FVector Minimum; 
	struct FVector Maximum; 
	struct FVector AccumulatedMinimum; 
	struct FVector AccumulatedMaximum; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
struct FRigUnit_AccumulateFloatRange : FRigUnit_AccumulateBase {
	float Value; 
	float Minimum; 
	float Maximum; 
	float AccumulatedMinimum; 
	float AccumulatedMaximum; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
struct FRigUnit_AccumulateTransformLerp : FRigUnit_AccumulateBase {
	struct FTransform TargetValue; 
	struct FTransform InitialValue; 
	float Blend; 
	bool bIntegrateDeltaTime; 
	struct FTransform Result; 
	struct FTransform AccumulatedValue; 
	bool bIsInitialized; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
struct FRigUnit_AccumulateQuatLerp : FRigUnit_AccumulateBase {
	struct FQuat TargetValue; 
	struct FQuat InitialValue; 
	float Blend; 
	bool bIntegrateDeltaTime; 
	struct FQuat Result; 
	struct FQuat AccumulatedValue; 
	bool bIsInitialized; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
struct FRigUnit_AccumulateVectorLerp : FRigUnit_AccumulateBase {
	struct FVector TargetValue; 
	struct FVector InitialValue; 
	float Blend; 
	bool bIntegrateDeltaTime; 
	struct FVector Result; 
	struct FVector AccumulatedValue; 
	bool bIsInitialized; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
struct FRigUnit_AccumulateFloatLerp : FRigUnit_AccumulateBase {
	float TargetValue; 
	float InitialValue; 
	float Blend; 
	bool bIntegrateDeltaTime; 
	float Result; 
	float AccumulatedValue; 
	bool bIsInitialized; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
struct FRigUnit_AccumulateTransformMul : FRigUnit_AccumulateBase {
	struct FTransform Multiplier; 
	struct FTransform InitialValue; 
	bool bFlipOrder; 
	bool bIntegrateDeltaTime; 
	struct FTransform Result; 
	struct FTransform AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
struct FRigUnit_AccumulateQuatMul : FRigUnit_AccumulateBase {
	struct FQuat Multiplier; 
	struct FQuat InitialValue; 
	bool bFlipOrder; 
	bool bIntegrateDeltaTime; 
	struct FQuat Result; 
	struct FQuat AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
struct FRigUnit_AccumulateVectorMul : FRigUnit_AccumulateBase {
	struct FVector Multiplier; 
	struct FVector InitialValue; 
	bool bIntegrateDeltaTime; 
	struct FVector Result; 
	struct FVector AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
struct FRigUnit_AccumulateFloatMul : FRigUnit_AccumulateBase {
	float Multiplier; 
	float InitialValue; 
	bool bIntegrateDeltaTime; 
	float Result; 
	float AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
struct FRigUnit_AccumulateVectorAdd : FRigUnit_AccumulateBase {
	struct FVector Increment; 
	struct FVector InitialValue; 
	bool bIntegrateDeltaTime; 
	struct FVector Result; 
	struct FVector AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
struct FRigUnit_AccumulateFloatAdd : FRigUnit_AccumulateBase {
	float Increment; 
	float InitialValue; 
	bool bIntegrateDeltaTime; 
	float Result; 
	float AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	struct FName bone; 
	struct FTransform Transform; 
	float Weight; 
	bool bPostMultiply; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; 
	struct FRigUnit_AimItem_Target Primary; 
	struct FRigUnit_AimItem_Target Secondary; 
	float Weight; 
	struct FRigUnit_AimBone_DebugSettings DebugSettings; 
	struct FCachedRigElement CachedItem; 
	struct FCachedRigElement PrimaryCachedSpace; 
	struct FCachedRigElement SecondaryCachedSpace; 
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; 
	float Scale; 
	struct FTransform WorldOffset; 
};

// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target {
	float Weight; 
	struct FVector Axis; 
	struct FVector Target; 
	enum class EControlRigVectorKind Kind; 
	struct FRigElementKey Space; 
};

// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	struct FName bone; 
	struct FRigUnit_AimBone_Target Primary; 
	struct FRigUnit_AimBone_Target Secondary; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_AimBone_DebugSettings DebugSettings; 
	struct FCachedRigElement CachedBoneIndex; 
	struct FCachedRigElement PrimaryCachedSpace; 
	struct FCachedRigElement SecondaryCachedSpace; 
};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target {
	float Weight; 
	struct FVector Axis; 
	struct FVector Target; 
	enum class EControlRigVectorKind Kind; 
	struct FName Space; 
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	struct FTransform InputTransform; 
	struct FRigUnit_AimItem_Target Primary; 
	struct FRigUnit_AimItem_Target Secondary; 
	float Weight; 
	struct FTransform Result; 
	struct FRigUnit_AimBone_DebugSettings DebugSettings; 
	struct FCachedRigElement PrimaryCachedSpace; 
	struct FCachedRigElement SecondaryCachedSpace; 
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : FRigUnitMutable {
	struct FName Joint; 
	enum class EAimMode AimMode; 
	enum class EAimMode UpMode; 
	struct FVector AimVector; 
	struct FVector UpVector; 
	struct TArray<struct FAimTarget> AimTargets; 
	struct TArray<struct FAimTarget> UpTargets; 
	struct FRigUnit_AimConstraint_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; 
};

// ScriptStruct ControlRig.AimTarget
struct FAimTarget {
	float Weight; 
	struct FTransform Transform; 
	struct FVector AlignVector; 
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase {
	struct FVector Value; 
	float Scale; 
	float Bias; 
	bool bMapRange; 
	struct FInputRange InRange; 
	struct FInputRange OutRange; 
	bool bClampResult; 
	float ClampMin; 
	float ClampMax; 
	bool bInterpResult; 
	float InterpSpeedIncreasing; 
	float InterpSpeedDecreasing; 
	struct FVector Result; 
	struct FInputScaleBiasClamp ScaleBiasClamp; 
};

// ScriptStruct ControlRig.RigUnit_AlphaInterp
struct FRigUnit_AlphaInterp : FRigUnit_SimBase {
	float Value; 
	float Scale; 
	float Bias; 
	bool bMapRange; 
	struct FInputRange InRange; 
	struct FInputRange OutRange; 
	bool bClampResult; 
	float ClampMin; 
	float ClampMax; 
	bool bInterpResult; 
	float InterpSpeedIncreasing; 
	float InterpSpeedDecreasing; 
	float Result; 
	struct FInputScaleBiasClamp ScaleBiasClamp; 
};

// ScriptStruct ControlRig.RigUnit_AnimBase
struct FRigUnit_AnimBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_AnimEasing
struct FRigUnit_AnimEasing : FRigUnit_AnimBase {
	float Value; 
	enum class EControlRigAnimEasingType Type; 
	float SourceMinimum; 
	float SourceMaximum; 
	float TargetMinimum; 
	float TargetMaximum; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase {
	enum class EControlRigAnimEasingType Type; 
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase {
	float Value; 
	struct FRuntimeFloatCurve Curve; 
	float SourceMinimum; 
	float SourceMaximum; 
	float TargetMinimum; 
	float TargetMaximum; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase {
	struct FRuntimeFloatCurve Curve; 
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : FRigUnitMutable {
	struct FName Joint; 
	struct FTransform Transform; 
	struct FTransformFilter Filter; 
	enum class EApplyTransformMode ApplyTransformMode; 
	enum class ETransformSpaceMode ApplyTransformSpace; 
	struct FTransform BaseTransform; 
	struct FName BaseJoint; 
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; 
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : FRigUnit {
	struct FTransform Source; 
	struct TArray<struct FBlendTarget> Targets; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget {
	struct FTransform Transform; 
	float Weight; 
};

// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; 
	struct FVector WaveSpeed; 
	struct FVector WaveFrequency; 
	struct FVector WaveAmplitude; 
	struct FVector WaveOffset; 
	struct FVector WaveNoise; 
	enum class EControlRigAnimEasingType WaveEase; 
	float WaveMinimum; 
	float WaveMaximum; 
	enum class EControlRigRotationOrder RotationOrder; 
	struct FRigUnit_BoneHarmonics_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct FVector WaveTime; 
};

// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem {
	struct FRigElementKey Item; 
	float Ratio; 
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; 
	struct FVector WaveSpeed; 
	struct FVector WaveFrequency; 
	struct FVector WaveAmplitude; 
	struct FVector WaveOffset; 
	struct FVector WaveNoise; 
	enum class EControlRigAnimEasingType WaveEase; 
	float WaveMinimum; 
	float WaveMaximum; 
	enum class EControlRigRotationOrder RotationOrder; 
	bool bPropagateToChildren; 
	struct FRigUnit_BoneHarmonics_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget {
	struct FName bone; 
	float Ratio; 
};

// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : FRigUnit {
	struct FName Control; 
};

// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : FRigUnit {
	struct FName Space; 
};

// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : FRigUnit {
	struct FName bone; 
};

// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : FRigUnit {
	struct FRigElementKey Item; 
};

// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	struct FTransform EffectorTransform; 
	float Precision; 
	float Weight; 
	int32_t MaxIterations; 
	bool bStartFromTail; 
	float BaseRotationLimit; 
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; 
	bool bPropagateToChildren; 
	struct FRigUnit_CCDIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData {
	struct TArray<struct FCCDIKChainLink> Chain; 
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct TArray<int32_t> RotationLimitIndex; 
	struct TArray<float> RotationLimitsPerItem; 
	struct FCachedRigElement CachedEffector; 
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem {
	struct FRigElementKey Item; 
	float Limit; 
};

// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EffectorBone; 
	struct FTransform EffectorTransform; 
	float Precision; 
	float Weight; 
	int32_t MaxIterations; 
	bool bStartFromTail; 
	float BaseRotationLimit; 
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; 
	bool bPropagateToChildren; 
	struct FRigUnit_CCDIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit {
	struct FName bone; 
	float Limit; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ChainRoot; 
	struct FVector Speed; 
	struct FRigUnit_ChainHarmonics_Reach Reach; 
	struct FRigUnit_ChainHarmonics_Wave Wave; 
	struct FRuntimeFloatCurve WaveCurve; 
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; 
	bool bDrawDebug; 
	struct FTransform DrawWorldOffset; 
	struct FRigUnit_ChainHarmonics_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData {
	struct FVector Time; 
	struct TArray<struct FCachedRigElement> Items; 
	struct TArray<float> Ratio; 
	struct TArray<struct FVector> LocalTip; 
	struct TArray<struct FVector> PendulumTip; 
	struct TArray<struct FVector> PendulumPosition; 
	struct TArray<struct FVector> PendulumVelocity; 
	struct TArray<struct FVector> HierarchyLine; 
	struct TArray<struct FVector> VelocityLines; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; 
	float PendulumStiffness; 
	struct FVector PendulumGravity; 
	float PendulumBlend; 
	float PendulumDrag; 
	float PendulumMinimum; 
	float PendulumMaximum; 
	enum class EControlRigAnimEasingType PendulumEase; 
	struct FVector UnwindAxis; 
	float UnwindMinimum; 
	float UnwindMaximum; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; 
	struct FVector WaveFrequency; 
	struct FVector WaveAmplitude; 
	struct FVector WaveOffset; 
	struct FVector WaveNoise; 
	float WaveMinimum; 
	float WaveMaximum; 
	enum class EControlRigAnimEasingType WaveEase; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; 
	struct FVector ReachTarget; 
	struct FVector ReachAxis; 
	float ReachMinimum; 
	float ReachMaximum; 
	enum class EControlRigAnimEasingType ReachEase; 
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	struct FName ChainRoot; 
	struct FVector Speed; 
	struct FRigUnit_ChainHarmonics_Reach Reach; 
	struct FRigUnit_ChainHarmonics_Wave Wave; 
	struct FRuntimeFloatCurve WaveCurve; 
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; 
	bool bDrawDebug; 
	struct FTransform DrawWorldOffset; 
	struct FRigUnit_ChainHarmonics_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKey Item; 
	int32_t Index; 
	int32_t Count; 
	float Ratio; 
	bool Continue; 
	struct FControlRigExecuteContext Completed; 
};

// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; 
	int32_t Index; 
	struct FRigElementKey Item; 
};

// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; 
	int32_t Count; 
};

// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKeyCollection Reversed; 
};

// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; 
	struct FRigElementKeyCollection B; 
	struct FRigElementKeyCollection Collection; 
};

// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; 
	struct FRigElementKeyCollection B; 
	struct FRigElementKeyCollection Collection; 
};

// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; 
	struct FRigElementKeyCollection B; 
	struct FRigElementKeyCollection Collection; 
};

// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; 
	struct FRigElementKeyCollection Collection; 
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Items; 
	struct FName Old; 
	struct FName New; 
	bool RemoveInvalidItems; 
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKeyCollection CachedCollection; 
	int32_t CachedHierarchyHash; 
};

// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; 
	bool bIncludeParent; 
	bool bRecursive; 
	enum class ERigElementType TypeToSearch; 
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKeyCollection CachedCollection; 
	int32_t CachedHierarchyHash; 
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	struct FName PartialName; 
	enum class ERigElementType TypeToSearch; 
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKeyCollection CachedCollection; 
	int32_t CachedHierarchyHash; 
};

// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; 
	struct FRigElementKey LastItem; 
	bool Reverse; 
	struct FRigElementKeyCollection Collection; 
	struct FRigElementKeyCollection CachedCollection; 
	int32_t CachedHierarchyHash; 
};

// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : FRigUnit {
	struct FEulerTransform Transform; 
	struct FTransform Base; 
	struct FTransform InitTransform; 
	struct FTransform Result; 
	struct FTransformFilter Filter; 
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	struct FTransform MeshTransform; 
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : FRigUnit {
	struct FQuat Input; 
	struct FVector TwistAxis; 
	struct FQuat Swing; 
	struct FQuat Twist; 
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	struct FQuat Input; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : FRigUnit {
	struct FRotator Input; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	struct FVector Input; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	struct FVector Input; 
	struct FRotator Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : FRigUnit {
	struct FQuat Input; 
	struct FRotator Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : FRigUnit {
	struct FRotator Input; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation {
};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : FRigUnit {
	struct FEulerTransform Input; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : FRigUnit {
	struct FTransform Input; 
	struct FEulerTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
struct FRigUnit_DebugBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_DebugBase
struct FRigUnit_DebugBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; 
	float MinimumU; 
	float MaximumU; 
	struct FLinearColor Color; 
	float Thickness; 
	int32_t Detail; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable {
	struct FCRFourPointBezier Bezier; 
	float MinimumU; 
	float MaximumU; 
	struct FLinearColor Color; 
	float Thickness; 
	int32_t Detail; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable {
	float Scale; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	struct FVector A; 
	struct FVector B; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugLine
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	struct FVector A; 
	struct FVector B; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; 
	struct FLinearColor Color; 
	float Thickness; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable {
	struct FVector Vector; 
	enum class ERigUnitDebugPointMode Mode; 
	struct FLinearColor Color; 
	float Scale; 
	float Thickness; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
struct FRigUnit_DebugPoint : FRigUnit_DebugBase {
	struct FVector Vector; 
	enum class ERigUnitDebugPointMode Mode; 
	struct FLinearColor Color; 
	float Scale; 
	float Thickness; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	struct FLinearColor Color; 
	float Radius; 
	float MinimumDegrees; 
	float MaximumDegrees; 
	float Thickness; 
	int32_t Detail; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugArc
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	struct FLinearColor Color; 
	float Radius; 
	float MinimumDegrees; 
	float MaximumDegrees; 
	float Thickness; 
	int32_t Detail; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	struct FLinearColor Color; 
	float Scale; 
	float Thickness; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	struct FLinearColor Color; 
	float Scale; 
	float Thickness; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; 
	enum class ERigUnitDebugTransformMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct FRigUnit_DebugTransformArrayMutable_WorkData {
	struct TArray<struct FTransform> DrawTransforms; 
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	enum class ERigUnitDebugTransformMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FRigElementKey Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; 
	enum class ERigUnitDebugTransformMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	struct FTransform Transform; 
	enum class ERigUnitDebugTransformMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FName Space; 
	struct FTransform WorldOffset; 
	bool bEnabled; 
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase {
	struct FTransform Value; 
	struct FTransform Delta; 
	struct FTransform PreviousValue; 
	struct FTransform Cache; 
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase {
	struct FQuat Value; 
	struct FQuat Delta; 
	struct FQuat PreviousValue; 
	struct FQuat Cache; 
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase {
	struct FVector Value; 
	struct FVector Delta; 
	struct FVector PreviousValue; 
	struct FVector Cache; 
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase {
	float Value; 
	float Delta; 
	float PreviousValue; 
	float Cache; 
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; 
	enum class EControlRigAnimEasingType RotationEaseType; 
	float Weight; 
	struct FRigUnit_DistributeRotation_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct TArray<int32_t> ItemRotationA; 
	struct TArray<int32_t> ItemRotationB; 
	struct TArray<float> ItemRotationT; 
	struct TArray<struct FTransform> ItemLocalTransforms; 
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation {
	struct FQuat Rotation; 
	float Ratio; 
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EndBone; 
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; 
	enum class EControlRigAnimEasingType RotationEaseType; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_DistributeRotation_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	struct FName InstructionName; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	struct FName InstructionName; 
	float Thickness; 
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	struct FName InstructionName; 
	struct FLinearColor Color; 
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	struct FName InstructionName; 
	struct FLinearColor Color; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	struct FTransform EffectorTransform; 
	float Precision; 
	float Weight; 
	bool bPropagateToChildren; 
	int32_t MaxIterations; 
	struct FRigUnit_FABRIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData {
	struct TArray<struct FFABRIKChainLink> Chain; 
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct FCachedRigElement CachedEffector; 
};

// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EffectorBone; 
	struct FTransform EffectorTransform; 
	float Precision; 
	float Weight; 
	bool bPropagateToChildren; 
	int32_t MaxIterations; 
	struct FRigUnit_FABRIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	struct FCRFourPointBezier Bezier; 
	enum class EControlRigCurveAlignment Alignment; 
	float Minimum; 
	float Maximum; 
	int32_t SamplingPrecision; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	struct FVector PoleVectorPosition; 
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; 
	enum class EControlRigAnimEasingType RotationEaseType; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; 
	struct FRigUnit_FitChainToCurve_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; 
	struct TArray<struct FVector> ItemPositions; 
	struct TArray<float> ItemSegments; 
	struct TArray<struct FVector> CurvePositions; 
	struct TArray<float> CurveSegments; 
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct TArray<int32_t> ItemRotationA; 
	struct TArray<int32_t> ItemRotationB; 
	struct TArray<float> ItemRotationT; 
	struct TArray<struct FTransform> ItemLocalTransforms; 
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; 
	float Scale; 
	struct FLinearColor CurveColor; 
	struct FLinearColor SegmentsColor; 
	struct FTransform WorldOffset; 
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation {
	struct FQuat Rotation; 
	float Ratio; 
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EndBone; 
	struct FCRFourPointBezier Bezier; 
	enum class EControlRigCurveAlignment Alignment; 
	float Minimum; 
	float Maximum; 
	int32_t SamplingPrecision; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	struct FVector PoleVectorPosition; 
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; 
	enum class EControlRigAnimEasingType RotationEaseType; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; 
	struct FRigUnit_FitChainToCurve_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; 
	float MinIn; 
	float MaxIn; 
	float MinOut; 
	float MaxOut; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; 
	float Min; 
	float Max; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; 
	float Argument1; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_ForLoopCount
struct FRigUnit_ForLoopCount : FRigUnitMutable {
	int32_t Count; 
	int32_t Index; 
	float Ratio; 
	bool Continue; 
	struct FControlRigExecuteContext Completed; 
};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : FRigUnit {
	struct FName bone; 
	enum class EBoneGetterSetterMode Space; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : FRigUnit {
	struct FName Control; 
	enum class EBoneGetterSetterMode Space; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : FRigUnit {
	struct FName Control; 
	enum class EBoneGetterSetterMode Space; 
	struct FTransform Transform; 
	struct FTransform Minimum; 
	struct FTransform Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : FRigUnit {
	struct FName Control; 
	enum class EBoneGetterSetterMode Space; 
	struct FRotator Rotator; 
	struct FRotator Minimum; 
	struct FRotator Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : FRigUnit {
	struct FName Control; 
	enum class EBoneGetterSetterMode Space; 
	struct FVector Vector; 
	struct FVector Minimum; 
	struct FVector Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : FRigUnit {
	struct FName Control; 
	struct FVector2D Vector; 
	struct FVector2D Minimum; 
	struct FVector2D Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : FRigUnit {
	struct FName Control; 
	int32_t IntegerValue; 
	int32_t Minimum; 
	int32_t Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : FRigUnit {
	struct FName Control; 
	float FloatValue; 
	float Minimum; 
	float Maximum; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : FRigUnit {
	struct FName Control; 
	bool BoolValue; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : FRigUnit {
	struct FName Curve; 
	float Value; 
	struct FCachedRigElement CachedCurveIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase {
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	struct FName bone; 
	enum class EBoneGetterSetterMode Space; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : FRigUnitMutable {
	struct FName Joint; 
	enum class ETransformGetterType Type; 
	enum class ETransformSpaceMode TransformSpace; 
	struct FTransform BaseTransform; 
	struct FName BaseJoint; 
	struct FTransform Output; 
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	struct FName bone; 
	struct FName Space; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedBone; 
	struct FCachedRigElement CachedSpace; 
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	struct FRigElementKey Child; 
	bool bChildInitial; 
	struct FRigElementKey Parent; 
	bool bParentInitial; 
	struct FTransform RelativeTransform; 
	struct FCachedRigElement CachedChild; 
	struct FCachedRigElement CachedParent; 
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : FRigUnit {
	struct FName Space; 
	enum class EBoneGetterSetterMode SpaceType; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : FRigUnit {
	struct FRigElementKey Item; 
	enum class EBoneGetterSetterMode Space; 
	bool bInitial; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_GetWorldTime
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase {
	float Year; 
	float Month; 
	float Day; 
	float WeekDay; 
	float Hours; 
	float Minutes; 
	float Seconds; 
	float OverallSeconds; 
};

// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; 
	bool bIncludeItem; 
	struct FRigElementKeyCollection Siblings; 
	struct FCachedRigElement CachedItem; 
	struct FRigElementKeyCollection CachedSiblings; 
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	struct FRigElementKey Parent; 
	bool bIncludeParent; 
	bool bRecursive; 
	struct FRigElementKeyCollection Children; 
	struct FCachedRigElement CachedParent; 
	struct FRigElementKeyCollection CachedChildren; 
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; 
	bool bIncludeChild; 
	bool bReverse; 
	struct FRigElementKeyCollection Parents; 
	struct FCachedRigElement CachedChild; 
	struct FRigElementKeyCollection CachedParents; 
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; 
	struct FRigElementKey Parent; 
	struct FCachedRigElement CachedChild; 
	struct FCachedRigElement CachedParent; 
};

// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; 
};

// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; 
};

// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	struct FRigElementKey Item; 
	struct FName Old; 
	struct FName New; 
	struct FRigElementKey Result; 
};

// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	struct FRigElementKey Item; 
	bool Exists; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
struct FRigUnit_KalmanTransform : FRigUnit_SimBase {
	struct FTransform Value; 
	int32_t BufferSize; 
	struct FTransform Result; 
	struct TArray<struct FTransform> Buffer; 
	int32_t LastInsertIndex; 
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
struct FRigUnit_KalmanVector : FRigUnit_SimBase {
	struct FVector Value; 
	int32_t BufferSize; 
	struct FVector Result; 
	struct TArray<struct FVector> Buffer; 
	int32_t LastInsertIndex; 
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
struct FRigUnit_KalmanFloat : FRigUnit_SimBase {
	float Value; 
	int32_t BufferSize; 
	float Result; 
	struct TArray<float> Buffer; 
	int32_t LastInsertIndex; 
};

// ScriptStruct ControlRig.RigUnit_MathBase
struct FRigUnit_MathBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
struct FRigUnit_MathBoolBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase {
	bool A; 
	bool B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase {
	bool A; 
	bool B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase {
	bool A; 
	bool B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase {
	bool Value; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase {
	bool Value; 
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant {
};

// ScriptStruct ControlRig.RigUnit_MathColorBase
struct FRigUnit_MathColorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathColorLerp
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase {
	struct FLinearColor A; 
	struct FLinearColor B; 
	float T; 
	struct FLinearColor Result; 
};

// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase {
	struct FLinearColor A; 
	struct FLinearColor B; 
	struct FLinearColor Result; 
};

// ScriptStruct ControlRig.RigUnit_MathColorMul
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorSub
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorAdd
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase {
	float Value; 
	struct FLinearColor Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
struct FRigUnit_MathFloatBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	float C; 
	float AlphaAngle; 
	float BetaAngle; 
	float GammaAngle; 
	bool bValid; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase {
	float Value; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase {
	bool Condition; 
	float IfTrue; 
	float IfFalse; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	float Tolerance; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase {
	float Value; 
	float Tolerance; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase {
	float Value; 
	float SourceMinimum; 
	float SourceMaximum; 
	float TargetMinimum; 
	float TargetMaximum; 
	bool bClamp; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	float T; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase {
	float Value; 
	float Minimum; 
	float Maximum; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatToInt
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase {
	float Value; 
	int32_t Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase {
	float Value; 
	float Result; 
	int32_t Int; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase {
	float Value; 
	float Result; 
	int32_t Int; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase {
	float Value; 
	float Result; 
	int32_t Int; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase {
	float A; 
	float B; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase {
	float Value; 
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant {
};

// ScriptStruct ControlRig.RigUnit_MathIntBase
struct FRigUnit_MathIntBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntLess
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntGreater
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntEquals
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntClamp
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase {
	int32_t Value; 
	int32_t Minimum; 
	int32_t Maximum; 
	int32_t Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase {
	int32_t Value; 
	int32_t Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntSign
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntToFloat
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase {
	int32_t Value; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntAbs
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntNegate
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase {
	int32_t A; 
	int32_t B; 
	int32_t Result; 
};

// ScriptStruct ControlRig.RigUnit_MathIntPow
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMax
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMin
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMod
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntDiv
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntMul
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntSub
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathIntAdd
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase {
	enum class EControlRigRotationOrder RotationOrder; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase {
	struct FQuat Input; 
	struct FVector TwistAxis; 
	struct FQuat Swing; 
	struct FQuat Twist; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase {
	struct FQuat Quaternion; 
	enum class EAxis Axis; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase {
	struct FQuat Quaternion; 
	struct FVector Vector; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase {
	struct FQuat Value; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase {
	struct FQuat A; 
	struct FQuat B; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase {
	bool Condition; 
	struct FQuat IfTrue; 
	struct FQuat IfFalse; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase {
	struct FQuat A; 
	struct FQuat B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase {
	struct FQuat A; 
	struct FQuat B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase {
	struct FQuat A; 
	struct FQuat B; 
	float T; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase {
	struct FQuat A; 
	struct FQuat B; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase {
	struct FQuat Value; 
	struct FRotator Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase {
	struct FQuat Value; 
	enum class EControlRigRotationOrder RotationOrder; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase {
	struct FQuat Value; 
	float Scale; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase {
	struct FQuat Value; 
	struct FVector Axis; 
	float Angle; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase {
	struct FVector A; 
	struct FVector B; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase {
	struct FRotator Rotator; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase {
	struct FVector Euler; 
	enum class EControlRigRotationOrder RotationOrder; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase {
	struct FVector Axis; 
	float Angle; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase {
	struct FVector Input; 
	enum class ERBFVectorDistanceType DistanceFunction; 
	enum class ERBFKernelType SmoothingFunction; 
	float SmoothingRadius; 
	bool bNormalizeOutput; 
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
struct FRigUnit_MathRBFInterpolateVectorWorkData {
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets; 
	struct FTransform Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
struct FMathRBFInterpolateVectorXform_Target {
	struct FVector Target; 
	struct FTransform Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets; 
	struct FQuat Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
struct FMathRBFInterpolateVectorQuat_Target {
	struct FVector Target; 
	struct FQuat Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets; 
	struct FLinearColor Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
struct FMathRBFInterpolateVectorColor_Target {
	struct FVector Target; 
	struct FLinearColor Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets; 
	struct FVector Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
struct FMathRBFInterpolateVectorVector_Target {
	struct FVector Target; 
	struct FVector Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets; 
	float Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
struct FMathRBFInterpolateVectorFloat_Target {
	struct FVector Target; 
	float Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase {
	struct FQuat Input; 
	enum class ERBFQuatDistanceType DistanceFunction; 
	enum class ERBFKernelType SmoothingFunction; 
	float SmoothingAngle; 
	bool bNormalizeOutput; 
	struct FVector TwistAxis; 
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
struct FRigUnit_MathRBFInterpolateQuatWorkData {
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets; 
	struct FTransform Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
struct FMathRBFInterpolateQuatXform_Target {
	struct FQuat Target; 
	struct FTransform Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets; 
	struct FQuat Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
struct FMathRBFInterpolateQuatQuat_Target {
	struct FQuat Target; 
	struct FQuat Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets; 
	struct FLinearColor Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
struct FMathRBFInterpolateQuatColor_Target {
	struct FQuat Target; 
	struct FLinearColor Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets; 
	struct FVector Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
struct FMathRBFInterpolateQuatVector_Target {
	struct FQuat Target; 
	struct FVector Value; 
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets; 
	float Output; 
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
struct FMathRBFInterpolateQuatFloat_Target {
	struct FQuat Target; 
	float Value; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
struct FRigUnit_MathTransformBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase {
	struct FTransform Value; 
	enum class EAxis Axis; 
	enum class EControlRigClampSpatialMode Type; 
	float Minimum; 
	float Maximum; 
	struct FTransform Space; 
	bool bDrawDebug; 
	struct FLinearColor DebugColor; 
	float DebugThickness; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase {
	struct FVector Location; 
	struct FVector Rotation; 
	enum class EControlRigRotationOrder RotationOrder; 
	struct FVector Scale; 
	struct FTransform Transform; 
	struct FEulerTransform EulerTransform; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase {
	struct FTransform Transform; 
	struct FVector Location; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase {
	struct FTransform Transform; 
	struct FVector Direction; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase {
	bool Condition; 
	struct FTransform IfTrue; 
	struct FTransform IfFalse; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase {
	struct FTransform A; 
	struct FTransform B; 
	float T; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase {
	struct FTransform Value; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase {
	struct FTransform Local; 
	struct FTransform Parent; 
	struct FTransform Global; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase {
	struct FTransform Global; 
	struct FTransform Parent; 
	struct FTransform Local; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase {
	struct FTransform A; 
	struct FTransform B; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase {
	struct FTransform Value; 
	struct FEulerTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase {
	struct FEulerTransform EulerTransform; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
struct FRigUnit_MathVectorBase : FRigUnit_MathBase {
};

// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase {
	struct FVector Start; 
	struct FVector Direction; 
	struct FVector PlanePoint; 
	struct FVector PlaneNormal; 
	struct FVector Result; 
	float Distance; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase {
	struct FVector Value; 
	enum class EAxis Axis; 
	enum class EControlRigClampSpatialMode Type; 
	float Minimum; 
	float Maximum; 
	struct FTransform Space; 
	bool bDrawDebug; 
	struct FLinearColor DebugColor; 
	float DebugThickness; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase {
	struct FCRFourPointBezier Bezier; 
	float T; 
	struct FVector Result; 
	struct FVector Tangent; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase {
	struct FVector Value; 
	struct FVector Normal; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float MinimumLength; 
	float MaximumLength; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float Length; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase {
	struct FVector Value; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase {
	bool Condition; 
	struct FVector IfTrue; 
	struct FVector IfFalse; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	float Tolerance; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float Tolerance; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase {
	struct FVector Value; 
	struct FVector SourceMinimum; 
	struct FVector SourceMaximum; 
	struct FVector TargetMinimum; 
	struct FVector TargetMaximum; 
	bool bClamp; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase {
	struct FVector A; 
	struct FVector B; 
	float T; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase {
	struct FVector Value; 
	struct FVector Minimum; 
	struct FVector Maximum; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorScale
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase {
	struct FVector Value; 
	float Factor; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp {
};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase {
	float Value; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; 
	float Weight; 
	float WeightMinimum; 
	float WeightMaximum; 
	enum class EControlRigModifyBoneMode Mode; 
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; 
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData {
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone {
	struct FName bone; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify; 
	float Weight; 
	float WeightMinimum; 
	float WeightMaximum; 
	enum class EControlRigModifyBoneMode Mode; 
	struct FRigUnit_ModifyTransforms_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem {
	struct FRigElementKey Item; 
	struct FTransform Transform; 
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName RootBone; 
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; 
	float Precision; 
	bool bPropagateToChildren; 
	int32_t MaxIterations; 
	struct FRigUnit_MultiFABRIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData {
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector {
	struct FName bone; 
	struct FVector Location; 
};

// ScriptStruct ControlRig.RigUnit_NameBase
struct FRigUnit_NameBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_Contains
struct FRigUnit_Contains : FRigUnit_NameBase {
	struct FName Name; 
	struct FName Search; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_StartsWith
struct FRigUnit_StartsWith : FRigUnit_NameBase {
	struct FName Name; 
	struct FName Start; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_EndsWith
struct FRigUnit_EndsWith : FRigUnit_NameBase {
	struct FName Name; 
	struct FName Ending; 
	bool Result; 
};

// ScriptStruct ControlRig.RigUnit_NameReplace
struct FRigUnit_NameReplace : FRigUnit_NameBase {
	struct FName Name; 
	struct FName Old; 
	struct FName New; 
	struct FName Result; 
};

// ScriptStruct ControlRig.RigUnit_NameTruncate
struct FRigUnit_NameTruncate : FRigUnit_NameBase {
	struct FName Name; 
	int32_t Count; 
	bool FromEnd; 
	struct FName Remainder; 
	struct FName Chopped; 
};

// ScriptStruct ControlRig.RigUnit_NameConcat
struct FRigUnit_NameConcat : FRigUnit_NameBase {
	struct FName A; 
	struct FName B; 
	struct FName Result; 
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
struct FRigUnit_NoiseVector : FRigUnit_MathBase {
	struct FVector position; 
	struct FVector Speed; 
	struct FVector Frequency; 
	float Minimum; 
	float Maximum; 
	struct FVector Result; 
	struct FVector Time; 
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
struct FRigUnit_NoiseFloat : FRigUnit_MathBase {
	float Value; 
	float Speed; 
	float Frequency; 
	float Minimum; 
	float Maximum; 
	float Result; 
	float Time; 
};

// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	struct FRigElementKey Item; 
	struct FTransform OffsetTransform; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	struct FRigElementKey Subject; 
	int32_t ParentIndex; 
	struct FRigElementKeyCollection Parents; 
	struct FTransform InitialGlobalTransform; 
	float Weight; 
	struct FTransform Transform; 
	bool Switched; 
	struct FCachedRigElement CachedSubject; 
	struct FCachedRigElement CachedParent; 
	struct FTransform RelativeOffset; 
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
struct FRigUnit_SimBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable {
	struct TArray<struct FCRSimPoint> Points; 
	struct TArray<struct FCRSimLinearSpring> Links; 
	struct TArray<struct FCRSimPointForce> Forces; 
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; 
	float SimulatedStepsPerSecond; 
	enum class ECRSimPointIntegrateType IntegratorType; 
	float VerletBlend; 
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; 
	bool bLimitLocalPosition; 
	bool bPropagateToChildren; 
	struct FVector PrimaryAimAxis; 
	struct FVector SecondaryAimAxis; 
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; 
	struct FCRFourPointBezier Bezier; 
	struct FRigUnit_PointSimulation_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData {
	struct FCRSimPointContainer Simulation; 
	struct TArray<struct FCachedRigElement> BoneIndices; 
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; 
	float Scale; 
	float CollisionScale; 
	bool bDrawPointsAsSpheres; 
	struct FLinearColor Color; 
	struct FTransform WorldOffset; 
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget {
	struct FName bone; 
	int32_t TranslationPoint; 
	int32_t PrimaryAimPoint; 
	int32_t SecondaryAimPoint; 
};

// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; 
};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable {
	int32_t NumberOfMeasurements; 
	struct FString Prefix; 
	float AccumulatedTime; 
	int32_t MeasurementsLeft; 
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	struct FRigElementKey Child; 
	bool bChildInitial; 
	struct FRigElementKey OldParent; 
	bool bOldParentInitial; 
	struct FRigElementKey NewParent; 
	bool bNewParentInitial; 
	struct FTransform Transform; 
	struct FCachedRigElement CachedChild; 
	struct FCachedRigElement CachedOldParent; 
	struct FCachedRigElement CachedNewParent; 
};

// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : FRigUnitMutable {
	struct FRigElementKey Item; 
	bool bRecomputeGlobal; 
	bool bApplyToChildren; 
	bool bRecursive; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : FRigUnit {
	struct FVector Axis; 
	struct FQuat Argument; 
	float Angle; 
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	struct FVector Axis; 
	float Angle; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	struct FQuat Argument; 
	struct FVector Axis; 
	float Angle; 
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	struct FQuat Argument; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	struct FQuat Argument0; 
	struct FQuat Argument1; 
	struct FQuat Result; 
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_RandomVector
struct FRigUnit_RandomVector : FRigUnit_MathBase {
	int32_t Seed; 
	float Minimum; 
	float Maximum; 
	float Duration; 
	struct FVector Result; 
	struct FVector LastResult; 
	int32_t LastSeed; 
	float TimeLeft; 
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
struct FRigUnit_RandomFloat : FRigUnit_MathBase {
	int32_t Seed; 
	float Minimum; 
	float Maximum; 
	float Duration; 
	float Result; 
	float LastResult; 
	int32_t LastSeed; 
	float TimeLeft; 
};

// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : FRigUnitMutable {
	enum class ERigEvent Event; 
	struct FRigElementKey Item; 
	float OffsetInSeconds; 
	bool bEnable; 
	bool bOnlyDuringInteraction; 
};

// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : FRigUnit {
	struct FControlRigExecuteContext ExecuteContext; 
	struct FControlRigExecuteContext A; 
	struct FControlRigExecuteContext B; 
	struct FControlRigExecuteContext C; 
	struct FControlRigExecuteContext D; 
};

// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	struct FName bone; 
	struct FTransform Transform; 
	struct FTransform Result; 
	enum class EBoneGetterSetterMode Space; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	struct FName bone; 
	struct FQuat Rotation; 
	enum class EBoneGetterSetterMode Space; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	struct FName bone; 
	struct FTransform Transform; 
	struct FTransform Result; 
	enum class EBoneGetterSetterMode Space; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	struct FName bone; 
	struct FVector Translation; 
	enum class EBoneGetterSetterMode Space; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : FRigUnitMutable {
	struct FName Control; 
	struct FLinearColor Color; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : FRigUnitMutable {
	struct FName Control; 
	struct FTransform Offset; 
	enum class EBoneGetterSetterMode Space; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : FRigUnitMutable {
	struct FName Control; 
	float Weight; 
	struct FTransform Transform; 
	enum class EBoneGetterSetterMode Space; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; 
	float Weight; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry {
	struct FName Control; 
	struct FRotator Rotator; 
	enum class EBoneGetterSetterMode Space; 
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : FRigUnitMutable {
	struct FName Control; 
	float Weight; 
	struct FRotator Rotator; 
	enum class EBoneGetterSetterMode Space; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : FRigUnitMutable {
	struct FName Control; 
	float Weight; 
	struct FVector Vector; 
	enum class EBoneGetterSetterMode Space; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries; 
	float Weight; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry {
	struct FName Control; 
	struct FVector2D Vector; 
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	struct FName Control; 
	float Weight; 
	struct FVector2D Vector; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries; 
	float Weight; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry {
	struct FName Control; 
	int32_t IntegerValue; 
};

// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : FRigUnitMutable {
	struct FName Control; 
	int32_t Weight; 
	int32_t IntegerValue; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries; 
	float Weight; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry {
	struct FName Control; 
	float FloatValue; 
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : FRigUnitMutable {
	struct FName Control; 
	float Weight; 
	float FloatValue; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry {
	struct FName Control; 
	bool BoolValue; 
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : FRigUnitMutable {
	struct FName Control; 
	bool BoolValue; 
	struct FCachedRigElement CachedControlIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	struct FRigElementKey Item; 
	struct FString Pattern; 
	bool bVisible; 
	struct TArray<struct FCachedRigElement> CachedControlIndices; 
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : FRigUnitMutable {
	struct FName Curve; 
	float Value; 
	struct FCachedRigElement CachedCurveIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	struct FName bone; 
	struct FName Space; 
	struct FTransform Transform; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedBone; 
	struct FCachedRigElement CachedSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	struct FRigElementKey Child; 
	struct FRigElementKey Parent; 
	bool bParentInitial; 
	struct FTransform RelativeTransform; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedChild; 
	struct FCachedRigElement CachedParent; 
};

// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	struct FName SpaceName; 
	struct FTransform Transform; 
	struct FTransform Result; 
	enum class EBoneGetterSetterMode Space; 
	struct FCachedRigElement CachedSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	struct FName Space; 
	float Weight; 
	struct FTransform Transform; 
	enum class EBoneGetterSetterMode SpaceType; 
	struct FCachedRigElement CachedSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : FRigUnitMutable {
	struct FRigElementKey Item; 
	enum class EBoneGetterSetterMode Space; 
	struct FVector Scale; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : FRigUnitMutable {
	struct FRigElementKey Item; 
	enum class EBoneGetterSetterMode Space; 
	struct FQuat Rotation; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : FRigUnitMutable {
	struct FRigElementKey Item; 
	enum class EBoneGetterSetterMode Space; 
	struct FVector Translation; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : FRigUnitMutable {
	struct FRigElementKey Item; 
	enum class EBoneGetterSetterMode Space; 
	bool bInitial; 
	struct FTransform Transform; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FCachedRigElement CachedIndex; 
};

// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	float SlideAmount; 
	bool bPropagateToChildren; 
	struct FRigUnit_SlideChain_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData {
	float ChainLength; 
	struct TArray<float> ItemSegments; 
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct TArray<struct FTransform> Transforms; 
	struct TArray<struct FTransform> BlendedTransforms; 
};

// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EndBone; 
	float SlideAmount; 
	bool bPropagateToChildren; 
	struct FRigUnit_SlideChain_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EndBone; 
	float HierarchyStrength; 
	float EffectorStrength; 
	float EffectorRatio; 
	float RootStrength; 
	float RootRatio; 
	float Damping; 
	struct FVector PoleVector; 
	bool bFlipPolePlane; 
	enum class EControlRigVectorKind PoleVectorKind; 
	struct FName PoleVectorSpace; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	bool bLiveSimulation; 
	int32_t Iterations; 
	bool bLimitLocalPosition; 
	bool bPropagateToChildren; 
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; 
	struct FRigUnit_SpringIK_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData {
	struct TArray<struct FCachedRigElement> CachedBones; 
	struct FCachedRigElement CachedPoleVector; 
	struct TArray<struct FTransform> Transforms; 
	struct FCRSimPointContainer Simulation; 
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; 
	float Scale; 
	struct FLinearColor Color; 
	struct FTransform WorldOffset; 
};

// ScriptStruct ControlRig.RigUnit_SecondsToFrames
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase {
	float Seconds; 
	float Frames; 
};

// ScriptStruct ControlRig.RigUnit_FramesToSeconds
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase {
	float Frames; 
	float Seconds; 
};

// ScriptStruct ControlRig.RigUnit_Timeline
struct FRigUnit_Timeline : FRigUnit_SimBase {
	float Speed; 
	float Time; 
	float AccumulatedValue; 
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase {
	struct FTransform Value; 
	float SecondsAgo; 
	int32_t BufferSize; 
	float TimeRange; 
	struct FTransform Result; 
	struct TArray<struct FTransform> Buffer; 
	struct TArray<float> DeltaTimes; 
	int32_t LastInsertIndex; 
	int32_t UpperBound; 
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase {
	struct FVector Value; 
	float SecondsAgo; 
	int32_t BufferSize; 
	float TimeRange; 
	struct FVector Result; 
	struct TArray<struct FVector> Buffer; 
	struct TArray<float> DeltaTimes; 
	int32_t LastInsertIndex; 
	int32_t UpperBound; 
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase {
	float Value; 
	float SecondsAgo; 
	int32_t BufferSize; 
	float TimeRange; 
	float Result; 
	struct TArray<float> Buffer; 
	struct TArray<float> DeltaTimes; 
	int32_t LastInsertIndex; 
	int32_t UpperBound; 
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : FRigUnit {
	struct FTransform Argument0; 
	struct FTransform Argument1; 
	struct FTransform Result; 
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; 
	enum class ETransformSpaceMode BaseTransformSpace; 
	struct FTransform BaseTransform; 
	struct FRigElementKey BaseItem; 
	struct TArray<struct FConstraintTarget> Targets; 
	bool bUseInitialTransforms; 
	struct FRigUnit_TransformConstraint_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; 
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; 
};

// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget {
	struct FTransform Transform; 
	float Weight; 
	bool bMaintainOffset; 
	struct FTransformFilter Filter; 
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	struct FName bone; 
	enum class ETransformSpaceMode BaseTransformSpace; 
	struct FTransform BaseTransform; 
	struct FName BaseBone; 
	struct TArray<struct FConstraintTarget> Targets; 
	bool bUseInitialTransforms; 
	struct FRigUnit_TransformConstraint_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; 
	struct FVector TwistAxis; 
	struct FVector PoleAxis; 
	enum class EControlRigAnimEasingType TwistEaseType; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_TwistBones_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; 
	struct TArray<float> ItemRatios; 
	struct TArray<struct FTransform> ItemTransforms; 
};

// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; 
	struct FName EndBone; 
	struct FVector TwistAxis; 
	struct FVector PoleAxis; 
	enum class EControlRigAnimEasingType TwistEaseType; 
	float Weight; 
	bool bPropagateToChildren; 
	struct FRigUnit_TwistBones_WorkData WorkData; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	struct FName StartJoint; 
	struct FName EndJoint; 
	struct FVector PoleTarget; 
	float Spin; 
	struct FTransform EndEffector; 
	float IKBlend; 
	struct FTransform StartJointFKTransform; 
	struct FTransform MidJointFKTransform; 
	struct FTransform EndJointFKTransform; 
	float PreviousFKIKBlend; 
	struct FTransform StartJointIKTransform; 
	struct FTransform MidJointIKTransform; 
	struct FTransform EndJointIKTransform; 
	int32_t StartJointIndex; 
	int32_t MidJointIndex; 
	int32_t EndJointIndex; 
	float UpperLimbLength; 
	float LowerLimbLength; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	struct FTransform Root; 
	struct FVector PoleVector; 
	struct FTransform Effector; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	float SecondaryAxisWeight; 
	bool bEnableStretch; 
	float StretchStartRatio; 
	float StretchMaximumRatio; 
	float BoneALength; 
	float BoneBLength; 
	struct FTransform Elbow; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	struct FVector Root; 
	struct FVector PoleVector; 
	struct FVector Effector; 
	bool bEnableStretch; 
	float StretchStartRatio; 
	float StretchMaximumRatio; 
	float BoneALength; 
	float BoneBLength; 
	struct FVector Elbow; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ItemA; 
	struct FRigElementKey ItemB; 
	struct FRigElementKey EffectorItem; 
	struct FTransform Effector; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	float SecondaryAxisWeight; 
	struct FVector PoleVector; 
	enum class EControlRigVectorKind PoleVectorKind; 
	struct FRigElementKey PoleVectorSpace; 
	bool bEnableStretch; 
	float StretchStartRatio; 
	float StretchMaximumRatio; 
	float Weight; 
	float ItemALength; 
	float ItemBLength; 
	bool bPropagateToChildren; 
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; 
	struct FCachedRigElement CachedItemAIndex; 
	struct FCachedRigElement CachedItemBIndex; 
	struct FCachedRigElement CachedEffectorItemIndex; 
	struct FCachedRigElement CachedPoleVectorSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; 
	float Scale; 
	struct FTransform WorldOffset; 
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	struct FName BoneA; 
	struct FName BoneB; 
	struct FName EffectorBone; 
	struct FTransform Effector; 
	struct FVector PrimaryAxis; 
	struct FVector SecondaryAxis; 
	float SecondaryAxisWeight; 
	struct FVector PoleVector; 
	enum class EControlRigVectorKind PoleVectorKind; 
	struct FName PoleVectorSpace; 
	bool bEnableStretch; 
	float StretchStartRatio; 
	float StretchMaximumRatio; 
	float Weight; 
	float BoneALength; 
	float BoneBLength; 
	bool bPropagateToChildren; 
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; 
	struct FCachedRigElement CachedBoneAIndex; 
	struct FCachedRigElement CachedBoneBIndex; 
	struct FCachedRigElement CachedEffectorBoneIndex; 
	struct FCachedRigElement CachedPoleVectorSpaceIndex; 
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : FRigUnit {
	struct FVector Argument0; 
	struct FVector Argument1; 
	float Result; 
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : FRigUnit {
	struct FVector Argument0; 
	struct FVector Argument1; 
	struct FVector Result; 
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase {
	struct FVector Target; 
	float Strength; 
	float Damp; 
	float Blend; 
	struct FVector Force; 
	float MaxAcceleration; 
	struct FVector position; 
	struct FVector Velocity; 
	struct FVector Acceleration; 
	struct FCRSimPoint Point; 
	bool bInitialized; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	struct FTransform Value; 
	bool bEnabled; 
	float Thickness; 
	float Scale; 
	struct FRigElementKey Space; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	struct FTransform Value; 
	bool bEnabled; 
	float Thickness; 
	float Scale; 
	struct FName BoneSpace; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	struct FQuat Value; 
	bool bEnabled; 
	float Thickness; 
	float Scale; 
	struct FRigElementKey Space; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	struct FQuat Value; 
	bool bEnabled; 
	float Thickness; 
	float Scale; 
	struct FName BoneSpace; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	struct FVector Value; 
	bool bEnabled; 
	enum class ERigUnitVisualDebugPointMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FRigElementKey Space; 
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	struct FVector Value; 
	bool bEnabled; 
	enum class ERigUnitVisualDebugPointMode Mode; 
	struct FLinearColor Color; 
	float Thickness; 
	float Scale; 
	struct FName BoneSpace; 
};

// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : FRigUnit {
	struct FVector Start; 
	struct FVector End; 
	struct TArray<enum class ECollisionChannel> ResponseChannels; 
	enum class ECollisionChannel Channel; 
	float Radius; 
	bool bHit; 
	struct FVector HitLocation; 
	struct FVector HitNormal; 
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	struct FQuat Rotation; 
	struct FQuat Global; 
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	struct FQuat Rotation; 
	struct FQuat World; 
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : FRigUnit {
	struct FVector Location; 
	struct FVector Global; 
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	struct FVector Location; 
	struct FVector World; 
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	struct FTransform Transform; 
	struct FTransform Global; 
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	struct FTransform Transform; 
	struct FTransform World; 
};

// ScriptStruct ControlRig.StructReference
struct FStructReference {
};

