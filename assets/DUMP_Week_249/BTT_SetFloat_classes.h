// BlueprintGeneratedClass BTT_SetFloat.BTT_SetFloat_C
struct UBTT_SetFloat_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector FloatKey; 
	float NewValue; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetFloat(int32_t EntryPoint); // (Final|UbergraphFunction)
};

