// BlueprintGeneratedClass BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C
struct UBTT_FindClearLandingLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct APawn* PawnRef; 
	float CapsuleRadius; 
	float CapsuleHeight; 
	bool Succeeded; 
	struct FVector LastTargetLocation; 
	struct FBlackboardKeySelector TargetLocationKey; 
	struct FVector ProjectedGroundLocation; 
	float LandingDistance; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void BreakLoop(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindClearLandingLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

