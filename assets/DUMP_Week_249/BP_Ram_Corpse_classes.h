// BlueprintGeneratedClass BP_Ram_Corpse.BP_Ram_Corpse_C
struct ABP_Ram_Corpse_C : ABP_GOAP_Corpse_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGFurComponent* GFur; 
	bool HasWool; 

	void IsSkeletonUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasWool(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCorpseMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnSkinnedStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Ram_Corpse(int32_t EntryPoint); // (Final|UbergraphFunction)
};

