// BlueprintGeneratedClass BP_Dehumidifier.BP_Dehumidifier_C
struct ABP_Dehumidifier_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara2; 
	struct UNiagaraComponent* Niagara1; 
	struct USceneComponent* Scene_Niagara; 
	struct UPointLightComponent* PointLight7; 
	struct UPointLightComponent* PointLight6; 
	struct UPointLightComponent* PointLight5; 
	struct UPointLightComponent* PointLight4; 
	struct UPointLightComponent* PointLight3; 
	struct UPointLightComponent* PointLight2; 
	struct UPointLightComponent* PointLight1; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODAudioComponent* FMOD_Active_Audio; 
	struct UInventory* GeneralInventory; 

	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Dehumidifier(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

