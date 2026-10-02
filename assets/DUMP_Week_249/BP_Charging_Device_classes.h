// BlueprintGeneratedClass BP_Charging_Device.BP_Charging_Device_C
struct ABP_Charging_Device_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* Proxy_MetaPowerbank; 
	struct USkeletalMeshComponent* Proxy_MetaFlashlight; 
	struct USkeletalMeshComponent* Proxy_Nailgun; 
	struct USkeletalMeshComponent* Proxy_Sand_Backpack; 
	struct USkeletalMeshComponent* Proxy_Laser_Mining; 
	struct USkeletalMeshComponent* Proxy_Laser_Pistol; 
	struct USkeletalMeshComponent* Proxy_Powerbank; 
	struct USkeletalMeshComponent* Proxy_Lithium_Shield; 
	struct USkeletalMeshComponent* Proxy_Lithium_CrossBow; 
	struct USkeletalMeshComponent* Proxy_Lithium_Bow; 
	struct USkeletalMeshComponent* Proxy_Lithium_Sledgehammer; 
	struct USkeletalMeshComponent* Proxy_Lithium_Sickle; 
	struct USkeletalMeshComponent* Proxy_Lithium_Spear; 
	struct USkeletalMeshComponent* Proxy_Lithium_Knife; 
	struct USkeletalMeshComponent* Proxy_Lithium_PickAxe; 
	struct USkeletalMeshComponent* Proxy_Lithium_Axe; 
	struct UStaticMeshComponent* Proxy_CaveSpotLight; 
	struct UStaticMeshComponent* Proxy_CaveLight; 
	struct USkeletalMeshComponent* Proxy_Battery_Latern; 
	struct USkeletalMeshComponent* Proxy_Lava_Hunter_Backpack; 
	struct USkeletalMeshComponent* Proxy_Icebox_Backpack; 
	struct USkeletalMeshComponent* Proxy_Battery; 
	struct USkeletalMeshComponent* Proxy_Flashlight; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_13; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_12; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_11; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_09; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_08; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_07; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_06; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_05; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_04; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_03; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_02; 
	struct UStaticMeshComponent* SM_DEP_Powered_Charger_Light_01; 
	struct USceneComponent* Lights; 
	struct UFMODAudioComponent* ChargingAudio; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UCameraComponent* Camera; 
	float EnergyPerSecond; 
	float DividedFlowRate; 
	bool Is Recharging; 
	struct FItemData RechargingItem; 
	struct FItemsStaticRowHandle CachedItemStatic; 
	struct USceneComponent* Array Element; 
	struct TArray<struct UStaticMeshComponent*> LightMeshes; 
	int32_t LastLightsOn; 

	void SetupProxyMeshes(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_RechargingItem(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LastLightsOn(); // (BlueprintCallable|BlueprintEvent)
	void UpdateLightStatusFromValue(int32_t NumLights); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLightStatus(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_Is Recharging(); // (BlueprintCallable|BlueprintEvent)
	void Set Filling Effects(bool bIsRechargingItems); // (Public|BlueprintCallable|BlueprintEvent)
	void ActorsRequiringEnergy(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ShouldEnergyFlow(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ShouldEnergyFlowDelayed(); // (BlueprintCallable|BlueprintEvent)
	void RechargeObject(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Charging_Device(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

