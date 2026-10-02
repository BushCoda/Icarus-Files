// BlueprintGeneratedClass BTTask_PickNewEmergeLocation.BTTask_PickNewEmergeLocation_C
struct UBTTask_PickNewEmergeLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct APawn* PawnRef; 
	struct TArray<struct AActor*> EmergeLocations; 
	struct AActor* TestActor; 
	float MaxTargetDistanceToEmergePoint; 
	struct AActor* ClosestTargetableToEmergePoint; 
	float ClosestTargetableDistance; 
	struct AActor* OutEmergePoint; 
	struct FBlackboardKeySelector EmergeLocationKey; 
	float MinimumDistanceToOtherWorms; 
	struct TArray<struct ABP_FactionBoss_SandWorm_C*> OtherWorms; 
	float MaxDistanceToValidTarget; 
	float MaxSandWormDistanceToEmergePoint; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PickNewEmergeLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

