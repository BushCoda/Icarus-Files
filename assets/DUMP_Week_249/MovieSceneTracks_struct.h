// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; 
	struct TArray<struct FBoolParameterNameAndCurve> Bools; 
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; 
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; 
	struct TArray<struct FColorParameterNameAndCurves> Colors; 
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; 
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; 
	struct FMovieSceneFloatChannel Translation[0x3]; 
	struct FMovieSceneFloatChannel Rotation[0x3]; 
	struct FMovieSceneFloatChannel Scale[0x3]; 
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves {
	struct FName ParameterName; 
	struct FMovieSceneFloatChannel RedCurve; 
	struct FMovieSceneFloatChannel GreenCurve; 
	struct FMovieSceneFloatChannel BlueCurve; 
	struct FMovieSceneFloatChannel AlphaCurve; 
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; 
	struct FMovieSceneFloatChannel XCurve; 
	struct FMovieSceneFloatChannel YCurve; 
	struct FMovieSceneFloatChannel ZCurve; 
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; 
	struct FMovieSceneFloatChannel XCurve; 
	struct FMovieSceneFloatChannel YCurve; 
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; 
	struct FMovieSceneBoolChannel ParameterCurve; 
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; 
	struct FMovieSceneFloatChannel ParameterCurve; 
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; 
	struct TArray<struct FString> Values; 
	struct FString DefaultValue; 
	bool bHasDefaultValue; 
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; 
	struct FMovieSceneFloatChannel TimingCurve; 
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; 
	enum class MovieScene3DPathSection_Axis UpAxisEnum; 
	char bFollow : 1; 
	char bReverse : 1; 
	char bForceUpright : 1; 
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask {
	uint32_t Mask; 
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; 
	struct FRotator Rotation; 
	struct FVector Scale; 
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; 
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; 
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; 
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; 
	struct FMovieSceneActorReferenceKey DefaultValue; 
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; 
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; 
	struct FName ComponentName; 
	struct FName SocketName; 
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; 
	struct FMovieSceneActorReferenceData ActorReferenceData; 
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection* AudioSection; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; 
	float PlayRate; 
	float PlayScale; 
	float BlendInTime; 
	float BlendOutTime; 
	bool bLooping; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; 
	struct FFrameNumber SectionStartTime; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData {
	struct UCameraShakeBase* ShakeClass; 
	float PlayScale; 
	enum class ECameraShakePlaySpace PlaySpace; 
	struct FRotator UserDefinedPlaySpace; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; 
	struct FFrameNumber SectionStartTime; 
	struct FFrameNumber SectionEndTime; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; 
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct FMovieSceneCameraShakeSourceTrigger {
	struct UCameraShakeBase* ShakeClass; 
	float PlayScale; 
	enum class ECameraShakePlaySpace PlaySpace; 
	struct FRotator UserDefinedPlaySpace; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FFrameNumber> TriggerTimes; 
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues; 
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; 
	struct FFrameNumber SectionStartTime; 
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; 
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[0x4]; 
	enum class EMovieSceneBlendType BlendType; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs {
	struct UFunction* Function; 
	struct TFieldPath<FProperty> BoundObjectProperty; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable {
	struct FString Value; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; 
	struct TArray<struct FMovieSceneEvent> KeyValues; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; 
	struct TArray<struct FEventPayload> KeyValues; 
};

// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload {
	struct FName EventName; 
	struct FMovieSceneEventParameters Parameters; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters {
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct FMovieSceneEventTriggerData {
	struct FMovieSceneEventPtrs Ptrs; 
	struct FGuid ObjectBindingID; 
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneEventSectionData EventData; 
	char bFireEventsWhenForwards : 1; 
	char bFireEventsWhenBackwards : 1; 
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; 
	struct FLinearColor FadeColor; 
	char bFadeAudio : 1; 
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection* MPC; 
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; 
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; 
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; 
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; 
	struct FMovieSceneObjectPathChannel MaterialChannel; 
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; 
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; 
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; 
	struct FFrameNumber FirstLoopStartFrameOffset; 
	struct FFrameNumber StartFrameOffset; 
	struct FFrameNumber EndFrameOffset; 
	float PlayRate; 
	char bReverse : 1; 
	struct FName SlotName; 
	struct FMovieSceneFloatChannel Weight; 
	bool bSkipAnimNotifiers; 
	bool bForceCustomMode; 
	float StartOffset; 
	float EndOffset; 
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; 
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; 
	struct FFrameNumber SectionEndTime; 
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams {
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; 
};

// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct FLevelVisibilityComponentData {
	struct UMovieSceneLevelVisibilitySection* Section; 
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; 
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector4 Vector; 
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; 
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; 
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

