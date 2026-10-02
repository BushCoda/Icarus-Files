// BlueprintGeneratedClass BTS_SetAirBrakingDeceleration.BTS_SetAirBrakingDeceleration_C
struct UBTS_SetAirBrakingDeceleration_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TargetDeceleration; 
	float InitialDeceleration; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SetAirBrakingDeceleration(int32_t EntryPoint); // (Final|UbergraphFunction)
};

