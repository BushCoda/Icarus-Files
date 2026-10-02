// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Enum Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8 {
	Bar = 0,
	Beat = 1,
	ThirtySecondNote = 2,
	SixteenthNote = 3,
	EighthNote = 4,
	QuarterNote = 5,
	HalfNote = 6,
	WholeNote = 7,
	DottedSixteenthNote = 8,
	DottedEighthNote = 9,
	DottedQuarterNote = 10,
	DottedHalfNote = 11,
	DottedWholeNote = 12,
	SixteenthNoteTriplet = 13,
	EighthNoteTriplet = 14,
	QuarterNoteTriplet = 15,
	HalfNoteTriplet = 16,
	Tick = 17,
	Count = 18,
	None = 19,
	EQuartzCommandQuantization_MAX = 20
};

// Enum Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8 {
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Enum Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8 {
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Enum Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	EAudioBusChannels_MAX = 2
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 {
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Enum Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8 {
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Enum Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8 {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3
};

// Enum Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8 {
	ApplyAsAbsolute = 1,
	SkipAutoScale = 2,
	SkipAutoPlaySpace = 4,
	Default = 0,
	ECameraShakeUpdateResultFlags_MAX = 5
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Enum Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Enum Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8 {
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2
};

// Enum Engine.FDataDrivenCVarType
enum class FDataDrivenCVarType : uint8 {
	CVarFloat = 0,
	CVarInt = 1,
	CVarBool = 2,
	FDataDrivenCVarType_MAX = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_Max = 29,
	VMI_Unknown = 255
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8 {
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_NUM = 12,
	MSM_FromMaterialExpression = 13,
	MSM_MAX = 14
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_MAX = 10
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_MAX = 7
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8 {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Enum Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8 {
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Enum Engine.ESyncOption
enum class ESyncOption : uint8 {
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Enum Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8 {
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8 {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_MAX = 14
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_MAX = 18
};

// Enum Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8 {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_MAX = 31
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	InferFromWorldMode = 5,
	FNavigationSystemRunMode_MAX = 6
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Enum Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8 {
	RBAN = 0,
	World = 1,
	EPhysicsAssetSolverType_MAX = 2
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_PreBlended = 5,
	VTBlend_MAX = 6
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Enum Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8 {
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4
};

// Enum Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8 {
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3
};

// Enum Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8 {
	HalfNote = 0,
	QuarterNote = 1,
	EighthNote = 2,
	SixteenthNote = 3,
	ThirtySecondNote = 4,
	Count = 5,
	EQuartzTimeSignatureQuantization_MAX = 6
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Enum Engine.EMobileReflectionCompression
enum class EMobileReflectionCompression : uint8 {
	Default = 0,
	On = 1,
	Off = 2,
	EMobileReflectionCompression_MAX = 3
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Enum Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8 {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EFixedFoveationLevels_MAX = 4
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	EMobileMSAASampleCount_MAX = 9
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	Reverb_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23,
	ReverbPreset_MAX = 24
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8 {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8 {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_Weighted = 5,
	RCCF_MAX = 6
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight = 5,
	Count = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7
};

// Enum Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8 {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4
};

// Enum Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8 {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3
};

// Enum Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8 {
	TEMP_WhiteBalance = 0,
	TEMP_ColorTemperature = 1,
	TEMP_MAX = 2
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement = 13,
	MP_TessellationMultiplier = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_MaterialAttributes = 30,
	MP_CustomOutput = 31,
	MP_MAX = 32
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 {
	Auto = 0,
	Disabled = 255,
	Enabled = 1,
	ESkinCacheUsage_MAX = 256
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Enum Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8 {
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 1,
	ESkeletalMeshSkinningImportVersions_MAX = 3
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 1,
	ESkeletalMeshGeoImportVersions_MAX = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Enum Engine.EVertexOffsetUsageType
enum class EVertexOffsetUsageType : uint8 {
	None = 0,
	PreSkinningOffset = 1,
	PostSkinningOffset = 2,
	EVertexOffsetUsageType_MAX = 3
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Enum Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8 {
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Enum Engine.EModulationRouting
enum class EModulationRouting : uint8 {
	Disable = 0,
	Inherit = 1,
	Override = 2,
	EModulationRouting_MAX = 3
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Enum Engine.EGainParamMode
enum class EGainParamMode : uint8 {
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2
};

// Enum Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3
};

// Enum Engine.EFFTWindowType
enum class EFFTWindowType : uint8 {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Enum Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4
};

// Enum Engine.EFFTSize
enum class EFFTSize : uint8 {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	Max = 6
};

// Enum Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8 {
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Enum Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8 {
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 {
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_G16 = 8,
	TSF_MAX = 9
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_HalfFloat = 12,
	TC_EncodedReflectionCapture = 13,
	TC_MAX = 14
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8 {
	Default = 0,
	Unfiltered = 1,
	SimpleAverage = 2,
	Sharpen0 = 3,
	Sharpen1 = 4,
	Sharpen2 = 5,
	Sharpen3 = 6,
	Sharpen4 = 7,
	Sharpen5 = 8,
	Sharpen6 = 9,
	Sharpen7 = 10,
	Sharpen8 = 11,
	Sharpen9 = 12,
	Sharpen10 = 13,
	ETextureDownscaleOptions_MAX = 14
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// ScriptStruct Engine.DistributionLookupTable
struct FDistributionLookupTable {
	float TimeScale; 
	float TimeBias; 
	struct TArray<float> Values; 
	char Op; 
	char EntryCount; 
	char EntryStride; 
	char SubEntryStride; 
	char LockFlag; 
};

// ScriptStruct Engine.RawDistribution
struct FRawDistribution {
	struct FDistributionLookupTable Table; 
};

// ScriptStruct Engine.FloatDistribution
struct FFloatDistribution {
	struct FDistributionLookupTable Table; 
};

// ScriptStruct Engine.VectorDistribution
struct FVectorDistribution {
	struct FDistributionLookupTable Table; 
};

// ScriptStruct Engine.Vector4Distribution
struct FVector4Distribution {
	struct FDistributionLookupTable Table; 
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; 
	float DampeningRatio; 
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; 
	float DampeningRatio; 
};

// ScriptStruct Engine.FormatArgumentData
struct FFormatArgumentData {
	struct FString ArgumentName; 
	enum class EFormatArgumentType ArgumentValueType; 
	struct FText ArgumentValue; 
	int32_t ArgumentValueInt; 
	float ArgumentValueFloat; 
	enum class ETextGender ArgumentValueGender; 
};

// ScriptStruct Engine.ExpressionInput
struct FExpressionInput {
	int32_t OutputIndex; 
	struct FName InputName; 
	struct FName ExpressionName; 
};

// ScriptStruct Engine.MaterialAttributesInput
struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; 
};

// ScriptStruct Engine.ExpressionOutput
struct FExpressionOutput {
	struct FName OutputName; 
};

// ScriptStruct Engine.MaterialInput
struct FMaterialInput {
	int32_t OutputIndex; 
	struct FName InputName; 
	struct FName ExpressionName; 
};

// ScriptStruct Engine.ColorMaterialInput
struct FColorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ScalarMaterialInput
struct FScalarMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ShadingModelMaterialInput
struct FShadingModelMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.VectorMaterialInput
struct FVectorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.Vector2MaterialInput
struct FVector2MaterialInput : FMaterialInput {
};

// ScriptStruct Engine.HitResult
struct FHitResult {
	int32_t FaceIndex; 
	float Time; 
	float Distance; 
	struct FVector_NetQuantize Location; 
	struct FVector_NetQuantize ImpactPoint; 
	struct FVector_NetQuantizeNormal Normal; 
	struct FVector_NetQuantizeNormal ImpactNormal; 
	struct FVector_NetQuantize TraceStart; 
	struct FVector_NetQuantize TraceEnd; 
	float PenetrationDepth; 
	int32_t Item; 
	char ElementIndex; 
	char bBlockingHit : 1; 
	char bStartPenetrating : 1; 
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; 
	struct TWeakObjectPtr<struct AActor> Actor; 
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; 
	struct FName BoneName; 
	struct FName MyBoneName; 
};

// ScriptStruct Engine.Vector_NetQuantize
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.BranchingPointNotifyPayload
struct FBranchingPointNotifyPayload {
};

// ScriptStruct Engine.SimpleMemberReference
struct FSimpleMemberReference {
	struct UObject* MemberParent; 
	struct FName MemberName; 
	struct FGuid MemberGuid; 
};

// ScriptStruct Engine.TickFunction
struct FTickFunction {
	enum class ETickingGroup TickGroup; 
	enum class ETickingGroup EndTickGroup; 
	char bTickEvenWhenPaused : 1; 
	char bCanEverTick : 1; 
	char bStartWithTickEnabled : 1; 
	char bAllowTickOnDedicatedServer : 1; 
	float TickInterval; 
};

// ScriptStruct Engine.ActorComponentTickFunction
struct FActorComponentTickFunction : FTickFunction {
};

// ScriptStruct Engine.SubtitleCue
struct FSubtitleCue {
	struct FText Text; 
	float Time; 
};

// ScriptStruct Engine.InterpControlPoint
struct FInterpControlPoint {
	struct FVector PositionControlPoint; 
	bool bPositionIsRelative; 
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; 
	struct FPlatformInterfaceData Data; 
};

// ScriptStruct Engine.PlatformInterfaceData
struct FPlatformInterfaceData {
	struct FName DataName; 
	enum class EPlatformInterfaceDataType Type; 
	int32_t IntValue; 
	float FloatValue; 
	struct FString StringValue; 
	struct UObject* ObjectValue; 
};

// ScriptStruct Engine.DebugFloatHistory
struct FDebugFloatHistory {
	struct TArray<float> Samples; 
	float MaxSamples; 
	float MinValue; 
	float MaxValue; 
	bool bAutoAdjustMinMax; 
};

// ScriptStruct Engine.LatentActionInfo
struct FLatentActionInfo {
	int32_t Linkage; 
	int32_t UUID; 
	struct FName ExecutionFunction; 
	struct UObject* CallbackTarget; 
};

// ScriptStruct Engine.TimerHandle
struct FTimerHandle {
	uint64_t Handle; 
};

// ScriptStruct Engine.CollisionProfileName
struct FCollisionProfileName {
	struct FName Name; 
};

// ScriptStruct Engine.GenericStruct
struct FGenericStruct {
	int32_t Data; 
};

// ScriptStruct Engine.UserActivity
struct FUserActivity {
	struct FString ActionName; 
};

// ScriptStruct Engine.DamageEvent
struct FDamageEvent {
	struct UDamageType* DamageTypeClass; 
};

// ScriptStruct Engine.TableRowBase
struct FTableRowBase {
};

// ScriptStruct Engine.AnimLinkableElement
struct FAnimLinkableElement {
	struct UAnimMontage* LinkedMontage; 
	int32_t SlotIndex; 
	int32_t SegmentIndex; 
	enum class EAnimLinkMethod LinkMethod; 
	enum class EAnimLinkMethod CachedLinkMethod; 
	float SegmentBeginTime; 
	float SegmentLength; 
	float LinkValue; 
	struct UAnimSequenceBase* LinkedSequence; 
};

// ScriptStruct Engine.AnimNotifyEvent
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; 
	float TriggerTimeOffset; 
	float EndTriggerTimeOffset; 
	float TriggerWeightThreshold; 
	struct FName NotifyName; 
	struct UAnimNotify* Notify; 
	struct UAnimNotifyState* NotifyStateClass; 
	float Duration; 
	struct FAnimLinkableElement EndLink; 
	bool bConvertedFromBranchingPoint; 
	enum class EMontageNotifyTickType MontageTickType; 
	float NotifyTriggerChance; 
	enum class ENotifyFilterType NotifyFilterType; 
	int32_t NotifyFilterLOD; 
	bool bTriggerOnDedicatedServer; 
	bool bTriggerOnFollower; 
	int32_t TrackIndex; 
};

// ScriptStruct Engine.WalkableSlopeOverride
struct FWalkableSlopeOverride {
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; 
	float WalkableSlopeAngle; 
};

// ScriptStruct Engine.BodyInstance
struct FBodyInstance : FBodyInstanceCore {
	enum class ECollisionChannel ObjectType; 
	enum class ECollisionEnabled CollisionEnabled; 
	enum class ESleepFamily SleepFamily; 
	enum class EDOFMode DOFMode; 
	char bUseCCD : 1; 
	char bIgnoreAnalyticCollisions : 1; 
	char bNotifyRigidBodyCollision : 1; 
	char bLockTranslation : 1; 
	char bLockRotation : 1; 
	char bLockXTranslation : 1; 
	char bLockYTranslation : 1; 
	char bLockZTranslation : 1; 
	char bLockXRotation : 1; 
	char bLockYRotation : 1; 
	char bLockZRotation : 1; 
	char bOverrideMaxAngularVelocity : 1; 
	char bOverrideMaxDepenetrationVelocity : 1; 
	char bOverrideWalkableSlopeOnInstance : 1; 
	char bInterpolateWhenSubStepping : 1; 
	struct FName CollisionProfileName; 
	char PositionSolverIterationCount; 
	char VelocitySolverIterationCount; 
	struct FCollisionResponse CollisionResponses; 
	float MaxDepenetrationVelocity; 
	float MassInKgOverride; 
	float LinearDamping; 
	float AngularDamping; 
	struct FVector CustomDOFPlaneNormal; 
	struct FVector COMNudge; 
	float MassScale; 
	struct FVector InertiaTensorScale; 
	struct FWalkableSlopeOverride WalkableSlopeOverride; 
	struct UPhysicalMaterial* PhysMaterialOverride; 
	float MaxAngularVelocity; 
	float CustomSleepThresholdMultiplier; 
	float StabilizationThresholdMultiplier; 
	float PhysicsBlendWeight; 
};

// ScriptStruct Engine.CollisionResponse
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; 
	struct TArray<struct FResponseChannel> ResponseArray; 
};

// ScriptStruct Engine.ResponseChannel
struct FResponseChannel {
	struct FName Channel; 
	enum class ECollisionResponse Response; 
};

// ScriptStruct Engine.CollisionResponseContainer
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; 
	enum class ECollisionResponse WorldDynamic; 
	enum class ECollisionResponse Pawn; 
	enum class ECollisionResponse Visibility; 
	enum class ECollisionResponse Camera; 
	enum class ECollisionResponse PhysicsBody; 
	enum class ECollisionResponse Vehicle; 
	enum class ECollisionResponse Destructible; 
	enum class ECollisionResponse EngineTraceChannel1; 
	enum class ECollisionResponse EngineTraceChannel2; 
	enum class ECollisionResponse EngineTraceChannel3; 
	enum class ECollisionResponse EngineTraceChannel4; 
	enum class ECollisionResponse EngineTraceChannel5; 
	enum class ECollisionResponse EngineTraceChannel6; 
	enum class ECollisionResponse GameTraceChannel1; 
	enum class ECollisionResponse GameTraceChannel2; 
	enum class ECollisionResponse GameTraceChannel3; 
	enum class ECollisionResponse GameTraceChannel4; 
	enum class ECollisionResponse GameTraceChannel5; 
	enum class ECollisionResponse GameTraceChannel6; 
	enum class ECollisionResponse GameTraceChannel7; 
	enum class ECollisionResponse GameTraceChannel8; 
	enum class ECollisionResponse GameTraceChannel9; 
	enum class ECollisionResponse GameTraceChannel10; 
	enum class ECollisionResponse GameTraceChannel11; 
	enum class ECollisionResponse GameTraceChannel12; 
	enum class ECollisionResponse GameTraceChannel13; 
	enum class ECollisionResponse GameTraceChannel14; 
	enum class ECollisionResponse GameTraceChannel15; 
	enum class ECollisionResponse GameTraceChannel16; 
	enum class ECollisionResponse GameTraceChannel17; 
	enum class ECollisionResponse GameTraceChannel18; 
};

// ScriptStruct Engine.CustomPrimitiveData
struct FCustomPrimitiveData {
	struct TArray<float> Data; 
};

// ScriptStruct Engine.LightingChannels
struct FLightingChannels {
	char bChannel0 : 1; 
	char bChannel1 : 1; 
	char bChannel2 : 1; 
};

// ScriptStruct Engine.KeyHandleLookupTable
struct FKeyHandleLookupTable {
};

// ScriptStruct Engine.UniqueNetIdRepl
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	struct TArray<char> ReplicationBytes; 
};

// ScriptStruct Engine.AnimNode_Base
struct FAnimNode_Base {
};

// ScriptStruct Engine.InputScaleBiasClamp
struct FInputScaleBiasClamp {
	bool bMapRange; 
	bool bClampResult; 
	bool bInterpResult; 
	struct FInputRange InRange; 
	struct FInputRange OutRange; 
	float Scale; 
	float Bias; 
	float ClampMin; 
	float ClampMax; 
	float InterpSpeedIncreasing; 
	float InterpSpeedDecreasing; 
};

// ScriptStruct Engine.InputRange
struct FInputRange {
	float Min; 
	float Max; 
};

// ScriptStruct Engine.InputAlphaBoolBlend
struct FInputAlphaBoolBlend {
	float BlendInTime; 
	float BlendOutTime; 
	enum class EAlphaBlendOption BlendOption; 
	bool bInitialized; 
	struct UCurveFloat* CustomCurve; 
	struct FAlphaBlend AlphaBlend; 
};

// ScriptStruct Engine.AlphaBlend
struct FAlphaBlend {
	struct UCurveFloat* CustomCurve; 
	float BlendTime; 
	enum class EAlphaBlendOption BlendOption; 
};

// ScriptStruct Engine.InputScaleBias
struct FInputScaleBias {
	float Scale; 
	float Bias; 
};

// ScriptStruct Engine.PoseLinkBase
struct FPoseLinkBase {
	int32_t LinkID; 
};

// ScriptStruct Engine.ComponentSpacePoseLink
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.RuntimeFloatCurve
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; 
	struct UCurveFloat* ExternalCurve; 
};

// ScriptStruct Engine.IndexedCurve
struct FIndexedCurve {
	struct FKeyHandleMap KeyHandlesToIndices; 
};

// ScriptStruct Engine.KeyHandleMap
struct FKeyHandleMap {
};

// ScriptStruct Engine.RealCurve
struct FRealCurve : FIndexedCurve {
	float DefaultValue; 
	enum class ERichCurveExtrapolation PreInfinityExtrap; 
	enum class ERichCurveExtrapolation PostInfinityExtrap; 
};

// ScriptStruct Engine.RichCurve
struct FRichCurve : FRealCurve {
	struct TArray<struct FRichCurveKey> Keys; 
};

// ScriptStruct Engine.RichCurveKey
struct FRichCurveKey {
	enum class ERichCurveInterpMode InterpMode; 
	enum class ERichCurveTangentMode TangentMode; 
	enum class ERichCurveTangentWeightMode TangentWeightMode; 
	float Time; 
	float Value; 
	float ArriveTangent; 
	float ArriveTangentWeight; 
	float LeaveTangent; 
	float LeaveTangentWeight; 
};

// ScriptStruct Engine.BoneReference
struct FBoneReference {
	struct FName BoneName; 
};

// ScriptStruct Engine.PoseLink
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.AnimNode_CustomProperty
struct FAnimNode_CustomProperty : FAnimNode_Base {
	struct TArray<struct FName> SourcePropertyNames; 
	struct TArray<struct FName> DestPropertyNames; 
	struct UObject* TargetInstance; 
};

// ScriptStruct Engine.AnimInstanceProxy
struct FAnimInstanceProxy {
};

// ScriptStruct Engine.ComponentReference
struct FComponentReference {
	struct AActor* OtherActor; 
	struct FName ComponentProperty; 
	struct FString PathToComponent; 
};

// ScriptStruct Engine.InputBlendPose
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; 
};

// ScriptStruct Engine.BranchFilter
struct FBranchFilter {
	struct FName BoneName; 
	int32_t BlendDepth; 
};

// ScriptStruct Engine.PerPlatformFloat
struct FPerPlatformFloat {
	float Default; 
};

// ScriptStruct Engine.PerPlatformInt
struct FPerPlatformInt {
	int32_t Default; 
};

// ScriptStruct Engine.PerPlatformBool
struct FPerPlatformBool {
	bool Default; 
};

// ScriptStruct Engine.RepAttachment
struct FRepAttachment {
	struct AActor* AttachParent; 
	struct FVector_NetQuantize100 LocationOffset; 
	struct FVector_NetQuantize100 RelativeScale3D; 
	struct FRotator RotationOffset; 
	struct FName AttachSocket; 
	struct USceneComponent* AttachComponent; 
};

// ScriptStruct Engine.Vector_NetQuantize100
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.RepMovement
struct FRepMovement {
	struct FVector LinearVelocity; 
	struct FVector AngularVelocity; 
	struct FVector Location; 
	struct FRotator Rotation; 
	char bSimulatedPhysicSleep : 1; 
	char bRepPhysics : 1; 
	enum class EVectorQuantization LocationQuantizationLevel; 
	enum class EVectorQuantization VelocityQuantizationLevel; 
	enum class ERotatorQuantization RotationQuantizationLevel; 
};

// ScriptStruct Engine.ActorTickFunction
struct FActorTickFunction : FTickFunction {
};

// ScriptStruct Engine.SoundModulationDestinationSettings
struct FSoundModulationDestinationSettings {
	float Value; 
	struct USoundModulatorBase* Modulator; 
};

// ScriptStruct Engine.FastArraySerializer
struct FFastArraySerializer {
	int32_t ArrayReplicationKey; 
	enum class EFastArraySerializerDeltaFlags DeltaFlags; 
};

// ScriptStruct Engine.FastArraySerializerItem
struct FFastArraySerializerItem {
	int32_t ReplicationID; 
	int32_t ReplicationKey; 
	int32_t MostRecentArrayReplicationKey; 
};

// ScriptStruct Engine.PoseSnapshot
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; 
	struct TArray<struct FName> BoneNames; 
	struct FName SkeletalMeshName; 
	struct FName SnapshotName; 
	bool bIsValid; 
};

// ScriptStruct Engine.Vector_NetQuantize10
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.InputAxisKeyMapping
struct FInputAxisKeyMapping {
	struct FName AxisName; 
	float Scale; 
	struct FKey Key; 
};

// ScriptStruct Engine.InputActionKeyMapping
struct FInputActionKeyMapping {
	struct FName ActionName; 
	char bShift : 1; 
	char bCtrl : 1; 
	char bAlt : 1; 
	char bCmd : 1; 
	struct FKey Key; 
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	struct FName GroupName; 
	enum class EAnimGroupRole GroupRole; 
	enum class EAnimSyncGroupScope GroupScope; 
	bool bIgnoreForRelevancyTest; 
	float BlendWeight; 
	float InternalTimeAccumulator; 
};

// ScriptStruct Engine.PerBoneBlendWeight
struct FPerBoneBlendWeight {
	int32_t SourceIndex; 
	float BlendWeight; 
};

// ScriptStruct Engine.AnimNode_Root
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; 
	struct FName Name; 
	struct FName Group; 
};

// ScriptStruct Engine.AnimCurveParam
struct FAnimCurveParam {
	struct FName Name; 
};

// ScriptStruct Engine.ActorComponentInstanceData
struct FActorComponentInstanceData {
	struct UObject* SourceComponentTemplate; 
	enum class EComponentCreationMethod SourceComponentCreationMethod; 
	int32_t SourceComponentTypeSerializedIndex; 
	struct TArray<char> SavedProperties; 
	struct FActorComponentDuplicatedObjectData UniqueTransientPackage; 
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; 
	struct TArray<struct UObject*> ReferencedObjects; 
	struct TArray<struct FName> ReferencedNames; 
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
struct FActorComponentDuplicatedObjectData {
};

// ScriptStruct Engine.SceneComponentInstanceData
struct FSceneComponentInstanceData : FActorComponentInstanceData {
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; 
};

// ScriptStruct Engine.DirectoryPath
struct FDirectoryPath {
	struct FString Path; 
};

// ScriptStruct Engine.KAggregateGeom
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; 
	struct TArray<struct FKBoxElem> BoxElems; 
	struct TArray<struct FKSphylElem> SphylElems; 
	struct TArray<struct FKConvexElem> ConvexElems; 
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; 
};

// ScriptStruct Engine.KShapeElem
struct FKShapeElem {
	float RestOffset; 
	struct FName Name; 
	char bContributeToMass : 1; 
	enum class ECollisionEnabled CollisionEnabled; 
};

// ScriptStruct Engine.KTaperedCapsuleElem
struct FKTaperedCapsuleElem : FKShapeElem {
	struct FVector Center; 
	struct FRotator Rotation; 
	float Radius0; 
	float Radius1; 
	float Length; 
};

// ScriptStruct Engine.KConvexElem
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; 
	struct TArray<int32_t> IndexData; 
	struct FBox ElemBox; 
	struct FTransform Transform; 
};

// ScriptStruct Engine.KSphylElem
struct FKSphylElem : FKShapeElem {
	struct FVector Center; 
	struct FRotator Rotation; 
	float Radius; 
	float Length; 
};

// ScriptStruct Engine.KBoxElem
struct FKBoxElem : FKShapeElem {
	struct FVector Center; 
	struct FRotator Rotation; 
	float X; 
	float Y; 
	float Z; 
};

// ScriptStruct Engine.KSphereElem
struct FKSphereElem : FKShapeElem {
	struct FVector Center; 
	float Radius; 
};

// ScriptStruct Engine.AnimationGroupReference
struct FAnimationGroupReference {
	struct FName GroupName; 
	enum class EAnimGroupRole GroupRole; 
	enum class EAnimSyncGroupScope GroupScope; 
};

// ScriptStruct Engine.RootMotionMovementParams
struct FRootMotionMovementParams {
	bool bHasRootMotion; 
	float BlendWeight; 
	struct FTransform RootMotionTransform; 
};

// ScriptStruct Engine.AnimGroupInstance
struct FAnimGroupInstance {
};

// ScriptStruct Engine.AnimTickRecord
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; 
};

// ScriptStruct Engine.MarkerSyncAnimPosition
struct FMarkerSyncAnimPosition {
	struct FName PreviousMarkerName; 
	struct FName NextMarkerName; 
	float PositionBetweenMarkers; 
};

// ScriptStruct Engine.BlendFilter
struct FBlendFilter {
};

// ScriptStruct Engine.BlendSampleData
struct FBlendSampleData {
	int32_t SampleDataIndex; 
	struct UAnimSequence* Animation; 
	float TotalWeight; 
	float Time; 
	float PreviousTime; 
	float SamplePlayRate; 
};

// ScriptStruct Engine.AnimationRecordingSettings
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; 
	bool bRemoveRootAnimation; 
	bool bAutoSaveAsset; 
	float SampleRate; 
	float Length; 
	enum class ERichCurveInterpMode InterpMode; 
	enum class ERichCurveTangentMode TangentMode; 
	bool bRecordTransforms; 
	bool bRecordCurves; 
};

// ScriptStruct Engine.ComponentSpacePose
struct FComponentSpacePose {
	struct TArray<struct FTransform> Transforms; 
	struct TArray<struct FName> Names; 
};

// ScriptStruct Engine.LocalSpacePose
struct FLocalSpacePose {
	struct TArray<struct FTransform> Transforms; 
	struct TArray<struct FName> Names; 
};

// ScriptStruct Engine.NamedTransform
struct FNamedTransform {
	struct FTransform Value; 
	struct FName Name; 
};

// ScriptStruct Engine.NamedColor
struct FNamedColor {
	struct FColor Value; 
	struct FName Name; 
};

// ScriptStruct Engine.NamedVector
struct FNamedVector {
	struct FVector Value; 
	struct FName Name; 
};

// ScriptStruct Engine.NamedFloat
struct FNamedFloat {
	float Value; 
	struct FName Name; 
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; 
	struct FGuid ParentNodeGuid; 
};

// ScriptStruct Engine.AnimGroupInfo
struct FAnimGroupInfo {
	struct FName Name; 
	struct FLinearColor Color; 
};

// ScriptStruct Engine.AnimBlueprintDebugData
struct FAnimBlueprintDebugData {
};

// ScriptStruct Engine.AnimationFrameSnapshot
struct FAnimationFrameSnapshot {
};

// ScriptStruct Engine.StateMachineDebugData
struct FStateMachineDebugData {
};

// ScriptStruct Engine.StateMachineStateDebugData
struct FStateMachineStateDebugData {
};

// ScriptStruct Engine.AnimBlueprintFunctionData
struct FAnimBlueprintFunctionData {
	struct TFieldPath<FStructProperty> OutputPoseNodeProperty; 
	struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; 
	struct TArray<struct TFieldPath<FProperty>> InputProperties; 
};

// ScriptStruct Engine.AnimGraphBlendOptions
struct FAnimGraphBlendOptions {
	float BlendInTime; 
	float BlendOutTime; 
};

// ScriptStruct Engine.GraphAssetPlayerInformation
struct FGraphAssetPlayerInformation {
	struct TArray<int32_t> PlayerNodeIndices; 
};

// ScriptStruct Engine.CachedPoseIndices
struct FCachedPoseIndices {
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; 
};

// ScriptStruct Engine.AnimBlueprintFunction
struct FAnimBlueprintFunction {
	struct FName Name; 
	struct FName Group; 
	int32_t OutputPoseNodeIndex; 
	struct TArray<struct FName> InputPoseNames; 
	struct TArray<int32_t> InputPoseNodeIndices; 
	bool bImplemented; 
};

// ScriptStruct Engine.AnimTrack
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; 
};

// ScriptStruct Engine.AnimSegment
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; 
	float StartPos; 
	float AnimStartTime; 
	float AnimEndTime; 
	float AnimPlayRate; 
	int32_t LoopingCount; 
};

// ScriptStruct Engine.RootMotionExtractionStep
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; 
	float StartPosition; 
	float EndPosition; 
};

// ScriptStruct Engine.AnimationErrorStats
struct FAnimationErrorStats {
};

// ScriptStruct Engine.RawCurveTracks
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; 
};

// ScriptStruct Engine.AnimCurveBase
struct FAnimCurveBase {
	struct FName LastObservedName; 
	struct FSmartName Name; 
	int32_t CurveTypeFlags; 
};

// ScriptStruct Engine.SmartName
struct FSmartName {
	struct FName DisplayName; 
};

// ScriptStruct Engine.FloatCurve
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; 
};

