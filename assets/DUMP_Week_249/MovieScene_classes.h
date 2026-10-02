// Class MovieScene.MovieSceneSignedObject
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; 
};

// Class MovieScene.MovieSceneSection
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; 
	struct FMovieSceneEasingSettings Easing; 
	struct FMovieSceneFrameRange SectionRange; 
	struct FFrameNumber PreRollFrames; 
	struct FFrameNumber PostRollFrames; 
	int32_t RowIndex; 
	int32_t OverlapPriority; 
	char bIsActive : 1; 
	char bIsLocked : 1; 
	float StartTime; 
	float EndTime; 
	float PrerollTime; 
	float PostrollTime; 
	char bIsInfinite : 1; 
	bool bSupportsInfiniteRange; 
	struct FOptionalMovieSceneBlendType BlendType; 

	void SetRowIndex(int32_t NewRowIndex); // (Final|Native|Public|BlueprintCallable)
	void SetPreRollFrames(int32_t InPreRollFrames); // (Final|Native|Public|BlueprintCallable)
	void SetPostRollFrames(int32_t InPostRollFrames); // (Final|Native|Public|BlueprintCallable)
	void SetOverlapPriority(int32_t NewPriority); // (Final|Native|Public|BlueprintCallable)
	void SetIsLocked(bool bInIsLocked); // (Final|Native|Public|BlueprintCallable)
	void SetIsActive(bool bInIsActive); // (Final|Native|Public|BlueprintCallable)
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // (Final|Native|Public|BlueprintCallable)
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // (RequiredAPI|Native|Public|BlueprintCallable)
	bool IsLocked(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsActive(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetRowIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPreRollFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPostRollFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetOverlapPriority(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EMovieSceneCompletionMode GetCompletionMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FOptionalMovieSceneBlendType GetBlendType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieScene.MovieSceneTrack
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; 
	bool bIsEvalDisabled; 
	struct TArray<int32_t> RowsDisabled; 
	struct FGuid EvaluationFieldGuid; 
	struct FMovieSceneTrackEvaluationField EvaluationField; 
};

// Class MovieScene.MovieSceneNameableTrack
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSequence
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct UMovieSceneCompiledData* CompiledData; 
	enum class EMovieSceneCompletionMode DefaultCompletionMode; 
	bool bParentContextsAreSignificant; 
	bool bPlayableDirectly; 
	enum class EMovieSceneSequenceFlags SequenceFlags; 

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieScene.MovieSceneSequencePlayer
struct UMovieSceneSequencePlayer : UObject {
	struct FMulticastInlineDelegate OnPlay; 
	struct FMulticastInlineDelegate OnPlayReverse; 
	struct FMulticastInlineDelegate OnStop; 
	struct FMulticastInlineDelegate OnPause; 
	struct FMulticastInlineDelegate OnFinished; 
	enum class EMovieScenePlayerStatus Status; 
	char bReversePlayback : 1; 
	struct UMovieSceneSequence* Sequence; 
	struct FFrameNumber StartTime; 
	int32_t DurationFrames; 
	float DurationSubFrames; 
	int32_t CurrentNumLoops; 
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; 
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; 
	struct FMovieSceneSequenceReplProperties NetSyncProps; 
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; 
	struct UMovieSceneSequenceTickManager* TickManager; 

	void StopAtCurrentTime(); // (Final|Native|Public|BlueprintCallable)
	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void SetTimeRange(float StartTime, float Duration); // (Final|Native|Public|BlueprintCallable)
	void SetPlayRate(float PlayRate); // (Final|Native|Public|BlueprintCallable)
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // (Final|Native|Public|BlueprintCallable)
	void SetFrameRate(struct FFrameRate FrameRate); // (Final|Native|Public|BlueprintCallable)
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // (Final|Native|Public|BlueprintCallable)
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // (Final|Native|Public|BlueprintCallable)
	void ScrubToSeconds(float TimeInSeconds); // (Final|Native|Public|BlueprintCallable)
	bool ScrubToMarkedFrame(struct FString InLabel); // (Final|Native|Public|BlueprintCallable)
	void ScrubToFrame(struct FFrameTime NewPosition); // (Final|Native|Public|BlueprintCallable)
	void Scrub(); // (Final|Native|Public|BlueprintCallable)
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // (Final|Net|NetReliableNative|Event|NetMulticast|Private)
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // (Final|Net|NetReliableNative|Event|NetMulticast|Private)
	void RestoreState(); // (Final|Native|Public|BlueprintCallable)
	void PlayToSeconds(float TimeInSeconds); // (Final|Native|Public|BlueprintCallable)
	bool PlayToMarkedFrame(struct FString InLabel); // (Final|Native|Public|BlueprintCallable)
	void PlayToFrame(struct FFrameTime NewPosition); // (Final|Native|Public|BlueprintCallable)
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams); // (Final|Native|Public|BlueprintCallable)
	void PlayReverse(); // (Final|Native|Public|BlueprintCallable)
	void PlayLooping(int32_t NumLoops); // (Final|Native|Public|BlueprintCallable)
	void Play(); // (Final|Native|Public|BlueprintCallable)
	void Pause(); // (Final|Native|Public|BlueprintCallable)
	void JumpToSeconds(float TimeInSeconds); // (Final|Native|Public|BlueprintCallable)
	bool JumpToMarkedFrame(struct FString InLabel); // (Final|Native|Public|BlueprintCallable)
	void JumpToFrame(struct FFrameTime NewPosition); // (Final|Native|Public|BlueprintCallable)
	bool IsReversed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPaused(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GoToEndAndStop(); // (Final|Native|Public|BlueprintCallable)
	struct FQualifiedFrameTime GetStartTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMovieSceneSequence* GetSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlayRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // (Final|Native|Public|BlueprintCallable)
	struct FFrameRate GetFrameRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetFrameDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FQualifiedFrameTime GetEndTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FQualifiedFrameTime GetDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetDisableCameraCuts(); // (Final|Native|Public|BlueprintCallable)
	struct FQualifiedFrameTime GetCurrentTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // (Final|Native|Public|BlueprintCallable)
	void ChangePlaybackDirection(); // (Final|Native|Public|BlueprintCallable)
};

// Class MovieScene.MovieSceneSubSection
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; 
	float StartOffset; 
	float TimeScale; 
	float PrerollTime; 
	char NetworkMask; 
	struct UMovieSceneSequence* SubSequence; 
	LazyObjectProperty ActorToRecord; 
	struct FString TargetSequenceName; 
	struct FDirectoryPath TargetPathToRecordTo; 

	void SetSequence(struct UMovieSceneSequence* Sequence); // (Final|Native|Public|BlueprintCallable)
	struct UMovieSceneSequence* GetSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieScene.MovieSceneEntitySystem
struct UMovieSceneEntitySystem : UObject {
	struct UMovieSceneEntitySystemLinker* Linker; 
};

// Class MovieScene.MovieSceneSubTrack
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class MovieScene.MovieSceneCustomClockSource
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // (Native|Public)
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // (Native|Public|HasOutParms)
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // (Native|Public|HasOutParms)
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // (Native|Public|HasOutParms)
};

// Class MovieScene.MovieSceneDeterminismSource
struct UMovieSceneDeterminismSource : UInterface {
};

// Class MovieScene.MovieSceneEntityProvider
struct UMovieSceneEntityProvider : UInterface {
};

// Class MovieScene.MovieSceneEvaluationHook
struct UMovieSceneEvaluationHook : UInterface {
};

// Class MovieScene.MovieScenePlaybackClient
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieSceneTrackTemplateProducer
struct UMovieSceneTrackTemplateProducer : UInterface {
};

// Class MovieScene.NodeAndChannelMappings
struct UNodeAndChannelMappings : UInterface {
};

// Class MovieScene.MovieSceneNodeGroup
struct UMovieSceneNodeGroup : UObject {
};

// Class MovieScene.MovieSceneNodeGroupCollection
struct UMovieSceneNodeGroupCollection : UObject {
};

// Class MovieScene.MovieScene
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; 
	struct TArray<struct FMovieScenePossessable> Possessables; 
	struct TArray<struct FMovieSceneBinding> ObjectBindings; 
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; 
	struct TArray<struct UMovieSceneTrack*> MasterTracks; 
	struct UMovieSceneTrack* CameraCutTrack; 
	struct FMovieSceneFrameRange SelectionRange; 
	struct FMovieSceneFrameRange PlaybackRange; 
	struct FFrameRate TickResolution; 
	struct FFrameRate DisplayRate; 
	enum class EMovieSceneEvaluationType EvaluationType; 
	enum class EUpdateClockSource ClockSource; 
	struct FSoftObjectPath CustomClockSourcePath; 
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; 
};

