// BlueprintGeneratedClass BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C
struct ABP_Faction_Mission_Drill_C : ABP_Powered_Faction_Mission_Deployable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Extractor_baseFX; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct UFMODAudioComponent* FMOD_Extractor_Audio; 
	bool TriggeredCleanup; 
	bool DrillActive; 

	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void SetCosmeticsState(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerCleanup(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceNotFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_Drill(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

