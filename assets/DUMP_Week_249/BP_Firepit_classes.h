// BlueprintGeneratedClass BP_Firepit.BP_Firepit_C
struct ABP_Firepit_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UBoxComponent* NavBlockingBox; 
	struct UNiagaraComponent* NS_Firepit_FX; 
	struct USceneComponent* Scene_Niagara; 
	struct UPointLightComponent* PointLight_Bloom_2; 
	struct USceneComponent* Scene_Lights; 
	struct UPointLightComponent* PointLight_Bloom_4; 
	struct UPointLightComponent* PointLight_Bloom_3; 
	struct UStaticMeshComponent* SM_DEP_FirePit_Firewood_Proxy; 
	struct UStaticMeshComponent* SM_DEP_Camfire_CookingMeat; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low; 
	struct USceneComponent* RawMeat; 
	struct USceneComponent* CookedMeats; 
	struct UCapsuleComponent* FireSettingCapsule; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnThermalComponentActivated(struct UActorComponent* Component, bool bReset); // (BlueprintCallable|BlueprintEvent)
	void OnThermalComponentDeactivated(struct UActorComponent* Component); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Firepit(int32_t EntryPoint); // (Final|UbergraphFunction)
};

