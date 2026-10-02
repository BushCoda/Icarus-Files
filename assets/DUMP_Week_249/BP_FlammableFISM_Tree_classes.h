// BlueprintGeneratedClass BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C
struct UBP_FlammableFISM_Tree_C : UBP_FlammableFISM_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<int32_t, struct UNiagaraComponent*> TreeFireNiagaraSystems; 
	struct TMap<int32_t, struct UStaticMeshComponent*> TreeFireStaticMeshes; 
	struct TMap<struct FFLODDescriptionsEnum, struct TSoftObjectPtr<UStaticMesh>> FlammableStaticMeshes; 
	struct TMap<int32_t, float> WaitingAsyncMeshLoad; 

	void UpdateEffectsStaticMesh(struct UMeshComponent* Mesh, struct UFlammableInstanceFLOD* Instance, float FireSpread); // (Public|BlueprintCallable|BlueprintEvent)
	void AttachEffectsStaticMesh(struct UObject* Mesh, struct UFlammableInstanceFLOD* Instance, float FireSpread); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupEffectsStaticMesh(struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateInstanceVisualData_Combusted(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateInstanceVisualData_Combustion(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateInstanceVisualData_Pyrolysis(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool UpdateQueuedInstanceEffects(int32_t InstanceIndex, struct FFlammableFISMVisualData& VisualData); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnReplacedInstanceCombusted(struct FFLODInstanceID NewInstance, struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void CombustingExit(struct UFlammableInstanceFLOD* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	struct FBoxSphereBounds GetInstanceLocalBounds(int32_t InstanceIndex); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CombustingEnter(struct UFlammableInstanceFLOD* Instance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_A491C1D5455DD83BCECEF481A1124DEB(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceState_Detached_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void GetOrLoadEffectsStaticMesh(struct UFlammableInstanceFLOD* Instance, float FireSpread); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FlammableFISM_Tree(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

