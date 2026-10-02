// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	AdditiveFromBase = 8,
	EMovieSceneBlendType_MAX = 9
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Enum MovieScene.EMovieSceneServerClientMask
enum class EMovieSceneServerClientMask : uint8 {
	None = 0,
	Server = 1,
	Client = 2,
	All = 3,
	EMovieSceneServerClientMask_MAX = 4
};

// Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8 {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 1,
	EMovieSceneSequenceFlags_MAX = 3
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	Stopped = 0,
	Playing = 1,
	Scrubbing = 2,
	Jumping = 3,
	Stepping = 4,
	Paused = 5,
	MAX = 6
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local = 0,
	Root = 1,
	Unused = 2,
	EMovieSceneObjectBindingSpace_MAX = 3
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8 {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// ScriptStruct MovieScene.MovieSceneChannel
struct FMovieSceneChannel {
};

// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; 
	char DefaultValue; 
	bool bHasDefaultValue; 
	struct TArray<char> Values; 
	struct UEnum* Enum; 
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class EMovieSceneCompletionMode CompletionMode; 
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; 
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	enum class ERichCurveExtrapolation PreInfinityExtrap; 
	enum class ERichCurveExtrapolation PostInfinityExtrap; 
	struct TArray<struct FFrameNumber> Times; 
	struct TArray<struct FMovieSceneFloatValue> Values; 
	float DefaultValue; 
	bool bHasDefaultValue; 
	struct FMovieSceneKeyHandleMap KeyHandles; 
	struct FFrameRate TickResolution; 
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable {
};

// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue {
	float Value; 
	struct FMovieSceneTangentData Tangent; 
	enum class ERichCurveInterpMode InterpMode; 
	enum class ERichCurveTangentMode TangentMode; 
	char PaddingByte; 
};

// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData {
	float ArriveTangent; 
	float LeaveTangent; 
	float ArriveTangentWeight; 
	float LeaveTangentWeight; 
	enum class ERichCurveTangentWeightMode TangentWeightMode; 
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; 
	bool DefaultValue; 
	bool bHasDefaultValue; 
	struct TArray<bool> Values; 
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; 
	int32_t DefaultValue; 
	bool bHasDefaultValue; 
	struct TArray<int32_t> Values; 
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData {
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand {
	struct FGuid ObjectBindingID; 
	struct FMovieSceneSequenceID SequenceID; 
};

// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID {
	uint32_t Value; 
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; 
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData {
	struct FName PropertyName; 
	struct FString PropertyPath; 
};

// ScriptStruct MovieScene.MovieScenePropertyBinding
struct FMovieScenePropertyBinding {
	struct FName PropertyName; 
	struct FName PropertyPath; 
	bool bCanUseClassLookup; 
};

// ScriptStruct MovieScene.TrackInstanceInputComponent
struct FTrackInstanceInputComponent {
	struct UMovieSceneSection* Section; 
	int32_t OutputIndex; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct FMovieSceneEvaluationHookComponent {
	struct TScriptInterface<IMovieSceneEvaluationHook> Interface; 
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct FMovieSceneTrackInstanceComponent {
	struct UMovieSceneSection* Owner; 
	struct UMovieSceneTrackInstance* TrackInstanceClass; 
};

// ScriptStruct MovieScene.EasingComponentData
struct FEasingComponentData {
	struct UMovieSceneSection* Section; 
};

// ScriptStruct MovieScene.MovieSceneDeterminismData
struct FMovieSceneDeterminismData {
	struct TArray<struct FFrameTime> Fences; 
	bool bParentSequenceRequiresLowerFence; 
	bool bParentSequenceRequiresUpperFence; 
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup {
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; 
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs {
	struct TArray<struct FMovieSceneObjectBindingID> IDs; 
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID {
	struct FGuid Guid; 
	int32_t SequenceID; 
	int32_t ResolveParentIndex; 
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels {
	struct TArray<struct FString> Strings; 
};

// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; 
	struct TArray<struct FString> PinnedNodes; 
	double ViewStart; 
	double ViewEnd; 
	double WorkStart; 
	double WorkEnd; 
	struct TSet<struct FFrameNumber> MarkedFrames; 
	struct FFloatRange WorkingRange; 
	struct FFloatRange ViewRange; 
};

// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState {
	bool bExpanded; 
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame {
	struct FFrameNumber FrameNumber; 
	struct FString Label; 
	bool bIsDeterminismFence; 
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource {
	struct FTimecode Timecode; 
	struct FFrameNumber DeltaFrame; 
};

// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding {
	struct FGuid ObjectGuid; 
	struct FString BindingName; 
	struct TArray<struct UMovieSceneTrack*> Tracks; 
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID ObjectBindingID; 
	struct TWeakObjectPtr<struct UObject> Object; 
	bool bOverridesDefault; 
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType {
	enum class EMovieSceneBlendType BlendType; 
	bool bIsValid; 
};

// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct FMovieSceneCompiledSequenceFlagStruct {
	char bParentSequenceRequiresLowerFence : 1; 
	char bParentSequenceRequiresUpperFence : 1; 
};

// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; 
	char bEvaluationTemplate : 1; 
	char bEvaluationTemplateField : 1; 
	char bEntityComponentField : 1; 
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct FMovieSceneEntitySystemGraph {
	struct FMovieSceneEntitySystemGraphNodes Nodes; 
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct FMovieSceneEntitySystemGraphNodes {
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct FMovieSceneEntitySystemGraphNode {
	struct UMovieSceneEntitySystem* System; 
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr {
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct {
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField {
	struct TArray<struct FMovieSceneFrameRange> Ranges; 
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; 
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData {
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; 
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; 
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey {
	struct FMovieSceneEvaluationKey Key; 
	uint16_t SetupIndex; 
	uint16_t TearDownIndex; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey {
	struct FMovieSceneSequenceID SequenceID; 
	struct FMovieSceneTrackIdentifier TrackIdentifier; 
	uint32_t SectionIndex; 
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier {
	uint32_t Value; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup {
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; 
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; 
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT; 
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; 
	enum class ESectionEvaluationFlags Flags; 
	struct FFrameNumber ForcedTime; 
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct FMovieSceneFieldEntry_EvaluationTrack {
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr; 
	uint16_t NumChildren; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID SequenceID; 
	struct FMovieSceneTrackIdentifier TrackIdentifier; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; 
	int32_t NumEvalPtrs; 
};

// ScriptStruct MovieScene.MovieSceneFrameRange
struct FMovieSceneFrameRange {
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSegmentIdentifier SegmentID; 
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; 
};

// ScriptStruct MovieScene.MovieSceneEntityComponentField
struct FMovieSceneEntityComponentField {
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; 
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; 
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities; 
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; 
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	struct FGuid ObjectBindingID; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct FMovieSceneEvaluationFieldEntityMetaData {
	struct FString OverrideBoundPropertyPath; 
	struct FFrameNumber ForcedTime; 
	enum class ESectionEvaluationFlags Flags; 
	char bEvaluateInSequencePreRoll : 1; 
	char bEvaluateInSequencePostRoll : 1; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct FMovieSceneEvaluationFieldEntity {
	struct FMovieSceneEvaluationFieldEntityKey Key; 
	int32_t SharedMetaDataIndex; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct FMovieSceneEvaluationFieldEntityKey {
	struct TWeakObjectPtr<struct UObject> EntityOwner; 
	uint32_t EntityID; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct FMovieSceneEvaluationFieldEntityTree {
};

// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct FMovieSceneEvaluationInstanceKey {
};

// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct FMovieSceneEvaluationHookEventContainer {
	struct TArray<struct FMovieSceneEvaluationHookEvent> Events; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct FMovieSceneEvaluationHookEvent {
	struct FMovieSceneEvaluationHookComponent Hook; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate {
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; 
	struct FGuid SequenceSignature; 
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; 
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; 
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger {
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; 
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; 
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; 
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack {
	struct FGuid ObjectBindingID; 
	uint16_t EvaluationPriority; 
	enum class EEvaluationMethod EvaluationMethod; 
	struct TWeakObjectPtr<struct UMovieSceneTrack> SourceTrack; 
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; 
	struct FMovieSceneTrackImplementationPtr TrackTemplate; 
	struct FName EvaluationGroup; 
	char bEvaluateInPreroll : 1; 
	char bEvaluateInPostroll : 1; 
	char bTearDownPriority : 1; 
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr {
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData {
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; 
	struct FGuid ObjectBindingID; 
	enum class ESectionEvaluationFlags Flags; 
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance {
	struct TWeakObjectPtr<struct UMovieSceneSequence> WeakRootSequence; 
	struct UMovieSceneCompiledDataManager* CompiledDataManager; 
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker; 
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; 
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct {
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	struct FFrameNumber Time; 
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct FGeneratedMovieSceneKeyStruct {
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	struct UObject* PropertyClass; 
	struct TArray<struct FFrameNumber> Times; 
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; 
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; 
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue {
	struct TSoftObjectPtr<UObject> SoftPtr; 
	struct UObject* HardPtr; 
};

// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable {
	struct TArray<struct FName> Tags; 
	struct FGuid Guid; 
	struct FString Name; 
	struct UObject* PossessedObjectClass; 
	struct FGuid ParentGuid; 
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; 
	int32_t AutoEaseOutDuration; 
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; 
	bool bManualEaseIn; 
	int32_t ManualEaseInDuration; 
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; 
	bool bManualEaseOut; 
	int32_t ManualEaseOutDuration; 
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; 
	enum class EMovieSceneCompletionMode CompletionMode; 
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters {
	struct FFrameNumber StartFrameOffset; 
	bool bCanLoop; 
	struct FFrameNumber EndFrameOffset; 
	struct FFrameNumber FirstLoopStartFrameOffset; 
	float TimeScale; 
	int32_t HierarchicalBias; 
	float StartOffset; 
	float PrerollTime; 
	float PostrollTime; 
};

// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment {
};

// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData {
	int32_t ImplIndex; 
	struct FFrameNumber ForcedTime; 
	enum class ESectionEvaluationFlags Flags; 
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy {
	struct FMovieSceneSequenceHierarchyNode RootNode; 
	struct FMovieSceneSubSequenceTree Tree; 
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; 
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; 
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID ParentID; 
	struct TArray<struct FMovieSceneSequenceID> Children; 
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData {
	struct FSoftObjectPath Sequence; 
	struct FMovieSceneSequenceTransform OuterToInnerTransform; 
	struct FMovieSceneSequenceTransform RootToSequenceTransform; 
	struct FFrameRate TickResolution; 
	struct FMovieSceneSequenceID DeterministicSequenceID; 
	struct FMovieSceneFrameRange ParentPlayRange; 
	struct FFrameNumber ParentStartFrameOffset; 
	struct FFrameNumber ParentEndFrameOffset; 
	struct FFrameNumber ParentFirstLoopStartFrameOffset; 
	bool bCanLoop; 
	struct FMovieSceneFrameRange PlayRange; 
	struct FMovieSceneFrameRange FullPlayRange; 
	struct FMovieSceneFrameRange UnwarpedPlayRange; 
	struct FMovieSceneFrameRange PreRollRange; 
	struct FMovieSceneFrameRange PostRollRange; 
	int16_t HierarchicalBias; 
	bool bHasHierarchicalEasing; 
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; 
	struct FGuid SubSectionSignature; 
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr {
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; 
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; 
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; 
	struct FMovieSceneTimeWarping Warping; 
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping {
	struct FFrameNumber Start; 
	struct FFrameNumber End; 
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform {
	float TimeScale; 
	struct FFrameTime Offset; 
};

// ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct FMovieSceneSubSequenceTree {
};

// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct FMovieSceneSubSequenceTreeEntry {
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct FMovieSceneSequencePlaybackParams {
	struct FFrameTime Frame; 
	float Time; 
	struct FString MarkedFrame; 
	enum class EMovieScenePositionType PositionType; 
	enum class EUpdatePositionMethod UpdateMethod; 
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; 
	struct FMovieSceneSequenceLoopCount LoopCount; 
	float PlayRate; 
	float StartTime; 
	char bRandomStartTime : 1; 
	char bRestoreState : 1; 
	char bDisableMovementInput : 1; 
	char bDisableLookAtInput : 1; 
	char bHidePlayer : 1; 
	char bHideHud : 1; 
	char bDisableCameraCuts : 1; 
	char bPauseAtEnd : 1; 
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount {
	int32_t Value; 
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties {
	struct FFrameTime LastKnownPosition; 
	enum class EMovieScenePlayerStatus LastKnownStatus; 
	int32_t LastKnownNumLoops; 
};

// ScriptStruct MovieScene.MovieSceneSequenceActorPointers
struct FMovieSceneSequenceActorPointers {
	struct AActor* SequenceActor; 
	struct TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface; 
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter {
	struct TArray<uint32_t> WarpCounts; 
};

// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable {
	struct FTransform SpawnTransform; 
	struct TArray<struct FName> Tags; 
	bool bContinuouslyRespawn; 
	bool bNetAddressableName; 
	bool bEvaluateTracksWhenNotSpawned; 
	struct FGuid Guid; 
	struct FString Name; 
	struct UObject* ObjectTemplate; 
	struct TArray<struct FGuid> ChildPossessables; 
	enum class ESpawnOwnership Ownership; 
	struct FName LevelName; 
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; 
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; 
	char bEvalNearestSection : 1; 
	char bEvaluateInPreroll : 1; 
	char bEvaluateInPostroll : 1; 
	char bEvaluateNearestSection : 1; 
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct FMovieSceneTrackEvaluationField {
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries; 
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct FMovieSceneTrackEvaluationFieldEntry {
	struct UMovieSceneSection* Section; 
	struct FFrameNumberRange Range; 
	struct FFrameNumber ForcedTime; 
	enum class ESectionEvaluationFlags Flags; 
	int16_t LegacySortOrder; 
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct FMovieSceneTrackInstanceInput {
	struct UMovieSceneSection* Section; 
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct FMovieSceneTrackInstanceEntry {
	struct UObject* BoundObject; 
	struct UMovieSceneTrackInstance* TrackInstance; 
};

