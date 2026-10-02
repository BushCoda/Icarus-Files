// Class TcpMessaging.TcpMessagingSettings
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; 
	struct FString ListenEndpoint; 
	struct TArray<struct FString> ConnectToEndpoints; 
	int32_t ConnectionRetryDelay; 
	bool bStopServiceWhenAppDeactivates; 
};

