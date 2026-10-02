// BlueprintGeneratedClass BTS_Sprint.BTS_Sprint_C
struct UBTS_Sprint_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool WantsSprint; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_Sprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

