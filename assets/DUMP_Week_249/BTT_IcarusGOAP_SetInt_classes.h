// BlueprintGeneratedClass BTT_IcarusGOAP_SetInt.BTT_IcarusGOAP_SetInt_C
struct UBTT_IcarusGOAP_SetInt_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector IntKey; 
	int32_t NewValue; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_SetInt(int32_t EntryPoint); // (Final|UbergraphFunction)
};

