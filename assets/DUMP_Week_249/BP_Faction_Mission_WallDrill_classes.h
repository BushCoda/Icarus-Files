// BlueprintGeneratedClass BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C
struct ABP_Faction_Mission_WallDrill_C : ABP_Powered_Faction_Mission_Deployable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct UFMODAudioComponent* FMOD_Extractor_Audio; 
	bool TriggeredCleanup; 
	bool DrillActive; 

	void TriggerCleanup(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceNotFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDrillState(bool DrillOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_WallDrill(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

