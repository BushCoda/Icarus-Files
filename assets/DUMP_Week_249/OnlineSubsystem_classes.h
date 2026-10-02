// Class OnlineSubsystem.NamedInterfaces
struct UNamedInterfaces : UObject {
	struct TArray<struct FNamedInterface> NamedInterfaces; 
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; 
};

// Class OnlineSubsystem.TurnBasedMatchInterface
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // (Event|Public|BlueprintEvent)
	void OnMatchEnded(struct FString Match); // (Event|Public|BlueprintEvent)
};

