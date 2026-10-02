// BlueprintGeneratedClass BP_Overflow_Bag.BP_Overflow_Bag_C
struct ABP_Overflow_Bag_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UInventoryComponent* Inventory; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	struct UUMG_IcarusLinkedActorPanel_C* Widget Class to Open; 
	bool GravestoneBag; 
	struct TMap<struct FStatsEnum, int32_t> In Stats; 
	bool NoPhysicsSimulation; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnItemRemoved_Event(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnTerrainAchorStateChanged(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Overflow_Bag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

