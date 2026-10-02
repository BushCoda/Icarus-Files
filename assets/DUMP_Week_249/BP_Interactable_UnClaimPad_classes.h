// BlueprintGeneratedClass BP_Interactable_UnClaimPad.BP_Interactable_UnClaimPad_C
struct UBP_Interactable_UnClaimPad_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_UnClaimPad(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

