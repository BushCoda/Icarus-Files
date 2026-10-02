// BlueprintGeneratedClass BP_Mount_SpeederBike.BP_Mount_SpeederBike_C
struct ABP_Mount_SpeederBike_C : ABP_Mount_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight1; 
	struct USceneComponent* Scene_TailLights; 
	struct UNiagaraComponent* NS_Thruster_Start_01; 
	struct UNiagaraComponent* NS_Thruster_Start_02; 
	struct UNiagaraComponent* NS_Vent_Looping; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UNiagaraComponent* NS_DirtTrail; 
	struct UNiagaraComponent* NS_DroneFlare1; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_DroneFlare; 
	struct UStaticMeshComponent* StaticMesh_Destroyed; 
	struct UNiagaraComponent* NS_Vent_Start; 
	struct UFMODAudioComponent* FMODAudioRev; 
	struct UNiagaraComponent* NS_Thruster_02; 
	struct UNiagaraComponent* NS_Thruster_01; 
	struct UFMODAudioComponent* FMODAudioSpeeder; 
	struct UFillableComponent* Fillable; 
	struct USceneComponent* PetTarget; 
	struct USceneComponent* HandsTarget; 
	bool IsOn; 
	float DeltaFuelConsumption; 
	float InitialFOV; 
	int32_t SavedFillableUnits; 
	struct FItemsStaticRowHandle DefaultSpeederSaddle; 
	struct TArray<int32_t> LightsMaterialIndexes; 
	float SpeederMaxSpeed; 

	void IsMoving(bool& IsMoving); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateTrailParticle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCameraEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAdditionalWidgetForHUD(struct UUserWidget*& OutUserWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateFuelConsumption(float DeltaSeconds); // (Public|BlueprintCallable|BlueprintEvent)
	void TurnOn(); // (Public|BlueprintCallable|BlueprintEvent)
	void TurnOff(); // (Public|BlueprintCallable|BlueprintEvent)
	bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void CanTurnOn(bool& CanTurnOn, struct FText& FailureReason); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnRep_IsOn(); // (BlueprintCallable|BlueprintEvent)
	struct FVector GetHandsTargetLocation(struct FVector SeatLocation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnStateUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void MULTI_FailedToStart(struct FText Reason); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_TurnedOn(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_TurnedOff(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ReceiveUnpossessed(struct AController* OldController); // (Event|Public|BlueprintEvent)
	void OnFailedToStart(struct FText Reason); // (BlueprintCallable|BlueprintEvent)
	void OnFillableUpdated(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_RanOutOfFuel(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateVehicleFX(); // (BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mount_SpeederBike(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