// Class MovieScene.MovieSceneBindingOverrides
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; 
};

// Class MovieScene.MovieSceneBindingOwnerInterface
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBlenderSystem
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneBoolSection
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; 
	struct FMovieSceneBoolChannel BoolCurve; 
};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSceneComponentImpersonator
struct UMovieSceneSceneComponentImpersonator : UInterface {
};

// Class MovieScene.MovieSceneCompiledData
struct UMovieSceneCompiledData : UObject {
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; 
	struct FMovieSceneSequenceHierarchy Hierarchy; 
	struct FMovieSceneEntityComponentField EntityComponentField; 
	struct FMovieSceneEvaluationField TrackTemplateField; 
	struct TArray<struct FFrameTime> DeterminismFences; 
	struct FGuid CompiledSignature; 
	struct FGuid CompilerVersion; 
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; 
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; 
	enum class EMovieSceneSequenceFlags AccumulatedFlags; 
};

// Class MovieScene.MovieSceneCompiledDataManager
struct UMovieSceneCompiledDataManager : UObject {
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; 
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; 
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; 
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; 
};

// Class MovieScene.MovieSceneFloatDecomposer
struct UMovieSceneFloatDecomposer : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
struct UMovieSceneBuiltInEasingFunction : UObject {
	enum class EMovieSceneBuiltInEasing Type; 
};

