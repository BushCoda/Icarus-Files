// Class LiveLinkComponents.LiveLinkComponentController
struct ULiveLinkComponentController : UActorComponent {
	struct FLiveLinkSubjectRepresentation SubjectRepresentation; 
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap; 
	bool bUpdateInEditor; 
	struct FMulticastInlineDelegate OnLiveLinkUpdated; 
	struct FComponentReference ComponentToControl; 
	bool bDisableEvaluateLiveLinkWhenSpawnable; 
	bool bEvaluateLiveLink; 
};

// Class LiveLinkComponents.LiveLinkComponentSettings
struct ULiveLinkComponentSettings : UObject {
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> DefaultControllerForRole; 
};

// Class LiveLinkComponents.LiveLinkControllerBase
struct ULiveLinkControllerBase : UObject {
};

// Class LiveLinkComponents.LiveLinkLightController
struct ULiveLinkLightController : ULiveLinkControllerBase {
};

// Class LiveLinkComponents.LiveLinkTransformController
struct ULiveLinkTransformController : ULiveLinkControllerBase {
	struct FLiveLinkTransformControllerData TransformData; 
};

