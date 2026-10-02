// BlueprintGeneratedClass BTTask_FindRandomPlayerCharacter.BTTask_FindRandomPlayerCharacter_C
struct UBTTask_FindRandomPlayerCharacter_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MaxTravelDistance; 
	struct FBlackboardKeySelector TargetActor; 
	struct FBlackboardKeySelector MammothAttack; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindRandomPlayerCharacter(int32_t EntryPoint); // (Final|UbergraphFunction)
};

