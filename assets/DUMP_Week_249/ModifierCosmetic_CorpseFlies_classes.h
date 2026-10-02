// BlueprintGeneratedClass ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C
struct UModifierCosmetic_CorpseFlies_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* AudioComponent; 
	struct UFMODEvent* FMODEvent_Creature; 
	struct USceneComponent* AttachToComponent; 
	struct UNiagaraComponent* FliesNiagara; 
	struct FVector CenterOfMass; 

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ModifierCosmetic_CorpseFlies(int32_t EntryPoint); // (Final|UbergraphFunction)
};

