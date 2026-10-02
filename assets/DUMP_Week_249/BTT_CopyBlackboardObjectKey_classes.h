// BlueprintGeneratedClass BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C
struct UBTT_CopyBlackboardObjectKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector Source; 
	struct FBlackboardKeySelector Target; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_CopyBlackboardObjectKey(int32_t EntryPoint); // (Final|UbergraphFunction)
};

