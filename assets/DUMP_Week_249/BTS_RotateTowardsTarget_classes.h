// BlueprintGeneratedClass BTS_RotateTowardsTarget.BTS_RotateTowardsTarget_C
struct UBTS_RotateTowardsTarget_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetKey; 
	bool YawOnly; 
	float RotationSpeed; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_RotateTowardsTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

