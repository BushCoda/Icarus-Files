// BlueprintGeneratedClass BP_UraniumConverter.BP_UraniumConverter_C
struct ABP_UraniumConverter_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_OrganicExtractor_Steam2; 
	struct UNiagaraComponent* NS_OrganicExtractor_Steam1; 
	struct UNiagaraComponent* NS_OrganicExtractor_Steam; 
	struct UStaticMeshComponent* Proxy_Barrel_3; 
	struct UStaticMeshComponent* Proxy_Barrel_2; 
	struct USceneComponent* Lights1; 
	struct USceneComponent* Lights; 
	struct UFMODAudioComponent* FMODAudio; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_UraniumConverter(int32_t EntryPoint); // (Final|UbergraphFunction)
};

