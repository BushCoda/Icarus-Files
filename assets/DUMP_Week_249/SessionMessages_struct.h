// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
struct FSessionServiceLogUnsubscribe {
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
struct FSessionServiceLogSubscribe {
};

// ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog {
	struct FName Category; 
	struct FString Data; 
	struct FGuid InstanceId; 
	double TimeSeconds; 
	char Verbosity; 
};

// ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong {
	bool Authorized; 
	struct FString BuildDate; 
	struct FString DeviceName; 
	struct FGuid InstanceId; 
	struct FString InstanceName; 
	struct FString PlatformName; 
	struct FGuid SessionId; 
	struct FString SessionName; 
	struct FString SessionOwner; 
	bool Standalone; 
};

// ScriptStruct SessionMessages.SessionServicePing
struct FSessionServicePing {
	struct FString UserName; 
};

