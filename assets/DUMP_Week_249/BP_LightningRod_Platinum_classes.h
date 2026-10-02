// BlueprintGeneratedClass BP_LightningRod_Platinum.BP_LightningRod_Platinum_C
struct ABP_LightningRod_Platinum_C : ABP_LightningRod_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	int32_t LighningUnits; 

	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Discharge(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LightningRod_Platinum(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

