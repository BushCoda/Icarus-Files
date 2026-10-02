// BlueprintGeneratedClass BTS_UpdateForcedDroneTarget.BTS_UpdateForcedDroneTarget_C
struct UBTS_UpdateForcedDroneTarget_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector ForcedTargetKey; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector DroneStateKey; 
	bool ClearForcedTargetWhenNearby; 
	float NearbyDistance; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateForcedDroneTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