// ScriptStruct Engine.TransformCurve
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; 
	struct FVectorCurve RotationCurve; 
	struct FVectorCurve ScaleCurve; 
};

// ScriptStruct Engine.VectorCurve
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x3]; 
};

// ScriptStruct Engine.SlotEvaluationPose
struct FSlotEvaluationPose {
	enum class EAdditiveAnimationType AdditiveType; 
	float Weight; 
};

// ScriptStruct Engine.A2Pose
struct FA2Pose {
	struct TArray<struct FTransform> Bones; 
};

// ScriptStruct Engine.A2CSPose
struct FA2CSPose : FA2Pose {
	struct TArray<char> ComponentSpaceFlags; 
};

// ScriptStruct Engine.QueuedDrawDebugItem
struct FQueuedDrawDebugItem {
	enum class EDrawDebugItemType ItemType; 
	struct FVector StartLoc; 
	struct FVector EndLoc; 
	struct FVector Center; 
	struct FRotator Rotation; 
	float Radius; 
	float Size; 
	int32_t Segments; 
	struct FColor Color; 
	bool bPersistentLines; 
	float LifeTime; 
	float Thickness; 
	struct FString Message; 
	struct FVector2D TextScale; 
};

// ScriptStruct Engine.AnimInstanceSubsystemData
struct FAnimInstanceSubsystemData {
};

// ScriptStruct Engine.AnimMontageInstance
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; 
	bool bPlaying; 
	float DefaultBlendTimeMultiplier; 
	struct TArray<int32_t> NextSections; 
	struct TArray<int32_t> PrevSections; 
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; 
	float position; 
	float PlayRate; 
	struct FAlphaBlend Blend; 
	int32_t DisableRootMotionCount; 
};

// ScriptStruct Engine.BranchingPointMarker
struct FBranchingPointMarker {
	int32_t NotifyIndex; 
	float TriggerTime; 
	enum class EAnimNotifyEventType NotifyEventType; 
};

// ScriptStruct Engine.BranchingPoint
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; 
	float DisplayTime; 
	float TriggerTimeOffset; 
};

// ScriptStruct Engine.SlotAnimationTrack
struct FSlotAnimationTrack {
	struct FName SlotName; 
	struct FAnimTrack AnimTrack; 
};

// ScriptStruct Engine.CompositeSection
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; 
	float StartTime; 
	struct FName NextSectionName; 
	struct TArray<struct UAnimMetaData*> MetaData; 
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; 
	struct FPoseLink Additive; 
	enum class EAnimAlphaInputType AlphaInputType; 
	float Alpha; 
	char bAlphaBoolEnabled : 1; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
	int32_t LODThreshold; 
};

// ScriptStruct Engine.AnimNode_Inertialization
struct FAnimNode_Inertialization : FAnimNode_Base {
	struct FPoseLink Source; 
};

// ScriptStruct Engine.InertializationPoseDiff
struct FInertializationPoseDiff {
};

// ScriptStruct Engine.InertializationCurveDiff
struct FInertializationCurveDiff {
};

// ScriptStruct Engine.InertializationBoneDiff
struct FInertializationBoneDiff {
};

// ScriptStruct Engine.InertializationPose
struct FInertializationPose {
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	struct TArray<struct FPoseLink> InputPoses; 
	struct TArray<struct FName> InputPoseNames; 
	struct UAnimInstance* InstanceClass; 
	struct FName Tag; 
	char bReceiveNotifiesFromLinkedInstances : 1; 
	char bPropagateNotifiesToLinkedInstances : 1; 
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	struct UAnimLayerInterface* Interface; 
	struct FName Layer; 
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	struct FName Name; 
	struct FName Graph; 
	struct FPoseLink InputPose; 
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; 
	struct FName CachePoseName; 
};

// ScriptStruct Engine.AnimNode_SequencePlayer
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; 
	float PlayRateBasis; 
	float PlayRate; 
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; 
	float StartPosition; 
	bool bLoopAnimation; 
};

// ScriptStruct Engine.AnimNode_StateMachine
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; 
	int32_t MaxTransitionsPerFrame; 
	bool bSkipFirstUpdateTransition; 
	bool bReinitializeOnBecomingRelevant; 
};

// ScriptStruct Engine.AnimationPotentialTransition
struct FAnimationPotentialTransition {
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
struct FAnimationActiveTransitionEntry {
	struct UBlendProfile* BlendProfile; 
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; 
	enum class EEvaluatorDataSource DataSource; 
	enum class EEvaluatorMode EvaluatorMode; 
};

// ScriptStruct Engine.AnimNode_TransitionResult
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; 
};

// ScriptStruct Engine.AnimNode_UseCachedPose
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; 
	struct FName CachePoseName; 
};

// ScriptStruct Engine.ExposedValueHandler
struct FExposedValueHandler {
	struct FName BoundFunction; 
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; 
	struct UFunction* Function; 
	struct TFieldPath<FStructProperty> ValueHandlerNodeProperty; 
};

// ScriptStruct Engine.ExposedValueCopyRecord
struct FExposedValueCopyRecord {
	int32_t CopyIndex; 
	enum class EPostCopyOperation PostCopyOperation; 
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; 
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; 
};

// ScriptStruct Engine.AnimNotifyQueue
struct FAnimNotifyQueue {
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; 
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; 
};

// ScriptStruct Engine.AnimNotifyArray
struct FAnimNotifyArray {
	struct TArray<struct FAnimNotifyEventReference> Notifies; 
};

// ScriptStruct Engine.AnimNotifyEventReference
struct FAnimNotifyEventReference {
	struct UObject* NotifySource; 
};

// ScriptStruct Engine.CompressedTrack
struct FCompressedTrack {
	struct TArray<char> ByteStream; 
	struct TArray<float> Times; 
	float Mins[0x3]; 
	float Ranges[0x3]; 
};

// ScriptStruct Engine.CurveTrack
struct FCurveTrack {
	struct FName CurveName; 
	struct TArray<float> CurveWeights; 
};

// ScriptStruct Engine.ScaleTrack
struct FScaleTrack {
	struct TArray<struct FVector> ScaleKeys; 
	struct TArray<float> Times; 
};

// ScriptStruct Engine.RotationTrack
struct FRotationTrack {
	struct TArray<struct FQuat> RotKeys; 
	struct TArray<float> Times; 
};

// ScriptStruct Engine.TranslationTrack
struct FTranslationTrack {
	struct TArray<struct FVector> PosKeys; 
	struct TArray<float> Times; 
};

// ScriptStruct Engine.AnimSequenceTrackContainer
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; 
	struct TArray<struct FName> TrackNames; 
};

// ScriptStruct Engine.RawAnimSequenceTrack
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector> PosKeys; 
	struct TArray<struct FQuat> RotKeys; 
	struct TArray<struct FVector> ScaleKeys; 
};

// ScriptStruct Engine.AnimSetMeshLinkup
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; 
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct Engine.AnimNode_SingleNode
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; 
};

// ScriptStruct Engine.BakedAnimationStateMachine
struct FBakedAnimationStateMachine {
	struct FName MachineName; 
	int32_t InitialState; 
	struct TArray<struct FBakedAnimationState> States; 
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; 
};

// ScriptStruct Engine.AnimationStateBase
struct FAnimationStateBase {
	struct FName StateName; 
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; 
	int32_t NextState; 
	float CrossfadeDuration; 
	int32_t StartNotify; 
	int32_t EndNotify; 
	int32_t InterruptNotify; 
	enum class EAlphaBlendOption BlendMode; 
	struct UCurveFloat* CustomCurve; 
	struct UBlendProfile* BlendProfile; 
	enum class ETransitionLogicType LogicType; 
};

// ScriptStruct Engine.BakedAnimationState
struct FBakedAnimationState {
	struct FName StateName; 
	struct TArray<struct FBakedStateExitTransition> Transitions; 
	int32_t StateRootNodeIndex; 
	int32_t StartNotify; 
	int32_t EndNotify; 
	int32_t FullyBlendedNotify; 
	bool bIsAConduit; 
	int32_t EntryRuleNodeIndex; 
	struct TArray<int32_t> PlayerNodeIndices; 
	struct TArray<int32_t> LayerNodeIndices; 
	bool bAlwaysResetOnEntry; 
};

// ScriptStruct Engine.BakedStateExitTransition
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; 
	int32_t CustomResultNodeIndex; 
	int32_t TransitionIndex; 
	bool bDesiredTransitionReturnValue; 
	bool bAutomaticRemainingTimeRule; 
	struct TArray<int32_t> PoseEvaluatorLinks; 
};

// ScriptStruct Engine.AnimationState
struct FAnimationState : FAnimationStateBase {
	struct TArray<struct FAnimationTransitionRule> Transitions; 
	int32_t StateRootNodeIndex; 
	int32_t StartNotify; 
	int32_t EndNotify; 
	int32_t FullyBlendedNotify; 
};

// ScriptStruct Engine.AnimationTransitionRule
struct FAnimationTransitionRule {
	struct FName RuleToExecute; 
	bool TransitionReturnVal; 
	int32_t TransitionIndex; 
};

// ScriptStruct Engine.TrackToSkeletonMap
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; 
};

// ScriptStruct Engine.MarkerSyncData
struct FMarkerSyncData {
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; 
};

// ScriptStruct Engine.AnimSyncMarker
struct FAnimSyncMarker {
	struct FName MarkerName; 
	float Time; 
};

// ScriptStruct Engine.AnimNotifyTrack
struct FAnimNotifyTrack {
	struct FName TrackName; 
	struct FLinearColor TrackColor; 
};

// ScriptStruct Engine.PerBoneBlendWeights
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; 
};

// ScriptStruct Engine.AssetImportInfo
struct FAssetImportInfo {
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
struct FPrimaryAssetRulesCustomOverride {
	struct FPrimaryAssetType PrimaryAssetType; 
	struct FDirectoryPath FilterDirectory; 
	struct FString FilterString; 
	struct FPrimaryAssetRules Rules; 
};

// ScriptStruct Engine.PrimaryAssetRules
struct FPrimaryAssetRules {
	int32_t Priority; 
	int32_t ChunkId; 
	bool bApplyRecursively; 
	enum class EPrimaryAssetCookRule CookRule; 
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; 
	struct FPrimaryAssetRules Rules; 
};

// ScriptStruct Engine.AssetManagerRedirect
struct FAssetManagerRedirect {
	struct FString Old; 
	struct FString New; 
};

// ScriptStruct Engine.AssetManagerSearchRules
struct FAssetManagerSearchRules {
	struct TArray<struct FString> AssetScanPaths; 
	struct TArray<struct FString> IncludePatterns; 
	struct TArray<struct FString> ExcludePatterns; 
	struct UObject* AssetBaseClass; 
	bool bHasBlueprintClasses; 
	bool bForceSynchronousScan; 
	bool bSkipVirtualPathExpansion; 
	bool bSkipManagerIncludeCheck; 
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; 
	struct TSoftClassPtr<UObject> AssetBaseClass; 
	struct UObject* AssetBaseClassLoaded; 
	bool bHasBlueprintClasses; 
	bool bIsEditorOnly; 
	struct TArray<struct FDirectoryPath> Directories; 
	struct TArray<struct FSoftObjectPath> SpecificAssets; 
	struct FPrimaryAssetRules Rules; 
	struct TArray<struct FString> AssetScanPaths; 
	bool bIsDynamicAsset; 
	int32_t NumberOfAssets; 
};

// ScriptStruct Engine.AssetMapping
struct FAssetMapping {
	struct UAnimationAsset* SourceAsset; 
	struct UAnimationAsset* TargetAsset; 
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
struct FAtmospherePrecomputeParameters {
	float DensityHeight; 
	float DecayHeight; 
	int32_t MaxScatteringOrder; 
	int32_t TransmittanceTexWidth; 
	int32_t TransmittanceTexHeight; 
	int32_t IrradianceTexWidth; 
	int32_t IrradianceTexHeight; 
	int32_t InscatterAltitudeSampleNum; 
	int32_t InscatterMuNum; 
	int32_t InscatterMuSNum; 
	int32_t InscatterNuNum; 
};

// ScriptStruct Engine.BaseAttenuationSettings
struct FBaseAttenuationSettings {
	enum class EAttenuationDistanceModel DistanceAlgorithm; 
	enum class EAttenuationShape AttenuationShape; 
	float dBAttenuationAtMax; 
	enum class ENaturalSoundFalloffMode FalloffMode; 
	struct FVector AttenuationShapeExtents; 
	float ConeOffset; 
	float FalloffDistance; 
	struct FRuntimeFloatCurve CustomAttenuationCurve; 
};

// ScriptStruct Engine.AudioComponentParam
struct FAudioComponentParam {
	struct FName ParamName; 
	float FloatParam; 
	bool BoolParam; 
	int32_t IntParam; 
	struct USoundWave* SoundWaveParam; 
};

// ScriptStruct Engine.AudioEffectParameters
struct FAudioEffectParameters {
};

// ScriptStruct Engine.AudioReverbEffect
struct FAudioReverbEffect : FAudioEffectParameters {
};

// ScriptStruct Engine.DefaultAudioBusSettings
struct FDefaultAudioBusSettings {
	struct FSoftObjectPath AudioBus; 
};

// ScriptStruct Engine.SoundDebugEntry
struct FSoundDebugEntry {
	struct FName DebugName; 
	struct FSoftObjectPath Sound; 
};

// ScriptStruct Engine.AudioQualitySettings
struct FAudioQualitySettings {
	struct FText DisplayName; 
	int32_t MaxChannels; 
};

// ScriptStruct Engine.InteriorSettings
struct FInteriorSettings {
	bool bIsWorldSettings; 
	float ExteriorVolume; 
	float ExteriorTime; 
	float ExteriorLPF; 
	float ExteriorLPFTime; 
	float InteriorVolume; 
	float InteriorTime; 
	float InteriorLPF; 
	float InteriorLPFTime; 
};

// ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
struct FAudioVolumeSubmixOverrideSettings {
	struct USoundSubmix* Submix; 
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; 
	float CrossfadeTime; 
};

// ScriptStruct Engine.AudioVolumeSubmixSendSettings
struct FAudioVolumeSubmixSendSettings {
	enum class EAudioVolumeLocationState ListenerLocationState; 
	enum class EAudioVolumeLocationState SourceLocationState; 
	struct TArray<struct FSoundSubmixSendInfo> SubmixSends; 
};

// ScriptStruct Engine.SoundSubmixSendInfo
struct FSoundSubmixSendInfo {
	enum class ESendLevelControlMethod SendLevelControlMethod; 
	enum class ESubmixSendStage SendStage; 
	struct USoundSubmixBase* SoundSubmix; 
	float SendLevel; 
	float MinSendLevel; 
	float MaxSendLevel; 
	float MinSendDistance; 
	float MaxSendDistance; 
	struct FRuntimeFloatCurve CustomSendLevelCurve; 
};

// ScriptStruct Engine.LaunchOnTestSettings
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; 
	struct FString DeviceID; 
};

// ScriptStruct Engine.FilePath
struct FFilePath {
	struct FString FilePath; 
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
struct FEditorMapPerformanceTestDefinition {
	struct FSoftObjectPath PerformanceTestmap; 
	int32_t TestTimer; 
};

// ScriptStruct Engine.BuildPromotionTestSettings
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; 
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; 
	struct FBuildPromotionOpenAssetSettings OpenAssets; 
	struct FBuildPromotionNewProjectSettings NewProjectSettings; 
	struct FFilePath SourceControlMaterial; 
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; 
	struct FString NewProjectNameOverride; 
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; 
	struct FFilePath MaterialAsset; 
	struct FFilePath ParticleSystemAsset; 
	struct FFilePath SkeletalMeshAsset; 
	struct FFilePath StaticMeshAsset; 
	struct FFilePath TextureAsset; 
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; 
	struct FEditorImportWorkflowDefinition Normal; 
	struct FEditorImportWorkflowDefinition StaticMesh; 
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; 
	struct FEditorImportWorkflowDefinition BlendShapeMesh; 
	struct FEditorImportWorkflowDefinition MorphMesh; 
	struct FEditorImportWorkflowDefinition SkeletalMesh; 
	struct FEditorImportWorkflowDefinition Animation; 
	struct FEditorImportWorkflowDefinition Sound; 
	struct FEditorImportWorkflowDefinition SurroundSound; 
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; 
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; 
	struct TArray<struct FImportFactorySettingValues> FactorySettings; 
};

// ScriptStruct Engine.ImportFactorySettingValues
struct FImportFactorySettingValues {
	struct FString SettingName; 
	struct FString Value; 
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; 
	struct FFilePath SecondMeshPath; 
	struct FFilePath DefaultParticleAsset; 
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; 
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; 
	struct FFilePath DefaultDiffuseTexture; 
	struct FFilePath DefaultNormalTexture; 
};

// ScriptStruct Engine.EditorImportExportTestDefinition
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; 
	struct FString ExportFileExtension; 
	bool bSkipExport; 
	struct TArray<struct FImportFactorySettingValues> FactorySettings; 
};

