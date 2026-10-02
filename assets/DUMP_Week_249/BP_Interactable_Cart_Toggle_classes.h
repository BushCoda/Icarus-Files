// BlueprintGeneratedClass BP_Interactable_Cart_Toggle.BP_Interactable_Cart_Toggle_C
struct UBP_Interactable_Cart_Toggle_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ASeatBase* SaddleCart; 

	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Cart_Toggle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

