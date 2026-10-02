// BlueprintGeneratedClass BP_Torch_Floor.BP_Torch_Floor_C
struct ABP_Torch_Floor_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UStaticMeshComponent* SM_TorchRag_FireShell; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UFMODAudioComponent* FMODAudioExtinguishFlame; 
	struct UNiagaraComponent* NS_Torch_FX; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	struct UCapsuleComponent* FireSettingCapsule; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 
	struct UFMODEvent* Extinguish; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayAddFuelSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddFuel(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Toggle(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multi_OnAddedFuel(struct AActor* Instigator); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Torch_Floor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

