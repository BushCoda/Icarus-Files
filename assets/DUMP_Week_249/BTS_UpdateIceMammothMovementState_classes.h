// BlueprintGeneratedClass BTS_UpdateIceMammothMovementState.BTS_UpdateIceMammothMovementState_C
struct UBTS_UpdateIceMammothMovementState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector HasArmor; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateIceMammothMovementState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

