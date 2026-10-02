// BlueprintGeneratedClass BTT_SetMountLastMoveResult.BTT_SetMountLastMoveResult_C
struct UBTT_SetMountLastMoveResult_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector EnumKey; 
	enum class MountLastMoveResult NewResult; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetMountLastMoveResult(int32_t EntryPoint); // (Final|UbergraphFunction)
};

