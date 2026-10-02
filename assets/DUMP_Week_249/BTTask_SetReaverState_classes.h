// BlueprintGeneratedClass BTTask_SetReaverState.BTTask_SetReaverState_C
struct UBTTask_SetReaverState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class ReaverState DesiredState; 
	struct FBlackboardKeySelector CurrentStateKey; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SetReaverState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

