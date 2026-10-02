// BlueprintGeneratedClass BTS_UpdateLavaHunterState.BTS_UpdateLavaHunterState_C
struct UBTS_UpdateLavaHunterState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float CurrentHealthPercent; 
	struct FBlackboardKeySelector CurrentStateKey; 
	enum class LavaHunterState CurrentState; 
	enum class LavaHunterState NextState; 
	float TransitionInitialHealth; 
	enum class LavaHunterState DebugForceState; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateLavaHunterState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

