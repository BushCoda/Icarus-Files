// BlueprintGeneratedClass BP_Water_Trough_Base.BP_Water_Trough_Base_C
struct ABP_Water_Trough_Base_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTameInteractableComponent* TameInteractable; 
	struct UStaticMeshComponent* WaterProxyPlane; 
	struct UInventoryComponent* InventoryComponent; 
	bool TroughContainsWater; 
	struct UStaticMesh* Empty_Mesh; 
	struct UStaticMesh* Filled_Mesh; 
	float Fill%; 

	void UpdateWaterVisibility(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TroughContainsWater(); // (BlueprintCallable|BlueprintEvent)
	void UpdateProxyMeshVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDynamicDataUpdate(); // (BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Trough_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

