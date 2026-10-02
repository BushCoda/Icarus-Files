// BlueprintGeneratedClass BP_Interactable_BaitSnareTrap.BP_Interactable_BaitSnareTrap_C
struct UBP_Interactable_BaitSnareTrap_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTagQueriesRowHandle BaitQuery; 
	struct FText CurrentlyHeldBaitName; 
	struct FItemData BaitItems; 

	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UInventory* GetTrapInventory(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_BaitSnareTrap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

