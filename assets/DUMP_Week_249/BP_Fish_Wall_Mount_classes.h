// BlueprintGeneratedClass BP_Fish_Wall_Mount.BP_Fish_Wall_Mount_C
struct ABP_Fish_Wall_Mount_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct UWidgetComponent* Widget; 
	struct USkeletalMeshComponent* SK Fish; 
	struct FItemData FishData; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FishData(); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_4FB440D14FD9CA169367709C4DB6E61C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void InventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void UpdateFish(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Fish_Wall_Mount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

