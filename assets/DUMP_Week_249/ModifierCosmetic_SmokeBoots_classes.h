// BlueprintGeneratedClass ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C
struct UModifierCosmetic_SmokeBoots_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UParticleSystemComponent* ParticleL; 
	struct UAudioComponent* Sound; 
	struct UParticleSystemComponent* ParticleR; 
	struct ACharacter* Owner; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_SmokeBoots(int32_t EntryPoint); // (Final|UbergraphFunction)
};

