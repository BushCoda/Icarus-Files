// BlueprintGeneratedClass BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C
struct ABP_Faction_Mission_Prototype_Laser_C : ABP_Faction_Mission_Laser_C {
	struct UNiagaraComponent* NS_HeatHaze; 
	struct UNiagaraComponent* NS_LaserImpact1; 
	struct UDecalComponent* Decal1; 
	struct UNiagaraComponent* NS_LaserBeam1; 
	struct USceneComponent* LaserSource1; 
	bool Burning; 

	void OnRep_Burning(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLaserSourceLocation(struct FVector& Location, struct FVector& ForwardVector); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetPoweredMaterial(bool On); // (Public|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UNiagaraComponent*> GetLaserImpacts(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UDecalComponent*> GetLaserDecals(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UNiagaraComponent*> GetLaserBeams(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

