// BlueprintGeneratedClass BP_HitableBehaviour_CreatureSpawner.BP_HitableBehaviour_CreatureSpawner_C
struct UBP_HitableBehaviour_CreatureSpawner_C : UHitableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<enum class EIcarusDamageType> AllowedDamageTypes; 
	struct TArray<struct FGameplayTag> AllowedDamageSourceTags; 
	bool AllowDrillArrows; 

	bool ConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_HitableBehaviour_CreatureSpawner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

