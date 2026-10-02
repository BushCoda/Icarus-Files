// BlueprintGeneratedClass BTT_TundraMonkey_FindRandomNearbyBranch.BTT_TundraMonkey_FindRandomNearbyBranch_C
struct UBTT_TundraMonkey_FindRandomNearbyBranch_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float NearbyDistance; 
	struct FBlackboardKeySelector TargetLocationKey; 

	struct FVector FindLocation(struct AActor* Target, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_TundraMonkey_FindRandomNearbyBranch(int32_t EntryPoint); // (Final|UbergraphFunction)
};

