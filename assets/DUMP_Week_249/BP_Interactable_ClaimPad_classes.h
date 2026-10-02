// BlueprintGeneratedClass BP_Interactable_ClaimPad.BP_Interactable_ClaimPad_C
struct UBP_Interactable_ClaimPad_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_ClaimPad(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