// ScriptStruct Engine.ExternalToolDefinition
struct FExternalToolDefinition {
	struct FString ToolName; 
	struct FFilePath ExecutablePath; 
	struct FString CommandLineOptions; 
	struct FDirectoryPath WorkingDirectory; 
	struct FString ScriptExtension; 
	struct FDirectoryPath ScriptDirectory; 
};

// ScriptStruct Engine.NavAvoidanceData
struct FNavAvoidanceData {
};

// ScriptStruct Engine.BandwidthTestGenerator
struct FBandwidthTestGenerator {
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; 
};

// ScriptStruct Engine.BandwidthTestItem
struct FBandwidthTestItem {
	struct TArray<char> Kilobyte; 
};

// ScriptStruct Engine.BlendProfileBoneEntry
struct FBlendProfileBoneEntry {
	struct FBoneReference BoneReference; 
	float BlendScale; 
};

// ScriptStruct Engine.PerBoneInterpolation
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; 
	float InterpolationSpeedPerSec; 
};

// ScriptStruct Engine.GridBlendSample
struct FGridBlendSample {
	struct FEditorElement GridElement; 
	float BlendWeight; 
};

// ScriptStruct Engine.EditorElement
struct FEditorElement {
	int32_t Indices[0x3]; 
	float Weights[0x3]; 
};

// ScriptStruct Engine.BlendSample
struct FBlendSample {
	struct UAnimSequence* Animation; 
	struct FVector SampleValue; 
	float RateScale; 
};

// ScriptStruct Engine.BlendParameter
struct FBlendParameter {
	struct FString DisplayName; 
	float Min; 
	float Max; 
	int32_t GridNum; 
};

// ScriptStruct Engine.InterpolationParameter
struct FInterpolationParameter {
	float InterpolationTime; 
	enum class EFilterInterpolationType InterpolationType; 
};

// ScriptStruct Engine.BPEditorBookmarkNode
struct FBPEditorBookmarkNode {
	struct FGuid NodeGuid; 
	struct FGuid ParentGuid; 
	struct FText DisplayName; 
};

// ScriptStruct Engine.EditedDocumentInfo
struct FEditedDocumentInfo {
	struct FSoftObjectPath EditedObjectPath; 
	struct FVector2D SavedViewOffset; 
	float SavedZoomAmount; 
	struct UObject* EditedObject; 
};

// ScriptStruct Engine.BPInterfaceDescription
struct FBPInterfaceDescription {
	struct UInterface* Interface; 
	struct TArray<struct UEdGraph*> Graphs; 
};

// ScriptStruct Engine.BPVariableDescription
struct FBPVariableDescription {
	struct FName VarName; 
	struct FGuid VarGuid; 
	struct FEdGraphPinType VarType; 
	struct FString FriendlyName; 
	struct FText Category; 
	uint64_t PropertyFlags; 
	struct FName RepNotifyFunc; 
	enum class ELifetimeCondition ReplicationCondition; 
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; 
	struct FString DefaultValue; 
};

// ScriptStruct Engine.BPVariableMetaDataEntry
struct FBPVariableMetaDataEntry {
	struct FName DataKey; 
	struct FString DataValue; 
};

// ScriptStruct Engine.EdGraphPinType
struct FEdGraphPinType {
	struct FName PinCategory; 
	struct FName PinSubCategory; 
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; 
	struct FSimpleMemberReference PinSubCategoryMemberReference; 
	struct FEdGraphTerminalType PinValueType; 
	enum class EPinContainerType ContainerType; 
	char bIsArray : 1; 
	char bIsReference : 1; 
	char bIsConst : 1; 
	char bIsWeakPointer : 1; 
	char bIsUObjectWrapper : 1; 
};

// ScriptStruct Engine.EdGraphTerminalType
struct FEdGraphTerminalType {
	struct FName TerminalCategory; 
	struct FName TerminalSubCategory; 
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; 
	bool bTerminalIsConst; 
	bool bTerminalIsWeakPointer; 
	bool bTerminalIsUObjectWrapper; 
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
struct FBlueprintMacroCosmeticInfo {
};

// ScriptStruct Engine.CompilerNativizationOptions
struct FCompilerNativizationOptions {
	struct FName PlatformName; 
	bool ServerOnlyPlatform; 
	bool ClientOnlyPlatform; 
	bool bExcludeMonolithicHeaders; 
	struct TArray<struct FName> ExcludedModules; 
	struct TSet<struct FSoftObjectPath> ExcludedAssets; 
	struct TArray<struct FString> ExcludedFolderPaths; 
};

// ScriptStruct Engine.BPComponentClassOverride
struct FBPComponentClassOverride {
	struct FName ComponentName; 
	struct UObject* ComponentClass; 
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
struct FBlueprintCookedComponentInstancingData {
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; 
	bool bHasValidCookedData; 
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
struct FBlueprintComponentChangedPropertyInfo {
	struct FName PropertyName; 
	int32_t ArrayIndex; 
	struct UStruct* PropertyScope; 
};

// ScriptStruct Engine.EventGraphFastCallPair
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; 
	int32_t EventGraphCallOffset; 
};

// ScriptStruct Engine.BlueprintDebugData
struct FBlueprintDebugData {
};

// ScriptStruct Engine.PointerToUberGraphFrame
struct FPointerToUberGraphFrame {
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
struct FDebuggingInfoForSingleFunction {
};

// ScriptStruct Engine.NodeToCodeAssociation
struct FNodeToCodeAssociation {
};

// ScriptStruct Engine.AnimCurveType
struct FAnimCurveType {
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
struct FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.BookmarkJumpToSettings
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
struct FBookmark2DJumpToSettings {
};

// ScriptStruct Engine.GeomSelection
struct FGeomSelection {
	int32_t Type; 
	int32_t Index; 
	int32_t SelectionIndex; 
};

// ScriptStruct Engine.BuilderPoly
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; 
	int32_t Direction; 
	struct FName ItemName; 
	int32_t PolyFlags; 
};

// ScriptStruct Engine.CachedAnimTransitionData
struct FCachedAnimTransitionData {
	struct FName StateMachineName; 
	struct FName FromStateName; 
	struct FName ToStateName; 
};

// ScriptStruct Engine.CachedAnimRelevancyData
struct FCachedAnimRelevancyData {
	struct FName StateMachineName; 
	struct FName StateName; 
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
struct FCachedAnimAssetPlayerData {
	struct FName StateMachineName; 
	struct FName StateName; 
};

// ScriptStruct Engine.CachedAnimStateArray
struct FCachedAnimStateArray {
	struct TArray<struct FCachedAnimStateData> States; 
};

// ScriptStruct Engine.CachedAnimStateData
struct FCachedAnimStateData {
	struct FName StateMachineName; 
	struct FName StateName; 
};

// ScriptStruct Engine.ActiveCameraShakeInfo
struct FActiveCameraShakeInfo {
	struct UCameraShakeBase* ShakeInstance; 
	struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; 
	bool bIsCustomInitialized; 
};

// ScriptStruct Engine.PooledCameraShakes
struct FPooledCameraShakes {
	struct TArray<struct UCameraShakeBase*> PooledShakes; 
};

// ScriptStruct Engine.CameraShakeInfo
struct FCameraShakeInfo {
	struct FCameraShakeDuration Duration; 
	float BlendIn; 
	float BlendOut; 
};

// ScriptStruct Engine.CameraShakeDuration
struct FCameraShakeDuration {
	float Duration; 
	enum class ECameraShakeDurationType Type; 
};

// ScriptStruct Engine.CameraShakeStopParams
struct FCameraShakeStopParams {
	bool bImmediately; 
};

// ScriptStruct Engine.CameraShakeUpdateResult
struct FCameraShakeUpdateResult {
};

// ScriptStruct Engine.CameraShakeScrubParams
struct FCameraShakeScrubParams {
	float AbsoluteTime; 
	float ShakeScale; 
	float DynamicScale; 
	float BlendingWeight; 
	struct FMinimalViewInfo POV; 
};

// ScriptStruct Engine.MinimalViewInfo
struct FMinimalViewInfo {
	struct FVector Location; 
	struct FRotator Rotation; 
	float FOV; 
	float DesiredFOV; 
	float OrthoWidth; 
	float OrthoNearClipPlane; 
	float OrthoFarClipPlane; 
	float AspectRatio; 
	char bConstrainAspectRatio : 1; 
	char bUseFieldOfViewForLOD : 1; 
	enum class ECameraProjectionMode ProjectionMode; 
	float PostProcessBlendWeight; 
	struct FPostProcessSettings PostProcessSettings; 
	struct FVector2D OffCenterProjectionOffset; 
};

// ScriptStruct Engine.PostProcessSettings
struct FPostProcessSettings {
	char bOverride_TemperatureType : 1; 
	char bOverride_WhiteTemp : 1; 
	char bOverride_WhiteTint : 1; 
	char bOverride_ColorSaturation : 1; 
	char bOverride_ColorContrast : 1; 
	char bOverride_ColorGamma : 1; 
	char bOverride_ColorGain : 1; 
	char bOverride_ColorOffset : 1; 
	char bOverride_ColorSaturationShadows : 1; 
	char bOverride_ColorContrastShadows : 1; 
	char bOverride_ColorGammaShadows : 1; 
	char bOverride_ColorGainShadows : 1; 
	char bOverride_ColorOffsetShadows : 1; 
	char bOverride_ColorSaturationMidtones : 1; 
	char bOverride_ColorContrastMidtones : 1; 
	char bOverride_ColorGammaMidtones : 1; 
	char bOverride_ColorGainMidtones : 1; 
	char bOverride_ColorOffsetMidtones : 1; 
	char bOverride_ColorSaturationHighlights : 1; 
	char bOverride_ColorContrastHighlights : 1; 
	char bOverride_ColorGammaHighlights : 1; 
	char bOverride_ColorGainHighlights : 1; 
	char bOverride_ColorOffsetHighlights : 1; 
	char bOverride_ColorCorrectionShadowsMax : 1; 
	char bOverride_ColorCorrectionHighlightsMin : 1; 
	char bOverride_BlueCorrection : 1; 
	char bOverride_ExpandGamut : 1; 
	char bOverride_ToneCurveAmount : 1; 
	char bOverride_FilmWhitePoint : 1; 
	char bOverride_FilmSaturation : 1; 
	char bOverride_FilmChannelMixerRed : 1; 
	char bOverride_FilmChannelMixerGreen : 1; 
	char bOverride_FilmChannelMixerBlue : 1; 
	char bOverride_FilmContrast : 1; 
	char bOverride_FilmDynamicRange : 1; 
	char bOverride_FilmHealAmount : 1; 
	char bOverride_FilmToeAmount : 1; 
	char bOverride_FilmShadowTint : 1; 
	char bOverride_FilmShadowTintBlend : 1; 
	char bOverride_FilmShadowTintAmount : 1; 
	char bOverride_FilmSlope : 1; 
	char bOverride_FilmToe : 1; 
	char bOverride_FilmShoulder : 1; 
	char bOverride_FilmBlackClip : 1; 
	char bOverride_FilmWhiteClip : 1; 
	char bOverride_SceneColorTint : 1; 
	char bOverride_SceneFringeIntensity : 1; 
	char bOverride_ChromaticAberrationStartOffset : 1; 
	char bOverride_AmbientCubemapTint : 1; 
	char bOverride_AmbientCubemapIntensity : 1; 
	char bOverride_BloomMethod : 1; 
	char bOverride_BloomIntensity : 1; 
	char bOverride_BloomThreshold : 1; 
	char bOverride_Bloom1Tint : 1; 
	char bOverride_Bloom1Size : 1; 
	char bOverride_Bloom2Size : 1; 
	char bOverride_Bloom2Tint : 1; 
	char bOverride_Bloom3Tint : 1; 
	char bOverride_Bloom3Size : 1; 
	char bOverride_Bloom4Tint : 1; 
	char bOverride_Bloom4Size : 1; 
	char bOverride_Bloom5Tint : 1; 
	char bOverride_Bloom5Size : 1; 
	char bOverride_Bloom6Tint : 1; 
	char bOverride_Bloom6Size : 1; 
	char bOverride_BloomSizeScale : 1; 
	char bOverride_BloomConvolutionTexture : 1; 
	char bOverride_BloomConvolutionSize : 1; 
	char bOverride_BloomConvolutionCenterUV : 1; 
	char bOverride_BloomConvolutionPreFilter : 1; 
	char bOverride_BloomConvolutionPreFilterMin : 1; 
	char bOverride_BloomConvolutionPreFilterMax : 1; 
	char bOverride_BloomConvolutionPreFilterMult : 1; 
	char bOverride_BloomConvolutionBufferScale : 1; 
	char bOverride_BloomDirtMaskIntensity : 1; 
	char bOverride_BloomDirtMaskTint : 1; 
	char bOverride_BloomDirtMask : 1; 
	char bOverride_CameraShutterSpeed : 1; 
	char bOverride_CameraISO : 1; 
	char bOverride_AutoExposureMethod : 1; 
	char bOverride_AutoExposureLowPercent : 1; 
	char bOverride_AutoExposureHighPercent : 1; 
	char bOverride_AutoExposureMinBrightness : 1; 
	char bOverride_AutoExposureMaxBrightness : 1; 
	char bOverride_AutoExposureCalibrationConstant : 1; 
	char bOverride_AutoExposureSpeedUp : 1; 
	char bOverride_AutoExposureSpeedDown : 1; 
	char bOverride_AutoExposureBias : 1; 
	char bOverride_AutoExposureBiasCurve : 1; 
	char bOverride_AutoExposureMeterMask : 1; 
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; 
	char bOverride_HistogramLogMin : 1; 
	char bOverride_HistogramLogMax : 1; 
	char bOverride_LensFlareIntensity : 1; 
	char bOverride_LensFlareTint : 1; 
	char bOverride_LensFlareTints : 1; 
	char bOverride_LensFlareBokehSize : 1; 
	char bOverride_LensFlareBokehShape : 1; 
	char bOverride_LensFlareThreshold : 1; 
	char bOverride_VignetteIntensity : 1; 
	char bOverride_GrainIntensity : 1; 
	char bOverride_GrainJitter : 1; 
	char bOverride_AmbientOcclusionIntensity : 1; 
	char bOverride_AmbientOcclusionStaticFraction : 1; 
	char bOverride_AmbientOcclusionRadius : 1; 
	char bOverride_AmbientOcclusionFadeDistance : 1; 
	char bOverride_AmbientOcclusionFadeRadius : 1; 
	char bOverride_AmbientOcclusionDistance : 1; 
	char bOverride_AmbientOcclusionRadiusInWS : 1; 
	char bOverride_AmbientOcclusionPower : 1; 
	char bOverride_AmbientOcclusionBias : 1; 
	char bOverride_AmbientOcclusionQuality : 1; 
	char bOverride_AmbientOcclusionMipBlend : 1; 
	char bOverride_AmbientOcclusionMipScale : 1; 
	char bOverride_AmbientOcclusionMipThreshold : 1; 
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; 
	char bOverride_RayTracingAO : 1; 
	char bOverride_RayTracingAOSamplesPerPixel : 1; 
	char bOverride_RayTracingAOIntensity : 1; 
	char bOverride_RayTracingAORadius : 1; 
	char bOverride_LPVIntensity : 1; 
	char bOverride_LPVDirectionalOcclusionIntensity : 1; 
	char bOverride_LPVDirectionalOcclusionRadius : 1; 
	char bOverride_LPVDiffuseOcclusionExponent : 1; 
	char bOverride_LPVSpecularOcclusionExponent : 1; 
	char bOverride_LPVDiffuseOcclusionIntensity : 1; 
	char bOverride_LPVSpecularOcclusionIntensity : 1; 
	char bOverride_LPVSize : 1; 
	char bOverride_LPVSecondaryOcclusionIntensity : 1; 
	char bOverride_LPVSecondaryBounceIntensity : 1; 
	char bOverride_LPVGeometryVolumeBias : 1; 
	char bOverride_LPVVplInjectionBias : 1; 
	char bOverride_LPVEmissiveInjectionIntensity : 1; 
	char bOverride_LPVFadeRange : 1; 
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; 
	char bOverride_IndirectLightingColor : 1; 
	char bOverride_IndirectLightingIntensity : 1; 
	char bOverride_ColorGradingIntensity : 1; 
	char bOverride_ColorGradingLUT : 1; 
	char bOverride_DepthOfFieldFocalDistance : 1; 
	char bOverride_DepthOfFieldFstop : 1; 
	char bOverride_DepthOfFieldMinFstop : 1; 
	char bOverride_DepthOfFieldBladeCount : 1; 
	char bOverride_DepthOfFieldSensorWidth : 1; 
	char bOverride_DepthOfFieldDepthBlurRadius : 1; 
	char bOverride_DepthOfFieldDepthBlurAmount : 1; 
	char bOverride_DepthOfFieldFocalRegion : 1; 
	char bOverride_DepthOfFieldNearTransitionRegion : 1; 
	char bOverride_DepthOfFieldFarTransitionRegion : 1; 
	char bOverride_DepthOfFieldScale : 1; 
	char bOverride_DepthOfFieldNearBlurSize : 1; 
	char bOverride_DepthOfFieldFarBlurSize : 1; 
	char bOverride_MobileHQGaussian : 1; 
	char bOverride_DepthOfFieldOcclusion : 1; 
	char bOverride_DepthOfFieldSkyFocusDistance : 1; 
	char bOverride_DepthOfFieldVignetteSize : 1; 
	char bOverride_MotionBlurAmount : 1; 
	char bOverride_MotionBlurMax : 1; 
	char bOverride_MotionBlurTargetFPS : 1; 
	char bOverride_MotionBlurPerObjectSize : 1; 
	char bOverride_ScreenPercentage : 1; 
	char bOverride_ScreenSpaceReflectionIntensity : 1; 
	char bOverride_ScreenSpaceReflectionQuality : 1; 
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; 
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; 
	char bOverride_ReflectionsType : 1; 
	char bOverride_RayTracingReflectionsMaxRoughness : 1; 
	char bOverride_RayTracingReflectionsMaxBounces : 1; 
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; 
	char bOverride_RayTracingReflectionsShadows : 1; 
	char bOverride_RayTracingReflectionsTranslucency : 1; 
	char bOverride_TranslucencyType : 1; 
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; 
	char bOverride_RayTracingTranslucencyRefractionRays : 1; 
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; 
	char bOverride_RayTracingTranslucencyShadows : 1; 
	char bOverride_RayTracingTranslucencyRefraction : 1; 
	char bOverride_RayTracingGI : 1; 
	char bOverride_RayTracingGIMaxBounces : 1; 
	char bOverride_RayTracingGISamplesPerPixel : 1; 
	char bOverride_PathTracingMaxBounces : 1; 
	char bOverride_PathTracingSamplesPerPixel : 1; 
	char bOverride_PathTracingFilterWidth : 1; 
	char bOverride_PathTracingEnableEmissive : 1; 
	char bOverride_PathTracingMaxPathExposure : 1; 
	char bOverride_PathTracingEnableDenoiser : 1; 
	char bMobileHQGaussian : 1; 
	enum class EBloomMethod BloomMethod; 
	enum class EAutoExposureMethod AutoExposureMethod; 
	enum class ETemperatureMethod TemperatureType; 
	float WhiteTemp; 
	float WhiteTint; 
	struct FVector4 ColorSaturation; 
	struct FVector4 ColorContrast; 
	struct FVector4 ColorGamma; 
	struct FVector4 ColorGain; 
	struct FVector4 ColorOffset; 
	struct FVector4 ColorSaturationShadows; 
	struct FVector4 ColorContrastShadows; 
	struct FVector4 ColorGammaShadows; 
	struct FVector4 ColorGainShadows; 
	struct FVector4 ColorOffsetShadows; 
	struct FVector4 ColorSaturationMidtones; 
	struct FVector4 ColorContrastMidtones; 
	struct FVector4 ColorGammaMidtones; 
	struct FVector4 ColorGainMidtones; 
	struct FVector4 ColorOffsetMidtones; 
	struct FVector4 ColorSaturationHighlights; 
	struct FVector4 ColorContrastHighlights; 
	struct FVector4 ColorGammaHighlights; 
	struct FVector4 ColorGainHighlights; 
	struct FVector4 ColorOffsetHighlights; 
	float ColorCorrectionHighlightsMin; 
	float ColorCorrectionShadowsMax; 
	float BlueCorrection; 
	float ExpandGamut; 
	float ToneCurveAmount; 
	float FilmSlope; 
	float FilmToe; 
	float FilmShoulder; 
	float FilmBlackClip; 
	float FilmWhiteClip; 
	struct FLinearColor FilmWhitePoint; 
	struct FLinearColor FilmShadowTint; 
	float FilmShadowTintBlend; 
	float FilmShadowTintAmount; 
	float FilmSaturation; 
	struct FLinearColor FilmChannelMixerRed; 
	struct FLinearColor FilmChannelMixerGreen; 
	struct FLinearColor FilmChannelMixerBlue; 
	float FilmContrast; 
	float FilmToeAmount; 
	float FilmHealAmount; 
	float FilmDynamicRange; 
	struct FLinearColor SceneColorTint; 
	float SceneFringeIntensity; 
	float ChromaticAberrationStartOffset; 
	float BloomIntensity; 
	float BloomThreshold; 
	float BloomSizeScale; 
	float Bloom1Size; 
	float Bloom2Size; 
	float Bloom3Size; 
	float Bloom4Size; 
	float Bloom5Size; 
	float Bloom6Size; 
	struct FLinearColor Bloom1Tint; 
	struct FLinearColor Bloom2Tint; 
	struct FLinearColor Bloom3Tint; 
	struct FLinearColor Bloom4Tint; 
	struct FLinearColor Bloom5Tint; 
	struct FLinearColor Bloom6Tint; 
	float BloomConvolutionSize; 
	struct UTexture2D* BloomConvolutionTexture; 
	struct FVector2D BloomConvolutionCenterUV; 
	float BloomConvolutionPreFilterMin; 
	float BloomConvolutionPreFilterMax; 
	float BloomConvolutionPreFilterMult; 
	float BloomConvolutionBufferScale; 
	struct UTexture* BloomDirtMask; 
	float BloomDirtMaskIntensity; 
	struct FLinearColor BloomDirtMaskTint; 
	struct FLinearColor AmbientCubemapTint; 
	float AmbientCubemapIntensity; 
	struct UTextureCube* AmbientCubemap; 
	float CameraShutterSpeed; 
	float CameraISO; 
	float DepthOfFieldFstop; 
	float DepthOfFieldMinFstop; 
	int32_t DepthOfFieldBladeCount; 
	float AutoExposureBias; 
	float AutoExposureBiasBackup; 
	char bOverride_AutoExposureBiasBackup : 1; 
	char AutoExposureApplyPhysicalCameraExposure : 1; 
	struct UCurveFloat* AutoExposureBiasCurve; 
	struct UTexture* AutoExposureMeterMask; 
	float AutoExposureLowPercent; 
	float AutoExposureHighPercent; 
	float AutoExposureMinBrightness; 
	float AutoExposureMaxBrightness; 
	float AutoExposureSpeedUp; 
	float AutoExposureSpeedDown; 
	float HistogramLogMin; 
	float HistogramLogMax; 
	float AutoExposureCalibrationConstant; 
	float LensFlareIntensity; 
	struct FLinearColor LensFlareTint; 
	float LensFlareBokehSize; 
	float LensFlareThreshold; 
	struct UTexture* LensFlareBokehShape; 
	struct FLinearColor LensFlareTints[0x8]; 
	float VignetteIntensity; 
	float GrainJitter; 
	float GrainIntensity; 
	float AmbientOcclusionIntensity; 
	float AmbientOcclusionStaticFraction; 
	float AmbientOcclusionRadius; 
	char AmbientOcclusionRadiusInWS : 1; 
	float AmbientOcclusionFadeDistance; 
	float AmbientOcclusionFadeRadius; 
	float AmbientOcclusionDistance; 
	float AmbientOcclusionPower; 
	float AmbientOcclusionBias; 
	float AmbientOcclusionQuality; 
	float AmbientOcclusionMipBlend; 
	float AmbientOcclusionMipScale; 
	float AmbientOcclusionMipThreshold; 
	float AmbientOcclusionTemporalBlendWeight; 
	char RayTracingAO : 1; 
	int32_t RayTracingAOSamplesPerPixel; 
	float RayTracingAOIntensity; 
	float RayTracingAORadius; 
	struct FLinearColor IndirectLightingColor; 
	float IndirectLightingIntensity; 
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; 
	int32_t RayTracingGIMaxBounces; 
	int32_t RayTracingGISamplesPerPixel; 
	float ColorGradingIntensity; 
	struct UTexture* ColorGradingLUT; 
	float DepthOfFieldSensorWidth; 
	float DepthOfFieldFocalDistance; 
	float DepthOfFieldDepthBlurAmount; 
	float DepthOfFieldDepthBlurRadius; 
	float DepthOfFieldFocalRegion; 
	float DepthOfFieldNearTransitionRegion; 
	float DepthOfFieldFarTransitionRegion; 
	float DepthOfFieldScale; 
	float DepthOfFieldNearBlurSize; 
	float DepthOfFieldFarBlurSize; 
	float DepthOfFieldOcclusion; 
	float DepthOfFieldSkyFocusDistance; 
	float DepthOfFieldVignetteSize; 
	float MotionBlurAmount; 
	float MotionBlurMax; 
	int32_t MotionBlurTargetFPS; 
	float MotionBlurPerObjectSize; 
	float LPVIntensity; 
	float LPVVplInjectionBias; 
	float LPVSize; 
	float LPVSecondaryOcclusionIntensity; 
	float LPVSecondaryBounceIntensity; 
	float LPVGeometryVolumeBias; 
	float LPVEmissiveInjectionIntensity; 
	float LPVDirectionalOcclusionIntensity; 
	float LPVDirectionalOcclusionRadius; 
	float LPVDiffuseOcclusionExponent; 
	float LPVSpecularOcclusionExponent; 
	float LPVDiffuseOcclusionIntensity; 
	float LPVSpecularOcclusionIntensity; 
	enum class EReflectionsType ReflectionsType; 
	float ScreenSpaceReflectionIntensity; 
	float ScreenSpaceReflectionQuality; 
	float ScreenSpaceReflectionMaxRoughness; 
	float RayTracingReflectionsMaxRoughness; 
	int32_t RayTracingReflectionsMaxBounces; 
	int32_t RayTracingReflectionsSamplesPerPixel; 
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; 
	char RayTracingReflectionsTranslucency : 1; 
	enum class ETranslucencyType TranslucencyType; 
	float RayTracingTranslucencyMaxRoughness; 
	int32_t RayTracingTranslucencyRefractionRays; 
	int32_t RayTracingTranslucencySamplesPerPixel; 
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; 
	char RayTracingTranslucencyRefraction : 1; 
	int32_t PathTracingMaxBounces; 
	int32_t PathTracingSamplesPerPixel; 
	float PathTracingFilterWidth; 
	char PathTracingEnableEmissive : 1; 
	float PathTracingMaxPathExposure; 
	char PathTracingEnableDenoiser : 1; 
	float LPVFadeRange; 
	float LPVDirectionalOcclusionFadeRange; 
	float ScreenPercentage; 
	struct FWeightedBlendables WeightedBlendables; 
};

// ScriptStruct Engine.WeightedBlendables
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; 
};

// ScriptStruct Engine.WeightedBlendable
struct FWeightedBlendable {
	float Weight; 
	struct UObject* Object; 
};

// ScriptStruct Engine.CameraShakeUpdateParams
struct FCameraShakeUpdateParams {
	float DeltaTime; 
	float ShakeScale; 
	float DynamicScale; 
	float BlendingWeight; 
	struct FMinimalViewInfo POV; 
};

// ScriptStruct Engine.CameraShakeStartParams
struct FCameraShakeStartParams {
	bool bIsRestarting; 
};

// ScriptStruct Engine.DummySpacerCameraTypes
struct FDummySpacerCameraTypes {
};

// ScriptStruct Engine.CanvasIcon
struct FCanvasIcon {
	struct UTexture* Texture; 
	float U; 
	float V; 
	float UL; 
	float VL; 
};

// ScriptStruct Engine.WrappedStringElement
struct FWrappedStringElement {
	struct FString Value; 
	struct FVector2D LineExtent; 
};

// ScriptStruct Engine.TextSizingParameters
struct FTextSizingParameters {
	float DrawX; 
	float DrawY; 
	float DrawXL; 
	float DrawYL; 
	struct FVector2D Scaling; 
	struct UFont* DrawFont; 
	struct FVector2D SpacingAdjust; 
};

// ScriptStruct Engine.BasedMovementInfo
struct FBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; 
	struct FName BoneName; 
	struct FVector_NetQuantize100 Location; 
	struct FRotator Rotation; 
	bool bServerHasBaseComponent; 
	bool bRelativeRotation; 
	bool bServerHasVelocity; 
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
struct FSimulatedRootMotionReplicatedMove {
	float Time; 
	struct FRepRootMotionMontage RootMotion; 
};

// ScriptStruct Engine.RepRootMotionMontage
struct FRepRootMotionMontage {
	bool bIsActive; 
	struct UAnimMontage* AnimMontage; 
	float position; 
	struct FVector_NetQuantize100 Location; 
	struct FRotator Rotation; 
	struct UPrimitiveComponent* MovementBase; 
	struct FName MovementBaseBoneName; 
	bool bRelativePosition; 
	bool bRelativeRotation; 
	struct FRootMotionSourceGroup AuthoritativeRootMotion; 
	struct FVector_NetQuantize10 Acceleration; 
	struct FVector_NetQuantize10 LinearVelocity; 
};

// ScriptStruct Engine.RootMotionSourceGroup
struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; 
	char bHasOverrideSources : 1; 
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; 
	char bIsAdditiveVelocityApplied : 1; 
	struct FRootMotionSourceSettings LastAccumulatedSettings; 
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; 
};

// ScriptStruct Engine.RootMotionSourceSettings
struct FRootMotionSourceSettings {
	char Flags; 
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
};

// ScriptStruct Engine.FindFloorResult
struct FFindFloorResult {
	char bBlockingHit : 1; 
	char bWalkableFloor : 1; 
	char bLineTrace : 1; 
	float FloorDist; 
	float LineDist; 
	struct FHitResult HitResult; 
};

// ScriptStruct Engine.CharacterNetworkSerializationPackedBits
struct FCharacterNetworkSerializationPackedBits {
};

// ScriptStruct Engine.CharacterMoveResponsePackedBits
struct FCharacterMoveResponsePackedBits : FCharacterNetworkSerializationPackedBits {
};

// ScriptStruct Engine.CharacterServerMovePackedBits
struct FCharacterServerMovePackedBits : FCharacterNetworkSerializationPackedBits {
};

// ScriptStruct Engine.ChildActorComponentInstanceData
struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	struct AActor* ChildActorClass; 
	struct FName ChildActorName; 
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; 
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
struct FChildActorAttachedActorInfo {
	struct TWeakObjectPtr<struct AActor> Actor; 
	struct FName SocketName; 
	struct FTransform RelativeTransform; 
};

// ScriptStruct Engine.CustomProfile
struct FCustomProfile {
	struct FName Name; 
	struct TArray<struct FResponseChannel> CustomResponses; 
};

// ScriptStruct Engine.CustomChannelSetup
struct FCustomChannelSetup {
	enum class ECollisionChannel Channel; 
	enum class ECollisionResponse DefaultResponse; 
	bool bTraceType; 
	bool bStaticObject; 
	struct FName Name; 
};

// ScriptStruct Engine.CollisionResponseTemplate
struct FCollisionResponseTemplate {
	struct FName Name; 
	enum class ECollisionEnabled CollisionEnabled; 
	bool bCanModify; 
	struct FName ObjectTypeName; 
	struct TArray<struct FResponseChannel> CustomResponses; 
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; 
	struct FName DelegatePropertyName; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.MeshUVChannelInfo
struct FMeshUVChannelInfo {
	bool bInitialized; 
	bool bOverrideDensities; 
	float LocalUVDensities[0x4]; 
};

// ScriptStruct Engine.AutoCompleteNode
struct FAutoCompleteNode {
	int32_t IndexChar; 
	struct TArray<int32_t> AutoCompleteListIndices; 
};

// ScriptStruct Engine.AngularDriveConstraint
struct FAngularDriveConstraint {
	struct FConstraintDrive TwistDrive; 
	struct FConstraintDrive SwingDrive; 
	struct FConstraintDrive SlerpDrive; 
	struct FRotator OrientationTarget; 
	struct FVector AngularVelocityTarget; 
	enum class EAngularDriveMode AngularDriveMode; 
};

// ScriptStruct Engine.ConstraintDrive
struct FConstraintDrive {
	float Stiffness; 
	float Damping; 
	float MaxForce; 
	char bEnablePositionDrive : 1; 
	char bEnableVelocityDrive : 1; 
};

// ScriptStruct Engine.LinearDriveConstraint
struct FLinearDriveConstraint {
	struct FVector PositionTarget; 
	struct FVector VelocityTarget; 
	struct FConstraintDrive XDrive; 
	struct FConstraintDrive YDrive; 
	struct FConstraintDrive ZDrive; 
	char bEnablePositionDrive : 1; 
};

// ScriptStruct Engine.ConstraintInstanceBase
struct FConstraintInstanceBase {
};

// ScriptStruct Engine.ConstraintInstance
struct FConstraintInstance : FConstraintInstanceBase {
	struct FName JointName; 
	struct FName ConstraintBone1; 
	struct FName ConstraintBone2; 
	struct FVector Pos1; 
	struct FVector PriAxis1; 
	struct FVector SecAxis1; 
	struct FVector Pos2; 
	struct FVector PriAxis2; 
	struct FVector SecAxis2; 
	struct FRotator AngularRotationOffset; 
	char bScaleLinearLimits : 1; 
	struct FConstraintProfileProperties ProfileInstance; 
};

// ScriptStruct Engine.ConstraintProfileProperties
struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; 
	float ProjectionAngularTolerance; 
	float ProjectionLinearAlpha; 
	float ProjectionAngularAlpha; 
	float LinearBreakThreshold; 
	float LinearPlasticityThreshold; 
	float AngularBreakThreshold; 
	float AngularPlasticityThreshold; 
	struct FLinearConstraint LinearLimit; 
	struct FConeConstraint ConeLimit; 
	struct FTwistConstraint TwistLimit; 
	struct FLinearDriveConstraint LinearDrive; 
	struct FAngularDriveConstraint AngularDrive; 
	char bDisableCollision : 1; 
	char bParentDominates : 1; 
	char bEnableProjection : 1; 
	char bEnableSoftProjection : 1; 
	char bAngularBreakable : 1; 
	char bAngularPlasticity : 1; 
	char bLinearBreakable : 1; 
	char bLinearPlasticity : 1; 
};

// ScriptStruct Engine.ConstraintBaseParams
struct FConstraintBaseParams {
	float Stiffness; 
	float Damping; 
	float Restitution; 
	float ContactDistance; 
	char bSoftConstraint : 1; 
};

// ScriptStruct Engine.TwistConstraint
struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; 
	enum class EAngularConstraintMotion TwistMotion; 
};

// ScriptStruct Engine.ConeConstraint
struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; 
	float Swing2LimitDegrees; 
	enum class EAngularConstraintMotion Swing1Motion; 
	enum class EAngularConstraintMotion Swing2Motion; 
};

