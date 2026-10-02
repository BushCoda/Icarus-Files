// BlueprintGeneratedClass BTT_FindNearbyFoliage.BTT_FindNearbyFoliage_C
struct UBTT_FindNearbyFoliage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AAIController* Controller; 
	struct AFLODTile* Tile; 
	struct UFLODFISMComponent* CurrentFISM; 
	int32_t RecordIndex; 
	struct FTagQueriesRowHandle ValidFoodQuery; 
	float SearchRadius; 
	struct TArray<int32_t> NearbyInstances; 
	int32_t FLODInstanceIndex; 
	bool RequireReachable; 
	struct FBlackboardKeySelector TargetTileKey; 
	struct FBlackboardKeySelector TargetInstanceKey; 
	struct FBlackboardKeySelector TargetRecordKey; 
	struct FBlackboardKeySelector TargetLocationKey; 

	void FindNearestFoliage(bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyFoliage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

