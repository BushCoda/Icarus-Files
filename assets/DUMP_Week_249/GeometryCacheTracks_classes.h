// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; 
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; 
};

