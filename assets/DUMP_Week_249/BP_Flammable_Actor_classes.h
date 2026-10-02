// BlueprintGeneratedClass BP_Flammable_Actor.BP_Flammable_Actor_C
struct UBP_Flammable_Actor_C : UFlammableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t ModifierUID; 
	struct UThermalComponent* ThermalComponent; 
	float ModifierTime; 
	bool PersistentFire; 
	bool ShouldInformSprinkers; 
	bool InformedSprinker; 
	float ReinformSprinklerTime; 
	float LastReinformSprinklerTime; 
	float SprinklerInformRange; 

	void IsPersistent(bool& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void InformAllSprinklers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanPropagateToTarget(struct FFlammableTargetIgnite Target); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TeardownCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnModifierUpdated(struct UModifierStateComponent* Component, bool bRemoved); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Flammable_Actor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