// ScriptStruct Engine.LinearConstraint
struct FLinearConstraint : FConstraintBaseParams {
	float Limit; 
	enum class ELinearConstraintMotion XMotion; 
	enum class ELinearConstraintMotion YMotion; 
	enum class ELinearConstraintMotion ZMotion; 
};

// ScriptStruct Engine.CullDistanceSizePair
struct FCullDistanceSizePair {
	float Size; 
	float CullDistance; 
};

// ScriptStruct Engine.RuntimeCurveLinearColor
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[0x4]; 
	struct UCurveLinearColor* ExternalCurve; 
};

// ScriptStruct Engine.CurveAtlasColorAdjustments
struct FCurveAtlasColorAdjustments {
	char bChromaKeyTexture : 1; 
	float AdjustBrightness; 
	float AdjustBrightnessCurve; 
	float AdjustVibrance; 
	float AdjustSaturation; 
	float AdjustRGBCurve; 
	float AdjustHue; 
	float AdjustMinAlpha; 
	float AdjustMaxAlpha; 
};

// ScriptStruct Engine.NamedCurveValue
struct FNamedCurveValue {
	struct FName Name; 
	float Value; 
};

// ScriptStruct Engine.CurveTableRowHandle
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; 
	struct FName RowName; 
};

// ScriptStruct Engine.BakedCustomAttributePerBoneData
struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; 
	struct TArray<struct FBakedStringCustomAttribute> StringAttributes; 
	struct TArray<struct FBakedIntegerCustomAttribute> IntAttributes; 
	struct TArray<struct FBakedFloatCustomAttribute> FloatAttributes; 
};

// ScriptStruct Engine.BakedFloatCustomAttribute
struct FBakedFloatCustomAttribute {
	struct FName AttributeName; 
	struct FSimpleCurve FloatCurve; 
};

// ScriptStruct Engine.SimpleCurve
struct FSimpleCurve : FRealCurve {
	enum class ERichCurveInterpMode InterpMode; 
	struct TArray<struct FSimpleCurveKey> Keys; 
};

// ScriptStruct Engine.SimpleCurveKey
struct FSimpleCurveKey {
	float Time; 
	float Value; 
};

// ScriptStruct Engine.BakedIntegerCustomAttribute
struct FBakedIntegerCustomAttribute {
	struct FName AttributeName; 
	struct FIntegralCurve IntCurve; 
};

// ScriptStruct Engine.IntegralCurve
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; 
	int32_t DefaultValue; 
	bool bUseDefaultValueBeforeFirstKey; 
};

// ScriptStruct Engine.IntegralKey
struct FIntegralKey {
	float Time; 
	int32_t Value; 
};

// ScriptStruct Engine.BakedStringCustomAttribute
struct FBakedStringCustomAttribute {
	struct FName AttributeName; 
	struct FStringCurve StringCurve; 
};

// ScriptStruct Engine.StringCurve
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; 
	struct TArray<struct FStringCurveKey> Keys; 
};

// ScriptStruct Engine.StringCurveKey
struct FStringCurveKey {
	float Time; 
	struct FString Value; 
};

// ScriptStruct Engine.CustomAttributePerBoneData
struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; 
	struct TArray<struct FCustomAttribute> Attributes; 
};

// ScriptStruct Engine.CustomAttribute
struct FCustomAttribute {
	struct FName Name; 
	int32_t VariantType; 
	struct TArray<float> Times; 
};

// ScriptStruct Engine.CustomAttributeSetting
struct FCustomAttributeSetting {
	struct FString Name; 
	struct FString Meaning; 
};

// ScriptStruct Engine.DataDrivenConsoleVariable
struct FDataDrivenConsoleVariable {
	enum class FDataDrivenCVarType Type; 
	struct FString Name; 
	struct FString Tooltip; 
	float DefaultValueFloat; 
	int32_t DefaultValueInt; 
	bool DefaultValueBool; 
};

// ScriptStruct Engine.DataTableCategoryHandle
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; 
	struct FName ColumnName; 
	struct FName RowContents; 
};

// ScriptStruct Engine.DataTableRowHandle
struct FDataTableRowHandle {
	struct UDataTable* DataTable; 
	struct FName RowName; 
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
struct FDebugCameraControllerSettingsViewModeIndex {
	enum class EViewModeIndex ViewModeIndex; 
};

// ScriptStruct Engine.DebugDisplayProperty
struct FDebugDisplayProperty {
	struct UObject* Obj; 
	struct UObject* WithinClass; 
};

// ScriptStruct Engine.DebugTextInfo
struct FDebugTextInfo {
	struct AActor* SrcActor; 
	struct FVector SrcActorOffset; 
	struct FVector SrcActorDesiredOffset; 
	struct FString DebugText; 
	float TimeRemaining; 
	float Duration; 
	struct FColor TextColor; 
	char bAbsoluteLocation : 1; 
	char bKeepAttachedToActor : 1; 
	char bDrawShadow : 1; 
	struct FVector OrigActorLocation; 
	struct UFont* Font; 
	float FontScale; 
};

// ScriptStruct Engine.MulticastRecordOptions
struct FMulticastRecordOptions {
	struct FString FuncPathName; 
	bool bServerSkip; 
	bool bClientSkip; 
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
struct FRollbackNetStartupActorInfo {
	struct UObject* Archetype; 
	struct ULevel* Level; 
	struct TArray<struct UObject*> ObjReferences; 
};

// ScriptStruct Engine.DialogueWaveParameter
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; 
	struct FDialogueContext Context; 
};

// ScriptStruct Engine.DialogueContext
struct FDialogueContext {
	struct UDialogueVoice* Speaker; 
	struct TArray<struct UDialogueVoice*> Targets; 
};

// ScriptStruct Engine.DialogueContextMapping
struct FDialogueContextMapping {
	struct FDialogueContext Context; 
	struct USoundWave* SoundWave; 
	struct FString LocalizationKeyFormat; 
	struct UDialogueSoundWaveProxy* Proxy; 
};

// ScriptStruct Engine.RawDistributionFloat
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; 
	float MaxValue; 
	struct UDistributionFloat* Distribution; 
};

// ScriptStruct Engine.RawDistributionVector
struct FRawDistributionVector : FRawDistribution {
	float MinValue; 
	float MaxValue; 
	struct FVector MinValueVec; 
	struct FVector MaxValueVec; 
	struct UDistributionVector* Distribution; 
};

// ScriptStruct Engine.GraphReference
struct FGraphReference {
	struct UEdGraph* MacroGraph; 
	struct UBlueprint* GraphBlueprint; 
	struct FGuid GraphGuid; 
};

// ScriptStruct Engine.EdGraphPinReference
struct FEdGraphPinReference {
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; 
	struct FGuid PinId; 
};

// ScriptStruct Engine.EdGraphSchemaAction
struct FEdGraphSchemaAction {
	struct FText MenuDescription; 
	struct FText TooltipDescription; 
	struct FText Category; 
	struct FText Keywords; 
	int32_t Grouping; 
	int32_t SectionID; 
	struct TArray<struct FString> MenuDescriptionArray; 
	struct TArray<struct FString> FullSearchTitlesArray; 
	struct TArray<struct FString> FullSearchKeywordsArray; 
	struct TArray<struct FString> FullSearchCategoryArray; 
	struct TArray<struct FString> LocalizedMenuDescriptionArray; 
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; 
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; 
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; 
	struct FString SearchText; 
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; 
};

// ScriptStruct Engine.PluginRedirect
struct FPluginRedirect {
	struct FString OldPluginName; 
	struct FString NewPluginName; 
};

// ScriptStruct Engine.StructRedirect
struct FStructRedirect {
	struct FName OldStructName; 
	struct FName NewStructName; 
};

// ScriptStruct Engine.ClassRedirect
struct FClassRedirect {
	struct FName ObjectName; 
	struct FName OldClassName; 
	struct FName NewClassName; 
	struct FName OldSubobjName; 
	struct FName NewSubobjName; 
	struct FName NewClassClass; 
	struct FName NewClassPackage; 
	bool InstanceOnly; 
};

// ScriptStruct Engine.GameNameRedirect
struct FGameNameRedirect {
	struct FName OldGameName; 
	struct FName NewGameName; 
};

// ScriptStruct Engine.ScreenMessageString
struct FScreenMessageString {
	uint64_t Key; 
	struct FString ScreenMessage; 
	struct FColor DisplayColor; 
	float TimeToDisplay; 
	float CurrentTimeDisplayed; 
	struct FVector2D TextScale; 
};

// ScriptStruct Engine.DropNoteInfo
struct FDropNoteInfo {
	struct FVector Location; 
	struct FRotator Rotation; 
	struct FString Comment; 
};

