// BlueprintGeneratedClass BP_Cement_Mixer.BP_Cement_Mixer_C
struct ABP_Cement_Mixer_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input1; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input3; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output3; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output2; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input2; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output1; 
	struct USceneComponent* ConcreteMixTag; 
	struct USceneComponent* StoneTag; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer; 
	struct UFMODAudioComponent* FMODAudio_CementStart; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Cement_Mixer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

