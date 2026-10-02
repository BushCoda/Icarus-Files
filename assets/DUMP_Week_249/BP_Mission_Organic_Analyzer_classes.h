// BlueprintGeneratedClass BP_Mission_Organic_Analyzer.BP_Mission_Organic_Analyzer_C
struct ABP_Mission_Organic_Analyzer_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio_Analyzer; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* SM_Sandworm_Egg; 
	struct UPointLightComponent* PointLight; 
	float Timeline_0_Rotation_9ED8907F43197BBB79E1139199CDF619; 
	enum class ETimelineDirection Timeline_0__Direction_9ED8907F43197BBB79E1139199CDF619; 
	struct UTimelineComponent* Timeline_1; 
	bool AnalyzerActive; 
	struct AIcarusActor* Target; 
	bool HasItem; 
	struct FItemsStaticRowHandle Required_Item; 
	bool HasPower; 

	void CheckItem(struct FItemsStaticRowHandle& Item Static Data); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetItem(struct FItemsStaticRowHandle Required_Item); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasItem(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateAnalyzerState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_AnalyzerActive(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void StartScanEffect(); // (BlueprintCallable|BlueprintEvent)
	void StopScanEffect(); // (BlueprintCallable|BlueprintEvent)
	void InventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_Organic_Analyzer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

