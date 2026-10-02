// BlueprintGeneratedClass BP_PotBellyStove.BP_PotBellyStove_C
struct ABP_PotBellyStove_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Smoke1; 
	struct UNiagaraComponent* Smoke; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UStaticMeshComponent* CookingPot3; 
	struct UStaticMeshComponent* CookingPot2; 
	struct UStaticMeshComponent* CookingPot5; 
	struct UStaticMeshComponent* CookingPot4; 
	struct UStaticMeshComponent* Cooking_Pan; 
	struct UStaticMeshComponent* Sphere; 
	struct UStaticMeshComponent* CookingPot; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UPointLightComponent* PointLight_Fill; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* NS_Potbelly_Smoke; 
	struct UNiagaraComponent* NS_Potbelly_Fire; 
	struct USceneComponent* Scene_Effects; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFuelItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PotBellyStove(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

