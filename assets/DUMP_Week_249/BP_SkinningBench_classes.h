// BlueprintGeneratedClass BP_SkinningBench.BP_SkinningBench_C
struct ABP_SkinningBench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct UBoxComponent* StopCorpseFallRight; 
	struct UBoxComponent* StopCorpseFallBack; 
	struct UBoxComponent* StopCorpseFallFront; 

	void GrantBestiaryProgress(struct FProcessingItem Item); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkinningBench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

