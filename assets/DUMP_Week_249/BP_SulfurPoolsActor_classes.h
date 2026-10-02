// BlueprintGeneratedClass BP_SulfurPoolsActor.BP_SulfurPoolsActor_C
struct ABP_SulfurPoolsActor_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_SulfurGas_Up; 
	struct USceneComponent* DefaultSceneRoot; 
	float SulfurPoolRadius; 
	float SpawnRate; 
	bool EffectActive; 
	int32_t AuraId; 

	void OnRep_EffectActive(); // (BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void TriggerSulfurPoolsEffect(bool Active); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SulfurPoolsActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

