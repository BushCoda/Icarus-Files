// BlueprintGeneratedClass BP_ResearchCrate.BP_ResearchCrate_C
struct ABP_ResearchCrate_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Logbook; 
	struct UStaticMeshComponent* SM_DEP_Notebook; 
	struct UStaticMeshComponent* DM_DEP_TackleBox; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlighted(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ResearchCrate(int32_t EntryPoint); // (Final|UbergraphFunction)
};

