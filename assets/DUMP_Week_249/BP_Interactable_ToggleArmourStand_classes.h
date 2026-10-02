// BlueprintGeneratedClass BP_Interactable_ToggleArmourStand.BP_Interactable_ToggleArmourStand_C
struct UBP_Interactable_ToggleArmourStand_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FGameplayTag, struct FAISetupRowHandle> Children; 
	struct TArray<int32_t> InventorySlotsToSwap; 
	struct UInventory* ArmourStandInventory; 
	struct FItemData ArmourStandItem; 
	struct FItemData PlayerItem; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_ToggleArmourStand(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

