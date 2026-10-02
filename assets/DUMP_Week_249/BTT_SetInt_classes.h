// BlueprintGeneratedClass BTT_SetInt.BTT_SetInt_C
struct UBTT_SetInt_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector IntKey; 
	int32_t NewValue; 
	bool AddValue; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetInt(int32_t EntryPoint); // (Final|UbergraphFunction)
};

