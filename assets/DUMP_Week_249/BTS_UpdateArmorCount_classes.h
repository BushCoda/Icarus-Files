// BlueprintGeneratedClass BTS_UpdateArmorCount.BTS_UpdateArmorCount_C
struct UBTS_UpdateArmorCount_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t MaxArmorCount; 
	int32_t CurrentArmorCount; 
	struct FBlackboardKeySelector DisableBool; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateArmorCount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

