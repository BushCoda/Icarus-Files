// BlueprintGeneratedClass ModifierCosmetic_IceMutation.ModifierCosmetic_IceMutation_C
struct UModifierCosmetic_IceMutation_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UParticleSystemComponent* FireParticle; 
	struct UFMODAudioComponent* AudioComponent; 
	struct UFMODEvent* FMODEvent_Player; 
	struct UFMODEvent* FMODEvent_Creature; 
	struct USceneComponent* AttachToComponent; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_IceMutation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

