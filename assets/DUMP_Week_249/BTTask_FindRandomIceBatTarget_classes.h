// BlueprintGeneratedClass BTTask_FindRandomIceBatTarget.BTTask_FindRandomIceBatTarget_C
struct UBTTask_FindRandomIceBatTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MaxTravelDistance; 
	struct FBlackboardKeySelector TargetActor; 
	struct FBlackboardKeySelector MammothAttack; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindRandomIceBatTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

