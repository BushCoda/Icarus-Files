// BlueprintGeneratedClass BP_Electric_Stove.BP_Electric_Stove_C
struct ABP_Electric_Stove_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat3; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat2; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat1; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat; 
	struct UStaticMeshComponent* Cylinder4; 
	struct UStaticMeshComponent* Cylinder3; 
	struct UStaticMeshComponent* Cylinder2; 
	struct UStaticMeshComponent* Cylinder1; 
	struct USceneComponent* Scene_Mesh; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight5; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UStaticMeshComponent* Meat3; 
	struct UStaticMeshComponent* Fish; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UStaticMeshComponent* Meat; 
	struct UStaticMeshComponent* CookingPot5; 
	struct UStaticMeshComponent* CookingPot4; 
	struct UStaticMeshComponent* CookingPot3; 
	struct UStaticMeshComponent* CookingPot2; 
	struct UStaticMeshComponent* Veges; 
	struct UStaticMeshComponent* Water; 
	struct UStaticMeshComponent* Soup; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Electric_Stove(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

