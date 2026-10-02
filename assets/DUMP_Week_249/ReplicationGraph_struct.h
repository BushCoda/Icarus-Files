// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair {
	struct UNetConnection* NetConnection; 
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; 
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo {
	struct UNetConnection* Connection; 
	struct FVector LastLocation; 
	struct FVector LastOutOfRangeLocationCheck; 
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo {
	struct AActor* Actor; 
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo {
	struct UNetConnection* Connection; 
	struct AActor* LastViewer; 
	struct AActor* LastViewTarget; 
};

// ScriptStruct ReplicationGraph.ClassReplicationInfo
struct FClassReplicationInfo {
	float DistancePriorityScale; 
	float StarvationPriorityScale; 
	float AccumulatedNetPriorityBias; 
	uint16_t ReplicationPeriodFrame; 
	uint16_t FastPath_ReplicationPeriodFrame; 
	uint16_t ActorChannelFrameTimeout; 
	float CullDistance; 
	float CullDistanceSquared; 
};

