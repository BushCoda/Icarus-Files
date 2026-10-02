// BlueprintGeneratedClass BP_Faction_Mission_Laser_Utility.BP_Faction_Mission_Laser_Utility_C
struct ABP_Faction_Mission_Laser_Utility_C : ABP_Faction_Mission_Laser_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UNiagaraComponent* NS_HeatHaze; 
	struct UNiagaraComponent* NS_LaserImpact1; 
	struct UDecalComponent* Decal1; 
	struct UNiagaraComponent* NS_LaserBeam1; 
	struct USceneComponent* LaserSource1; 
	bool Burning; 

	void GetObjectTypes(struct TArray<enum class EObjectTypeQuery>& ObjectTypes); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_Burning(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLaserSourceLocation(struct FVector& Location, struct FVector& ForwardVector); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetPoweredMaterial(bool On); // (Public|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UNiagaraComponent*> GetLaserImpacts(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UDecalComponent*> GetLaserDecals(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UNiagaraComponent*> GetLaserBeams(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnDeviceFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_Laser_Utility(int32_t EntryPoint); // (Final|UbergraphFunction)
};

