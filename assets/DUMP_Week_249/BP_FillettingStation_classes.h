// BlueprintGeneratedClass BP_FillettingStation.BP_FillettingStation_C
struct ABP_FillettingStation_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* AlterationProcessingAudio; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UFMODEvent* ItemAlteredSound; 
	struct UFMODEvent* ItemUnalteredSound; 

	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FillettingStation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

