// BlueprintGeneratedClass BP_Water_Trough_T4.BP_Water_Trough_T4_C
struct ABP_Water_Trough_T4_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTameInteractableComponent* TameInteractable; 
	struct UFMODAudioComponent* Audio_Trough_On_Off; 
	bool TroughContainsWater; 
	struct UStaticMesh* Empty_Mesh; 
	struct UStaticMesh* Filled_Mesh; 
	bool Filling; 

	void OnRep_Filling(); // (BlueprintCallable|BlueprintEvent)
	bool RequiresFilling(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateMeshVisibility(bool Index); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TroughContainsWater(); // (BlueprintCallable|BlueprintEvent)
	void UpdateProxyMeshVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void AddWater(); // (BlueprintCallable|BlueprintEvent)
	void OnDynamicDataUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Trough_T4(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

