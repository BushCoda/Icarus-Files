// BlueprintGeneratedClass BP_waterfallBase_Frozen.BP_waterfallBase_Frozen_C
struct ABP_waterfallBase_Frozen_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Plane; 
	struct UNiagaraComponent* NS_waterfallBaseFX; 
	bool BlockerEnabled; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_waterfallBase_Frozen(int32_t EntryPoint); // (Final|UbergraphFunction)
};

