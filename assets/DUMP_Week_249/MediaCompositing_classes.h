// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; 
	bool bLoop; 
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; 
	bool bLooping; 
	struct FFrameNumber StartFrameOffset; 
	struct UMediaTexture* MediaTexture; 
	struct UMediaSoundComponent* MediaSoundComponent; 
	bool bUseExternalMediaPlayer; 
	struct UMediaPlayer* ExternalMediaPlayer; 
};

// Class MediaCompositing.MovieSceneMediaTrack
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> MediaSections; 
};

