// BlueprintGeneratedClass BP_Beehive.BP_Beehive_C
struct ABP_Beehive_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Beehive_Processing; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* BeeBreedAudioLocation; 
	struct USceneComponent* HoneyExtractorAudioLocation; 
	struct UFMODAudioComponent* BeesHiveLoopAudio; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* Expansion2; 
	struct UStaticMeshComponent* Extractor; 
	struct UStaticMeshComponent* BreedingCenter; 
	struct UStaticMeshComponent* Expansion1; 
	bool Installed_Expansion; 
	bool Installed_Expansion2; 
	bool Installed_Extractor; 
	bool Installed_Breeding; 
	float Honeycomb_CurrentTime; 
	float Honeycomb_MaxTime; 
	struct FItemTemplateRowHandle Honeycomb; 
	float Extraction_CurrentTime; 
	float Extraction_MaxTime; 
	struct FItemTemplateRowHandle Honey; 
	struct FItemTemplateRowHandle Beeswax; 
	float Breeding_MaxTime; 
	float Breeding_CurrentTime; 
	struct FItemTemplateRowHandle Worker_Bee; 
	bool CachedInstalledExpansion; 
	bool CachedInstalledExpansion2; 
	int32_t AuraUID; 
	bool CachedBeehiveState; 
	struct AIcarusCharacter* InteractPlayer; 

	bool StripItemTags(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex, struct FGameplayTagContainer& ItemTags); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsSlotValidForItem(struct UInventoryComponent* Inventory, struct FInventoryIDEnum InventoryID, struct FItemData Item, int32_t SlotIndex); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CheckForFullyUpgraded(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_GeneratorActiveREP(); // (BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckWantsPower(); // (Public|BlueprintCallable|BlueprintEvent)
	void FindFirstHoneycombInInventory(bool& Found, struct UInventory*& Inventory, int32_t& Slot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickExtractor(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void GetUpgradeStats(int32_t Slot, struct TMap<struct FBaseStatsEnum, int32_t>& Additional Stats); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateExpansions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateItem(struct FItemTemplateRowHandle RowHandle, struct FInventoryIDEnum InventoryID); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Installed_Breeding(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Installed_Extractor(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Installed_Expansion2(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanInstallExpansion(struct FItemData Item, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_Installed_Expansion(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Add Expansion(struct FItemData Item, struct AIcarusPlayerCharacter* Player, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void InventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void MULTI_Play Honeycome Crafted(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_Play Honey Crafted(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI Bee Breed Audio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Beehive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

