// BlueprintGeneratedClass BTS_CheckBlocked.BTS_CheckBlocked_C
struct UBTS_CheckBlocked_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector IsBlockedKey; 
	bool IsBlocked; 
	bool IsPlayingMontage; 
	struct FVector LastUpdateLocation; 
	bool IsStationary; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_CheckBlocked(int32_t EntryPoint); // (Final|UbergraphFunction)
};

