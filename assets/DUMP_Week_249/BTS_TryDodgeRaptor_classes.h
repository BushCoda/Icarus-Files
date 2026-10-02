// BlueprintGeneratedClass BTS_TryDodgeRaptor.BTS_TryDodgeRaptor_C
struct UBTS_TryDodgeRaptor_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CurrentTargetKey; 
	struct APawn* ControlledPawnRef; 
	struct AActor* TargetActor; 
	float DotThreshold; 
	float MinimumTargetDodgeDistance; 
	bool DodgeLeft; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_TryDodgeRaptor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

