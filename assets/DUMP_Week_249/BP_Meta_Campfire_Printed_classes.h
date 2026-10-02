// BlueprintGeneratedClass BP_Meta_Campfire_Printed.BP_Meta_Campfire_Printed_C
struct ABP_Meta_Campfire_Printed_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooking_Meat_Proxy; 
	struct UNiagaraComponent* CampfireFX; 
	struct USceneComponent* Scene_Niagara; 
	struct UPointLightComponent* PointLight_Bloom; 
	struct USceneComponent* Scene_Lights; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Sticks_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Sticks_Low; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full; 
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Low; 
	struct USceneComponent* RawMeat; 
	struct USceneComponent* FuelSources; 
	struct UCapsuleComponent* FireSettingCapsule; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Meta_Campfire_Printed(int32_t EntryPoint); // (Final|UbergraphFunction)
};

