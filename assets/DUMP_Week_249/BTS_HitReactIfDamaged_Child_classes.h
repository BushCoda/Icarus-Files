// BlueprintGeneratedClass BTS_HitReactIfDamaged_Child.BTS_HitReactIfDamaged_Child_C
struct UBTS_HitReactIfDamaged_Child_C : UBTS_HitReactIfDamaged_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector FilterKey; 

	void OnDamaged_Event(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTS_HitReactIfDamaged_Child(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

