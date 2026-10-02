// BlueprintGeneratedClass BP_StoneBrick_Fireplace.BP_StoneBrick_Fireplace_C
struct ABP_StoneBrick_Fireplace_C : ABP_Fireplace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Cooked_Bacon; 
	struct UStaticMeshComponent* Cooked_Fish; 
	struct UStaticMeshComponent* Cooked_Soup; 
	struct UStaticMeshComponent* Cooked_Meat; 
	struct UStaticMeshComponent* Meat1; 
	struct UStaticMeshComponent* Meat2; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat1; 
	struct UStaticMeshComponent* Meat3; 
	struct UStaticMeshComponent* Fish; 
	struct UStaticMeshComponent* Meat; 
	struct UStaticMeshComponent* Veges; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat; 
	struct UStaticMeshComponent* CookingPot2; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat2; 
	struct UStaticMeshComponent* CookingPot5; 
	struct UStaticMeshComponent* CookingPot4; 
	struct UStaticMeshComponent* CookingPot3; 
	struct UStaticMeshComponent* Soup; 
	struct UStaticMeshComponent* Water; 
	struct UNiagaraComponent* NS_Cooking_SteamHeat3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Bounce; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_Fireplace_FX; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_StoneBrick_Fireplace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

