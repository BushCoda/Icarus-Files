// BlueprintGeneratedClass ModifierCosmetic_Gas.ModifierCosmetic_Gas_C
struct UModifierCosmetic_Gas_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_ExpandSulfurLarge; 
	struct UNiagaraComponent* ParticleSystem; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnOwnerDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_Gas(int32_t EntryPoint); // (Final|UbergraphFunction)
};

