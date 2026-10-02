// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
struct UMovieSceneLiveLinkSection : UMovieSceneSection {
	struct FLiveLinkSubjectPreset SubjectPreset; 
	struct TArray<bool> ChannelMask; 
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections; 
	struct FName SubjectName; 
	struct FLiveLinkFrameData TemplateToPush; 
	struct FLiveLinkRefSkeleton RefSkeleton; 
	struct TArray<struct FName> CurveNames; 
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels; 
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
struct UMovieSceneLiveLinkSubSection : UObject {
	struct FLiveLinkSubSectionData SubSectionData; 
	struct ULiveLinkRole* SubjectRole; 
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
struct UMovieSceneLiveLinkSubSectionAnimation : UMovieSceneLiveLinkSubSection {
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
struct UMovieSceneLiveLinkSubSectionBasicRole : UMovieSceneLiveLinkSubSection {
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
struct UMovieSceneLiveLinkSubSectionProperties : UMovieSceneLiveLinkSubSection {
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
struct UMovieSceneLiveLinkTrack : UMovieScenePropertyTrack {
	struct ULiveLinkRole* TrackRole; 
};

