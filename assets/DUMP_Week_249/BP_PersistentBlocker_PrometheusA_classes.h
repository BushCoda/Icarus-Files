// BlueprintGeneratedClass BP_PersistentBlocker_PrometheusA.BP_PersistentBlocker_PrometheusA_C
struct ABP_PersistentBlocker_PrometheusA_C : APersistentBlocker {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* BlockerLC; 
	struct USceneComponent* Scene; 

	void UpdateDestroyedState(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PersistentBlocker_PrometheusA(int32_t EntryPoint); // (Final|UbergraphFunction)
};

