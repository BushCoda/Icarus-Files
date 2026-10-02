// BlueprintGeneratedClass BP_DestructableHarvest.BP_DestructableHarvest_C
struct ABP_DestructableHarvest_C : ADestructibleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float OffsetEmitter; 
	struct UNiagaraSystem* NiagaraEmitter; 
	float EmitterHeight; 
	float HeightOffsetMultiplier; 
	float DestructionImpulse; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DelayedDestroy(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DestructableHarvest(int32_t EntryPoint); // (Final|UbergraphFunction)
};

