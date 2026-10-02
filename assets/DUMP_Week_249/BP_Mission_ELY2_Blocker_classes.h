// BlueprintGeneratedClass BP_Mission_ELY2_Blocker.BP_Mission_ELY2_Blocker_C
struct ABP_Mission_ELY2_Blocker_C : ABP_Destructible_Blocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ExplosionPoint; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* Snap; 
	bool bShowSnap; 

	void UpdateDestroyed(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSnapState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bShowSnap(); // (BlueprintCallable|BlueprintEvent)
	void UpdateBlockerState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerDestroy(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void DealDamage(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_ELY2_Blocker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

