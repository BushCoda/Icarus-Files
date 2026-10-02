// BlueprintGeneratedClass BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C
struct UBTT_ClearBlackboardKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector KeyToClear; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_ClearBlackboardKey(int32_t EntryPoint); // (Final|UbergraphFunction)
};

