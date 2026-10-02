// BlueprintGeneratedClass BTT_GreatApeSetState.BTT_GreatApeSetState_C
struct UBTT_GreatApeSetState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentStateKey; 
	enum class GreatApeState CurrentState; 
	enum class GreatApeState NextState; 
	struct FBlackboardKeySelector PreviousStateKey; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_GreatApeSetState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