// ScriptStruct Engine.StatColorMapping
struct FStatColorMapping {
	struct FString StatName; 
	struct TArray<struct FStatColorMapEntry> ColorMap; 
	char DisableBlend : 1; 
};

// ScriptStruct Engine.StatColorMapEntry
struct FStatColorMapEntry {
	float In; 
	struct FColor Out; 
};

// ScriptStruct Engine.WorldContext
struct FWorldContext {
	struct FURL LastURL; 
	struct FURL LastRemoteURL; 
	struct UPendingNetGame* PendingNetGame; 
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; 
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; 
	struct TArray<struct UObjectReferencer*> ObjectReferencers; 
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; 
	struct UGameViewportClient* GameViewport; 
	struct UGameInstance* OwningGameInstance; 
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; 
};

// ScriptStruct Engine.NamedNetDriver
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; 
};

// ScriptStruct Engine.LevelStreamingStatus
struct FLevelStreamingStatus {
	struct FName PackageName; 
	char bShouldBeLoaded : 1; 
	char bShouldBeVisible : 1; 
	uint32_t LODIndex; 
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
struct FFullyLoadedPackagesInfo {
	enum class EFullyLoadPackageType FullyLoadType; 
	struct FString Tag; 
	struct TArray<struct FName> PackagesToLoad; 
	struct TArray<struct UObject*> LoadedObjects; 
};

// ScriptStruct Engine.URL
struct FURL {
	struct FString Protocol; 
	struct FString Host; 
	int32_t Port; 
	int32_t Valid; 
	struct FString Map; 
	struct FString RedirectURL; 
	struct TArray<struct FString> Op; 
	struct FString Portal; 
};

// ScriptStruct Engine.NetDriverDefinition
struct FNetDriverDefinition {
	struct FName DefName; 
	struct FName DriverClassName; 
	struct FName DriverClassNameFallback; 
};

// ScriptStruct Engine.ExposureSettings
struct FExposureSettings {
	float FixedEV100; 
	bool bFixed; 
};

// ScriptStruct Engine.TickPrerequisite
struct FTickPrerequisite {
};

// ScriptStruct Engine.CanvasUVTri
struct FCanvasUVTri {
	struct FVector2D V0_Pos; 
	struct FVector2D V0_UV; 
	struct FLinearColor V0_Color; 
	struct FVector2D V1_Pos; 
	struct FVector2D V1_UV; 
	struct FLinearColor V1_Color; 
	struct FVector2D V2_Pos; 
	struct FVector2D V2_UV; 
	struct FLinearColor V2_Color; 
};

// ScriptStruct Engine.FontRenderInfo
struct FFontRenderInfo {
	char bClipText : 1; 
	char bEnableShadow : 1; 
	struct FDepthFieldGlowInfo GlowInfo; 
};

// ScriptStruct Engine.DepthFieldGlowInfo
struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; 
	struct FLinearColor GlowColor; 
	struct FVector2D GlowOuterRadius; 
	struct FVector2D GlowInnerRadius; 
};

// ScriptStruct Engine.Redirector
struct FRedirector {
	struct FName OldName; 
	struct FName NewName; 
};

// ScriptStruct Engine.CollectionReference
struct FCollectionReference {
	struct FName CollectionName; 
};

// ScriptStruct Engine.ConstrainComponentPropName
struct FConstrainComponentPropName {
	struct FName ComponentName; 
};

// ScriptStruct Engine.RadialDamageEvent
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; 
	struct FVector Origin; 
	struct TArray<struct FHitResult> ComponentHits; 
};

// ScriptStruct Engine.RadialDamageParams
struct FRadialDamageParams {
	float BaseDamage; 
	float MinimumDamage; 
	float InnerRadius; 
	float OuterRadius; 
	float DamageFalloff; 
};

// ScriptStruct Engine.PointDamageEvent
struct FPointDamageEvent : FDamageEvent {
	float Damage; 
	struct FVector_NetQuantizeNormal ShotDirection; 
	struct FHitResult HitInfo; 
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; 
	char bRecomputeTangents : 1; 
	char bUseMikkTSpace : 1; 
	char bComputeWeightedNormals : 1; 
	char bRemoveDegenerates : 1; 
	char bUseHighPrecisionTangentBasis : 1; 
	char bUseFullPrecisionUVs : 1; 
	char bBuildAdjacencyBuffer : 1; 
	float ThresholdPosition; 
	float ThresholdTangentNormal; 
	float ThresholdUV; 
	float MorphThresholdPosition; 
};

// ScriptStruct Engine.MeshBuildSettings
struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; 
	char bRecomputeNormals : 1; 
	char bRecomputeTangents : 1; 
	char bComputeWeightedNormals : 1; 
	char bRemoveDegenerates : 1; 
	char bBuildAdjacencyBuffer : 1; 
	char bBuildReversedIndexBuffer : 1; 
	char bUseHighPrecisionTangentBasis : 1; 
	char bUseFullPrecisionUVs : 1; 
	char bGenerateLightmapUVs : 1; 
	char bGenerateDistanceFieldAsIfTwoSided : 1; 
	char bSupportFaceRemap : 1; 
	int32_t MinLightmapResolution; 
	int32_t SrcLightmapIndex; 
	int32_t DstLightmapIndex; 
	float BuildScale; 
	struct FVector BuildScale3D; 
	float DistanceFieldResolutionScale; 
	struct UStaticMesh* DistanceFieldReplacementMesh; 
};

// ScriptStruct Engine.POV
struct FPOV {
	struct FVector Location; 
	struct FRotator Rotation; 
	float FOV; 
};

// ScriptStruct Engine.AnimUpdateRateParameters
struct FAnimUpdateRateParameters {
	enum class EUpdateRateShiftBucket ShiftBucket; 
	char bInterpolateSkippedFrames : 1; 
	char bShouldUseLodMap : 1; 
	char bShouldUseMinLod : 1; 
	char bSkipUpdate : 1; 
	char bSkipEvaluation : 1; 
	int32_t UpdateRate; 
	int32_t EvaluationRate; 
	float TickedPoseOffestTime; 
	float AdditionalTime; 
	int32_t BaseNonRenderedUpdateRate; 
	int32_t MaxEvalRateForInterpolation; 
	struct TArray<float> BaseVisibleDistanceFactorThesholds; 
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; 
	int32_t SkippedUpdateFrames; 
	int32_t SkippedEvalFrames; 
};

// ScriptStruct Engine.AnimSlotDesc
struct FAnimSlotDesc {
	struct FName SlotName; 
	int32_t NumChannels; 
};

// ScriptStruct Engine.AnimSlotInfo
struct FAnimSlotInfo {
	struct FName SlotName; 
	struct TArray<float> ChannelWeights; 
};

// ScriptStruct Engine.MTDResult
struct FMTDResult {
	struct FVector Direction; 
	float Distance; 
};

// ScriptStruct Engine.OverlapResult
struct FOverlapResult {
	struct TWeakObjectPtr<struct AActor> Actor; 
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; 
	char bBlockingHit : 1; 
};

// ScriptStruct Engine.PrimitiveMaterialRef
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; 
	struct UDecalComponent* Decal; 
	int32_t ElementIndex; 
};

// ScriptStruct Engine.SwarmDebugOptions
struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; 
	char bForceContentExport : 1; 
	char bInitialized : 1; 
};

// ScriptStruct Engine.LightmassDebugOptions
struct FLightmassDebugOptions {
	char bDebugMode : 1; 
	char bStatsEnabled : 1; 
	char bGatherBSPSurfacesAcrossComponents : 1; 
	float CoplanarTolerance; 
	char bUseImmediateImport : 1; 
	char bImmediateProcessMappings : 1; 
	char bSortMappings : 1; 
	char bDumpBinaryFiles : 1; 
	char bDebugMaterials : 1; 
	char bPadMappings : 1; 
	char bDebugPaddings : 1; 
	char bOnlyCalcDebugTexelMappings : 1; 
	char bUseRandomColors : 1; 
	char bColorBordersGreen : 1; 
	char bColorByExecutionTime : 1; 
	float ExecutionTimeDivisor; 
};

// ScriptStruct Engine.LightmassPrimitiveSettings
struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; 
	char bShadowIndirectOnly : 1; 
	char bUseEmissiveForStaticLighting : 1; 
	char bUseVertexNormalForHemisphereGather : 1; 
	float EmissiveLightFalloffExponent; 
	float EmissiveLightExplicitInfluenceRadius; 
	float EmissiveBoost; 
	float DiffuseBoost; 
	float FullyOccludedSamplesFraction; 
};

// ScriptStruct Engine.LightmassLightSettings
struct FLightmassLightSettings {
	float IndirectLightingSaturation; 
	float ShadowExponent; 
	bool bUseAreaShadowsForStationaryLight; 
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; 
};

// ScriptStruct Engine.LightmassPointLightSettings
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.BasedPosition
struct FBasedPosition {
	struct AActor* Base; 
	struct FVector position; 
	struct FVector CachedBaseLocation; 
	struct FRotator CachedBaseRotation; 
	struct FVector CachedTransPosition; 
};

// ScriptStruct Engine.FractureEffect
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; 
	struct USoundBase* Sound; 
};

// ScriptStruct Engine.CollisionImpactData
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; 
	struct FVector TotalNormalImpulse; 
	struct FVector TotalFrictionImpulse; 
	bool bIsVelocityDeltaUnderThreshold; 
};

// ScriptStruct Engine.RigidBodyContactInfo
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; 
	struct FVector ContactNormal; 
	float ContactPenetration; 
	struct UPhysicalMaterial* PhysMaterial[0x2]; 
};

// ScriptStruct Engine.RigidBodyErrorCorrection
struct FRigidBodyErrorCorrection {
	float PingExtrapolation; 
	float PingLimit; 
	float ErrorPerLinearDifference; 
	float ErrorPerAngularDifference; 
	float MaxRestoredStateError; 
	float MaxLinearHardSnapDistance; 
	float PositionLerp; 
	float AngleLerp; 
	float LinearVelocityCoefficient; 
	float AngularVelocityCoefficient; 
	float ErrorAccumulationSeconds; 
	float ErrorAccumulationDistanceSq; 
	float ErrorAccumulationSimilarity; 
};

// ScriptStruct Engine.RigidBodyState
struct FRigidBodyState {
	struct FVector_NetQuantize100 position; 
	struct FQuat Quaternion; 
	struct FVector_NetQuantize100 LinVel; 
	struct FVector_NetQuantize100 AngVel; 
	char Flags; 
};

// ScriptStruct Engine.MaterialShadingModelField
struct FMaterialShadingModelField {
	uint16_t ShadingModelField; 
};

// ScriptStruct Engine.ExponentialHeightFogData
struct FExponentialHeightFogData {
	float FogDensity; 
	float FogHeightFalloff; 
	float FogHeightOffset; 
};

// ScriptStruct Engine.FontCharacter
struct FFontCharacter {
	int32_t StartU; 
	int32_t StartV; 
	int32_t USize; 
	int32_t VSize; 
	char TextureIndex; 
	int32_t VerticalOffset; 
};

// ScriptStruct Engine.FontImportOptionsData
struct FFontImportOptionsData {
	struct FString FontName; 
	float Height; 
	char bEnableAntialiasing : 1; 
	char bEnableBold : 1; 
	char bEnableItalic : 1; 
	char bEnableUnderline : 1; 
	char bAlphaOnly : 1; 
	enum class EFontImportCharacterSet CharacterSet; 
	struct FString Chars; 
	struct FString UnicodeRange; 
	struct FString CharsFilePath; 
	struct FString CharsFileWildcard; 
	char bCreatePrintableOnly : 1; 
	char bIncludeASCIIRange : 1; 
	struct FLinearColor ForegroundColor; 
	char bEnableDropShadow : 1; 
	int32_t TexturePageWidth; 
	int32_t TexturePageMaxHeight; 
	int32_t XPadding; 
	int32_t YPadding; 
	int32_t ExtendBoxTop; 
	int32_t ExtendBoxBottom; 
	int32_t ExtendBoxRight; 
	int32_t ExtendBoxLeft; 
	char bEnableLegacyMode : 1; 
	int32_t Kerning; 
	char bUseDistanceFieldAlpha : 1; 
	int32_t DistanceFieldScaleFactor; 
	float DistanceFieldScanRadiusScale; 
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; 
};

// ScriptStruct Engine.ForceFeedbackParameters
struct FForceFeedbackParameters {
	struct FName Tag; 
	bool bLooping; 
	bool bIgnoreTimeDilation; 
	bool bPlayWhilePaused; 
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; 
	char bAffectsLeftSmall : 1; 
	char bAffectsRightLarge : 1; 
	char bAffectsRightSmall : 1; 
	struct FRuntimeFloatCurve Curve; 
};

// ScriptStruct Engine.PredictProjectilePathResult
struct FPredictProjectilePathResult {
	struct TArray<struct FPredictProjectilePathPointData> PathData; 
	struct FPredictProjectilePathPointData LastTraceDestination; 
	struct FHitResult HitResult; 
};

// ScriptStruct Engine.PredictProjectilePathPointData
struct FPredictProjectilePathPointData {
	struct FVector Location; 
	struct FVector Velocity; 
	float Time; 
};

// ScriptStruct Engine.PredictProjectilePathParams
struct FPredictProjectilePathParams {
	struct FVector StartLocation; 
	struct FVector LaunchVelocity; 
	bool bTraceWithCollision; 
	float ProjectileRadius; 
	float MaxSimTime; 
	bool bTraceWithChannel; 
	enum class ECollisionChannel TraceChannel; 
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; 
	struct TArray<struct AActor*> ActorsToIgnore; 
	float SimFrequency; 
	float OverrideGravityZ; 
	enum class EDrawDebugTrace DrawDebugType; 
	float DrawDebugTime; 
	bool bTraceComplex; 
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect_Base* HapticEffect; 
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; 
	struct FRuntimeFloatCurve Amplitude; 
};

// ScriptStruct Engine.ClusterNode
struct FClusterNode {
	struct FVector BoundMin; 
	int32_t FirstChild; 
	struct FVector BoundMax; 
	int32_t LastChild; 
	int32_t FirstInstance; 
	int32_t LastInstance; 
	struct FVector MinInstanceScale; 
	struct FVector MaxInstanceScale; 
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
struct FClusterNode_DEPRECATED {
	struct FVector BoundMin; 
	int32_t FirstChild; 
	struct FVector BoundMax; 
	int32_t LastChild; 
	int32_t FirstInstance; 
	int32_t LastInstance; 
};

// ScriptStruct Engine.HLODISMComponentDesc
struct FHLODISMComponentDesc {
	struct UStaticMesh* StaticMesh; 
	struct UMaterialInterface* Material; 
	struct TArray<struct FTransform> Instances; 
};

// ScriptStruct Engine.HLODProxyMesh
struct FHLODProxyMesh {
	LazyObjectProperty LODActor; 
	struct UStaticMesh* StaticMesh; 
	struct FName Key; 
};

// ScriptStruct Engine.ImportanceTexture
struct FImportanceTexture {
	struct FIntPoint Size; 
	int32_t NumMips; 
	struct TArray<float> MarginalCDF; 
	struct TArray<float> ConditionalCDF; 
	struct TArray<struct FColor> TextureData; 
	struct TWeakObjectPtr<struct UTexture2D> Texture; 
	enum class EImportanceWeight Weighting; 
};

// ScriptStruct Engine.ComponentOverrideRecord
struct FComponentOverrideRecord {
	struct UObject* ComponentClass; 
	struct UActorComponent* ComponentTemplate; 
	struct FComponentKey ComponentKey; 
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; 
};

// ScriptStruct Engine.ComponentKey
struct FComponentKey {
	struct UObject* OwnerClass; 
	struct FName SCSVariableName; 
	struct FGuid AssociatedGuid; 
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; 
	char bExecuteWhenPaused : 1; 
	char bOverrideParentBinding : 1; 
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; 
	enum class EInputEvent InputKeyEvent; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	struct FKey AxisKey; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.CachedKeyToActionInfo
struct FCachedKeyToActionInfo {
	struct UPlayerInput* PlayerInput; 
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	struct FInputChord InputChord; 
	enum class EInputEvent InputKeyEvent; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	enum class EInputEvent InputKeyEvent; 
	struct FName FunctionNameToBind; 
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	struct UStaticMesh* StaticMesh; 
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; 
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; 
	struct TArray<float> PerInstanceSMCustomData; 
	int32_t InstancingRandomSeed; 
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; 
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
struct FInstancedStaticMeshLightMapInstanceData {
	struct FTransform Transform; 
	struct TArray<struct FGuid> MapBuildDataIds; 
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
struct FInstancedStaticMeshMappingInfo {
};

// ScriptStruct Engine.CurveEdTab
struct FCurveEdTab {
	struct FString TabName; 
	struct TArray<struct FCurveEdEntry> Curves; 
	float ViewStartInput; 
	float ViewEndInput; 
	float ViewStartOutput; 
	float ViewEndOutput; 
};

// ScriptStruct Engine.CurveEdEntry
struct FCurveEdEntry {
	struct UObject* CurveObject; 
	struct FColor CurveColor; 
	struct FString CurveName; 
	int32_t bHideCurve; 
	int32_t bColorCurve; 
	int32_t bFloatingPointColorCurve; 
	int32_t bClamp; 
	float ClampLow; 
	float ClampHigh; 
};

// ScriptStruct Engine.InterpEdSelKey
struct FInterpEdSelKey {
	struct UInterpGroup* Group; 
	struct UInterpTrack* Track; 
	int32_t KeyIndex; 
	float UnsnappedPosition; 
};

// ScriptStruct Engine.CameraPreviewInfo
struct FCameraPreviewInfo {
	struct APawn* PawnClass; 
	struct UAnimSequence* AnimSeq; 
	struct FVector Location; 
	struct FRotator Rotation; 
	struct APawn* PawnInst; 
};

// ScriptStruct Engine.SubTrackGroup
struct FSubTrackGroup {
	struct FString GroupName; 
	struct TArray<int32_t> TrackIndices; 
	char bIsCollapsed : 1; 
	char bIsSelected : 1; 
};

// ScriptStruct Engine.SupportedSubTrackInfo
struct FSupportedSubTrackInfo {
	struct UInterpTrack* SupportedClass; 
	struct FString SubTrackName; 
	int32_t GroupIndex; 
};

// ScriptStruct Engine.AnimControlTrackKey
struct FAnimControlTrackKey {
	float StartTime; 
	struct UAnimSequence* AnimSeq; 
	float AnimStartOffset; 
	float AnimEndOffset; 
	float AnimPlayRate; 
	char bLooping : 1; 
	char bReverse : 1; 
};

// ScriptStruct Engine.BoolTrackKey
struct FBoolTrackKey {
	float Time; 
	char Value : 1; 
};

// ScriptStruct Engine.DirectorTrackCut
struct FDirectorTrackCut {
	float Time; 
	float TransitionTime; 
	struct FName TargetCamGroup; 
	int32_t ShotNumber; 
};

// ScriptStruct Engine.EventTrackKey
struct FEventTrackKey {
	float Time; 
	struct FName EventName; 
};

// ScriptStruct Engine.InterpLookupTrack
struct FInterpLookupTrack {
	struct TArray<struct FInterpLookupPoint> Points; 
};

// ScriptStruct Engine.InterpLookupPoint
struct FInterpLookupPoint {
	struct FName GroupName; 
	float Time; 
};

// ScriptStruct Engine.ParticleReplayTrackKey
struct FParticleReplayTrackKey {
	float Time; 
	float Duration; 
	int32_t ClipIDNumber; 
};

// ScriptStruct Engine.SoundTrackKey
struct FSoundTrackKey {
	float Time; 
	float Volume; 
	float Pitch; 
	struct USoundBase* Sound; 
};

// ScriptStruct Engine.ToggleTrackKey
struct FToggleTrackKey {
	float Time; 
	enum class ETrackToggleAction ToggleAction; 
};

// ScriptStruct Engine.VisibilityTrackKey
struct FVisibilityTrackKey {
	float Time; 
	enum class EVisibilityTrackAction Action; 
	enum class EVisibilityTrackCondition ActiveCondition; 
};

// ScriptStruct Engine.VectorSpringState
struct FVectorSpringState {
};

// ScriptStruct Engine.FloatSpringState
struct FFloatSpringState {
};

// ScriptStruct Engine.DrawToRenderTargetContext
struct FDrawToRenderTargetContext {
	struct UTextureRenderTarget2D* RenderTarget; 
};

// ScriptStruct Engine.LatentActionManager
struct FLatentActionManager {
};

// ScriptStruct Engine.LayerActorStats
struct FLayerActorStats {
	struct UObject* Type; 
	int32_t Total; 
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
struct FReplicatedStaticActorDestructionInfo {
	struct UObject* ObjClass; 
};

// ScriptStruct Engine.LevelSimplificationDetails
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; 
	float DetailsPercentage; 
	struct FMaterialProxySettings StaticMeshMaterialSettings; 
	bool bOverrideLandscapeExportLOD; 
	int32_t LandscapeExportLOD; 
	struct FMaterialProxySettings LandscapeMaterialSettings; 
	bool bBakeFoliageToLandscape; 
	bool bBakeGrassToLandscape; 
	bool bGenerateMeshNormalMap; 
	bool bGenerateMeshMetallicMap; 
	bool bGenerateMeshRoughnessMap; 
	bool bGenerateMeshSpecularMap; 
	bool bGenerateLandscapeNormalMap; 
	bool bGenerateLandscapeMetallicMap; 
	bool bGenerateLandscapeRoughnessMap; 
	bool bGenerateLandscapeSpecularMap; 
};

// ScriptStruct Engine.MaterialProxySettings
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; 
	float GutterSpace; 
	float MetallicConstant; 
	float RoughnessConstant; 
	float AnisotropyConstant; 
	float SpecularConstant; 
	float OpacityConstant; 
	float OpacityMaskConstant; 
	float AmbientOcclusionConstant; 
	enum class ETextureSizingType TextureSizingType; 
	enum class EMaterialMergeType MaterialMergeType; 
	enum class EBlendMode BlendMode; 
	char bAllowTwoSidedMaterial : 1; 
	char bNormalMap : 1; 
	char bTangentMap : 1; 
	char bMetallicMap : 1; 
	char bRoughnessMap : 1; 
	char bAnisotropyMap : 1; 
	char bSpecularMap : 1; 
	char bEmissiveMap : 1; 
	char bOpacityMap : 1; 
	char bOpacityMaskMap : 1; 
	char bAmbientOcclusionMap : 1; 
	struct FIntPoint DiffuseTextureSize; 
	struct FIntPoint NormalTextureSize; 
	struct FIntPoint TangentTextureSize; 
	struct FIntPoint MetallicTextureSize; 
	struct FIntPoint RoughnessTextureSize; 
	struct FIntPoint AnisotropyTextureSize; 
	struct FIntPoint SpecularTextureSize; 
	struct FIntPoint EmissiveTextureSize; 
	struct FIntPoint OpacityTextureSize; 
	struct FIntPoint OpacityMaskTextureSize; 
	struct FIntPoint AmbientOcclusionTextureSize; 
};

// ScriptStruct Engine.StreamableTextureInstance
struct FStreamableTextureInstance {
};

// ScriptStruct Engine.DynamicTextureInstance
struct FDynamicTextureInstance : FStreamableTextureInstance {
	struct UTexture2D* Texture; 
	bool bAttached; 
	float OriginalRadius; 
};

// ScriptStruct Engine.PrecomputedLightInstanceData
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	struct FTransform Transform; 
	struct FGuid LightGuid; 
	int32_t PreviewShadowMapChannel; 
};

// ScriptStruct Engine.BatchedPoint
struct FBatchedPoint {
	struct FVector position; 
	struct FLinearColor Color; 
	float PointSize; 
	float RemainingLifeTime; 
	char DepthPriority; 
};

// ScriptStruct Engine.BatchedLine
struct FBatchedLine {
	struct FVector Start; 
	struct FVector End; 
	struct FLinearColor Color; 
	float Thickness; 
	float RemainingLifeTime; 
	char DepthPriority; 
};

// ScriptStruct Engine.ClientReceiveData
struct FClientReceiveData {
	struct APlayerController* LocalPC; 
	struct FName MessageType; 
	int32_t MessageIndex; 
	struct FString MessageString; 
	struct APlayerState* RelatedPlayerState_2; 
	struct APlayerState* RelatedPlayerState_3; 
	struct UObject* OptionalObject; 
};

// ScriptStruct Engine.HLODInstancingKey
struct FHLODInstancingKey {
	struct UStaticMesh* StaticMesh; 
	struct UMaterialInterface* Material; 
};

// ScriptStruct Engine.ComponentSync
struct FComponentSync {
	struct FName Name; 
	enum class ESyncOption SyncOption; 
};

// ScriptStruct Engine.LODMappingData
struct FLODMappingData {
	struct TArray<int32_t> Mapping; 
	struct TArray<int32_t> InverseMapping; 
};

// ScriptStruct Engine.ParameterGroupData
struct FParameterGroupData {
	struct FString GroupName; 
	int32_t GroupSortPriority; 
};

// ScriptStruct Engine.MaterialSpriteElement
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; 
	struct UCurveFloat* DistanceToOpacityCurve; 
	char bSizeIsInScreenSpace : 1; 
	float BaseSizeX; 
	float BaseSizeY; 
	struct UCurveFloat* DistanceToSizeCurve; 
};

// ScriptStruct Engine.MaterialCachedExpressionData
struct FMaterialCachedExpressionData {
	struct FMaterialCachedParameters Parameters; 
	struct TArray<struct UObject*> ReferencedTextures; 
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; 
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; 
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; 
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; 
	struct TArray<struct ULandscapeGrassType*> GrassTypes; 
	struct TArray<struct FName> DynamicParameterNames; 
	struct TArray<bool> QualityLevelsUsed; 
	char bHasRuntimeVirtualTextureOutput : 1; 
	char bHasSceneColor : 1; 
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
struct FMaterialParameterCollectionInfo {
	struct FGuid StateId; 
	struct UMaterialParameterCollection* ParameterCollection; 
};

// ScriptStruct Engine.MaterialFunctionInfo
struct FMaterialFunctionInfo {
	struct FGuid StateId; 
	struct UMaterialFunctionInterface* Function; 
};

// ScriptStruct Engine.MaterialCachedParameters
struct FMaterialCachedParameters {
	struct FMaterialCachedParameterEntry RuntimeEntries[0x5]; 
	struct TArray<float> ScalarValues; 
	struct TArray<struct FLinearColor> VectorValues; 
	struct TArray<struct UTexture*> TextureValues; 
	struct TArray<struct UFont*> FontValues; 
	struct TArray<int32_t> FontPageValues; 
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; 
};

// ScriptStruct Engine.MaterialCachedParameterEntry
struct FMaterialCachedParameterEntry {
	struct TArray<uint64_t> NameHashes; 
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; 
	struct TArray<struct FGuid> ExpressionGuids; 
};

// ScriptStruct Engine.MaterialParameterInfo
struct FMaterialParameterInfo {
	struct FName Name; 
	enum class EMaterialParameterAssociation Association; 
	int32_t Index; 
};

// ScriptStruct Engine.StaticComponentMaskValue
struct FStaticComponentMaskValue {
	bool R; 
	bool G; 
	bool B; 
	bool A; 
};

// ScriptStruct Engine.ParameterChannelNames
struct FParameterChannelNames {
	struct FText R; 
	struct FText G; 
	struct FText B; 
	struct FText A; 
};

// ScriptStruct Engine.CustomDefine
struct FCustomDefine {
	struct FString DefineName; 
	struct FString DefineValue; 
};

// ScriptStruct Engine.CustomOutput
struct FCustomOutput {
	struct FName OutputName; 
	enum class ECustomMaterialOutputType OutputType; 
};

// ScriptStruct Engine.CustomInput
struct FCustomInput {
	struct FName InputName; 
	struct FExpressionInput Input; 
};

// ScriptStruct Engine.FunctionExpressionOutput
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; 
	struct FGuid ExpressionOutputId; 
	struct FExpressionOutput Output; 
};

// ScriptStruct Engine.FunctionExpressionInput
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; 
	struct FGuid ExpressionInputId; 
	struct FExpressionInput Input; 
};

