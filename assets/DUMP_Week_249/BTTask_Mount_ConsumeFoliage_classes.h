// BlueprintGeneratedClass BTTask_Mount_ConsumeFoliage.BTTask_Mount_ConsumeFoliage_C
struct UBTTask_Mount_ConsumeFoliage_C : UBTTask_PerformAction_Mount_C {
	struct FBlackboardKeySelector TargetTileKey; 
	struct FBlackboardKeySelector TargetInstanceKey; 
	struct FBlackboardKeySelector TargetRecordKey; 
	struct AFLODTile* Tile; 
	int32_t FLODInstanceIndex; 
	int32_t FLODRecordIndex; 
	struct USurvivalCharacterState* SurvivalStateRef; 

	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

