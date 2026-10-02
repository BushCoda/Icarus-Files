// BlueprintGeneratedClass BP_AlterationBench.BP_AlterationBench_C
struct ABP_AlterationBench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UFMODAudioComponent* AlterationProcessingAudio; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UStaticMeshComponent* StaticMesh; 
	struct FItemData CurrentItem; 
	bool InUse; 
	float AlterTime; 
	float AlterProgress; 
	float MaxTime; 
	struct UFMODEvent* ItemAlteredSound; 
	struct UFMODEvent* ItemUnalteredSound; 
	struct AIcarusPlayerCharacter* UsingCharacter; 

	void ModifyAlterTime(float AlterTickTime, float& ModifiedAlterTickTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlaySoundWithParams(struct UFMODEvent* FMODEvent, struct FVector Location); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetInUseAudioState(bool Active); // (Private|BlueprintCallable|BlueprintEvent)
	void OnRep_InUse(); // (BlueprintCallable|BlueprintEvent)
	void PlayItemUnalteredSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlayItemAlteredSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void RemoveItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AlterItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void AlterationSlotUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnServer_PerformAction(); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void MULTI_OnAlteredItem(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_OnRemovedItemAlteration(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AlterationBench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