// Class MovieScene.MovieSceneEasingExternalCurve
struct UMovieSceneEasingExternalCurve : UObject {
	struct UCurveFloat* Curve; 
};

// Class MovieScene.MovieSceneEasingFunction
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};

// Class MovieScene.MovieSceneEntitySystemLinker
struct UMovieSceneEntitySystemLinker : UObject {
	struct FMovieSceneEntitySystemGraph SystemGraph; 
};

// Class MovieScene.MovieSceneEvalTimeSystem
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneEvaluationHookSystem
struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; 
};

// Class MovieScene.MovieSceneFolder
struct UMovieSceneFolder : UObject {
	struct FName FolderName; 
	struct TArray<struct UMovieSceneFolder*> ChildFolders; 
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; 
	struct TArray<struct FString> ChildObjectBindingStrings; 
};

// Class MovieScene.MovieSceneHookSection
struct UMovieSceneHookSection : UMovieSceneSection {
	char bRequiresRangedHook : 1; 
	char bRequiresTriggerHooks : 1; 
};

// Class MovieScene.MovieSceneKeyProxy
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.MovieSceneMasterInstantiatorSystem
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
struct UMovieScenePreAnimatedStateSystemInterface : UInterface {
};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSequenceActor
struct UMovieSceneSequenceActor : UInterface {
};

// Class MovieScene.MovieSceneSequenceTickManager
struct UMovieSceneSequenceTickManager : UObject {
	struct TArray<struct FMovieSceneSequenceActorPointers> SequenceActors; 
	struct UMovieSceneEntitySystemLinker* Linker; 
};

// Class MovieScene.MovieSceneSpawnablesSystem
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneSpawnSection
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieScene.MovieSceneSpawnTrack
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
	struct FGuid ObjectGuid; 
};

// Class MovieScene.TestMovieSceneTrack
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; 
	struct TArray<struct UMovieSceneSection*> SectionArray; 
};

// Class MovieScene.TestMovieSceneSection
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; 
};

// Class MovieScene.TestMovieSceneSubTrack
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; 
};

// Class MovieScene.TestMovieSceneSubSection
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

// Class MovieScene.TestMovieSceneEvalHookTrack
struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; 
};

// Class MovieScene.TestMovieSceneEvalHookSection
struct UTestMovieSceneEvalHookSection : UMovieSceneHookSection {
};

// Class MovieScene.MovieSceneTrackInstance
struct UMovieSceneTrackInstance : UObject {
	struct UObject* AnimatedObject; 
	bool bIsMasterTrackInstance; 
	struct UMovieSceneEntitySystemLinker* Linker; 
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; 
};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneTrackInstanceSystem
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	struct UMovieSceneTrackInstanceInstantiator* Instantiator; 
};

