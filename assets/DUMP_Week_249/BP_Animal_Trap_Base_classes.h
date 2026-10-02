// BlueprintGeneratedClass BP_Animal_Trap_Base.BP_Animal_Trap_Base_C
struct ABP_Animal_Trap_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* Scene; 
	struct UBoxComponent* CaptureZone; 
	struct UInventory* InventoryRef; 
	struct FAISetupRowHandle Creature; 
	int32_t Level; 
	bool bTrapActive; 
	float AttractionRadius; 
	struct TArray<struct FAISetupRowHandle> ValidCaptureList; 

	void CanCaptureAnimal(struct UObject* Creature, bool& CanCapture); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CaptureAnimal(struct UObject* Object); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleTrapActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReleaseCreature(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_bActive(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_AnimalTrap_Base_CaptureZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Animal_Trap_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

