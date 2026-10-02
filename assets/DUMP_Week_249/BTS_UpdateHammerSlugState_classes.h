// BlueprintGeneratedClass BTS_UpdateHammerSlugState.BTS_UpdateHammerSlugState_C
struct UBTS_UpdateHammerSlugState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentStateKey; 
	enum class HammerheadState CurrentState; 
	enum class HammerheadState NextState; 
	enum class HammerheadState DebugForceState; 
	struct APawn* Controlled Pawn; 
	float PercentHealth; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateHammerSlugState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

