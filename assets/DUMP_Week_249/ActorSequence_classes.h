// Class ActorSequence.ActorSequence
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; 
	struct FActorSequenceObjectReferenceMap ObjectReferences; 
};

// Class ActorSequence.ActorSequenceComponent
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; 
	struct UActorSequence* Sequence; 
	struct UActorSequencePlayer* SequencePlayer; 
};

// Class ActorSequence.ActorSequencePlayer
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