// ScriptStruct Engine.FontParameterValue
struct FFontParameterValue {
	struct FMaterialParameterInfo ParameterInfo; 
	struct UFont* FontValue; 
	int32_t FontPage; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
struct FRuntimeVirtualTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; 
	struct URuntimeVirtualTexture* ParameterValue; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.TextureParameterValue
struct FTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; 
	struct UTexture* ParameterValue; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.VectorParameterValue
struct FVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; 
	struct FLinearColor ParameterValue; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.ScalarParameterValue
struct FScalarParameterValue {
	struct FMaterialParameterInfo ParameterInfo; 
	float ParameterValue; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; 
	struct TSoftObjectPtr<UCurveLinearColor> Curve; 
	struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; 
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; 
	char bOverride_BlendMode : 1; 
	char bOverride_ShadingModel : 1; 
	char bOverride_DitheredLODTransition : 1; 
	char bOverride_CastDynamicShadowAsMasked : 1; 
	char bOverride_TwoSided : 1; 
	char TwoSided : 1; 
	char DitheredLODTransition : 1; 
	char bCastDynamicShadowAsMasked : 1; 
	enum class EBlendMode BlendMode; 
	enum class EMaterialShadingModel ShadingModel; 
	float OpacityMaskClipValue; 
};

// ScriptStruct Engine.MaterialTextureInfo
struct FMaterialTextureInfo {
	float SamplingScale; 
	int32_t UVChannelIndex; 
	struct FName TextureName; 
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; 
	float DiffuseBoost; 
	float ExportResolutionScale; 
	char bCastShadowAsMasked : 1; 
	char bOverrideCastShadowAsMasked : 1; 
	char bOverrideEmissiveBoost : 1; 
	char bOverrideDiffuseBoost : 1; 
	char bOverrideExportResolutionScale : 1; 
};

// ScriptStruct Engine.MaterialLayersFunctions
struct FMaterialLayersFunctions {
	struct TArray<struct UMaterialFunctionInterface*> Layers; 
	struct TArray<struct UMaterialFunctionInterface*> Blends; 
	struct TArray<bool> LayerStates; 
	struct FString KeyString; 
};

// ScriptStruct Engine.CollectionParameterBase
struct FCollectionParameterBase {
	struct FName ParameterName; 
	struct FGuid ID; 
};

// ScriptStruct Engine.CollectionVectorParameter
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; 
};

// ScriptStruct Engine.CollectionScalarParameter
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; 
};

// ScriptStruct Engine.InterpGroupActorInfo
struct FInterpGroupActorInfo {
	struct FName ObjectName; 
	struct TArray<struct AActor*> Actors; 
};

// ScriptStruct Engine.CameraCutInfo
struct FCameraCutInfo {
	struct FVector Location; 
	float Timestamp; 
};

// ScriptStruct Engine.MemberReference
struct FMemberReference {
	struct UObject* MemberParent; 
	struct FString MemberScope; 
	struct FName MemberName; 
	struct FGuid MemberGuid; 
	bool bSelfContext; 
	bool bWasDeprecated; 
};

// ScriptStruct Engine.MeshInstancingSettings
struct FMeshInstancingSettings {
	struct AActor* ActorClassToUse; 
	int32_t InstanceReplacementThreshold; 
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; 
	bool bSkipMeshesWithVertexColors; 
	bool bUseHLODVolumes; 
	struct UInstancedStaticMeshComponent* ISMComponentToUse; 
};

// ScriptStruct Engine.MeshMergingSettings
struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; 
	enum class EUVOutput OutputUVs[0x8]; 
	struct FMaterialProxySettings MaterialSettings; 
	int32_t GutterSize; 
	int32_t SpecificLOD; 
	enum class EMeshLODSelectionType LODSelectionType; 
	char bGenerateLightMapUV : 1; 
	char bComputedLightMapResolution : 1; 
	char bPivotPointAtZero : 1; 
	char bMergePhysicsData : 1; 
	char bMergeMaterials : 1; 
	char bCreateMergedMaterial : 1; 
	char bBakeVertexDataToMesh : 1; 
	char bUseVertexDataForBakingMaterial : 1; 
	char bUseTextureBinning : 1; 
	char bReuseMeshLightmapUVs : 1; 
	char bMergeEquivalentMaterials : 1; 
	char bUseLandscapeCulling : 1; 
	char bIncludeImposters : 1; 
	char bAllowDistanceField : 1; 
};

// ScriptStruct Engine.MeshProxySettings
struct FMeshProxySettings {
	int32_t ScreenSize; 
	float VoxelSize; 
	struct FMaterialProxySettings MaterialSettings; 
	float MergeDistance; 
	struct FColor UnresolvedGeometryColor; 
	float MaxRayCastDist; 
	float HardAngleThreshold; 
	int32_t LightMapResolution; 
	enum class EProxyNormalComputationMethod NormalCalculationMethod; 
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; 
	char bCalculateCorrectLODModel : 1; 
	char bOverrideVoxelSize : 1; 
	char bOverrideTransferDistance : 1; 
	char bUseHardAngleThreshold : 1; 
	char bComputeLightMapResolution : 1; 
	char bRecalculateNormals : 1; 
	char bUseLandscapeCulling : 1; 
	char bAllowAdjacency : 1; 
	char bAllowDistanceField : 1; 
	char bReuseMeshLightmapUVs : 1; 
	char bCreateCollision : 1; 
	char bAllowVertexColors : 1; 
	char bGenerateLightmapUVs : 1; 
};

// ScriptStruct Engine.MeshReductionSettings
struct FMeshReductionSettings {
	float PercentTriangles; 
	float PercentVertices; 
	float MaxDeviation; 
	float PixelError; 
	float WeldingThreshold; 
	float HardAngleThreshold; 
	int32_t BaseLODModel; 
	enum class EMeshFeatureImportance SilhouetteImportance; 
	enum class EMeshFeatureImportance TextureImportance; 
	enum class EMeshFeatureImportance ShadingImportance; 
	char bRecalculateNormals : 1; 
	char bGenerateUniqueLightmapUVs : 1; 
	char bKeepSymmetry : 1; 
	char bVisibilityAided : 1; 
	char bCullOccluded : 1; 
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; 
	enum class EMeshFeatureImportance VisibilityAggressiveness; 
	enum class EMeshFeatureImportance VertexColorImportance; 
};

// ScriptStruct Engine.PurchaseInfo
struct FPurchaseInfo {
	struct FString Identifier; 
	struct FString DisplayName; 
	struct FString DisplayDescription; 
	struct FString DisplayPrice; 
};

// ScriptStruct Engine.NameCurve
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; 
};

// ScriptStruct Engine.NameCurveKey
struct FNameCurveKey {
	float Time; 
	struct FName Value; 
};

// ScriptStruct Engine.NavAvoidanceMask
struct FNavAvoidanceMask {
	char bGroup0 : 1; 
	char bGroup1 : 1; 
	char bGroup2 : 1; 
	char bGroup3 : 1; 
	char bGroup4 : 1; 
	char bGroup5 : 1; 
	char bGroup6 : 1; 
	char bGroup7 : 1; 
	char bGroup8 : 1; 
	char bGroup9 : 1; 
	char bGroup10 : 1; 
	char bGroup11 : 1; 
	char bGroup12 : 1; 
	char bGroup13 : 1; 
	char bGroup14 : 1; 
	char bGroup15 : 1; 
	char bGroup16 : 1; 
	char bGroup17 : 1; 
	char bGroup18 : 1; 
	char bGroup19 : 1; 
	char bGroup20 : 1; 
	char bGroup21 : 1; 
	char bGroup22 : 1; 
	char bGroup23 : 1; 
	char bGroup24 : 1; 
	char bGroup25 : 1; 
	char bGroup26 : 1; 
	char bGroup27 : 1; 
	char bGroup28 : 1; 
	char bGroup29 : 1; 
	char bGroup30 : 1; 
	char bGroup31 : 1; 
};

// ScriptStruct Engine.MovementProperties
struct FMovementProperties {
	char bCanCrouch : 1; 
	char bCanJump : 1; 
	char bCanWalk : 1; 
	char bCanSwim : 1; 
	char bCanFly : 1; 
};

// ScriptStruct Engine.NavAgentProperties
struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; 
	float AgentHeight; 
	float AgentStepHeight; 
	float NavWalkingSearchHeightScale; 
	struct FSoftClassPath PreferredNavData; 
};

// ScriptStruct Engine.NavDataConfig
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; 
	struct FColor Color; 
	struct FVector DefaultQueryExtent; 
	struct AActor* NavigationDataClass; 
	struct TSoftClassPtr<UObject> NavDataClass; 
};

// ScriptStruct Engine.NavAgentSelector
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; 
	char bSupportsAgent1 : 1; 
	char bSupportsAgent2 : 1; 
	char bSupportsAgent3 : 1; 
	char bSupportsAgent4 : 1; 
	char bSupportsAgent5 : 1; 
	char bSupportsAgent6 : 1; 
	char bSupportsAgent7 : 1; 
	char bSupportsAgent8 : 1; 
	char bSupportsAgent9 : 1; 
	char bSupportsAgent10 : 1; 
	char bSupportsAgent11 : 1; 
	char bSupportsAgent12 : 1; 
	char bSupportsAgent13 : 1; 
	char bSupportsAgent14 : 1; 
	char bSupportsAgent15 : 1; 
};

// ScriptStruct Engine.NavigationLinkBase
struct FNavigationLinkBase {
	float LeftProjectHeight; 
	float MaxFallDownLength; 
	float SnapRadius; 
	float SnapHeight; 
	struct FNavAgentSelector SupportedAgents; 
	char bSupportsAgent0 : 1; 
	char bSupportsAgent1 : 1; 
	char bSupportsAgent2 : 1; 
	char bSupportsAgent3 : 1; 
	char bSupportsAgent4 : 1; 
	char bSupportsAgent5 : 1; 
	char bSupportsAgent6 : 1; 
	char bSupportsAgent7 : 1; 
	char bSupportsAgent8 : 1; 
	char bSupportsAgent9 : 1; 
	char bSupportsAgent10 : 1; 
	char bSupportsAgent11 : 1; 
	char bSupportsAgent12 : 1; 
	char bSupportsAgent13 : 1; 
	char bSupportsAgent14 : 1; 
	char bSupportsAgent15 : 1; 
	enum class ENavLinkDirection Direction; 
	char bUseSnapHeight : 1; 
	char bSnapToCheapestArea : 1; 
	char bCustomFlag0 : 1; 
	char bCustomFlag1 : 1; 
	char bCustomFlag2 : 1; 
	char bCustomFlag3 : 1; 
	char bCustomFlag4 : 1; 
	char bCustomFlag5 : 1; 
	char bCustomFlag6 : 1; 
	char bCustomFlag7 : 1; 
	struct UNavAreaBase* AreaClass; 
};

// ScriptStruct Engine.NavigationSegmentLink
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; 
	struct FVector LeftEnd; 
	struct FVector RightStart; 
	struct FVector RightEnd; 
};

// ScriptStruct Engine.NavigationLink
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; 
	struct FVector Right; 
};

// ScriptStruct Engine.ChannelDefinition
struct FChannelDefinition {
	struct FName ChannelName; 
	struct FName ClassName; 
	struct UObject* ChannelClass; 
	int32_t StaticChannelIndex; 
	bool bTickOnCreate; 
	bool bServerOpen; 
	bool bClientOpen; 
	bool bInitialServer; 
	bool bInitialClient; 
};

// ScriptStruct Engine.PacketSimulationSettings
struct FPacketSimulationSettings {
	int32_t PktLoss; 
	int32_t PktLossMaxSize; 
	int32_t PktLossMinSize; 
	int32_t PktOrder; 
	int32_t PktDup; 
	int32_t PktLag; 
	int32_t PktLagVariance; 
	int32_t PktLagMin; 
	int32_t PktLagMax; 
	int32_t PktIncomingLagMin; 
	int32_t PktIncomingLagMax; 
	int32_t PktIncomingLoss; 
	int32_t PktJitter; 
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
struct FNetworkEmulationProfileDescription {
	struct FString ProfileName; 
	struct FString Tooltip; 
};

// ScriptStruct Engine.NodeItem
struct FNodeItem {
	struct FName ParentName; 
	struct FTransform Transform; 
};

// ScriptStruct Engine.ParticleBurst
struct FParticleBurst {
	int32_t Count; 
	int32_t CountLow; 
	float Time; 
};

// ScriptStruct Engine.ParticleRandomSeedInfo
struct FParticleRandomSeedInfo {
	struct FName ParameterName; 
	char bGetSeedFromInstance : 1; 
	char bInstanceSeedIsIndex : 1; 
	char bResetSeedOnEmitterLooping : 1; 
	char bRandomlySelectSeedArray : 1; 
	struct TArray<int32_t> RandomSeeds; 
};

// ScriptStruct Engine.ParticleCurvePair
struct FParticleCurvePair {
	struct FString CurveName; 
	struct UObject* CurveObject; 
};

// ScriptStruct Engine.BeamModifierOptions
struct FBeamModifierOptions {
	char bModify : 1; 
	char bScale : 1; 
	char bLock : 1; 
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
struct FParticleEvent_GenerateInfo {
	enum class EParticleEventType Type; 
	int32_t Frequency; 
	int32_t ParticleFrequency; 
	char FirstTimeOnly : 1; 
	char LastTimeOnly : 1; 
	char UseReflectedImpactVector : 1; 
	char bUseOrbitOffset : 1; 
	struct FName CustomName; 
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; 
};

// ScriptStruct Engine.LocationBoneSocketInfo
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; 
	struct FVector Offset; 
};

// ScriptStruct Engine.OrbitOptions
struct FOrbitOptions {
	char bProcessDuringSpawn : 1; 
	char bProcessDuringUpdate : 1; 
	char bUseEmitterTime : 1; 
};

// ScriptStruct Engine.EmitterDynamicParameter
struct FEmitterDynamicParameter {
	struct FName ParamName; 
	char bUseEmitterTime : 1; 
	char bSpawnTimeOnly : 1; 
	enum class EEmitterDynamicParameterValue ValueMethod; 
	char bScaleVelocityByParamValue : 1; 
	struct FRawDistributionFloat ParamValue; 
};

// ScriptStruct Engine.BeamTargetData
struct FBeamTargetData {
	struct FName TargetName; 
	float TargetPercentage; 
};

// ScriptStruct Engine.GPUSpriteResourceData
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; 
	struct TArray<struct FColor> QuantizedMiscSamples; 
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; 
	struct FVector4 ColorScale; 
	struct FVector4 ColorBias; 
	struct FVector4 MiscScale; 
	struct FVector4 MiscBias; 
	struct FVector4 SimulationAttrCurveScale; 
	struct FVector4 SimulationAttrCurveBias; 
	struct FVector4 SubImageSize; 
	struct FVector4 SizeBySpeed; 
	struct FVector ConstantAcceleration; 
	struct FVector OrbitOffsetBase; 
	struct FVector OrbitOffsetRange; 
	struct FVector OrbitFrequencyBase; 
	struct FVector OrbitFrequencyRange; 
	struct FVector OrbitPhaseBase; 
	struct FVector OrbitPhaseRange; 
	float GlobalVectorFieldScale; 
	float GlobalVectorFieldTightness; 
	float PerParticleVectorFieldScale; 
	float PerParticleVectorFieldBias; 
	float DragCoefficientScale; 
	float DragCoefficientBias; 
	float ResilienceScale; 
	float ResilienceBias; 
	float CollisionRadiusScale; 
	float CollisionRadiusBias; 
	float CollisionTimeBias; 
	float CollisionRandomSpread; 
	float CollisionRandomDistribution; 
	float OneMinusFriction; 
	float RotationRateScale; 
	float CameraMotionBlurAmount; 
	enum class EParticleScreenAlignment ScreenAlignment; 
	enum class EParticleAxisLock LockAxisFlag; 
	struct FVector2D PivotOffset; 
	char bRemoveHMDRoll : 1; 
	float MinFacingCameraBlendDistance; 
	float MaxFacingCameraBlendDistance; 
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; 
	struct UParticleModuleSpawn* SpawnModule; 
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; 
	struct TArray<struct UParticleModule*> SpawnModules; 
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; 
	struct FFloatDistribution VectorFieldScale; 
	struct FFloatDistribution DragCoefficient; 
	struct FFloatDistribution PointAttractorStrength; 
	struct FFloatDistribution Resilience; 
	struct FVector ConstantAcceleration; 
	struct FVector PointAttractorPosition; 
	float PointAttractorRadiusSq; 
	struct FVector OrbitOffsetBase; 
	struct FVector OrbitOffsetRange; 
	struct FVector2D InvMaxSize; 
	float InvRotationRateScale; 
	float MaxLifetime; 
	int32_t MaxParticleCount; 
	enum class EParticleScreenAlignment ScreenAlignment; 
	enum class EParticleAxisLock LockAxisFlag; 
	char bEnableCollision : 1; 
	enum class EParticleCollisionMode CollisionMode; 
	char bRemoveHMDRoll : 1; 
	float MinFacingCameraBlendDistance; 
	float MaxFacingCameraBlendDistance; 
	struct FRawDistributionVector DynamicColor; 
	struct FRawDistributionFloat DynamicAlpha; 
	struct FRawDistributionVector DynamicColorScale; 
	struct FRawDistributionFloat DynamicAlphaScale; 
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; 
	struct FTransform Transform; 
	struct FRotator MinInitialRotation; 
	struct FRotator MaxInitialRotation; 
	struct FRotator RotationRate; 
	float Intensity; 
	float Tightness; 
	char bIgnoreComponentTransform : 1; 
	char bTileX : 1; 
	char bTileY : 1; 
	char bTileZ : 1; 
	char bUseFixDT : 1; 
};

