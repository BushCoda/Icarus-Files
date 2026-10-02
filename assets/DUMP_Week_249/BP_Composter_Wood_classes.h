// BlueprintGeneratedClass BP_Composter_Wood.BP_Composter_Wood_C
struct ABP_Composter_Wood_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UStaticMeshComponent* StaticMesh; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Composter_Wood(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

