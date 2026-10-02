// BlueprintGeneratedClass BP_Basic_Fishing_Trap.BP_Basic_Fishing_Trap_C
struct ABP_Basic_Fishing_Trap_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UOverlapAudioComponent* OverlapAudio; 
	struct UCameraComponent* Camera; 
	struct USkeletalMeshComponent* Fish; 
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; 
	float InitialTimeToCatch; 
	struct UInventory* InventoryRef; 
	struct FTimerHandle Timer; 
	bool ShowFish; 

	void WearLure(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ShowFish(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTimeToCatch(float& TimeToCatch); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TimerCatchFish(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FishingLureChanged(struct UInventory* Inventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetChanceToCatch(int32_t& ChanceToCatch); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AddToInventory(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Basic_Fishing_Trap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

