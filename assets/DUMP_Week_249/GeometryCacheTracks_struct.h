// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams {
	struct UGeometryCache* GeometryCacheAsset; 
	struct FFrameNumber FirstLoopStartFrameOffset; 
	struct FFrameNumber StartFrameOffset; 
	struct FFrameNumber EndFrameOffset; 
	float PlayRate; 
	char bReverse : 1; 
	float StartOffset; 
	float EndOffset; 
	struct FSoftObjectPath GeometryCache; 
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; 
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	struct FFrameNumber SectionStartTime; 
	struct FFrameNumber SectionEndTime; 
};

