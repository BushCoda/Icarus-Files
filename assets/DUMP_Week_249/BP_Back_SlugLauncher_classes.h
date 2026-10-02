// BlueprintGeneratedClass BP_Back_SlugLauncher.BP_Back_SlugLauncher_C
struct ABP_Back_SlugLauncher_C : ABP_Back_Item_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Guard; 
	struct UStaticMeshComponent* Muzzle; 
	struct UStaticMeshComponent* Loader; 
	struct USkeletalMeshComponent* Core; 
	struct UStaticMeshComponent* Backpack; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	bool GunVisible; 
	struct TArray<struct UStaticMeshComponent*> UpgradeSlots; 

	void UpdateGunVisbility(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_GunVisible(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void FocusedItemUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Back_SlugLauncher(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

