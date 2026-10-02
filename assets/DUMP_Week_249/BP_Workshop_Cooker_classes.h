// BlueprintGeneratedClass BP_Workshop_Cooker.BP_Workshop_Cooker_C
struct ABP_Workshop_Cooker_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* Smoke2; 
	struct UNiagaraComponent* Smoke; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UStaticMeshComponent* CookingPot5; 
	struct UStaticMeshComponent* CookingPot4; 
	struct UStaticMeshComponent* CookingPot3; 
	struct UStaticMeshComponent* CookingPot2; 
	struct UStaticMeshComponent* Cooking_Pan; 
	struct UStaticMeshComponent* Sphere; 
	struct UNiagaraComponent* CampfireFX2; 
	struct UNiagaraComponent* CampfireFX3; 
	struct UNiagaraComponent* CampfireFX1; 
	struct UStaticMeshComponent* CookingPot; 
	struct UStaticMeshComponent* Proxy_Fuel; 
	struct UNiagaraComponent* CampfireFX; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	struct UCapsuleComponent* FireSettingCapsule; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateCookingPot(struct FProcessingItem Item); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Workshop_Cooker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

