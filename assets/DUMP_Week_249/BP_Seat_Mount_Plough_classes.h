// BlueprintGeneratedClass BP_Seat_Mount_Plough.BP_Seat_Mount_Plough_C
struct ABP_Seat_Mount_Plough_C : ABP_Seat_Mount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* PloughLoc3; 
	struct USceneComponent* PloughLoc2; 
	struct USceneComponent* PloughLoc1; 
	struct TArray<struct USceneComponent*> PloughLocations; 

	struct FItemData GetPloughBladeItem(bool& FoundItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void CanActivateCart(bool& CanActivate); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool HasAnySeeds(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleData); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void PloughGround(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // (Event|Public|BlueprintEvent)
	void OnSaddleAttachmentRemoved(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Multi_OnPloughBladeDestroyed(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Mount_Plough(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

