// BlueprintGeneratedClass BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C
struct UBP_HitableBehaviour_ResourceNode_C : UHitableComponent {
	struct AIcarusPlayerCharacter* Player; 

	bool ConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

