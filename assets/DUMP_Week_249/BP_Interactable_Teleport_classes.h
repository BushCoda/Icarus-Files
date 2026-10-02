// BlueprintGeneratedClass BP_Interactable_Teleport.BP_Interactable_Teleport_C
struct UBP_Interactable_Teleport_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Teleport(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

