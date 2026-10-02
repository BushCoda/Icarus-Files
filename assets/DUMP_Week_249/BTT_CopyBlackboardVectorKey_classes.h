// BlueprintGeneratedClass BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C
struct UBTT_CopyBlackboardVectorKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector Source; 
	struct FBlackboardKeySelector Target; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_CopyBlackboardVectorKey(int32_t EntryPoint); // (Final|UbergraphFunction)
};

