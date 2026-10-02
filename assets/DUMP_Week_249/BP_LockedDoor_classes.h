// BlueprintGeneratedClass BP_LockedDoor.BP_LockedDoor_C
struct ABP_LockedDoor_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_Mission_Door_Lever; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* StaticMesh; 
	bool bIsOpen; 
	float Time; 
	bool bCanInteract; 

	void UpdateDoorState(); // (Public|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bIsOpen(); // (BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ForceState(); // (BlueprintCallable|BlueprintEvent)
	void Multi_FixState(bool Multi_Interact, bool Multi_Open); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LockedDoor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

