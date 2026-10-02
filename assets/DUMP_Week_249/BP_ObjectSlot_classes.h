// BlueprintGeneratedClass BP_ObjectSlot.BP_ObjectSlot_C
struct ABP_ObjectSlot_C : AObjectSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* SplineConnectionPoint; 
	struct UStaticMeshComponent* TypeIndicator; 
	struct UInventoryComponent* Inventory; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_TestSplineConnection_C* ConnectionActor; 

	void GetSplineConnectionPoint(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PostLinkDestroyed(); // (Public|BlueprintCallable|BlueprintEvent)
	void PostLinkEstablished(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool UpdateVisibility(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool OnServer_Interact(struct AActor* Interactor, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SetSlotType(enum class EObjectSlotType Type); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ObjectSlot(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

