// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FLiveLinkSubjectPreset SubjectPreset; 
	struct TArray<bool> ChannelMask; 
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData; 
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
struct FLiveLinkSubSectionData {
	struct TArray<struct FLiveLinkPropertyData> Properties; 
};

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
struct FLiveLinkPropertyData {
	struct FName PropertyName; 
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel; 
	struct TArray<struct FMovieSceneStringChannel> StringChannel; 
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel; 
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel; 
	struct TArray<struct FMovieSceneByteChannel> ByteChannel; 
};

