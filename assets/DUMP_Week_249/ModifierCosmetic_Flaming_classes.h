// BlueprintGeneratedClass ModifierCosmetic_Flaming.ModifierCosmetic_Flaming_C
struct UModifierCosmetic_Flaming_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UParticleSystemComponent* FireParticle; 
	struct UFMODAudioComponent* AudioComponent; 
	struct UFMODEvent* FMODEvent_Player; 
	struct UFMODEvent* FMODEvent_Creature; 
	struct USceneComponent* AttachToComponent; 

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_Flaming(int32_t EntryPoint); // (Final|UbergraphFunction)
};

