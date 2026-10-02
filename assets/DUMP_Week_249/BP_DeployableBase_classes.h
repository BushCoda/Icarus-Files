// BlueprintGeneratedClass BP_DeployableBase.BP_DeployableBase_C
struct ABP_DeployableBase_C : ADeployable {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SphereHelper_Crude_Oil; 
	struct UBP_IcarusSplineConnectionComponent_Crude_Oil_C* BP_IcarusSplineConnectionComponent_Crude_Oil; 
	struct USceneComponent* AudioLocation; 
	struct UStaticMeshComponent* SphereHelper_Fuel; 
	struct UStaticMeshComponent* SphereHelper_Electric; 
	struct UStaticMeshComponent* SphereHelper_Water; 
	struct UBP_IcarusSplineConnectionComponent_Fuel_C* BP_IcarusSplineConnectionComponent_Fuel; 
	struct UBP_IcarusSplineConnectionComponent_Electric_C* BP_IcarusSplineConnectionComponent_Electric; 
	struct UBP_IcarusSplineConnectionComponent_Water_C* BP_IcarusSplineConnectionComponent_Water; 
	struct USceneComponent* SplineConnectors; 
	struct UShelteredModifierComponent* ShelteredModifier; 
	struct UAudioContextComponent* AudioContext; 
	struct UBoxComponent* WeightColliderBox; 
	struct USceneComponent* ProxyMeshes; 
	struct UBP_ShelteredComponent_C* BP_ShelteredComponent; 
	struct UStaticMeshComponent* DeployableSM; 
	struct USkeletalMeshComponent* DeployableSK; 
	int32_t LastHealth; 
	float LastShelter; 
	struct UFMODEvent* DamagedAudio; 
	struct UFMODEvent* BrokenAudio; 
	struct UNiagaraSystem* DestructionParticle; 
	struct UDestructibleMesh* DestructibleMesh; 
	struct FTransform RelativeTransform; 
	struct TMap<struct FItemsStaticRowHandle, struct FDeployableProxyMeshConditionArray> ProxyMeshMapping; 
	bool OverflowBagHandled; 
	struct TArray<struct USceneComponent*> NetProxyMeshesToShow; 
	struct TArray<struct USceneComponent*> NetProxyMeshesToHide; 
	float AudioOcclusion; 
	bool IsInteractedWith; 
	struct TSet<struct AActor*> CurrentInteractors; 
	struct FVector ItemSlottedAudioLocationOffset; 
	bool GeneratorStateActive; 
	bool ProcessorStateActive; 
	bool ServerIsInCave; 
	bool InvolvedInQuest; 
	bool Include Self; 
	bool CustomHighlightableSetup; 
	struct TMap<struct FTagQueriesRowHandle, int32_t> ProxyMeshesInventoryFilter; 
	struct TArray<float> Proxy Mesh Stack Number; 
	struct TMap<struct FTagQueriesRowHandle, int32_t> Proxy Mesh Crafting Filters; 
	bool bUseLegacyProxyMeshSys; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddProxyMeshConditionQuery(struct FTagQueriesRowHandle Query, struct USceneComponent* ComponentToShow, int32_t MinimumStackSize, bool RequiresASlotableSlot); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddProxyMeshConditionMultiple(struct TArray<struct FItemsStaticRowHandle>& Items, struct USceneComponent* ComponentToShow, int32_t MinimumStackSize, bool RequiresASlotableSlot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProxyMeshCraftingCheck(struct USceneComponent* ProxyMeshesCrafting, struct UBPC_Recipe_Proxy_C* BPC Recipe Proxy, struct FFeatureLevelsRowHandle InFeatureLevel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProxyMeshInventoryCheck(struct USceneComponent* ProxyMeshesInventory, struct FRecipeSetsRowHandle GetRecipeSetFor, struct FFeatureLevelsRowHandle InFeatureLevel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddMultiProxyMeshCondition(struct TArray<struct FItemsStaticRowHandle>& ItemsList, struct TArray<int32_t>& StackSizes(LowestToHighest), struct TArray<struct USceneComponent*>& ComponentShowOrder, bool RequiresLinkedSlottable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateHighlightable(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Clear Weather Resource Modifiers(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDestructibleActorSpawnTransform(struct FTransform& SpawnTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Zero Fillable Stored(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayItemAddedAudio(struct FItemsStaticRowHandle Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayRepairedAudio(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetIsInCave(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetDeployableSetup(struct FDeployableSetupRowHandle& DeployableSetup); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ProcessorStateActive(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_GeneratorStateActive(); // (BlueprintCallable|BlueprintEvent)
	void PlayItemSlottedAudio(struct FVector Location, struct FItemsStaticRowHandle Item); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBrokenAudio(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDamagedAudio(struct UActorState* ActorState, int32_t DamageTaken, enum class EIcarusDamageType DamageType); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_StopInteract(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void VacuumItems(struct AActor* Instigator, struct FItemsStaticRowHandle ItemsStaticRowHandle, int32_t Count, struct FInventoryIDEnum InventoryID); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetComponentAndChildrenMobility(struct USceneComponent* Component, enum class EComponentMobility Mobility); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_NetProxyMeshesToHide(); // (BlueprintCallable|BlueprintEvent)
	void AddProxyMeshCondition(struct FItemsStaticRowHandle ItemStatic, struct USceneComponent* ComponentToShow, int32_t MinimumStackSize, bool RequiresASlotableSlot); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProxyMeshRemoveCheck(struct UInventory* Inventory, int32_t Index, struct FItemData RemovedData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProxyMeshAddCheck(struct UInventory* Inventory, int32_t Index, struct FItemData ItemData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_NetProxyMeshesToShow(); // (BlueprintCallable|BlueprintEvent)
	void CreateOverflowBag(bool IncludeSelf, enum class EIcarusActorDestroyReason DestroyReason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetNewFoundationActor(struct AActor* NewFoundation); // (Public|BlueprintCallable|BlueprintEvent)
	void IsFunctional(bool& bFunctional); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Deployable_Pickup(struct AActor* Instigator, bool& PickedUp); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveDestroyed(); // (Event|Public|BlueprintEvent)
	void Event Actor Broken(); // (BlueprintCallable|BlueprintEvent)
	void Event Damaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void MULTI_BrokenEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void RefreshFoundationBinds(struct AActor* New Foundation); // (BlueprintCallable|BlueprintEvent)
	void EventOnDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void OnRestoreFoundationFromDatabase(struct AIcarusActor* FoundationFromDatabase); // (Event|Public|BlueprintEvent)
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void itemremovedfuel(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ItemRemovedProcessor(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void RepairObject(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void EventItemAddedToSlot(struct FVector Slot, struct AIcarusItem* NewItem); // (BlueprintCallable|BlueprintEvent)
	void MULTI_ItemAddedToSlot(struct FVector SlotLocation, struct FItemsStaticRowHandle Item); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void OnGeneratorActiveStateUpdated(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void OnProcessorStateUpdated(bool bIsActive); // (BlueprintCallable|BlueprintEvent)
	void EventFoundationDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // (BlueprintCallable|BlueprintEvent)
	void EventFoundationReplaced(struct ABuildingBase* NewBuilding); // (BlueprintCallable|BlueprintEvent)
	void SetCaveState(bool IsInCave, struct AActor* CaveActor); // (Public|BlueprintCallable|BlueprintEvent)
	void MULTI_OnRepaired(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_OnItemVacuumed(struct FItemsStaticRowHandle Item); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void DestroyIcarusActorInternal(enum class EIcarusActorDestroyReason Reason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_DeployableBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

