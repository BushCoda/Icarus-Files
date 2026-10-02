// BlueprintGeneratedClass BTS_UpdateTargetActor.BTS_UpdateTargetActor_C
struct UBTS_UpdateTargetActor_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Max Distance; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateTargetActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

