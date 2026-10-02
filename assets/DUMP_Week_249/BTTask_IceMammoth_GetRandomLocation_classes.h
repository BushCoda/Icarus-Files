// BlueprintGeneratedClass BTTask_IceMammoth_GetRandomLocation.BTTask_IceMammoth_GetRandomLocation_C
struct UBTTask_IceMammoth_GetRandomLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class E_MammothLocation FindLocation; 
	struct TArray<struct ABP_Ice_Mammoth_Location_Arena_Fallback_C*> ValidActors; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_IceMammoth_GetRandomLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

