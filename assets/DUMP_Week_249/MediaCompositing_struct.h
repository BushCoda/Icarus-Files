// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct UMediaSource* MediaSource; 
	struct FFrameNumber SectionStartFrame; 
	bool bLoop; 
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneMediaSectionParams Params; 
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams {
	struct UMediaSoundComponent* MediaSoundComponent; 
	struct UMediaSource* MediaSource; 
	struct UMediaTexture* MediaTexture; 
	struct UMediaPlayer* MediaPlayer; 
	struct FFrameNumber SectionStartFrame; 
	struct FFrameNumber SectionEndFrame; 
	bool bLooping; 
	struct FFrameNumber StartFrameOffset; 
};

