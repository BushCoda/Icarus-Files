// BlueprintGeneratedClass BP_Seed_Extractor.BP_Seed_Extractor_C
struct ABP_Seed_Extractor_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Particle; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void StateUpdated(bool bIsActive); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Seed_Extractor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

