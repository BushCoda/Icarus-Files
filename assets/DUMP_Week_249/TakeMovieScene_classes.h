// Class TakeMovieScene.MovieSceneTakeSection
struct UMovieSceneTakeSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel HoursCurve; 
	struct FMovieSceneIntegerChannel MinutesCurve; 
	struct FMovieSceneIntegerChannel SecondsCurve; 
	struct FMovieSceneIntegerChannel FramesCurve; 
	struct FMovieSceneFloatChannel SubFramesCurve; 
	struct FMovieSceneStringChannel Slate; 
};

// Class TakeMovieScene.MovieSceneTakeSettings
struct UMovieSceneTakeSettings : UObject {
	struct FString HoursName; 
	struct FString MinutesName; 
	struct FString SecondsName; 
	struct FString FramesName; 
	struct FString SubFramesName; 
	struct FString SlateName; 
};

// Class TakeMovieScene.MovieSceneTakeTrack
struct UMovieSceneTakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

