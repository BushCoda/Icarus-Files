// BlueprintGeneratedClass BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C
struct UBTT_IcarusGOAP_FindSafeMoveLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector LocationKey; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

