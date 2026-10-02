// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8 {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// ScriptStruct UdpMessaging.UdpMockMessage
struct FUdpMockMessage {
	struct TArray<char> Data; 
};

