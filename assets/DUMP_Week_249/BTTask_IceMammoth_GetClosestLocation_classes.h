// BlueprintGeneratedClass BTTask_IceMammoth_GetClosestLocation.BTTask_IceMammoth_GetClosestLocation_C
struct UBTTask_IceMammoth_GetClosestLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class E_MammothLocation FindLocation; 
	struct ABP_Ice_Mammoth_Location_Arena_Fallback_C* CachedActor; 
	float CachedDistance; 
	struct AActor* CachedReference; 
	struct FBlackboardKeySelector Location; 
	struct FBlackboardKeySelector LocationReference; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_IceMammoth_GetClosestLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

