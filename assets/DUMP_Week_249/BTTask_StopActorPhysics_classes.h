// BlueprintGeneratedClass BTTask_StopActorPhysics.BTTask_StopActorPhysics_C
struct UBTTask_StopActorPhysics_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector ActorKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_StopActorPhysics(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

