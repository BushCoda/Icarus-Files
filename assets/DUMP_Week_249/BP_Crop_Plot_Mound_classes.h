// BlueprintGeneratedClass BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C
struct ABP_Crop_Plot_Mound_C : ABP_Crop_Plot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFarmableComponent* Farmable; 
	struct UStaticMeshComponent* StaticMesh; 

	void SetSoilState(bool bWet); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HarvestResource(struct AActor* HarvestingActor, struct UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, struct UInventory* NonPlayerInventoryX, bool& Harvested); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Check(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Crop_Plot_Mound(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

