// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams {
	struct FSoftObjectPath GeometryCollectionCache; 
	struct FFrameNumber StartFrameOffset; 
	struct FFrameNumber EndFrameOffset; 
	float PlayRate; 
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; 
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	struct FFrameNumber SectionStartTime; 
	struct FFrameNumber SectionEndTime; 
};

