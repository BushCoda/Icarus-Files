// BlueprintGeneratedClass BP_Fishing_Bench.BP_Fishing_Bench_C
struct ABP_Fishing_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* AlterationProcessingAudio; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UFMODEvent* ItemAlteredSound; 
	struct UFMODEvent* ItemUnalteredSound; 
	bool HasFillettingStation; 

	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Fishing_Bench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

