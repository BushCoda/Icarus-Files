// BlueprintGeneratedClass AITargetNode.AITargetNode_C
struct AAITargetNode_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBillboardComponent* Billboard; 
	struct USceneComponent* DefaultSceneRoot; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CheckDebugEnabled(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_AITargetNode(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

