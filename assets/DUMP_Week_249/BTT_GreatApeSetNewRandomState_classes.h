// BlueprintGeneratedClass BTT_GreatApeSetNewRandomState.BTT_GreatApeSetNewRandomState_C
struct UBTT_GreatApeSetNewRandomState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class GreatApeState CurrentState; 
	enum class GreatApeState NextState; 
	enum class GreatApeState InitialPick; 
	struct FBlackboardKeySelector CurrentStateKey; 
	struct FBlackboardKeySelector PreviousStateKey; 
	struct FBlackboardKeySelector HasLogKey; 
	struct FBlackboardKeySelector IsInTreeKey; 
	struct FRandomStream RandomStream; 

	void Randoo(float& Rando); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PickNewState(struct AIcarusNPCGOAPCharacter* ControlledPawn, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_GreatApeSetNewRandomState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

