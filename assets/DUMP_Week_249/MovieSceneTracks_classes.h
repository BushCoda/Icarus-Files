// Class MovieSceneTracks.MovieSceneParameterSection
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; 
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; 
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; 
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; 
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; 
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; 

	bool RemoveVectorParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	bool RemoveVector2DParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	bool RemoveTransformParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	bool RemoveScalarParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	bool RemoveColorParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	bool RemoveBoolParameter(struct FName InParameterName); // (Final|Native|Public|BlueprintCallable)
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; 
	struct FMovieScenePropertyBinding PropertyBinding; 
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
struct UMovieSceneCameraShakeEvaluator : UObject {
};

// Class MovieSceneTracks.ByteChannelEvaluatorSystem
struct UByteChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};

// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
struct UIntegerChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; 
	struct FMovieSceneObjectBindingID ConstraintBindingID; 

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneTracks.MovieScene3DAttachSection
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; 
	struct FName AttachComponentName; 
	enum class EAttachmentRule AttachmentLocationRule; 
	enum class EAttachmentRule AttachmentRotationRule; 
	enum class EAttachmentRule AttachmentScaleRule; 
	enum class EDetachmentRule DetachmentLocationRule; 
	enum class EDetachmentRule DetachmentRotationRule; 
	enum class EDetachmentRule DetachmentScaleRule; 
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; 
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; 
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; 
	enum class MovieScene3DPathSection_Axis UpAxisEnum; 
	char bFollow : 1; 
	char bReverse : 1; 
	char bForceUpright : 1; 
};

// Class MovieSceneTracks.MovieScene3DPathTrack
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScenePropertySystem
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; 
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
struct UMovieScene3DTransformSection : UMovieSceneSection {
	struct FMovieSceneTransformMask TransformMask; 
	struct FMovieSceneFloatChannel Translation[0x3]; 
	struct FMovieSceneFloatChannel Rotation[0x3]; 
	struct FMovieSceneFloatChannel Scale[0x3]; 
	struct FMovieSceneFloatChannel ManualWeight; 
	bool bUseQuaternionInterpolation; 
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; 
	struct FIntegralCurve ActorGuidIndexCurve; 
	struct TArray<struct FString> ActorGuidStrings; 
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneAudioSection
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; 
	struct FFrameNumber StartFrameOffset; 
	float StartOffset; 
	float AudioStartTime; 
	float AudioDilationFactor; 
	float AudioVolume; 
	struct FMovieSceneFloatChannel SoundVolume; 
	struct FMovieSceneFloatChannel PitchMultiplier; 
	struct FMovieSceneActorReferenceData AttachActorData; 
	bool bLooping; 
	bool bSuppressSubtitles; 
	bool bOverrideAttenuation; 
	struct USoundAttenuation* AttenuationSettings; 
	struct FDelegate OnQueueSubtitles; 
	struct FMulticastInlineDelegate OnAudioFinished; 
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; 

	void SetStartOffset(struct FFrameNumber InStartOffset); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetSound(struct USoundBase* InSound); // (Final|Native|Public|BlueprintCallable)
	struct FFrameNumber GetStartOffset(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct USoundBase* GetSound(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; 
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolPropertySystem
struct UMovieSceneBoolPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneBytePropertySystem
struct UMovieSceneBytePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneByteSection
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; 
};

// Class MovieSceneTracks.MovieSceneByteTrack
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; 
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; 
	struct UCameraAnim* CameraAnim; 
	float PlayRate; 
	float PlayScale; 
	float BlendInTime; 
	float BlendOutTime; 
	bool bLooping; 
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; 
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; 
	struct FGuid CameraGuid; 
	struct FMovieSceneObjectBindingID CameraBindingID; 
	struct FTransform InitialCameraCutTransform; 
	bool bHasInitialCameraCutTransform; 

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; 
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; 
	struct UCameraShakeBase* ShakeClass; 
	float PlayScale; 
	enum class ECameraShakePlaySpace PlaySpace; 
	struct FRotator UserDefinedPlaySpace; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; 
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; 
	struct FText DisplayName; 

	void SetShotDisplayName(struct FString InShotDisplayName); // (Final|Native|Public|BlueprintCallable)
	struct FString GetShotDisplayName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorPropertySystem
struct UMovieSceneColorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneColorSection
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; 
	struct FMovieSceneFloatChannel GreenCurve; 
	struct FMovieSceneFloatChannel BlueCurve; 
	struct FMovieSceneFloatChannel AlphaCurve; 
};

// Class MovieSceneTracks.MovieSceneColorTrack
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; 
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
struct UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneEnumPropertySystem
struct UMovieSceneEnumPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumSection
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; 
};