// ScriptStruct Engine.NamedEmitterMaterial
struct FNamedEmitterMaterial {
	struct FName Name; 
	struct UMaterialInterface* Material; 
};

// ScriptStruct Engine.LODSoloTrack
struct FLODSoloTrack {
	struct TArray<char> SoloEnableSetting; 
};

// ScriptStruct Engine.ParticleSystemLOD
struct FParticleSystemLOD {
};

// ScriptStruct Engine.ParticleSysParam
struct FParticleSysParam {
	struct FName Name; 
	enum class EParticleSysParamType ParamType; 
	float Scalar; 
	float Scalar_Low; 
	struct FVector Vector; 
	struct FVector Vector_Low; 
	struct FColor Color; 
	struct AActor* Actor; 
	struct UMaterialInterface* Material; 
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
struct FParticleSystemWorldManagerTickFunction : FTickFunction {
};

// ScriptStruct Engine.ParticleSystemReplayFrame
struct FParticleSystemReplayFrame {
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
struct FParticleEmitterReplayFrame {
};

// ScriptStruct Engine.FreezablePerPlatformInt
struct FFreezablePerPlatformInt {
};

// ScriptStruct Engine.PhysicalAnimationData
struct FPhysicalAnimationData {
	struct FName BodyName; 
	char bIsLocalSimulation : 1; 
	float OrientationStrength; 
	float AngularVelocityStrength; 
	float PositionStrength; 
	float VelocityStrength; 
	float MaxLinearForce; 
	float MaxAngularForce; 
};

// ScriptStruct Engine.PhysicalAnimationProfile
struct FPhysicalAnimationProfile {
	struct FName ProfileName; 
	struct FPhysicalAnimationData PhysicalAnimationData; 
};

// ScriptStruct Engine.SolverIterations
struct FSolverIterations {
	float FixedTimeStep; 
	int32_t SolverIterations; 
	int32_t JointIterations; 
	int32_t CollisionIterations; 
	int32_t SolverPushOutIterations; 
	int32_t JointPushOutIterations; 
	int32_t CollisionPushOutIterations; 
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
struct FPhysicsConstraintProfileHandle {
	struct FConstraintProfileProperties ProfileProperties; 
	struct FName ProfileName; 
};

// ScriptStruct Engine.ChaosPhysicsSettings
struct FChaosPhysicsSettings {
	enum class EChaosThreadingMode DefaultThreadingModel; 
	enum class EChaosSolverTickMode DedicatedThreadTickMode; 
	enum class EChaosBufferMode DedicatedThreadBufferMode; 
};

// ScriptStruct Engine.PhysicalSurfaceName
struct FPhysicalSurfaceName {
	enum class EPhysicalSurface Type; 
	struct FName Name; 
};

// ScriptStruct Engine.DelegateArray
struct FDelegateArray {
	struct TArray<struct FDelegate> Delegates; 
};

// ScriptStruct Engine.ViewTargetTransitionParams
struct FViewTargetTransitionParams {
	float BlendTime; 
	enum class EViewTargetBlendFunction BlendFunction; 
	float BlendExp; 
	char bLockOutgoing : 1; 
};

// ScriptStruct Engine.TViewTarget
struct FTViewTarget {
	struct AActor* Target; 
	struct FMinimalViewInfo POV; 
	struct APlayerState* PlayerState; 
};

// ScriptStruct Engine.CameraCacheEntry
struct FCameraCacheEntry {
	float Timestamp; 
	struct FMinimalViewInfo POV; 
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
struct FUpdateLevelStreamingLevelStatus {
	struct FName PackageName; 
	int32_t LODIndex; 
	bool bNewShouldBeLoaded; 
	bool bNewShouldBeVisible; 
	bool bNewShouldBlockOnLoad; 
};

// ScriptStruct Engine.InputActionSpeechMapping
struct FInputActionSpeechMapping {
	struct FName ActionName; 
	struct FName SpeechKeyword; 
};

// ScriptStruct Engine.InputAxisConfigEntry
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; 
	struct FInputAxisProperties AxisProperties; 
};

// ScriptStruct Engine.InputAxisProperties
struct FInputAxisProperties {
	float DeadZone; 
	float Sensitivity; 
	float Exponent; 
	char bInvert : 1; 
};

// ScriptStruct Engine.KeyBind
struct FKeyBind {
	struct FKey Key; 
	struct FString Command; 
	char Control : 1; 
	char Shift : 1; 
	char Alt : 1; 
	char Cmd : 1; 
	char bIgnoreCtrl : 1; 
	char bIgnoreShift : 1; 
	char bIgnoreAlt : 1; 
	char bIgnoreCmd : 1; 
	char bDisabled : 1; 
};

// ScriptStruct Engine.PlayerMuteList
struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; 
	int32_t VoiceChannelIdx; 
};

// ScriptStruct Engine.PoseDataContainer
struct FPoseDataContainer {
	struct TArray<struct FSmartName> PoseNames; 
	struct TArray<struct FName> Tracks; 
	struct TMap<struct FName, int32_t> TrackMap; 
	struct TArray<struct FPoseData> Poses; 
	struct TArray<struct FAnimCurveBase> Curves; 
};

// ScriptStruct Engine.PoseData
struct FPoseData {
	struct TArray<struct FTransform> LocalSpacePose; 
	struct TMap<int32_t, int32_t> TrackToBufferIndex; 
	struct TArray<float> CurveData; 
};

// ScriptStruct Engine.PreviewAssetAttachContainer
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; 
};

// ScriptStruct Engine.PreviewAttachedObjectPair
struct FPreviewAttachedObjectPair {
	struct TSoftObjectPtr<UObject> AttachedObject; 
	struct UObject* Object; 
	struct FName AttachedTo; 
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
struct FPreviewMeshCollectionEntry {
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; 
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	struct FTransform ComponentTransform; 
	int32_t VisibilityId; 
	struct UPrimitiveComponent* LODParent; 
};

// ScriptStruct Engine.SpriteCategoryInfo
struct FSpriteCategoryInfo {
	struct FName Category; 
	struct FText DisplayName; 
	struct FText Description; 
};

// ScriptStruct Engine.QuartzClockSettings
struct FQuartzClockSettings {
	struct FQuartzTimeSignature TimeSignature; 
	bool bIgnoreLevelChange; 
};

// ScriptStruct Engine.QuartzTimeSignature
struct FQuartzTimeSignature {
	int32_t NumBeats; 
	enum class EQuartzTimeSignatureQuantization BeatType; 
	struct TArray<struct FQuartzPulseOverrideStep> OptionalPulseOverride; 
};

// ScriptStruct Engine.QuartzPulseOverrideStep
struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; 
	enum class EQuartzCommandQuantization PulseDuration; 
};

// ScriptStruct Engine.QuartzQuantizationBoundary
struct FQuartzQuantizationBoundary {
	enum class EQuartzCommandQuantization Quantization; 
	float Multiplier; 
	enum class EQuarztQuantizationReference CountingReferencePoint; 
	bool bFireOnClockStart; 
};

// ScriptStruct Engine.QuartzTransportTimeStamp
struct FQuartzTransportTimeStamp {
	int32_t Bars; 
	int32_t Beat; 
	float BeatFraction; 
	float Seconds; 
};

// ScriptStruct Engine.LevelNameAndTime
struct FLevelNameAndTime {
	struct FString LevelName; 
	uint32_t LevelChangeTimeInMS; 
};

// ScriptStruct Engine.ReverbSettings
struct FReverbSettings {
	bool bApplyReverb; 
	struct UReverbEffect* ReverbEffect; 
	struct USoundEffectSubmixPreset* ReverbPluginEffect; 
	float Volume; 
	float FadeTime; 
};

// ScriptStruct Engine.CompressedRichCurve
struct FCompressedRichCurve {
};

// ScriptStruct Engine.TransformBase
struct FTransformBase {
	struct FName Node; 
	struct FTransformBaseConstraint Constraints[0x2]; 
};

// ScriptStruct Engine.TransformBaseConstraint
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; 
};

// ScriptStruct Engine.RigTransformConstraint
struct FRigTransformConstraint {
	enum class EConstraintTransform TranformType; 
	struct FName ParentSpace; 
	float Weight; 
};

// ScriptStruct Engine.Node
struct FNode {
	struct FName Name; 
	struct FName ParentName; 
	struct FTransform Transform; 
	struct FString DisplayName; 
	bool bAdvanced; 
};

// ScriptStruct Engine.RootMotionSource
struct FRootMotionSource {
	uint16_t Priority; 
	uint16_t LocalID; 
	enum class ERootMotionAccumulateMode AccumulateMode; 
	struct FName InstanceName; 
	float StartTime; 
	float CurrentTime; 
	float PreviousTime; 
	float Duration; 
	struct FRootMotionSourceStatus Status; 
	struct FRootMotionSourceSettings Settings; 
	bool bInLocalSpace; 
	struct FRootMotionMovementParams RootMotionParams; 
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; 
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
struct FRootMotionFinishVelocitySettings {
	enum class ERootMotionFinishVelocityMode Mode; 
	struct FVector SetVelocity; 
	float ClampVelocity; 
};

// ScriptStruct Engine.RootMotionSourceStatus
struct FRootMotionSourceStatus {
	char Flags; 
};

// ScriptStruct Engine.RootMotionSource_JumpForce
struct FRootMotionSource_JumpForce : FRootMotionSource {
	struct FRotator Rotation; 
	float Distance; 
	float Height; 
	bool bDisableTimeout; 
	struct UCurveVector* PathOffsetCurve; 
	struct UCurveFloat* TimeMappingCurve; 
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	struct FVector StartLocation; 
	struct FVector InitialTargetLocation; 
	struct FVector TargetLocation; 
	bool bRestrictSpeedToExpected; 
	struct UCurveVector* PathOffsetCurve; 
	struct UCurveFloat* TimeMappingCurve; 
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	struct FVector StartLocation; 
	struct FVector TargetLocation; 
	bool bRestrictSpeedToExpected; 
	struct UCurveVector* PathOffsetCurve; 
};

// ScriptStruct Engine.RootMotionSource_RadialForce
struct FRootMotionSource_RadialForce : FRootMotionSource {
	struct FVector Location; 
	struct AActor* LocationActor; 
	float Radius; 
	float Strength; 
	bool bIsPush; 
	bool bNoZForce; 
	struct UCurveFloat* StrengthDistanceFalloff; 
	struct UCurveFloat* StrengthOverTime; 
	bool bUseFixedWorldDirection; 
	struct FRotator FixedWorldDirection; 
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	struct FVector Force; 
	struct UCurveFloat* StrengthOverTime; 
};

// ScriptStruct Engine.CameraExposureSettings
struct FCameraExposureSettings {
	enum class EAutoExposureMethod Method; 
	float LowPercent; 
	float HighPercent; 
	float MinBrightness; 
	float MaxBrightness; 
	float SpeedUp; 
	float SpeedDown; 
	float Bias; 
	struct UCurveFloat* BiasCurve; 
	struct UTexture* MeterMask; 
	float HistogramLogMin; 
	float HistogramLogMax; 
	float CalibrationConstant; 
	char ApplyPhysicalCameraExposure : 1; 
};

// ScriptStruct Engine.LensSettings
struct FLensSettings {
	struct FLensBloomSettings Bloom; 
	struct FLensImperfectionSettings Imperfections; 
	float ChromaticAberration; 
};

// ScriptStruct Engine.LensImperfectionSettings
struct FLensImperfectionSettings {
	struct UTexture* DirtMask; 
	float DirtMaskIntensity; 
	struct FLinearColor DirtMaskTint; 
};

// ScriptStruct Engine.LensBloomSettings
struct FLensBloomSettings {
	struct FGaussianSumBloomSettings GaussianSum; 
	struct FConvolutionBloomSettings Convolution; 
	enum class EBloomMethod Method; 
};

// ScriptStruct Engine.ConvolutionBloomSettings
struct FConvolutionBloomSettings {
	struct UTexture2D* Texture; 
	float Size; 
	struct FVector2D CenterUV; 
	float PreFilterMin; 
	float PreFilterMax; 
	float PreFilterMult; 
	float BufferScale; 
};

// ScriptStruct Engine.GaussianSumBloomSettings
struct FGaussianSumBloomSettings {
	float Intensity; 
	float Threshold; 
	float SizeScale; 
	float Filter1Size; 
	float Filter2Size; 
	float Filter3Size; 
	float Filter4Size; 
	float Filter5Size; 
	float Filter6Size; 
	struct FLinearColor Filter1Tint; 
	struct FLinearColor Filter2Tint; 
	struct FLinearColor Filter3Tint; 
	struct FLinearColor Filter4Tint; 
	struct FLinearColor Filter5Tint; 
	struct FLinearColor Filter6Tint; 
};

// ScriptStruct Engine.FilmStockSettings
struct FFilmStockSettings {
	float Slope; 
	float Toe; 
	float Shoulder; 
	float BlackClip; 
	float WhiteClip; 
};

// ScriptStruct Engine.ColorGradingSettings
struct FColorGradingSettings {
	struct FColorGradePerRangeSettings Global; 
	struct FColorGradePerRangeSettings Shadows; 
	struct FColorGradePerRangeSettings Midtones; 
	struct FColorGradePerRangeSettings Highlights; 
	float ShadowsMax; 
	float HighlightsMin; 
};

// ScriptStruct Engine.ColorGradePerRangeSettings
struct FColorGradePerRangeSettings {
	struct FVector4 Saturation; 
	struct FVector4 Contrast; 
	struct FVector4 Gamma; 
	struct FVector4 Gain; 
	struct FVector4 Offset; 
};

// ScriptStruct Engine.EngineShowFlagsSetting
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; 
	bool Enabled; 
};

// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
struct FSceneViewExtensionIsActiveFunctor {
};

// ScriptStruct Engine.SingleAnimationPlayData
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; 
	char bSavedLooping : 1; 
	char bSavedPlaying : 1; 
	float SavedPosition; 
	float SavedPlayRate; 
};

// ScriptStruct Engine.SkeletalMaterial
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; 
	struct FName MaterialSlotName; 
	struct FMeshUVChannelInfo UVChannelData; 
};

// ScriptStruct Engine.ClothingAssetData_Legacy
struct FClothingAssetData_Legacy {
	struct FName AssetName; 
	struct FString ApexFileName; 
	bool bClothPropertiesChanged; 
	struct FClothPhysicsProperties_Legacy PhysicsProperties; 
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; 
	float HorizontalResistance; 
	float BendResistance; 
	float ShearResistance; 
	float Friction; 
	float Damping; 
	float TetherStiffness; 
	float TetherLimit; 
	float Drag; 
	float StiffnessFrequency; 
	float GravityScale; 
	float MassScale; 
	float InertiaBlend; 
	float SelfCollisionThickness; 
	float SelfCollisionSquashScale; 
	float SelfCollisionStiffness; 
	float SolverFrequency; 
	float FiberCompression; 
	float FiberExpansion; 
	float FiberResistance; 
};

