// BlueprintGeneratedClass ModifierCosmetic_RadiationGrenade.ModifierCosmetic_RadiationGrenade_C
struct UModifierCosmetic_RadiationGrenade_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* ParticleSystem; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnOwnerDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_RadiationGrenade(int32_t EntryPoint); // (Final|UbergraphFunction)
};

