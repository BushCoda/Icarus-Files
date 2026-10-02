// BlueprintGeneratedClass BTS_Check_Ape_Enraged.BTS_Check_Ape_Enraged_C
struct UBTS_Check_Ape_Enraged_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Cooldown; 
	float ModifierLifetime; 
	int32_t MinimumHealthPercent; 
	struct UActorState* OwnerActorState; 
	int32_t MaxHealthPercent; 
	struct FBlackboardKeySelector KeyToSet; 
	float LastEnrageTime; 
	struct AIcarusCharacter* OwningIcarusCharacter; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTS_Check_Ape_Enraged(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

