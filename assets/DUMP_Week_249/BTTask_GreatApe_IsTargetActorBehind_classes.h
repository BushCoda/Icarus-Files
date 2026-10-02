// BlueprintGeneratedClass BTTask_GreatApe_IsTargetActorBehind.BTTask_GreatApe_IsTargetActorBehind_C
struct UBTTask_GreatApe_IsTargetActorBehind_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentTargetActorKey; 
	struct FBlackboardKeySelector TargetIsBehindActorKey; 
	struct FBlackboardKeySelector MaxDistanceKey; 
	float MaxDistanceToTarget; 
	struct FVector TargetActorLocation; 
	struct FVector PawnLocation; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_GreatApe_IsTargetActorBehind(int32_t EntryPoint); // (Final|UbergraphFunction)
};

