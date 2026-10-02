// BlueprintGeneratedClass BTT_PrintDebugString.BTT_PrintDebugString_C
struct UBTT_PrintDebugString_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FString DebugString; 
	enum class EBPLogVerbosity Verbosity; 
	struct FName LogCategory; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_PrintDebugString(int32_t EntryPoint); // (Final|UbergraphFunction)
};

