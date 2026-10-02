// BlueprintGeneratedClass BP_FlammableFISM.BP_FlammableFISM_C
struct UBP_FlammableFISM_C : UFlammableFISM {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<int32_t, struct UNiagaraComponent*> FoliageEmbersNiagaraSystems; 

	void CombustedEnter(struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void CombustingExit(struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void CombustingEnter(struct UFlammableInstanceFLOD* Instance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnReplacedInstanceCombusted(struct FFLODInstanceID NewInstance, struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void TryReplaceInstanceCombusted(struct UFlammableInstanceFLOD* Instance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusted_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FlammableFISM(int32_t EntryPoint); // (Final|UbergraphFunction)
};

