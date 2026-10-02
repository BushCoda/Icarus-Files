// BlueprintGeneratedClass BTTask_FindNearbyVoxel.BTTask_FindNearbyVoxel_C
struct UBTTask_FindNearbyVoxel_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float SearchRadius; 
	struct FBlackboardKeySelector FoundVoxelKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindNearbyVoxel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

