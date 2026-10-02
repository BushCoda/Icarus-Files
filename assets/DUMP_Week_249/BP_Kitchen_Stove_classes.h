// BlueprintGeneratedClass BP_Kitchen_Stove.BP_Kitchen_Stove_C
struct ABP_Kitchen_Stove_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UNiagaraComponent* Smoke3; 
	struct UStaticMeshComponent* Saltwater; 
	struct UStaticMeshComponent* Freshwater; 
	struct UStaticMeshComponent* Fish; 
	struct UStaticMeshComponent* Meat; 
	struct UStaticMeshComponent* SoftRaw; 
	struct UNiagaraComponent* Smoke2; 
	struct UStaticMeshComponent* StringRaw; 
	struct UStaticMeshComponent* Veges; 
	struct UStaticMeshComponent* Kumara; 
	struct UNiagaraComponent* Smoke1; 
	struct UStaticMeshComponent* Tomato; 
	struct UStaticMeshComponent* Carrot; 
	struct UStaticMeshComponent* Beans; 
	struct UNiagaraComponent* Smoke; 
	struct UStaticMeshComponent* Sphere; 
	struct UStaticMeshComponent* Soup; 
	struct UNiagaraComponent* NS_StoveFire_FX3; 
	struct UNiagaraComponent* NS_StoveFire_FX2; 
	struct UNiagaraComponent* NS_StoveFire_FX1; 
	struct UNiagaraComponent* NS_StoveFire_FX; 
	struct USceneComponent* Scene_Niagara; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 

	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateStoveEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Kitchen_Stove(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

