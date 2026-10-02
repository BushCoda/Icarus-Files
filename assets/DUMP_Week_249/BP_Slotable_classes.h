// BlueprintGeneratedClass BP_Slotable.BP_Slotable_C
struct UBP_Slotable_C : USlotableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle SlotRenderTick; 
	struct UStaticMeshComponent* HighlightedVisualizer; 
	struct FString RequiredSocketNameSubstring; 
	struct UStaticMeshComponent* LinkedMesh; 
	struct TMap<struct FVector, struct FSlotWrapper> SocketMap; 
	struct TArray<struct FVector> SocketStatusKeysReplicated; 
	struct TArray<struct FSlotWrapper> SlotWrapperReplicated; 
	struct FMulticastInlineDelegate ItemAddedToSlot; 
	struct UInventory* LinkedInventory; 
	struct TArray<struct UStaticMesh*> StaticmeshHardRefs; 
	struct TMap<int32_t, float> SlotFreezeTimer; 
	int32_t SlotCount; 
	struct TArray<struct AIcarusItem*> AllAttachedActors; 

	void GetActorArrayFromSlots(struct TArray<struct AIcarusItem*>& AllAttachedActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct AIcarusActor* GetActorInSlot(int32_t Index); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PushConfigToInventorySlots(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddToSlotFromItemData(struct FVector SocketLocation, struct FTransform SocketTrans, struct FItemData ItemData, struct AIcarusItem*& IcarusItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InventoryLocationToSlotLink(struct FVector Slot, struct AIcarusItem* Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SlotableInteract(struct AIcarusPlayerCharacter* Instigator, bool& SuccessfullyInteracted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsComponentAVisualizer(struct UActorComponent* Component, bool& IsVisualizer); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_SlotWrapperReplicated(); // (BlueprintCallable|BlueprintEvent)
	void ConfigureVisualizerMeshDefaults(struct UStaticMeshComponent* StaticMeshComponent, struct UStaticMesh* MeshToUse); // (Public|BlueprintCallable|BlueprintEvent)
	void ClientUpdateSocketMapFromArrays(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ServerUpdateSlotVisualizer(struct FVector& Location, struct UStaticMeshComponent* Socket Visualizer); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ServerUpdateSlotItem(struct FVector& Location, struct AIcarusItem*& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanInteract(struct AIcarusPlayerCharacter* PlayerChar, bool& CanInteract, bool& HitSlotVisualizer, bool& PassedQuery, struct UStaticMeshComponent*& HitStaticMesh Component); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoesItemMeetSlotQuery(struct AIcarusItem* Item, struct FVector Slot, bool& QueryMet); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SocketStatusKeysReplicated(); // (BlueprintCallable|BlueprintEvent)
	void GetClosestSocketToLocation(struct FVector WorldSpaceLocation, struct FVector& ClosestSocket2, struct FTransform& ClosestSocketTrans, struct FName& ClosestSocketName, float& ClosestDistance2, struct FSlotWrapper& ClosestSlotWrapper); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindNearestLookedAtSocket(struct AIcarusPlayerCharacter* PlayerChar2, bool& HitSlotVisualizer, struct FVector& ClosestSocketLocation2, struct AIcarusItem*& MappedItem2, struct FTransform& ClosestSocketTrans2, struct FName& ClosestSocketName2, float& ClosestDistance, struct FSlotWrapper& ClosestSlotWrapper); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitSockets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_66DA3BA040838D67FF74688CF800B7E9(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void SlotRenderChange(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void LookTick(); // (BlueprintCallable|BlueprintEvent)
	void AsyncClientUpdateSocketStatus(); // (BlueprintCallable|BlueprintEvent)
	void itemaddedbind(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void itemremovebind(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void itemsupdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void AsyncConfigAllVisualizers(); // (BlueprintCallable|BlueprintEvent)
	void UpdateItems(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Slotable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ItemAddedToSlot__DelegateSignature(struct FVector Slot, struct AIcarusItem* NewItem); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

