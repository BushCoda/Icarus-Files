// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
struct FLiveLinkSubjectFrameMessage {
	struct FName SubjectName; 
	struct TArray<struct FTransform> Transforms; 
	struct TArray<struct FLiveLinkCurveElement> Curves; 
	struct FLiveLinkMetaData MetaData; 
	double Time; 
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
struct FLiveLinkSubjectDataMessage {
	struct FLiveLinkRefSkeleton RefSkeleton; 
	struct FName SubjectName; 
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
struct FLiveLinkClearSubject {
	struct FName SubjectName; 
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
struct FLiveLinkHeartbeatMessage {
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; 
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
struct FLiveLinkPongMessage {
	struct FString ProviderName; 
	struct FString MachineName; 
	struct FGuid PollRequest; 
	int32_t LiveLinkVersion; 
	double CreationPlatformTime; 
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
struct FLiveLinkPingMessage {
	struct FGuid PollRequest; 
	int32_t LiveLinkVersion; 
};

