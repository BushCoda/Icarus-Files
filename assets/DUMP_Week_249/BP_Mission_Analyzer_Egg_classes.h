// BlueprintGeneratedClass BP_Mission_Analyzer_Egg.BP_Mission_Analyzer_Egg_C
struct ABP_Mission_Analyzer_Egg_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio_Analyzer; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* SM_Sandworm_Egg; 
	struct UPointLightComponent* PointLight; 
	float Timeline_0_Rotation_CBF30B984634E3D1629599916C370126; 
	enum class ETimelineDirection Timeline_0__Direction_CBF30B984634E3D1629599916C370126; 
	struct UTimelineComponent* Timeline_1; 
	bool AnalyzerActive; 
	struct AIcarusActor* Target; 
	bool HasEgg; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasEgg(); // (BlueprintCallable|BlueprintEvent)
	void UpdateAnalyzerState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_AnalyzerActive(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void StartScanEffect(); // (BlueprintCallable|BlueprintEvent)
	void StopScanEffect(); // (BlueprintCallable|BlueprintEvent)
	void InventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_Analyzer_Egg(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

