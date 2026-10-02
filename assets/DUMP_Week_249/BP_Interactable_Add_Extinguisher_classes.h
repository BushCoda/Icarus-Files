// BlueprintGeneratedClass BP_Interactable_Add_Extinguisher.BP_Interactable_Add_Extinguisher_C
struct UBP_Interactable_Add_Extinguisher_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FItemData FocusedItem; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Add_Extinguisher(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

