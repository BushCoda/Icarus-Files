// Class TemplateSequence.TemplateSequence
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; 
	struct TSoftClassPtr<UObject> BoundActorClass; 
	struct TSoftObjectPtr<AActor> BoundPreviewActor; 
	struct TMap<struct FGuid, struct FName> BoundActorComponents; 
};

// Class TemplateSequence.CameraAnimationSequence
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
struct USequenceCameraShakeCameraStandIn : UObject {
	float FieldOfView; 
	char bConstrainAspectRatio : 1; 
	float AspectRatio; 
	struct FPostProcessSettings PostProcessSettings; 
	float PostProcessBlendWeight; 
	struct FCameraFilmbackSettings Filmback; 
	struct FCameraLensSettings LensSettings; 
	struct FCameraFocusSettings FocusSettings; 
	float CurrentFocalLength; 
	float CurrentAperture; 
	float CurrentFocusDistance; 
};

// Class TemplateSequence.SequenceCameraShakePattern
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; 
	float PlayRate; 
	float Scale; 
	float BlendInTime; 
	float BlendOutTime; 
	float RandomSegmentDuration; 
	bool bRandomSegment; 
	struct USequenceCameraShakeSequencePlayer* Player; 
	struct USequenceCameraShakeCameraStandIn* CameraStandIn; 
};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
struct USequenceCameraShakeSequencePlayer : UObject {
	struct UObject* BoundObjectOverride; 
	struct UMovieSceneSequence* Sequence; 
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; 
};

// Class TemplateSequence.TemplateSequenceActor
struct ATemplateSequenceActor : AActor {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; 
	struct UTemplateSequencePlayer* SequencePlayer; 
	struct FSoftObjectPath TemplateSequence; 
	struct FTemplateSequenceBindingOverrideData BindingOverride; 

	void SetSequence(struct UTemplateSequence* InSequence); // (Final|Native|Public|BlueprintCallable)
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // (Final|Native|Public|BlueprintCallable)
	struct UTemplateSequence* LoadSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UTemplateSequencePlayer* GetSequencePlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UTemplateSequence* GetSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class TemplateSequence.TemplateSequencePlayer
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class TemplateSequence.TemplateSequenceSection
struct UTemplateSequenceSection : UMovieSceneSubSection {
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; 
};

// Class TemplateSequence.TemplateSequenceSystem
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class TemplateSequence.TemplateSequenceTrack
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

