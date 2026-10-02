// BlueprintGeneratedClass BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C
struct UBP_Interactable_Slotable_place_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Slotable_place(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

