// BlueprintGeneratedClass BPC_Recipe_Proxy.BPC_Recipe_Proxy_C
struct UBPC_Recipe_Proxy_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct USceneComponent*, struct FTagQueriesRowHandle> RecipeSetup; 
	struct USceneComponent* DefaultProxy; 
	bool bDeviceActive; 

	void Set Proxy Visibility(struct USceneComponent* InComponent, bool Visibility); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateProxies(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct TMap<struct USceneComponent*, struct FTagQueriesRowHandle> RecipeSetup, struct USceneComponent* DefaultProxy); // (Public|BlueprintCallable|BlueprintEvent)
	void Processor Updated(struct FProcessingItem Item); // (BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdated(bool bIsActive); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPC_Recipe_Proxy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

