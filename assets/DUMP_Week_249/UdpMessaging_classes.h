// Class UdpMessaging.UdpMessagingSettings
struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; 
	bool EnableTransport; 
	bool bAutoRepair; 
	float MaxSendRate; 
	uint32_t AutoRepairAttemptLimit; 
	bool bStopServiceWhenAppDeactivates; 
	struct FString UnicastEndpoint; 
	struct FString MulticastEndpoint; 
	enum class EUdpMessageFormat MessageFormat; 
	char MulticastTimeToLive; 
	struct TArray<struct FString> StaticEndpoints; 
	bool EnableTunnel; 
	struct FString TunnelUnicastEndpoint; 
	struct FString TunnelMulticastEndpoint; 
	struct TArray<struct FString> RemoteTunnelEndpoints; 
};

