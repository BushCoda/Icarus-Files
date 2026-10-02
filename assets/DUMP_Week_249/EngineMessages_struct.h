// ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification {
	struct FString Text; 
	double TimeSeconds; 
};

// ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate {
	struct FString UserName; 
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand {
	struct FString Command; 
	struct FString UserName; 
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant {
	struct FString UserName; 
	struct FString UserToGrant; 
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny {
	struct FString UserName; 
	struct FString UserToDeny; 
};

// ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong {
	struct FString CurrentLevel; 
	int32_t EngineVersion; 
	bool HasBegunPlay; 
	struct FGuid InstanceId; 
	struct FString InstanceType; 
	struct FGuid SessionId; 
	float WorldTimeSeconds; 
};

// ScriptStruct EngineMessages.EngineServicePing
struct FEngineServicePing {
};

