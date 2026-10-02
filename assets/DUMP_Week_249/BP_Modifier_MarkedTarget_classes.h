// BlueprintGeneratedClass BP_Modifier_MarkedTarget.BP_Modifier_MarkedTarget_C
struct UBP_Modifier_MarkedTarget_C : UBP_Modifier_Base_C {
	enum class EIcarusDamageType DamageType; 
	struct UActorState* ActorState; 
	bool HasAppliedDamage; 

	void OnOwnerDamaged(struct FIcarusDamagePacket DamagePacket); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

