// BlueprintGeneratedClass BP_Flamethrower_Turret.BP_Flamethrower_Turret_C
struct ABP_Flamethrower_Turret_C : ABP_Basic_Turret_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Flamethrower_FX; 
	struct UPointLightComponent* PointLight; 
	struct UFillableComponent* Fillable; 
	float DeltaTickSinceShot; 
	bool LocalDoFire; 
	struct UFMODAudioComponent* FMODAudioComponent; 
	struct UFMODEvent* FlamethrowerAudio; 
	bool DoFire; 
	bool Filling; 

	void RequiresFilling(bool& FillRequired); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_DoFire(); // (BlueprintCallable|BlueprintEvent)
	void ConditionalFire(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void FireAtTarget(); // (Public|BlueprintCallable|BlueprintEvent)
	void SphereTraceHit(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoType(struct FItemsStaticRowHandle& ItemType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoCount(int32_t& OutAmmoCount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ConsumeAmmo(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void AddFuelFromNetwork(); // (BlueprintCallable|BlueprintEvent)
	void MultiPlayAddAmmoAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Biofuel_ResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void Client_OnStoredUnitsUpdated_Event(); // (BlueprintCallable|BlueprintEvent)
	void BioFuel_DeviceConnectionChanged(struct FIcarusResourcesEnum ResourceType, bool bNewConnected); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Flamethrower_Turret(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

