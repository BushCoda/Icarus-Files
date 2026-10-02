// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; 
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; 
};

