// BlueprintGeneratedClass BP_Faction_Mission_Laser_Ground.BP_Faction_Mission_Laser_Ground_C
struct ABP_Faction_Mission_Laser_Ground_C : ABP_Powered_Faction_Mission_Deployable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SK_DEP_Disruption_Heat1; 
	struct USkeletalMeshComponent* SK_DEP_Disruption_Heat; 
	struct UBoxComponent* Box; 
	struct UDecalComponent* Decal; 
	struct UNiagaraComponent* NS_LaserBeam; 
	struct UNiagaraComponent* NS_LaserImpact; 
	struct USceneComponent* LaserSource; 
	struct UFMODAudioComponent* DestructionAudio; 
	struct UFMODAudioComponent* LaserAudio; 
	struct USceneComponent* Scene; 
	bool LaserActive; 
	struct AIcarusActor* Target; 
	int32_t LaserDamage; 
	float TimeToKill; 
	struct UCurveFloat* DamageCurve; 
	float StartTime; 
	struct FTimerHandle DamageTickTimer; 

	void LaserDamageTick(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLaserSourceLocation(struct FVector& Location, struct FVector& ForwardVector); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetPoweredMaterial(bool On); // (Public|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UDecalComponent*> GetLaserDecals(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UNiagaraComponent*> GetLaserImpacts(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UNiagaraComponent*> GetLaserBeams(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TraceForImpactLocation(bool& Found, struct FVector& End Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_LaserActive(); // (BlueprintCallable|BlueprintEvent)
	void UpdateLaserState(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceNotFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnHighlightChaned(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DamageTick(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_Laser_Ground(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

