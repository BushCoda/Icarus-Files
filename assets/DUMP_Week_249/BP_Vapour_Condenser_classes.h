// BlueprintGeneratedClass BP_Vapour_Condenser.BP_Vapour_Condenser_C
struct ABP_Vapour_Condenser_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Analyzer_Transmitter_Closed; 
	struct UWidgetComponent* Widget_HordeInterface; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UBPQC_HordeMode_C* BPQC_HordeMode; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* ActiveEffects; 
	struct UGenericAITargetComponent* GeneratedTargetComponent; 
	bool DeviceActive; 
	int32_t Completions; 

	void GetCreatureMultiplierFromCompletions(int32_t Completions, float& Multiplier); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateWidgetState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GrantRewards(struct FHordeRowHandle Horde, int32_t Completions); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetMultiplierFromCompletions(int32_t Completions, float& Multiplier); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_DeviceActive(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHordeComplete(); // (BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Vapour_Condenser(int32_t EntryPoint); // (Final|UbergraphFunction)
};

