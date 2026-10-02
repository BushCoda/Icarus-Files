// BlueprintGeneratedClass BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C
struct UBP_ActionableBehaviour_Fishing_Lure_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AContextMenuFactory* Context Menu; 
	struct AIcarusActor* Owning Actor; 
	struct UContextMenuWidget* CurrentContextMenu; 
	bool RadialOpen; 
	struct TArray<struct FFindAllStacksResult> All Lure Types; 
	struct TArray<struct FItemsStaticRowHandle> Lure Types; 
	struct FName Backpack Inventory Action Id; 
	struct FName Quickbar Inventory Action Id; 
	struct UInventory* Inventory; 
	struct FItemableData Itemable; 
	struct AIcarusItem* As Icarus Item; 
	struct FItemData ItemData; 

	void RemoveLure(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QuickReel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetLure(struct UInventory* Inventory, int32_t Slot); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLure(struct FItemData& LureItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UInventory* GetInventoryFromName(struct FName Inventory Name); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ContextMenu_SetLure(struct FName ItemIdentifier, int32_t ItemPayload); // (Public|BlueprintCallable|BlueprintEvent)
	struct FName Get Name for Inventory(struct UInventory* Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ContextMenu_RemoveLure(struct FName ItemIdentifier, int32_t ItemPayload); // (Public|BlueprintCallable|BlueprintEvent)
	void ContextMenu_OpenForLure(bool AsRadial, bool& Opened); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_RequestSetLure(struct UInventory* Inventory, int32_t Slot); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure(int32_t EntryPoint); // (Final|UbergraphFunction)
};

