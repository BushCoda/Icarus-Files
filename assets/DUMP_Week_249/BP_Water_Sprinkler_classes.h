// BlueprintGeneratedClass BP_Water_Sprinkler.BP_Water_Sprinkler_C
struct ABP_Water_Sprinkler_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Sprinkler; 
	struct UFMODAudioComponent* FMODAudioSprinkler; 
	bool IsWaterConnectionActive; 
	float WaterConeCheckDistance; 
	float SprinklerCycleTickExtinguishChance; 
	bool ExtinguishingCycleActive; 
	struct FTimerHandle CheckFlowTimerHandle; 
	struct FTimerHandle SprinklerCycleTimer; 
	int32_t CurrentSprinklerCycleCount; 

	void NotifyOfFire(struct FVector FireLocation, bool& WasNotified); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetWantsWater(bool WantsFlow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWaterConnectionState(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsInSprinklerRange(struct FVector TestWorldLocation, bool& IsInSprinklerRange); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_ExtinguishingCycleActive(); // (BlueprintCallable|BlueprintEvent)
	void ExtinguishFires(float Chance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InformSprinklerOfFire(struct FVector FireLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void IsLocationInSphereRange(struct FVector TestWorldLocation, bool& InExtraRange); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsLocationInConeRange(struct FVector TestWorldLocation, bool& InConeRange); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void StartSprinklerCycle(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void CheckWaterFlowStarted(); // (BlueprintCallable|BlueprintEvent)
	void StopSprinklerCycle(); // (BlueprintCallable|BlueprintEvent)
	void SprinklerCycle(); // (BlueprintCallable|BlueprintEvent)
	void Event Damaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Sprinkler(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

