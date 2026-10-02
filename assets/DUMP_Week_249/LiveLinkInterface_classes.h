// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
struct ULiveLinkFrameInterpolationProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
struct ULiveLinkFrameTranslator : UObject {
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
struct ULiveLinkVirtualSubject : UObject {
	struct ULiveLinkRole* Role; 
	struct TArray<struct FLiveLinkSubjectName> Subjects; 
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; 
	bool bRebroadcastSubject; 
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
struct ULiveLinkFramePreProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceFactory
struct ULiveLinkSourceFactory : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceSettings
struct ULiveLinkSourceSettings : UObject {
	enum class ELiveLinkSourceMode Mode; 
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; 
	struct FString ConnectionString; 
	struct ULiveLinkSourceFactory* Factory; 
};

// Class LiveLinkInterface.LiveLinkRole
struct ULiveLinkRole : UObject {
};

// Class LiveLinkInterface.LiveLinkBasicRole
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkController
struct ULiveLinkController : UObject {
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; 
};

// Class LiveLinkInterface.LiveLinkLightRole
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
struct ULiveLinkSubjectSettings : UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; 
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; 
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; 
	struct ULiveLinkRole* Role; 
	struct FFrameRate FrameRate; 
	bool bRebroadcastSubject; 
};

