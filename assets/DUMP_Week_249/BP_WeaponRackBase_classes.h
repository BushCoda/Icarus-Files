// BlueprintGeneratedClass BP_WeaponRackBase.BP_WeaponRackBase_C
struct ABP_WeaponRackBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventoryContainerComponent* InventoryContainer; 
	struct TArray<struct USkeletalMeshComponent*> WeaponSKMeshes; 
	bool HasFoundTag; 
	struct TArray<struct FWeaponRackTransform> WeaponRotationStruct; 
	int32_t CurrentIndex; 
	struct TArray<struct UStaticMeshComponent*> TempMeshComponents; 
	struct UFMODEvent* AddWeaponAudio; 

	void WeaponAddedAudio(struct USceneComponent* Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnLivingWeaponComponents(struct FItemData& ItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetWeaponTransforms(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateWeapon(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void MULTI_WeaponAddedAudio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WeaponRackBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

