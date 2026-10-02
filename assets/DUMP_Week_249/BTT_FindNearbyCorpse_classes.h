// BlueprintGeneratedClass BTT_FindNearbyCorpse.BTT_FindNearbyCorpse_C
struct UBTT_FindNearbyCorpse_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float NearbyDistance2D; 
	bool AvoidNearbyPlayers; 
	struct FBlackboardKeySelector FoodContainerKey; 
	bool OnlyAcceptUnshelteredContainers; 
	struct FTagQueriesRowHandle ContainerQuery; 
	float MinCorpseLifetime; 
	bool AllowSubmergedCorpses; 
	bool UseSphereOverlap; 

	void IsLocationFreeFromHostileTargets(struct FVector Location, bool& FreeFromHostiles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindValidItem(struct FVector AroundLocation, float MaxDistance, struct AIcarusActor*& Item, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyCorpse(int32_t EntryPoint); // (Final|UbergraphFunction)
};

