// BlueprintGeneratedClass BP_OutOfBoundsTeleporter.BP_OutOfBoundsTeleporter_C
struct ABP_OutOfBoundsTeleporter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* TriggerVolume; 
	struct UBillboardComponent* SafePlaceArctc; 
	struct UBillboardComponent* SafePlaceDesert; 
	struct UBillboardComponent* SafePlaceForest; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_IcarusPlayerCharacterSurvival_C* CachedIcarusPlayer; 
	struct AIcarusItem* CachedIcarusItem; 
	struct UPrimitiveComponent* CachedPrimitiveComponent; 
	struct AActor* CachedOtherActor; 
	struct FVector ZHeightBuffer; 
	bool Debug; 
	struct TArray<struct FOverlapSignature> OverlapQueue; 
	bool ProcessingQueueElement; 
	bool QueueSearchFound; 

	void DebugOOBTeleporter(struct FVector InLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void GetClosestPlayer(struct ABP_IcarusPlayerCharacterSurvival_C*& ClosestCharacter); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RepositionFallingItem_Player(bool& Success, struct FVector& Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RepositionFallingItem_Landscape(struct AIcarusItem* Item, bool& Success, struct FVector& Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_OutOfBoundsTeleporter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

