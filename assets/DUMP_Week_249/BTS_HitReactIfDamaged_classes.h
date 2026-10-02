// BlueprintGeneratedClass BTS_HitReactIfDamaged.BTS_HitReactIfDamaged_C
struct UBTS_HitReactIfDamaged_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAnimMontage* AdditiveHitReact; 
	struct TArray<struct FName> MontageSections; 
	float Cooldown; 
	int32_t MinimumDamage; 
	float ReactChance; 
	struct UActorState* OwnerActorState; 
	float LastReactTime; 
	struct AIcarusCharacter* OwningIcarusCharacter; 
	struct FBlackboardKeySelector OptionalBoolKeyToSet; 
	struct FVector2D RandomInitialCooldown; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTS_HitReactIfDamaged(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

