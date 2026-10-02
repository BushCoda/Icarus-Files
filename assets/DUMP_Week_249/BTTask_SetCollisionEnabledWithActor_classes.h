// BlueprintGeneratedClass BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C
struct UBTTask_SetCollisionEnabledWithActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	bool CollisionEnabled; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

