// BlueprintGeneratedClass BTTask_UpdateSandWormState.BTTask_UpdateSandWormState_C
struct UBTTask_UpdateSandWormState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector StateKey; 
	enum class SandWormState NewState; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_UpdateSandWormState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

