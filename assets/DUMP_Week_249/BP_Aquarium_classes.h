// BlueprintGeneratedClass BP_Aquarium.BP_Aquarium_C
struct ABP_Aquarium_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene_Lights; 
	struct UBoxComponent* SwimmableArea; 
	struct UOverlapAudioComponent* AudioBubbles; 
	struct USceneComponent* VFXAndLighting; 
	struct USceneComponent* Fish1Location; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* Dressing; 
	struct UStaticMeshComponent* GlassMesh; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct URectLightComponent* RecDowntLight; 
	struct UNiagaraComponent* NS_Bubble5; 
	struct UNiagaraComponent* NS_Bubble4; 
	struct UNiagaraComponent* NS_Bubble3; 
	struct UNiagaraComponent* NS_Bubble2; 
	struct UNiagaraComponent* NS_Bubble1; 
	struct UStaticMesh* CleanMesh; 
	struct UStaticMesh* DirtyMesh; 
	struct UStaticMesh* CleanGlass; 
	struct UStaticMesh* DirtyGlass; 
	float LightIntensity; 
	struct TArray<struct FVector> FishMovementTargetLocations; 
	struct TArray<float> GetNewTargetLocationTimes; 
	struct TArray<struct FItemData> FishArray; 
	struct TArray<struct USkeletalMeshComponent*> FishComponents; 
	bool EffectState; 
	struct UMaterialInterface* OffMaterial; 
	struct UMaterialInterface* OnMaterial; 
	int32_t MaterialSlot; 

	void OnRep_EffectState(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_FishArray(); // (BlueprintCallable|BlueprintEvent)
	void GetNewMovementTargetLocation(struct USkeletalMeshComponent* FishComponent, struct FVector& TargetLocation, bool& FoundValidLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void DeployableTick(float DeltaSeconds); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFishMeshes(struct TArray<struct USkeletalMeshComponent*>& SkeletalMeshes); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateAllFish(struct UInventory* Inventory); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_60B8164F46CDB00B131057B2E772CE31(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateFishMeshes(); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Aquarium(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

