// BlueprintGeneratedClass BTTask_AddCharacterHalfHeight.BTTask_AddCharacterHalfHeight_C
struct UBTTask_AddCharacterHalfHeight_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetVectorKey; 
	struct FVector TargetVector; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_AddCharacterHalfHeight(int32_t EntryPoint); // (Final|UbergraphFunction)
};

