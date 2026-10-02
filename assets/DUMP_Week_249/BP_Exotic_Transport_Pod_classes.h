// BlueprintGeneratedClass BP_Exotic_Transport_Pod.BP_Exotic_Transport_Pod_C
struct ABP_Exotic_Transport_Pod_C : ABP_Transport_Pod_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct TArray<struct FMountSaveData> SuccessfullySpawnedMounts; 
	struct TArray<struct FMountSaveData> PendingMounts; 

	void IsItemCurrency(struct FItemData ItemData, bool& IsCurrency); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void CollectCurrency(struct TArray<struct FFCurrencyToSend>& Currency); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixMountMovement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReturnEquipment(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AwardExotics(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void OnPodAscended(); // (BlueprintCallable|BlueprintEvent)
	void OnPodLanded(); // (BlueprintCallable|BlueprintEvent)
	void OnTakeOff(); // (BlueprintCallable|BlueprintEvent)
	void GrantPodContents(); // (BlueprintCallable|BlueprintEvent)
	void SpawnNextMount(); // (BlueprintCallable|BlueprintEvent)
	void OnMountSpawningComplete(struct TArray<struct FMountSaveData>& SuccessfullySpawnedMounts); // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnItemAddedToInventory(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void DelayedReturnedItemWarning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Exotic_Transport_Pod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

