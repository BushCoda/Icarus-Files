// BlueprintGeneratedClass BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C
struct UBTT_IcarusGOAP_SetBoolean_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector BooleanKey; 
	bool NewValue; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_SetBoolean(int32_t EntryPoint); // (Final|UbergraphFunction)
};

