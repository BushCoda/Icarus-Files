// BlueprintGeneratedClass BP_Water_Purifier_T2.BP_Water_Purifier_T2_C
struct ABP_Water_Purifier_T2_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara_Drip06; 
	struct UNiagaraComponent* Niagara_Drip05; 
	struct UNiagaraComponent* Niagara_Drip04; 
	struct UCameraComponent* Camera; 
	struct UFMODAudioComponent* FMOD_ActiveWaterPurifyAudio; 
	struct UNiagaraComponent* Niagara_Drip03; 
	struct UNiagaraComponent* Niagara_Drip02; 
	struct UNiagaraComponent* Niagara_TopFX; 
	struct USceneComponent* Niagara; 
	int32_t Milliliters; 
	int32_t NumActorsConsuming; 
	float DividedFlowRate; 
	bool RequiredState; 
	bool FillingEffectsOn; 

	void SetFillingEffects(bool FillingEffectsOn); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FillingEffectsON(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void RequiresWaterForFillable(bool& RequiresWater); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ActorsRequiringWater(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void FillContainer(); // (BlueprintCallable|BlueprintEvent)
	void FuelUpdate(); // (BlueprintCallable|BlueprintEvent)
	void OnGeneratorActiveStateUpdated(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void CheckGeneratorRunning(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Purifier_T2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

