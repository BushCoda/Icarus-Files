// BlueprintGeneratedClass BP_Meta_Oxite_Dissolver_Printed.BP_Meta_Oxite_Dissolver_Printed_C
struct ABP_Meta_Oxite_Dissolver_Printed_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_oxiteDissolver_dropFX; 
	struct UNiagaraComponent* NS_oxiteDissolver_topFX; 
	struct USceneComponent* Niagara; 
	struct UFMODAudioComponent* FMOD_ActiveAudio_Combust; 
	struct UFMODAudioComponent* FMOD_ActiveAudio_Tanks; 
	bool bHasItem; 

	void OnRep_bHasItem(); // (BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void OnItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Meta_Oxite_Dissolver_Printed(int32_t EntryPoint); // (Final|UbergraphFunction)
};

