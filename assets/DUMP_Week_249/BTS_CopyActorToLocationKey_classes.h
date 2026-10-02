// BlueprintGeneratedClass BTS_CopyActorToLocationKey.BTS_CopyActorToLocationKey_C
struct UBTS_CopyActorToLocationKey_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector SourceActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_CopyActorToLocationKey(int32_t EntryPoint); // (Final|UbergraphFunction)
};

