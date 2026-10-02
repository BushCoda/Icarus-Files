// BlueprintGeneratedClass BP_Water_Purifier_T4.BP_Water_Purifier_T4_C
struct ABP_Water_Purifier_T4_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara_Drip03_6; 
	struct UNiagaraComponent* Niagara_Drip03_5; 
	struct UNiagaraComponent* Niagara_Drip03_4; 
	struct UNiagaraComponent* Niagara_Drip03_3; 
	struct UNiagaraComponent* Niagara_Drip03_2; 
	struct UFMODAudioComponent* FMOD_ActiveAudio_water; 
	struct UCameraComponent* Camera; 
	struct UNiagaraComponent* Niagara_TopFX_1; 
	struct UNiagaraComponent* Niagara_Drip03_1; 
	struct USceneComponent* Niagara_1; 
	int32_t WaterUnitsPerTick; 
	float DividedFlowRate; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 
	bool FillingEffectsOn; 

	void SetFillingEffects(bool FillingEffectsOn); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FillingEffectsON(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void ActorsRequiringWater(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void FillContainer(); // (BlueprintCallable|BlueprintEvent)
	void ShouldWaterFlow(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ShouldWaterFlowDelayed(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Purifier_T4(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

