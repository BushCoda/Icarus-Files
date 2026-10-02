// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
struct ABP_Campfire_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USphereComponent* NavBlockingSphere; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooking_Stick; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooking_Meat_Proxy; 
	struct UNiagaraComponent* CampfireFX; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Sticks_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Sticks_Low; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Low; 
	struct USceneComponent* RawMeat; 
	struct USceneComponent* CookedMeats; 
	struct USceneComponent* FuelSources; 
	struct UCapsuleComponent* FireSettingCapsule; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void DeactivateCampfire(); // (BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnThermalComponentActivated(struct UActorComponent* Component, bool bReset); // (BlueprintCallable|BlueprintEvent)
	void OnThermalComponentDeactivated(struct UActorComponent* Component); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Campfire(int32_t EntryPoint); // (Final|UbergraphFunction)
};

