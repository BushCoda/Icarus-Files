// BlueprintGeneratedClass BTS_SetBoolean.BTS_SetBoolean_C
struct UBTS_SetBoolean_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector BooleanBlackboardKey; 
	bool ActiveState; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SetBoolean(int32_t EntryPoint); // (Final|UbergraphFunction)
};

