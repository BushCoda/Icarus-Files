// BlueprintGeneratedClass BTS_UpdateIceMammothState.BTS_UpdateIceMammothState_C
struct UBTS_UpdateIceMammothState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentStateKey; 
	enum class IceMammothState CurrentState; 
	enum class IceMammothState NextState; 
	enum class IceMammothState DebugForceState; 
	struct APawn* Controlled Pawn; 
	float PercentHealth; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateIceMammothState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

