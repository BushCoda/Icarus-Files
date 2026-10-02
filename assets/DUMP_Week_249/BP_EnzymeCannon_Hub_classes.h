// BlueprintGeneratedClass BP_EnzymeCannon_Hub.BP_EnzymeCannon_Hub_C
struct ABP_EnzymeCannon_Hub_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_EnzymeCannon_V2; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UNiagaraComponent* NS_EnzymeCannon_Charged; 
	struct UNiagaraComponent* NS_EnzymeCannon_Activate_Big; 
	struct UStaticMeshComponent* Sphere_VolFog; 
	struct USceneComponent* Scene_Exhaust; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust12; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust11; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust10; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust9; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust8; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust7; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust6; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust5; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust4; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust3; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust2; 
	struct UNiagaraComponent* NS_EnzymeCannon_Exhaust1; 
	struct UNiagaraComponent* NS_LightningBeam4; 
	struct UNiagaraComponent* NS_LightningBeam3; 
	struct UNiagaraComponent* NS_LightningBeam2; 
	struct UNiagaraComponent* NS_LightningBeam1; 
	struct USceneComponent* Scene_Sparks; 
	struct UNiagaraComponent* NS_EnzymeCannon_Activate; 
	struct UNiagaraComponent* NS_EnzymeCannon_BuildUp; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_LightningStrike; 
	struct UFMODAudioComponent* AudioChargeLoop; 
	struct UPostProcessComponent* PostProcess_LightningStrike; 
	struct UPointLightComponent* PointLight_LightningStrike; 
	struct UStaticMeshComponent* SM_ThunderSingleStrike; 
	struct UCameraComponent* Camera; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct FTimerHandle EnzymeCannonUpdateHandle; 
	int32_t CurrentCharge; 
	float MaxCharge; 
	float ChargeRate; 
	struct UFMODEvent* AudioStart; 
	float TreeRestoreRadius; 
	struct UFMODEvent* FMODEvent_Strike; 
	enum class ELightningStrikeTarget TargetType; 
	float StrikeDuration; 
	enum class EEnzymeCannonState EnzymeCannonState; 
	float CurrentChargeRemainder; 
	struct ABP_MapSearchArea_Custom_C* MapSearchArea; 

	void UpdateConsoleMaterial(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentCharge(); // (BlueprintCallable|BlueprintEvent)
	void GetIsCannonCharged(bool& bCharged); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_EnzymeCannonState(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayStrikeSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void StopDischargeEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartDischargeEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void RestoreTreesBegin(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RestoreTreesDone(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void Multi_DeviceStateChanged(bool On); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void StartStormEffects(); // (BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleSparkEffectsLocally(); // (BlueprintCallable|BlueprintEvent)
	void GrowFogVol(); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayDischargeAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_EnzymeCannon_Hub(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

