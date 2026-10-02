// BlueprintGeneratedClass BTS_UpdateCrouch.BTS_UpdateCrouch_C
struct UBTS_UpdateCrouch_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float CrouchChance; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateCrouch(int32_t EntryPoint); // (Final|UbergraphFunction)
};

