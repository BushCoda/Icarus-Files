// BlueprintGeneratedClass BTS_MakeInvulnerable.BTS_MakeInvulnerable_C
struct UBTS_MakeInvulnerable_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool CanBeDamaged; 
	float MinDamagePercentThreshold; 
	bool BindMinDamageToBlackboard; 
	struct FBlackboardKeySelector MinDamageBlackboardKey; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTS_MakeInvulnerable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

