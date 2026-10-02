// BlueprintGeneratedClass BP_Part_BTM_MK1.BP_Part_BTM_MK1_C
struct ABP_Part_BTM_MK1_C : ABP_PartBase_C {
	struct UNiagaraComponent* FxTakeOffThruster; 
	struct UNiagaraComponent* FxLandingThruster; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	bool EngineActive; 
	bool EngineAudioActive; 
	bool FeetDeployed; 
	bool LandingThrusterFX; 
	bool TakeoffThrusterFX; 

	void OnRep_TakeoffThrusterFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LandingThrusterFX(); // (BlueprintCallable|BlueprintEvent)
	void TriggerEvent(struct FDropShipActionsEnum Actions); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMesh(struct UPrimitiveComponent*& Mesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

