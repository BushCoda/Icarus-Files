// BlueprintGeneratedClass BP_Carpentry_Bench.BP_Carpentry_Bench_C
struct ABP_Carpentry_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* Anything; 
	struct UStaticMeshComponent* SM_KIT_Crafting1; 
	struct UStaticMeshComponent* SM_KIT_Crafting; 
	struct USceneComponent* ProxyMeshesAnything; 
	struct UStaticMeshComponent* Building_WoodOnly; 
	struct UStaticMeshComponent* Building_Interior_Wood; 
	struct UStaticMeshComponent* SM_ITM_Copper_Nails; 
	struct UStaticMeshComponent* SM_ITM_Fiber; 
	struct UStaticMeshComponent* SM_ITM_Hammer_2_Carpentry; 
	struct UStaticMeshComponent* SM_ITM_Hammer_1_Carpentry; 
	struct UStaticMeshComponent* SM_ITM_Screwdriver_1_Carpentry1; 
	struct UStaticMeshComponent* SM_ITM_Screwdriver_1_Carpentry; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Carpentry_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