// Class MovieSceneTracks.MovieSceneEnumTrack
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; 
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEvent Event; 
};

// Class MovieSceneTracks.MovieSceneEventSection
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; 
	struct FMovieSceneEventSectionData EventData; 
};

// Class MovieSceneTracks.MovieSceneEventSystem
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneEventTrack
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; 
	char bFireEventsWhenBackwards : 1; 
	enum class EFireEventsAtPosition EventPosition; 
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEventChannel EventChannel; 
};

// Class MovieSceneTracks.MovieSceneFadeSection
struct UMovieSceneFadeSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; 
	struct FLinearColor FadeColor; 
	char bFadeAudio : 1; 
};

// Class MovieSceneTracks.MovieSceneFloatTrack
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatSection
struct UMovieSceneFloatSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; 
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneInitialValueSystem
struct UMovieSceneInitialValueSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
struct UMovieSceneIntegerPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; 
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class ELevelVisibility Visibility; 
	struct TArray<struct FName> LevelNames; 

	void SetVisibility(enum class ELevelVisibility InVisibility); // (Final|Native|Public|BlueprintCallable)
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	enum class ELevelVisibility GetVisibility(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FName> GetLevelNames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	struct UMaterialParameterCollection* MPC; 
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; 
};

// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
struct UMovieSceneMotionVectorSimulationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; 
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	struct UObject* PropertyClass; 
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieSceneTracks.MovieSceneParticleSection
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; 
};

// Class MovieSceneTracks.MovieSceneParticleTrack
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ParticleSections; 
};

// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
struct UMovieScenePiecewiseBoolBlenderSystem : UMovieSceneBlenderSystem {
};

// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
struct UMovieScenePiecewiseByteBlenderSystem : UMovieSceneBlenderSystem {
};

// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
struct UMovieScenePiecewiseEnumBlenderSystem : UMovieSceneBlenderSystem {
};

// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
struct UMovieScenePiecewiseFloatBlenderSystem : UMovieSceneBlenderSystem {
};

// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
struct UMovieScenePiecewiseIntegerBlenderSystem : UMovieSceneBlenderSystem {
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; 
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; 
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; 
	struct UAnimSequence* AnimSequence; 
	struct UAnimSequenceBase* Animation; 
	float StartOffset; 
	float EndOffset; 
	float PlayRate; 
	char bReverse : 1; 
	struct FName SlotName; 
	struct FVector StartLocationOffset; 
	struct FRotator StartRotationOffset; 
	bool bMatchWithPrevious; 
	struct FName MatchedBoneName; 
	struct FVector MatchedLocationOffset; 
	struct FRotator MatchedRotationOffset; 
	bool bMatchTranslation; 
	bool bMatchIncludeZHeight; 
	bool bMatchRotationYaw; 
	bool bMatchRotationPitch; 
	bool bMatchRotationRoll; 
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; 
	bool bUseLegacySectionIndexBlend; 
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; 
	bool bBlendFirstChildOfRoot; 
};

// Class MovieSceneTracks.MovieSceneSlomoSection
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; 
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneStringSection
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; 
};

// Class MovieSceneTracks.MovieSceneStringTrack
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorPropertySystem
struct UMovieSceneVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneVectorSection
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[0x4]; 
	int32_t ChannelsUsed; 
};

// Class MovieSceneTracks.MovieSceneVectorTrack
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; 
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
};

