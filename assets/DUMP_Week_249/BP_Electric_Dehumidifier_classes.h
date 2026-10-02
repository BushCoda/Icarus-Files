// BlueprintGeneratedClass BP_Electric_Dehumidifier.BP_Electric_Dehumidifier_C
struct ABP_Electric_Dehumidifier_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara2; 
	struct UNiagaraComponent* Niagara1; 
	struct USceneComponent* Scene_Niagara; 
	struct UFMODAudioComponent* FMOD_Active_Audio; 
	struct UInventory* GeneralInventory; 

	void UpdateEffects(bool ReceivingPower); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Electric_Dehumidifier(int32_t EntryPoint); // (Final|UbergraphFunction)
};

