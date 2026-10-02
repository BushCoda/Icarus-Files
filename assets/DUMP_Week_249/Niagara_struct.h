// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8 {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8 {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8 {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Enum Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8 {
	Perspective = 0,
	OrthoFront = 1,
	OrthoBack = 2,
	OrthoLeft = 3,
	OrthoRight = 4,
	OrthoTop = 5,
	OrthoBottom = 6,
	Num = 7,
	ENiagaraBakerViewMode_MAX = 8
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Enum Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8 {
	NoDebug = 0,
	Basic = 1,
	ENiagaraFunctionDebugState_MAX = 2
};

// Enum Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8 {
	None = 0,
	PendingSpawn = 1,
	PendingSpawnPaused = 2,
	Spawning = 3,
	Running = 4,
	Paused = 5,
	Num = 6,
	ENiagaraSystemInstanceState_MAX = 7
};

// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8 {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8 {
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};

// Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8 {
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6
};

// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8 {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2
};

// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8 {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8 {
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};

// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8 {
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8 {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8 {
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2
};

// Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8 {
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2
};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8 {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8 {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Enum Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8 {
	AutoDetect = 0,
	Precise = 1,
	Approximate = 2,
	Disable = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4
};

// Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8 {
	Precise = 0,
	Approximate = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8 {
	Value = 0,
	Binding = 1,
	Custom = 2,
	FailIfPreviouslyNotSet = 3,
	ENiagaraDefaultMode_MAX = 4
};

// Enum Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8 {
	Disabled = 0,
	PostStage = 1,
	PostSimulate = 2,
	ENiagaraMipMapGeneration_MAX = 3
};

// Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8 {
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3
};

// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8 {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8 {
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2
};

// Enum Niagara.ENDILandscape_SourceMode
enum class ENDILandscape_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDILandscape_MAX = 3
};

// Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8 {
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3
};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8 {
	Invalid = 255,
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2,
	ENDISkeletalMesh_MAX = 256
};

// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3
};

// Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8 {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4
};

// Enum Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8 {
	None = 0,
	Basic = 1,
	Verbose = 2,
	ENiagaraDebugHudVerbosity_MAX = 3
};

// Enum Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8 {
	Small = 0,
	Normal = 1,
	ENiagaraDebugHudFont_MAX = 2
};

// Enum Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8 {
	Top = 0,
	Center = 1,
	Bottom = 2,
	ENiagaraDebugHudVAlign_MAX = 3
};

// Enum Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	ENiagaraDebugHudHAlign_MAX = 3
};

// Enum Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8 {
	Play = 0,
	Loop = 1,
	Paused = 2,
	Step = 3,
	ENiagaraDebugPlaybackMode_MAX = 4
};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8 {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8 {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4
};

// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8 {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2
};

// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8 {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8 {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8 {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8 {
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};

// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8 {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8 {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8 {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8 {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8 {
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4
};

// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8 {
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2
};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8 {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8 {
	Plane = 0,
	MultiPlane = 1,
	Tube = 2,
	Custom = 3,
	ENiagaraRibbonShapeMode_MAX = 4
};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8 {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8 {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Enum Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8 {
	None = 0,
	Template = 1,
	Behavior = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3
};

// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8 {
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8 {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8 {
	Full = 0,
	Half = 1,
	ENDISkelMesh_MAX = 2
};

// Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8 {
	Full = 0,
	Limited_24_9 = 1,
	Limited_23_10 = 2,
	ENDISkelMesh_MAX = 3
};

// Enum Niagara.ENDISkelMesh_GpuMaxInfluences
enum class ENDISkelMesh_GpuMaxInfluences : uint8 {
	AllowMax4 = 0,
	AllowMax8 = 1,
	Unlimited = 2,
	ENDISkelMesh_MAX = 3
};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8 {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8 {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Enum Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ENiagaraOrientationAxis_MAX = 3
};

// Enum Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8 {
	None = 0,
	ScriptAsset = 1,
	DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3
};

// Enum Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8 {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraCoordinateSpace_MAX = 3
};

// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8 {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8 {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8 {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct FNiagaraVariable Parameter; 
};

// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase {
	struct FName Name; 
	struct FNiagaraTypeDefinitionHandle TypeDefHandle; 
};

// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; 
};

// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : FNiagaraVariableBase {
	struct TArray<char> VarData; 
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneBoolChannel BoolChannel; 
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel RedChannel; 
	struct FMovieSceneFloatChannel GreenChannel; 
	struct FMovieSceneFloatChannel BlueChannel; 
	struct FMovieSceneFloatChannel AlphaChannel; 
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel FloatChannel; 
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneIntegerChannel IntegerChannel; 
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	struct FFrameNumber SpawnSectionStartFrame; 
	struct FFrameNumber SpawnSectionEndFrame; 
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; 
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; 
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; 
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; 
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel VectorChannels[0x4]; 
	int32_t ChannelsUsed; 
};

// ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings {
	struct FName OutputName; 
	struct FNiagaraBakerTextureSource SourceBinding; 
	char bUseFrameSize : 1; 
	struct FIntPoint FrameSize; 
	struct FIntPoint TextureSize; 
	struct UTexture2D* GeneratedTexture; 
};

// ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource {
	struct FName SourceName; 
};

// ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState {
	float Significance; 
	char bCulled : 1; 
	char bPreviousCulled : 1; 
	char bCulledByDistance : 1; 
	char bCulledByInstanceCount : 1; 
	char bCulledByVisibility : 1; 
	char bCulledByGlobalBudget : 1; 
};

// ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency {
	struct FString LinkerErrorMessage; 
	struct FGuid NodeGuid; 
	struct FGuid PinGuid; 
	struct TArray<struct FGuid> StackGuids; 
	struct FNiagaraVariableBase DependentVariable; 
};

// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo {
	int32_t Seed1; 
	int32_t Seed2; 
	int32_t Seed3; 
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding {
	struct FNiagaraVariable Parameter; 
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding {
	struct FName Name; 
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding {
	struct FNiagaraVariable BoundVariable; 
};

// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding {
	struct FName MaterialParameterName; 
	struct FNiagaraVariableBase NiagaraVariable; 
	struct FNiagaraVariableBase ResolvedNiagaraVariable; 
	struct FNiagaraVariableBase NiagaraChildVariable; 
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding {
	struct FNiagaraVariableBase ParamMapVariable; 
	struct FNiagaraVariable DataSetVariable; 
	struct FNiagaraVariable RootVariable; 
	enum class ENiagaraBindingSource BindingSourceMode; 
	char bBindingExistsOnSource : 1; 
	char bIsCachedParticleValue : 1; 
};

// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo {
	struct FNiagaraVariable Variable; 
	struct FText Definition; 
	struct UNiagaraDataInterface* DataInterface; 
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext {
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; 
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; 
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy; 
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; 
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo {
	struct FName Name; 
	struct FName OwnerName; 
	struct TArray<bool> InputParamLocations; 
	int32_t NumOutputs; 
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; 
};

// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier {
	struct FName Key; 
	struct FName Value; 
};

// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope {
	struct FName FullName; 
	struct FName FriendlyName; 
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo {
	struct FName Name; 
	int32_t UserPtrIdx; 
	struct FNiagaraTypeDefinition Type; 
	struct FName RegisteredParameterMapRead; 
	struct FName RegisteredParameterMapWrite; 
	bool bIsPlaceholder; 
};

// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition {
	struct UObject* ClassStructOrEnum; 
	uint16_t UnderlyingType; 
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo {
	struct UNiagaraDataInterface* DataInterface; 
	struct FName Name; 
	int32_t UserPtrIdx; 
	struct FNiagaraTypeDefinition Type; 
	struct FName RegisteredParameterMapRead; 
	struct FName RegisteredParameterMapWrite; 
};

// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature {
	struct FName Name; 
	struct TArray<struct FNiagaraVariable> Inputs; 
	struct TArray<struct FNiagaraVariable> Outputs; 
	struct FName OwnerName; 
	char bRequiresContext : 1; 
	char bRequiresExecPin : 1; 
	char bMemberFunction : 1; 
	char bExperimental : 1; 
	char bSupportsCPU : 1; 
	char bSupportsGPU : 1; 
	char bWriteFunction : 1; 
	char bSoftDeprecatedFunction : 1; 
	char bIsCompileTagGenerator : 1; 
	char bHidden : 1; 
	int32_t ModuleUsageBitmask; 
	int32_t ContextStageMinIndex; 
	int32_t ContextStageMaxIndex; 
	struct TMap<struct FName, struct FName> FunctionSpecifiers; 
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; 
};

// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties {
	struct FNiagaraDataSetID ID; 
	struct TArray<struct FNiagaraVariable> Variables; 
};

// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID {
	struct FName Name; 
	enum class ENiagaraDataSetType Type; 
};

// ScriptStruct Niagara.NiagaraMaterialOverride
struct FNiagaraMaterialOverride {
	struct UMaterialInterface* Material; 
	uint32_t MaterialSubIndex; 
	struct UNiagaraRendererProperties* EmitterRendererProperty; 
};

// ScriptStruct Niagara.NCPool
struct FNCPool {
	struct TArray<struct FNCPoolElement> FreeElements; 
};

// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement {
	struct UNiagaraComponent* Component; 
};

// ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding {
	struct FNiagaraVariableAttributeBinding AttributeBinding; 
	struct FName PropertyName; 
	struct FNiagaraTypeDefinition PropertyType; 
	struct FName MetadataSetterName; 
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; 
	struct FNiagaraVariable WritableValue; 
};

// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
struct FNiagaraEmitterNameSettingsRef {
	struct FName SystemName; 
	struct FString EmitterName; 
};

// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData {
	struct FVector position; 
	float Size; 
	struct FVector Velocity; 
};

// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate {
	int32_t Tri; 
	struct FVector BaryCoord; 
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter {
	struct TArray<int32_t> AllowedMaterialSlots; 
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData {
	struct TArray<struct FNiagaraVariable> Variables; 
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; 
	struct FNiagaraDataSetID ID; 
	uint32_t TotalFloatComponents; 
	uint32_t TotalInt32Components; 
	uint32_t TotalHalfComponents; 
	char bRequiresPersistentIDs : 1; 
	enum class ENiagaraSimTarget SimTarget; 
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; 
	uint32_t Int32ComponentStart; 
	uint32_t HalfComponentStart; 
	struct FNiagaraTypeLayoutInfo LayoutInfo; 
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo {
	struct TArray<uint32_t> FloatComponentByteOffsets; 
	struct TArray<uint32_t> FloatComponentRegisterOffsets; 
	struct TArray<uint32_t> Int32ComponentByteOffsets; 
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; 
	struct TArray<uint32_t> HalfComponentByteOffsets; 
	struct TArray<uint32_t> HalfComponentRegisterOffsets; 
};

// ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo {
	struct TArray<struct FString> Systems; 
	struct TArray<struct FString> Actors; 
	struct TArray<struct FString> Components; 
	struct TArray<struct FString> Emitters; 
};

// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings {
	bool bTriggerCapture; 
	uint32_t CaptureDelayFrames; 
	bool bGatherPerfData; 
};

// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage {
};

// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData {
	bool bEnabled; 
	bool bValidateSystemSimulationDataBuffers; 
	bool bValidateParticleDataBuffers; 
	bool bOverviewEnabled; 
	enum class ENiagaraDebugHudFont OverviewFont; 
	struct FVector2D OverviewLocation; 
	struct FString ActorFilter; 
	bool bComponentFilterEnabled; 
	struct FString ComponentFilter; 
	bool bSystemFilterEnabled; 
	struct FString SystemFilter; 
	bool bEmitterFilterEnabled; 
	struct FString EmitterFilter; 
	bool bActorFilterEnabled; 
	enum class ENiagaraDebugHudVerbosity SystemDebugVerbosity; 
	enum class ENiagaraDebugHudVerbosity SystemEmitterVerbosity; 
	bool bSystemShowBounds; 
	bool bSystemShowActiveOnlyInWorld; 
	bool bShowSystemVariables; 
	struct TArray<struct FNiagaraDebugHUDVariable> SystemVariables; 
	struct FNiagaraDebugHudTextOptions SystemTextOptions; 
	bool bShowParticleVariables; 
	bool bEnableGpuParticleReadback; 
	struct TArray<struct FNiagaraDebugHUDVariable> ParticlesVariables; 
	struct FNiagaraDebugHudTextOptions ParticleTextOptions; 
	bool bShowParticlesVariablesWithSystem; 
	bool bUseMaxParticlesToDisplay; 
	int32_t MaxParticlesToDisplay; 
	enum class ENiagaraDebugPlaybackMode PlaybackMode; 
	bool bPlaybackRateEnabled; 
	float PlaybackRate; 
	bool bLoopTimeEnabled; 
	float LoopTime; 
	bool bShowGlobalBudgetInfo; 
};

// ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions {
	enum class ENiagaraDebugHudFont Font; 
	enum class ENiagaraDebugHudHAlign HorizontalAlignment; 
	enum class ENiagaraDebugHudVAlign VerticalAlignment; 
	struct FVector2D ScreenOffset; 
};

// ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable {
	bool bEnabled; 
	struct FString Name; 
};

// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate {
	struct FNiagaraOutlinerData OutlinerData; 
};

// ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData {
	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData; 
};

// ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData {
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems; 
	bool bHasBegunPlay; 
	char WorldType; 
	char NetMode; 
	struct FNiagaraOutlinerTimingData AveragePerFrameTime; 
	struct FNiagaraOutlinerTimingData MaxPerFrameTime; 
};

// ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData {
	float GameThread; 
	float RenderThread; 
};

// ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData {
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances; 
	struct FNiagaraOutlinerTimingData AveragePerFrameTime; 
	struct FNiagaraOutlinerTimingData MaxPerFrameTime; 
	struct FNiagaraOutlinerTimingData AveragePerInstanceTime; 
	struct FNiagaraOutlinerTimingData MaxPerInstanceTime; 
};

// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData {
	struct FString ComponentName; 
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters; 
	enum class ENiagaraExecutionState ActualExecutionState; 
	enum class ENiagaraExecutionState RequestedExecutionState; 
	struct FNiagaraScalabilityState ScalabilityState; 
	char bPendingKill : 1; 
	enum class ENCPoolMethod PoolMethod; 
	struct FNiagaraOutlinerTimingData AverageTime; 
	struct FNiagaraOutlinerTimingData MaxTime; 
};

// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData {
	struct FString EmitterName; 
	enum class ENiagaraSimTarget SimTarget; 
	enum class ENiagaraExecutionState ExecState; 
	int32_t NumParticles; 
};

// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand {
	struct FString Command; 
	bool bRequiresWorld; 
};

// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed {
	struct FGuid SessionId; 
	struct FGuid InstanceId; 
};

// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection {
	struct FGuid SessionId; 
	struct FGuid InstanceId; 
};

// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection {
	struct FGuid SessionId; 
	struct FGuid InstanceId; 
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings {
	struct FVector2D Location; 
	float Zoom; 
	bool bIsValid; 
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides {
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; 
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; 
	char bScaleSpawnCount : 1; 
	float SpawnCountScale; 
};

// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; 
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; 
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions; 
};

// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition {
	struct FName CVarName; 
	bool Value; 
	int32_t MinInt; 
	int32_t MaxInt; 
	float MinFloat; 
	float MaxFloat; 
	char bUseMinInt : 1; 
	char bUseMaxInt : 1; 
	char bUseMinFloat : 1; 
	char bUseMaxFloat : 1; 
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry {
	struct FName ProfileName; 
	uint32_t QualityLevelMask; 
	uint32_t SetQualityLevelMask; 
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; 
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray {
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; 
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides {
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; 
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; 
	char bCullByDistance : 1; 
	char bCullMaxInstanceCount : 1; 
	char bCullPerSystemMaxInstanceCount : 1; 
	char bCullByMaxTimeWithoutRender : 1; 
	char bCullByGlobalBudget : 1; 
	float MaxDistance; 
	int32_t MaxInstances; 
	int32_t MaxSystemInstances; 
	float MaxTimeWithoutRender; 
	float MaxGlobalBudgetUsage; 
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; 
	char bOverrideInstanceCountSettings : 1; 
	char bOverridePerSystemInstanceCountSettings : 1; 
	char bOverrideTimeSinceRendererSettings : 1; 
	char bOverrideGlobalBudgetCullingSettings : 1; 
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray {
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; 
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides {
	float Low; 
	float Medium; 
	float High; 
	float Epic; 
	float Cine; 
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties {
	struct UNiagaraScript* Script; 
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; 
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; 
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; 
	struct FName ID; 
	struct FNiagaraDataSetCompiledData DataSetCompiledData; 
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties {
	struct FName Name; 
	struct FName SourceEventGenerator; 
	struct FName SourceEmitter; 
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	enum class EScriptExecutionMode ExecutionMode; 
	uint32_t SpawnNumber; 
	uint32_t MaxEventsPerFrame; 
	struct FGuid SourceEmitterID; 
	struct FName SourceEventName; 
	bool bRandomSpawnNumber; 
	uint32_t MinSpawnNumber; 
};

// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle {
	struct FGuid ID; 
	struct FName IdName; 
	bool bIsEnabled; 
	struct FName Name; 
	struct UNiagaraEmitter* Instance; 
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload {
	struct FVector CollisionPos; 
	struct FVector CollisionNormal; 
	struct FVector CollisionVelocity; 
	int32_t ParticleIndex; 
	int32_t PhysicalMaterialIndex; 
};

// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties {
	struct UStaticMesh* Mesh; 
	struct FVector Scale; 
	struct FVector PivotOffset; 
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; 
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride {
	struct UMaterialInterface* ExplicitMat; 
	struct FNiagaraUserParameterBinding UserParamBinding; 
};

// ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription {
};

// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters {
	struct TArray<struct FNiagaraVariable> Parameters; 
};

// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore {
	struct UObject* Owner; 
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; 
	struct TArray<char> ParameterData; 
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; 
	struct TArray<struct UObject*> UObjects; 
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; 
};

// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter {
	struct FNiagaraVariable Parameter; 
	int32_t SrcOffset; 
	int32_t DestOffset; 
};

// ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats {
	float PerInstanceAvg_GT; 
	float PerInstanceAvg_RT; 
	float PerInstanceMax_GT; 
	float PerInstanceMax_RT; 
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; 
	int32_t SetBIndex; 
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; 
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry {
	struct FName ProfileName; 
	int32_t QualityLevelMask; 
};

// ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings {
	enum class ENiagaraRibbonUVDistributionMode DistributionMode; 
	enum class ENiagaraRibbonUVEdgeMode LeadingEdgeMode; 
	enum class ENiagaraRibbonUVEdgeMode TrailingEdgeMode; 
	float TilingLength; 
	struct FVector2D Offset; 
	struct FVector2D Scale; 
	bool bEnablePerParticleUOverride; 
	bool bEnablePerParticleVRangeOverride; 
};

// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex {
	struct FVector2D position; 
	struct FVector2D Normal; 
	float TextureV; 
};

// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager {
	struct UNiagaraEffectType* EffectType; 
	struct TArray<struct UNiagaraComponent*> ManagedComponents; 
};

// ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData {
};

// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData {
	struct TArray<char> ByteCode; 
	struct TArray<char> OptimizedByteCode; 
	int32_t NumTempRegisters; 
	int32_t NumUserPtrs; 
	struct TArray<struct FNiagaraCompilerTag> CompileTags; 
	struct TArray<char> ScriptLiterals; 
	struct TArray<struct FNiagaraVariable> Attributes; 
	struct FNiagaraScriptDataUsageInfo DataUsage; 
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; 
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; 
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; 
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; 
	struct TArray<struct FNiagaraStatScope> StatScopes; 
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; 
	enum class ENiagaraScriptCompileStatus LastCompileStatus; 
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; 
	char bReadsSignificanceIndex : 1; 
	char bNeedsGPUContextInit : 1; 
};

// ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag {
	struct FNiagaraVariable Variable; 
	struct FString StringValue; 
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId {
	struct FGuid CompilerVersionID; 
	enum class ENiagaraScriptUsage ScriptUsageType; 
	struct FGuid ScriptUsageTypeID; 
	char bUsesRapidIterationParams : 1; 
	char bInterpolatedSpawn : 1; 
	char bRequiresPersistentIDs : 1; 
	struct FGuid BaseScriptID; 
	struct FNiagaraCompileHash BaseScriptCompileHash; 
	struct FGuid ScriptVersionID; 
};

// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency {
	struct FName ID; 
	enum class ENiagaraModuleDependencyType Type; 
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; 
	struct FText Description; 
};

// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore {
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; 
	uint32_t PaddedParameterSize; 
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; 
	char bInitialized : 1; 
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; 
	uint16_t DestOffset; 
	uint16_t SrcSize; 
	uint16_t DestSize; 
};

// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight {
	struct FLinearColor Color; 
	struct FText DisplayName; 
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest {
	struct TArray<struct UObject*> RootObjects; 
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair {
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData {
	struct FNiagaraParameterStore InstanceParamStore; 
	struct FNiagaraDataSetCompiledData DataSetCompiledData; 
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; 
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; 
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; 
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; 
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; 
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; 
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; 
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; 
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; 
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; 
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection {
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; 
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; 
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; 
	int32_t DataSetComponentOffset; 
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData {
	struct TArray<struct FName> SpawnAttributes; 
	struct FNiagaraVariable EmitterSpawnIntervalVar; 
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; 
	struct FNiagaraVariable EmitterSpawnGroupVar; 
	struct FNiagaraVariable EmitterAgeVar; 
	struct FNiagaraVariable EmitterRandomSeedVar; 
	struct FNiagaraVariable EmitterInstanceSeedVar; 
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; 
	struct FNiagaraDataSetCompiledData DataSetCompiledData; 
};

// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData {
	struct FText Description; 
	struct FText CategoryName; 
	bool bAdvancedDisplay; 
	int32_t EditorSortPriority; 
	bool bInlineEditConditionToggle; 
	struct FNiagaraInputConditionMetadata EditCondition; 
	struct FNiagaraInputConditionMetadata VisibleCondition; 
	struct TMap<struct FName, struct FString> PropertyMetaData; 
	struct FName ParentAttribute; 
	struct FGuid VariableGuid; 
	bool bIsStaticSwitch; 
	int32_t StaticSwitchDefaultValue; 
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata {
	struct FName InputName; 
	struct TArray<struct FString> TargetValues; 
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo {
	struct FString Object; 
	struct TArray<struct FString> PropertyKeys; 
	struct TArray<struct FString> PropertyValues; 
};

// ScriptStruct Niagara.NiagaraID
struct FNiagaraID {
	int32_t Index; 
	int32_t AcquireTag; 
};

// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo {
	int32_t Count; 
	float InterpStartDt; 
	float IntervalDt; 
	int32_t SpawnGroup; 
};

// ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion {
	int32_t MajorVersion; 
	int32_t MinorVersion; 
	struct FGuid VersionGuid; 
	bool bIsVisibleInVersionSelector; 
};

// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix {
	struct FVector4 Row0; 
	struct FVector4 Row1; 
	struct FVector4 Row2; 
	struct FVector4 Row3; 
};

// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap {
};

// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric {
};

// ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4 {
	uint16_t X; 
	uint16_t Y; 
	uint16_t Z; 
	uint16_t W; 
};

// ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3 {
	uint16_t X; 
	uint16_t Y; 
	uint16_t Z; 
};

// ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2 {
	uint16_t X; 
	uint16_t Y; 
};

// ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf {
	uint16_t Value; 
};

// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool {
	int32_t Value; 
};

// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32 {
	int32_t Value; 
};

// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat {
	float Value; 
};

// ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard {
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; 
};

// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant {
	struct UObject* Object; 
	struct UNiagaraDataInterface* DataInterface; 
	struct TArray<char> Bytes; 
	enum class ENiagaraVariantMode CurrentMode; 
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : FTickFunction {
};

