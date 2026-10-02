// BlueprintGeneratedClass BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C
struct UBP_HitableBehaviour_TreePrimitive_C : UHitableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_HitableBehaviour_TreePrimitive(int32_t EntryPoint); // (Final|UbergraphFunction)
};

