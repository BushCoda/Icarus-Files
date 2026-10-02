// BlueprintGeneratedClass BP_Natural_Oil_Refiner.BP_Natural_Oil_Refiner_C
struct ABP_Natural_Oil_Refiner_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight1; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_Natural_Oil_Refiner_Spray1; 
	struct UNiagaraComponent* NS_Natural_Oil_Refiner_Spray; 
	struct UCameraComponent* Camera; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UFMODAudioComponent* FMODAudio; 
	bool bFillingEffectsActive; 
	float ConversionRate; 
	float EnergyScale; 

	void ActorsRequiringOil(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_bFillingEffectsActive(); // (BlueprintCallable|BlueprintEvent)
	void SetFillingEffects(bool FillingEffectsOn); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void FillContainer(); // (BlueprintCallable|BlueprintEvent)
	void CheckOilConversion(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void TimerCheck(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Natural_Oil_Refiner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