// ScriptStruct Engine.SkeletalMeshLODInfo
struct FSkeletalMeshLODInfo {
	struct FPerPlatformFloat ScreenSize; 
	float LODHysteresis; 
	struct TArray<int32_t> LODMaterialMap; 
	struct FSkeletalMeshBuildSettings BuildSettings; 
	struct FSkeletalMeshOptimizationSettings ReductionSettings; 
	struct TArray<struct FBoneReference> BonesToRemove; 
	struct TArray<struct FBoneReference> BonesToPrioritize; 
	float WeightOfPrioritization; 
	struct UAnimSequence* BakePose; 
	struct UAnimSequence* BakePoseOverride; 
	struct FString SourceImportFilename; 
	enum class ESkinCacheUsage SkinCacheUsage; 
	char bHasBeenSimplified : 1; 
	char bHasPerLODVertexColors : 1; 
	char bAllowCPUAccess : 1; 
	char bSupportUniformlyDistributedSampling : 1; 
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
struct FSkeletalMeshOptimizationSettings {
	enum class SkeletalMeshTerminationCriterion TerminationCriterion; 
	float NumOfTrianglesPercentage; 
	float NumOfVertPercentage; 
	uint32_t MaxNumOfTriangles; 
	uint32_t MaxNumOfVerts; 
	float MaxDeviationPercentage; 
	enum class SkeletalMeshOptimizationType ReductionMethod; 
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; 
	enum class SkeletalMeshOptimizationImportance TextureImportance; 
	enum class SkeletalMeshOptimizationImportance ShadingImportance; 
	enum class SkeletalMeshOptimizationImportance SkinningImportance; 
	char bRemapMorphTargets : 1; 
	char bRecalcNormals : 1; 
	float WeldingThreshold; 
	float NormalsThreshold; 
	int32_t MaxBonesPerVertex; 
	char bEnforceBoneBoundaries : 1; 
	float VolumeImportance; 
	char bLockEdges : 1; 
	char bLockColorBounaries : 1; 
	int32_t BaseLOD; 
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
struct FSkeletalMeshClothBuildParams {
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; 
	int32_t TargetLod; 
	bool bRemapParameters; 
	struct FString AssetName; 
	int32_t LODIndex; 
	int32_t SourceSection; 
	bool bRemoveFromMesh; 
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; 
};

// ScriptStruct Engine.BoneMirrorExport
struct FBoneMirrorExport {
	struct FName BoneName; 
	struct FName SourceBoneName; 
	enum class EAxis BoneFlipAxis; 
};

// ScriptStruct Engine.BoneMirrorInfo
struct FBoneMirrorInfo {
	int32_t SourceIndex; 
	enum class EAxis BoneFlipAxis; 
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
struct FSkeletalMeshLODGroupSettings {
	struct FPerPlatformFloat ScreenSize; 
	float LODHysteresis; 
	enum class EBoneFilterActionOption BoneFilterActionOption; 
	struct TArray<struct FBoneFilter> BoneList; 
	struct TArray<struct FName> BonesToPrioritize; 
	float WeightOfPrioritization; 
	struct UAnimSequence* BakePose; 
	struct FSkeletalMeshOptimizationSettings ReductionSettings; 
};

// ScriptStruct Engine.BoneFilter
struct FBoneFilter {
	bool bExcludeSelf; 
	struct FName BoneName; 
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
struct FSkeletalMeshSamplingInfo {
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; 
	struct FSkeletalMeshSamplingBuiltData BuiltData; 
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
struct FSkeletalMeshSamplingBuiltData {
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; 
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; 
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
struct FSkeletalMeshSamplingRegionBuiltData {
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
struct FSkeletalMeshSamplingLODBuiltData {
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
struct FSkeletalMeshSamplingRegion {
	struct FName Name; 
	int32_t LODIndex; 
	char bSupportUniformlyDistributedSampling : 1; 
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; 
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; 
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
struct FSkeletalMeshSamplingRegionBoneFilter {
	struct FName BoneName; 
	char bIncludeOrExclude : 1; 
	char bApplyToChildren : 1; 
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
struct FSkeletalMeshSamplingRegionMaterialFilter {
	struct FName MaterialName; 
};

// ScriptStruct Engine.VirtualBone
struct FVirtualBone {
	struct FName SourceBoneName; 
	struct FName TargetBoneName; 
	struct FName VirtualBoneName; 
};

// ScriptStruct Engine.AnimSlotGroup
struct FAnimSlotGroup {
	struct FName GroupName; 
	struct TArray<struct FName> SlotNames; 
};

// ScriptStruct Engine.RigConfiguration
struct FRigConfiguration {
	struct URig* Rig; 
	struct TArray<struct FNameMapping> BoneMappingTable; 
};

// ScriptStruct Engine.NameMapping
struct FNameMapping {
	struct FName NodeName; 
	struct FName BoneName; 
};

// ScriptStruct Engine.BoneReductionSetting
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; 
};

// ScriptStruct Engine.ReferencePose
struct FReferencePose {
	struct FName PoseName; 
	struct TArray<struct FTransform> ReferencePose; 
};

// ScriptStruct Engine.BoneNode
struct FBoneNode {
	struct FName Name; 
	int32_t ParentIndex; 
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; 
};

// ScriptStruct Engine.SkeletonToMeshLinkup
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; 
	struct TArray<int32_t> MeshToSkeletonTable; 
};

// ScriptStruct Engine.VertexOffsetUsage
struct FVertexOffsetUsage {
	int32_t Usage; 
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; 
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; 
	char Weights[0xc]; 
};

// ScriptStruct Engine.SkinWeightProfileInfo
struct FSkinWeightProfileInfo {
	struct FName Name; 
	struct FPerPlatformBool DefaultProfile; 
	struct FPerPlatformInt DefaultProfileFromLODIndex; 
};

// ScriptStruct Engine.SkinWeightProfileManagerTickFunction
struct FSkinWeightProfileManagerTickFunction : FTickFunction {
};

// ScriptStruct Engine.TentDistribution
struct FTentDistribution {
	float TipAltitude; 
	float TipValue; 
	float Width; 
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	struct FGuid LightGuid; 
	float AverageBrightness; 
};

// ScriptStruct Engine.SmartNameContainer
struct FSmartNameContainer {
};

// ScriptStruct Engine.SmartNameMapping
struct FSmartNameMapping {
};

// ScriptStruct Engine.CurveMetaData
struct FCurveMetaData {
};

// ScriptStruct Engine.SoundAttenuationSettings
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; 
	char bSpatialize : 1; 
	char bAttenuateWithLPF : 1; 
	char bEnableListenerFocus : 1; 
	char bEnableFocusInterpolation : 1; 
	char bEnableOcclusion : 1; 
	char bUseComplexCollisionForOcclusion : 1; 
	char bEnableReverbSend : 1; 
	char bEnablePriorityAttenuation : 1; 
	char bApplyNormalizationToStereoSounds : 1; 
	char bEnableLogFrequencyScaling : 1; 
	char bEnableSubmixSends : 1; 
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; 
	float BinauralRadius; 
	enum class EAirAbsorptionMethod AbsorptionMethod; 
	enum class ECollisionChannel OcclusionTraceChannel; 
	enum class EReverbSendMethod ReverbSendMethod; 
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; 
	float OmniRadius; 
	float StereoSpread; 
	float LPFRadiusMin; 
	float LPFRadiusMax; 
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; 
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; 
	float LPFFrequencyAtMin; 
	float LPFFrequencyAtMax; 
	float HPFFrequencyAtMin; 
	float HPFFrequencyAtMax; 
	float FocusAzimuth; 
	float NonFocusAzimuth; 
	float FocusDistanceScale; 
	float NonFocusDistanceScale; 
	float FocusPriorityScale; 
	float NonFocusPriorityScale; 
	float FocusVolumeAttenuation; 
	float NonFocusVolumeAttenuation; 
	float FocusAttackInterpSpeed; 
	float FocusReleaseInterpSpeed; 
	float OcclusionLowPassFilterFrequency; 
	float OcclusionVolumeAttenuation; 
	float OcclusionInterpolationTime; 
	float ReverbWetLevelMin; 
	float ReverbWetLevelMax; 
	float ReverbDistanceMin; 
	float ReverbDistanceMax; 
	float ManualReverbSendLevel; 
	struct FRuntimeFloatCurve CustomReverbSendCurve; 
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; 
	float PriorityAttenuationMin; 
	float PriorityAttenuationMax; 
	float PriorityAttenuationDistanceMin; 
	float PriorityAttenuationDistanceMax; 
	float ManualPriorityAttenuation; 
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; 
	struct FSoundAttenuationPluginSettings PluginSettings; 
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
struct FSoundAttenuationPluginSettings {
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; 
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; 
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; 
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
struct FAttenuationSubmixSendSettings {
	struct USoundSubmixBase* Submix; 
	enum class ESubmixSendMethod SubmixSendMethod; 
	float SubmixSendLevelMin; 
	float SubmixSendLevelMax; 
	float SubmixSendDistanceMin; 
	float SubmixSendDistanceMax; 
	float ManualSubmixSendLevel; 
	struct FRuntimeFloatCurve CustomSubmixSendCurve; 
};

// ScriptStruct Engine.PassiveSoundMixModifier
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; 
	float MinVolumeThreshold; 
	float MaxVolumeThreshold; 
};

// ScriptStruct Engine.SoundClassProperties
struct FSoundClassProperties {
	float Volume; 
	float Pitch; 
	float LowPassFilterFrequency; 
	float AttenuationDistanceScale; 
	float LFEBleed; 
	float VoiceCenterChannelVolume; 
	float RadioFilterVolume; 
	float RadioFilterVolumeThreshold; 
	char bApplyEffects : 1; 
	char bAlwaysPlay : 1; 
	char bIsUISound : 1; 
	char bIsMusic : 1; 
	char bCenterChannelOnly : 1; 
	char bApplyAmbientVolumes : 1; 
	char bReverb : 1; 
	float Default2DReverbSendAmount; 
	struct FSoundModulationDefaultSettings ModulationSettings; 
	enum class EAudioOutputTarget OutputTarget; 
	enum class ESoundWaveLoadingBehavior LoadingBehavior; 
	struct USoundSubmix* DefaultSubmix; 
};

// ScriptStruct Engine.SoundModulationDefaultSettings
struct FSoundModulationDefaultSettings {
	struct FSoundModulationDestinationSettings VolumeModulationDestination; 
	struct FSoundModulationDestinationSettings PitchModulationDestination; 
	struct FSoundModulationDestinationSettings HighpassModulationDestination; 
	struct FSoundModulationDestinationSettings LowpassModulationDestination; 
};

// ScriptStruct Engine.SoundClassEditorData
struct FSoundClassEditorData {
};

// ScriptStruct Engine.SoundConcurrencySettings
struct FSoundConcurrencySettings {
	int32_t MaxCount; 
	char bLimitToOwner : 1; 
	enum class EMaxConcurrentResolutionRule ResolutionRule; 
	float RetriggerTime; 
	float VolumeScale; 
	enum class EConcurrencyVolumeScaleMode VolumeScaleMode; 
	float VolumeScaleAttackTime; 
	char bVolumeScaleCanRelease : 1; 
	float VolumeScaleReleaseTime; 
	float VoiceStealReleaseTime; 
};

// ScriptStruct Engine.SoundNodeEditorData
struct FSoundNodeEditorData {
};

// ScriptStruct Engine.SourceEffectChainEntry
struct FSourceEffectChainEntry {
	struct USoundEffectSourcePreset* Preset; 
	char bBypass : 1; 
};

// ScriptStruct Engine.SoundGroup
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; 
	struct FString DisplayName; 
	char bAlwaysDecompressOnLoad : 1; 
	float DecompressedDuration; 
};

// ScriptStruct Engine.SoundClassAdjuster
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; 
	float VolumeAdjuster; 
	float PitchAdjuster; 
	float LowPassFilterFrequency; 
	char bApplyToChildren : 1; 
	float VoiceCenterChannelVolumeAdjuster; 
};

// ScriptStruct Engine.AudioEQEffect
struct FAudioEQEffect : FAudioEffectParameters {
	float FrequencyCenter0; 
	float Gain0; 
	float Bandwidth0; 
	float FrequencyCenter1; 
	float Gain1; 
	float Bandwidth1; 
	float FrequencyCenter2; 
	float Gain2; 
	float Bandwidth2; 
	float FrequencyCenter3; 
	float Gain3; 
	float Bandwidth3; 
};

// ScriptStruct Engine.SoundModulationDefaultRoutingSettings
struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	enum class EModulationRouting VolumeRouting; 
	enum class EModulationRouting PitchRouting; 
	enum class EModulationRouting HighpassRouting; 
	enum class EModulationRouting LowpassRouting; 
};

// ScriptStruct Engine.DistanceDatum
struct FDistanceDatum {
	float FadeInDistanceStart; 
	float FadeInDistanceEnd; 
	float FadeOutDistanceStart; 
	float FadeOutDistanceEnd; 
	float Volume; 
};

// ScriptStruct Engine.ModulatorContinuousParams
struct FModulatorContinuousParams {
	struct FName ParameterName; 
	float Default; 
	float MinInput; 
	float MaxInput; 
	float MinOutput; 
	float MaxOutput; 
	enum class ModulationParamMode ParamMode; 
};

// ScriptStruct Engine.SoundSourceBusSendInfo
struct FSoundSourceBusSendInfo {
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; 
	struct USoundSourceBus* SoundSourceBus; 
	struct UAudioBus* AudioBus; 
	float SendLevel; 
	float MinSendLevel; 
	float MaxSendLevel; 
	float MinSendDistance; 
	float MaxSendDistance; 
	struct FRuntimeFloatCurve CustomSendLevelCurve; 
};

// ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; 
	int32_t AttackTimeMsec; 
	int32_t ReleaseTimeMsec; 
	float QFactor; 
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
struct FSoundWaveEnvelopeTimeData {
	float Amplitude; 
	float TimeSec; 
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
struct FSoundWaveSpectralTimeData {
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; 
	float TimeSec; 
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
struct FSoundWaveSpectralDataEntry {
	float Magnitude; 
	float NormalizedMagnitude; 
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; 
	float PlaybackTime; 
	struct USoundWave* SoundWave; 
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
struct FSoundWaveSpectralDataPerSound {
	struct TArray<struct FSoundWaveSpectralData> SpectralData; 
	float PlaybackTime; 
	struct USoundWave* SoundWave; 
};

// ScriptStruct Engine.SoundWaveSpectralData
struct FSoundWaveSpectralData {
	float FrequencyHz; 
	float Magnitude; 
	float NormalizedMagnitude; 
};

// ScriptStruct Engine.StreamedAudioPlatformData
struct FStreamedAudioPlatformData {
};

// ScriptStruct Engine.SplineInstanceData
struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; 
	struct FSplineCurves SplineCurves; 
	struct FSplineCurves SplineCurvesPreUCS; 
};

// ScriptStruct Engine.SplineCurves
struct FSplineCurves {
	struct FInterpCurveVector position; 
	struct FInterpCurveQuat Rotation; 
	struct FInterpCurveVector Scale; 
	struct FInterpCurveFloat ReparamTable; 
	struct USplineMetadata* MetaData; 
	uint32_t Version; 
};

// ScriptStruct Engine.SplinePoint
struct FSplinePoint {
	float InputKey; 
	struct FVector position; 
	struct FVector ArriveTangent; 
	struct FVector LeaveTangent; 
	struct FRotator Rotation; 
	struct FVector Scale; 
	enum class ESplinePointType Type; 
};

// ScriptStruct Engine.SplineMeshInstanceData
struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	struct FVector StartPos; 
	struct FVector EndPos; 
	struct FVector StartTangent; 
	struct FVector EndTangent; 
};

// ScriptStruct Engine.SplineMeshParams
struct FSplineMeshParams {
	struct FVector StartPos; 
	struct FVector StartTangent; 
	struct FVector2D StartScale; 
	float StartRoll; 
	struct FVector2D StartOffset; 
	struct FVector EndPos; 
	struct FVector2D EndScale; 
	struct FVector EndTangent; 
	float EndRoll; 
	struct FVector2D EndOffset; 
};

// ScriptStruct Engine.MaterialRemapIndex
struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; 
	struct TArray<int32_t> MaterialRemap; 
};

// ScriptStruct Engine.StaticMaterial
struct FStaticMaterial {
	struct UMaterialInterface* MaterialInterface; 
	struct FName MaterialSlotName; 
	struct FName ImportedMaterialSlotName; 
	struct FMeshUVChannelInfo UVChannelData; 
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; 
	struct FVector CamOrbitPoint; 
	struct FVector CamOrbitZoom; 
	struct FRotator CamOrbitRotation; 
};

// ScriptStruct Engine.MeshSectionInfoMap
struct FMeshSectionInfoMap {
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; 
};

// ScriptStruct Engine.MeshSectionInfo
struct FMeshSectionInfo {
	int32_t MaterialIndex; 
	bool bEnableCollision; 
	bool bCastShadow; 
	bool bVisibleInRayTracing; 
	bool bForceOpaque; 
};

// ScriptStruct Engine.StaticMeshSourceModel
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; 
	struct FMeshReductionSettings ReductionSettings; 
	float LODDistance; 
	struct FPerPlatformFloat ScreenSize; 
	struct FString SourceImportFilename; 
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
struct FStaticMeshOptimizationSettings {
	enum class EOptimizationType ReductionMethod; 
	float NumOfTrianglesPercentage; 
	float MaxDeviationPercentage; 
	float WeldingThreshold; 
	bool bRecalcNormals; 
	float NormalsThreshold; 
	char SilhouetteImportance; 
	char TextureImportance; 
	char ShadingImportance; 
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	struct UStaticMesh* StaticMesh; 
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; 
	struct TArray<struct FGuid> CachedStaticLighting; 
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; 
};

// ScriptStruct Engine.StreamingTextureBuildInfo
struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; 
	int32_t TextureLevelIndex; 
	float TexelFactor; 
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
struct FStaticMeshVertexColorLODData {
	struct TArray<struct FPaintedVertex> PaintedVertices; 
	struct TArray<struct FColor> VertexBufferColors; 
	uint32_t LODIndex; 
};

// ScriptStruct Engine.PaintedVertex
struct FPaintedVertex {
	struct FVector position; 
	struct FColor Color; 
	struct FVector4 Normal; 
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
struct FStaticMeshComponentLODInfo {
};

// ScriptStruct Engine.StaticParameterSet
struct FStaticParameterSet {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; 
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; 
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; 
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; 
};

// ScriptStruct Engine.StaticParameterBase
struct FStaticParameterBase {
	struct FMaterialParameterInfo ParameterInfo; 
	bool bOverride; 
	struct FGuid ExpressionGUID; 
};

// ScriptStruct Engine.StaticMaterialLayersParameter
struct FStaticMaterialLayersParameter : FStaticParameterBase {
	struct FMaterialLayersFunctions Value; 
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; 
	bool bWeightBasedBlend; 
};

// ScriptStruct Engine.StaticComponentMaskParameter
struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; 
	bool G; 
	bool B; 
	bool A; 
};

// ScriptStruct Engine.StaticSwitchParameter
struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; 
};

// ScriptStruct Engine.EquirectProps
struct FEquirectProps {
	struct FBox2D LeftUVRect; 
	struct FBox2D RightUVRect; 
	struct FVector2D LeftScale; 
	struct FVector2D RightScale; 
	struct FVector2D LeftBias; 
	struct FVector2D RightBias; 
};

// ScriptStruct Engine.SubsurfaceProfileStruct
struct FSubsurfaceProfileStruct {
	struct FLinearColor SurfaceAlbedo; 
	struct FLinearColor MeanFreePathColor; 
	float MeanFreePathDistance; 
	float WorldUnitScale; 
	bool bEnableBurley; 
	float ScatterRadius; 
	struct FLinearColor SubsurfaceColor; 
	struct FLinearColor FalloffColor; 
	struct FLinearColor BoundaryColorBleed; 
	float ExtinctionScale; 
	float NormalScale; 
	float ScatteringDistribution; 
	float IOR; 
	float Roughness0; 
	float Roughness1; 
	float LobeMix; 
	struct FLinearColor TransmissionTintColor; 
};

// ScriptStruct Engine.TextureFormatSettings
struct FTextureFormatSettings {
	enum class TextureCompressionSettings CompressionSettings; 
	char CompressionNoAlpha : 1; 
	char CompressionNone : 1; 
	char CompressionYCoCg : 1; 
	char sRGB : 1; 
};

// ScriptStruct Engine.TexturePlatformData
struct FTexturePlatformData {
};

// ScriptStruct Engine.TextureSource
struct FTextureSource {
};

// ScriptStruct Engine.TextureSourceBlock
struct FTextureSourceBlock {
	int32_t BlockX; 
	int32_t BlockY; 
	int32_t SizeX; 
	int32_t SizeY; 
	int32_t NumSlices; 
	int32_t NumMips; 
};

// ScriptStruct Engine.TextureLODGroup
struct FTextureLODGroup {
	enum class TextureGroup Group; 
	int32_t LODBias; 
	int32_t LODBias_Smaller; 
	int32_t LODBias_Smallest; 
	int32_t NumStreamedMips; 
	enum class TextureMipGenSettings MipGenSettings; 
	int32_t MinLODSize; 
	int32_t MaxLODSize; 
	int32_t MaxLODSize_Smaller; 
	int32_t MaxLODSize_Smallest; 
	int32_t OptionalLODBias; 
	int32_t OptionalMaxLODSize; 
	struct FName MinMagFilter; 
	struct FName MipFilter; 
	enum class ETextureMipLoadOptions MipLoadOptions; 
	bool HighPriorityLoad; 
	bool DuplicateNonOptionalMips; 
	float Downscale; 
	enum class ETextureDownscaleOptions DownscaleOptions; 
	int32_t VirtualTextureTileCountBias; 
	int32_t VirtualTextureTileSizeBias; 
	enum class ETextureLossyCompressionAmount LossyCompressionAmount; 
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
struct FStreamingRenderAssetPrimitiveInfo {
	struct UStreamableRenderAsset* RenderAsset; 
	struct FBoxSphereBounds Bounds; 
	float TexelFactor; 
	uint32_t PackedRelativeBox; 
	char bAllowInvalidTexelFactorWhenUnregistered : 1; 
};

// ScriptStruct Engine.Timeline
struct FTimeline {
	enum class ETimelineLengthMode LengthMode; 
	char bLooping : 1; 
	char bReversePlayback : 1; 
	char bPlaying : 1; 
	float Length; 
	float PlayRate; 
	float position; 
	struct TArray<struct FTimelineEventEntry> Events; 
	struct TArray<struct FTimelineVectorTrack> InterpVectors; 
	struct TArray<struct FTimelineFloatTrack> InterpFloats; 
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; 
	struct FDelegate TimelinePostUpdateFunc; 
	struct FDelegate TimelineFinishedFunc; 
	struct TWeakObjectPtr<struct UObject> PropertySetObject; 
	struct FName DirectionPropertyName; 
};

// ScriptStruct Engine.TimelineLinearColorTrack
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; 
	struct FDelegate InterpFunc; 
	struct FName TrackName; 
	struct FName LinearColorPropertyName; 
};

// ScriptStruct Engine.TimelineFloatTrack
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; 
	struct FDelegate InterpFunc; 
	struct FName TrackName; 
	struct FName FloatPropertyName; 
};

// ScriptStruct Engine.TimelineVectorTrack
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; 
	struct FDelegate InterpFunc; 
	struct FName TrackName; 
	struct FName VectorPropertyName; 
};

// ScriptStruct Engine.TimelineEventEntry
struct FTimelineEventEntry {
	float Time; 
	struct FDelegate EventFunc; 
};

// ScriptStruct Engine.TTTrackBase
struct FTTTrackBase {
	struct FName TrackName; 
	bool bIsExternalCurve; 
};

// ScriptStruct Engine.TTPropertyTrack
struct FTTPropertyTrack : FTTTrackBase {
	struct FName PropertyName; 
};

// ScriptStruct Engine.TTLinearColorTrack
struct FTTLinearColorTrack : FTTPropertyTrack {
	struct UCurveLinearColor* CurveLinearColor; 
};

// ScriptStruct Engine.TTVectorTrack
struct FTTVectorTrack : FTTPropertyTrack {
	struct UCurveVector* CurveVector; 
};

// ScriptStruct Engine.TTFloatTrack
struct FTTFloatTrack : FTTPropertyTrack {
	struct UCurveFloat* CurveFloat; 
};

// ScriptStruct Engine.TTEventTrack
struct FTTEventTrack : FTTTrackBase {
	struct FName FunctionName; 
	struct UCurveFloat* CurveKeys; 
};

// ScriptStruct Engine.TTTrackId
struct FTTTrackId {
	int32_t TrackType; 
	int32_t TrackIndex; 
};

// ScriptStruct Engine.TimeStretchCurveInstance
struct FTimeStretchCurveInstance {
	bool bHasValidData; 
};

// ScriptStruct Engine.TimeStretchCurve
struct FTimeStretchCurve {
	float SamplingRate; 
	float CurveValueMinPrecision; 
	struct TArray<struct FTimeStretchCurveMarker> Markers; 
	float Sum_dT_i_by_C_i[0x3]; 
};

// ScriptStruct Engine.TimeStretchCurveMarker
struct FTimeStretchCurveMarker {
	float Time[0x3]; 
	float Alpha; 
};

// ScriptStruct Engine.TouchInputControl
struct FTouchInputControl {
	struct UTexture2D* Image1; 
	struct UTexture2D* Image2; 
	struct FVector2D Center; 
	struct FVector2D VisualSize; 
	struct FVector2D ThumbSize; 
	struct FVector2D InteractionSize; 
	struct FVector2D InputScale; 
	struct FKey MainInputKey; 
	struct FKey AltInputKey; 
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
struct FUpdateLevelVisibilityLevelInfo {
	struct FName PackageName; 
	struct FName Filename; 
	char bIsVisible : 1; 
};

// ScriptStruct Engine.HardwareCursorReference
struct FHardwareCursorReference {
	struct FName CursorPath; 
	struct FVector2D HotSpot; 
};

// ScriptStruct Engine.VirtualTextureBuildSettings
struct FVirtualTextureBuildSettings {
	int32_t TileSize; 
	int32_t TileBorderSize; 
	bool bEnableCompressCrunch; 
	bool bEnableCompressZlib; 
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; 
	int32_t MaxTileSize; 
	struct TArray<enum class EPixelFormat> Formats; 
	int32_t SizeInMegabyte; 
	bool bAllowSizeScale; 
	uint32_t ScalabilityGroup; 
};

// ScriptStruct Engine.VoiceSettings
struct FVoiceSettings {
	struct USceneComponent* ComponentToAttachTo; 
	struct USoundAttenuation* AttenuationSettings; 
	struct USoundEffectSourcePresetChain* SourceEffectChain; 
};

// ScriptStruct Engine.StreamingLevelsToConsider
struct FStreamingLevelsToConsider {
	struct TArray<struct ULevelStreaming*> StreamingLevels; 
};

// ScriptStruct Engine.LevelCollection
struct FLevelCollection {
	struct AGameStateBase* GameState; 
	struct UNetDriver* NetDriver; 
	struct UDemoNetDriver* DemoNetDriver; 
	struct ULevel* PersistentLevel; 
	struct TSet<struct ULevel*> Levels; 
};

// ScriptStruct Engine.EndPhysicsTickFunction
struct FEndPhysicsTickFunction : FTickFunction {
};

// ScriptStruct Engine.StartPhysicsTickFunction
struct FStartPhysicsTickFunction : FTickFunction {
};

// ScriptStruct Engine.LevelViewportInfo
struct FLevelViewportInfo {
	struct FVector CamPosition; 
	struct FRotator CamRotation; 
	float CamOrthoZoom; 
	bool CamUpdated; 
};

// ScriptStruct Engine.WorldPSCPool
struct FWorldPSCPool {
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; 
};

// ScriptStruct Engine.PSCPool
struct FPSCPool {
	struct TArray<struct FPSCPoolElem> FreeElements; 
};

// ScriptStruct Engine.PSCPoolElem
struct FPSCPoolElem {
	struct UParticleSystemComponent* PSC; 
};

// ScriptStruct Engine.BroadphaseSettings
struct FBroadphaseSettings {
	bool bUseMBPOnClient; 
	bool bUseMBPOnServer; 
	bool bUseMBPOuterBounds; 
	struct FBox MBPBounds; 
	struct FBox MBPOuterBounds; 
	uint32_t MBPNumSubdivs; 
};

// ScriptStruct Engine.HierarchicalSimplification
struct FHierarchicalSimplification {
	float TransitionScreenSize; 
	float OverrideDrawDistance; 
	char bUseOverrideDrawDistance : 1; 
	char bAllowSpecificExclusion : 1; 
	char bSimplifyMesh : 1; 
	char bOnlyGenerateClustersForVolumes : 1; 
	char bReusePreviousLevelClusters : 1; 
	struct FMeshProxySettings ProxySetting; 
	struct FMeshMergingSettings MergeSetting; 
	float DesiredBoundRadius; 
	float DesiredFillingPercentage; 
	int32_t MinNumberOfActorsToBuild; 
};

// ScriptStruct Engine.NetViewer
struct FNetViewer {
	struct UNetConnection* Connection; 
	struct AActor* InViewer; 
	struct AActor* ViewTarget; 
	struct FVector ViewLocation; 
	struct FVector ViewDir; 
};

// ScriptStruct Engine.LightmassWorldInfoSettings
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; 
	int32_t NumIndirectLightingBounces; 
	int32_t NumSkyLightingBounces; 
	float IndirectLightingQuality; 
	float IndirectLightingSmoothness; 
	struct FColor EnvironmentColor; 
	float EnvironmentIntensity; 
	float EmissiveBoost; 
	float DiffuseBoost; 
	enum class EVolumeLightingMethod VolumeLightingMethod; 
	char bUseAmbientOcclusion : 1; 
	char bGenerateAmbientOcclusionMaterialMask : 1; 
	char bVisualizeMaterialDiffuse : 1; 
	char bVisualizeAmbientOcclusion : 1; 
	char bCompressLightmaps : 1; 
	float VolumetricLightmapDetailCellSize; 
	float VolumetricLightmapMaximumBrickMemoryMb; 
	float VolumetricLightmapSphericalHarmonicSmoothing; 
	float VolumeLightSamplePlacementScale; 
	float DirectIlluminationOcclusionFraction; 
	float IndirectIlluminationOcclusionFraction; 
	float OcclusionExponent; 
	float FullyOccludedSamplesFraction; 
	float MaxOcclusionDistance; 
};

