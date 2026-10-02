// BlueprintGeneratedClass BP_Light_Free_Base.BP_Light_Free_Base_C
struct ABP_Light_Free_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ActiveAudio; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	bool WantsOn; 
	bool LightsEnabled; 
	struct UFMODEvent* FMODEvent_SwitchOn; 
	struct UFMODEvent* FMODEvent_SwitchOff; 
	struct UMaterialInterface* MaterialOn; 
	struct UMaterialInterface* MaterialOff; 
	int32_t MaterialIndex; 
	bool DisableSelfShadow; 

	void OnRep_WantsOn(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LightsEnabled(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void MULTI_PlaySwitchSound(bool IsSwitchOn); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ASync_Reinit(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Light_Free_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

