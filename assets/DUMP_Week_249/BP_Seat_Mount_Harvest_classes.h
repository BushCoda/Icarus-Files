// BlueprintGeneratedClass BP_Seat_Mount_Harvest.BP_Seat_Mount_Harvest_C
struct ABP_Seat_Mount_Harvest_C : ABP_Seat_Mount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* WaterRadius; 

	void CanActivateCart(bool& CanActivate); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FItemData GetAttachmentItem(bool& FoundItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleData); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Multi_OnAttachmentDestroyed(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnInventoryItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Mount_Harvest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

