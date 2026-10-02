// BlueprintGeneratedClass BTS_UpdateNavigationProxy.BTS_UpdateNavigationProxy_C
struct UBTS_UpdateNavigationProxy_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector InitialAgentLocation; 
	struct FBlackboardKeySelector TargetLocationKey; 
	struct FBlackboardKeySelector ProjectedLocationKey; 
	struct UNavigationPath* FoundNavigationPath; 
	int32_t CurrentPathPoint; 
	struct TArray<struct FVector> CurrentPath; 
	float NextPointThreshold; 
	float PostProjectionHeightOffset; 
	struct FVector InitialAgentProjectionExtent; 
	float LastPointThreshold; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateNavigationProxy(int32_t EntryPoint); // (Final|UbergraphFunction)
};

