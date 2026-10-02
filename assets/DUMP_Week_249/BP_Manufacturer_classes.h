// BlueprintGeneratedClass BP_Manufacturer.BP_Manufacturer_C
struct ABP_Manufacturer_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget; 
	struct UStaticMeshComponent* RightSideA; 
	struct UStaticMeshComponent* LeftSideA; 
	struct UStaticMeshComponent* MidBenchA; 
	struct UStaticMeshComponent* RightBenchB; 
	struct UStaticMeshComponent* LeftBenchB; 
	struct UStaticMeshComponent* RightBenchA; 
	struct UStaticMeshComponent* LeftBenchA; 
	struct UFMODAudioComponent* AudioLoop; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_Left; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Resin; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_Right; 
	struct USceneComponent* Scene_Lights; 
	struct UStaticMeshComponent* DFShadows; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateAnimation(bool Active); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Manufacturer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

