// BlueprintGeneratedClass BTS_CheckRecentDamagePassedThreshold.BTS_CheckRecentDamagePassedThreshold_C
struct UBTS_CheckRecentDamagePassedThreshold_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector HasPassedThresholdKey; 
	int32_t LiteralThresholdValue; 
	float PercentThresholdValue; 
	int32_t MaximumHealth; 
	int32_t StartingHealth; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_CheckRecentDamagePassedThreshold(int32_t EntryPoint); // (Final|UbergraphFunction)
};

