// BlueprintGeneratedClass BP_Interactable_NPC_Inventory_Take.BP_Interactable_NPC_Inventory_Take_C
struct UBP_Interactable_NPC_Inventory_Take_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_NPC_Inventory_Take(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

