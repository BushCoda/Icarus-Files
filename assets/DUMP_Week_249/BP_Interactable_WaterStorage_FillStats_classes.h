// BlueprintGeneratedClass BP_Interactable_WaterStorage_FillStats.BP_Interactable_WaterStorage_FillStats_C
struct UBP_Interactable_WaterStorage_FillStats_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODEvent* InteractSound; 

	void GetWaterModifiers(struct AIcarusItem* FocusedItem, struct TArray<struct FAlterationsEnum>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayInteractSound(struct AActor* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct AActor* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_WaterStorage_FillStats(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

