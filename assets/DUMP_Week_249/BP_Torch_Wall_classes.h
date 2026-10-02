// BlueprintGeneratedClass BP_Torch_Wall.BP_Torch_Wall_C
struct ABP_Torch_Wall_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_TorchRag_FireShell; 
	struct UNiagaraComponent* NS_Torch_FX; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	struct UCapsuleComponent* FireSettingCapsule; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Torch_Wall(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

