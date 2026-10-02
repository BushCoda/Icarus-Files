// Class ReplicationGraph.ReplicationGraph
struct UReplicationGraph : UReplicationDriver {
	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; 
	struct UNetDriver* NetDriver; 
	struct TArray<struct UNetReplicationGraphConnection*> Connections; 
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; 
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; 
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; 
};

// Class ReplicationGraph.BasicReplicationGraph
struct UBasicReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; 
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; 
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; 
	struct TArray<struct AActor*> ActorsWithoutNetConnection; 
};

// Class ReplicationGraph.ReplicationGraphNode
struct UReplicationGraphNode : UObject {
	struct TArray<struct UReplicationGraphNode*> AllChildNodes; 
};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
struct UReplicationGraphNode_ActorList : UReplicationGraphNode {
};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode {
};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	struct UReplicationGraphNode* DynamicNode; 
	struct UReplicationGraphNode_DormancyNode* DormancyNode; 
};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode {
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	struct UReplicationGraphNode* ChildNode; 
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; 
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	struct TArray<struct FTearOffActorInfo> TearOffActors; 
};

// Class ReplicationGraph.NetReplicationGraphConnection
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	struct UNetConnection* NetConnection; 
	struct AReplicationGraphDebugActor* DebugActor; 
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; 
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; 
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; 
};

// Class ReplicationGraph.ReplicationGraphDebugActor
struct AReplicationGraphDebugActor : AActor {
	struct UReplicationGraph* ReplicationGraph; 
	struct UNetReplicationGraphConnection* ConnectionManager; 

	void ServerStopDebugging(); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerStartDebugging(); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerPrintCullDistances(); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerPrintAllActorInfo(struct FString Str); // (Net|NetReliableNative|Event|Public|NetServer)
	void ServerCellInfo(); // (Net|NetReliableNative|Event|Public|NetServer)
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient)
};

