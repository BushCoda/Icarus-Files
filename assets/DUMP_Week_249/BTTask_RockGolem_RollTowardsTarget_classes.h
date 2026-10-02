// BlueprintGeneratedClass BTTask_RockGolem_RollTowardsTarget.BTTask_RockGolem_RollTowardsTarget_C
struct UBTTask_RockGolem_RollTowardsTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorOrLocation; 
	struct FVector TargetLocation; 
	struct APawn* PawnRef; 
	float AcceptableDotThreshold; 
	float AcceptableMaxDistanceToTarget; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_RockGolem_RollTowardsTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

