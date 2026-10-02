// BlueprintGeneratedClass BP_Interactable_ManageWhitelist.BP_Interactable_ManageWhitelist_C
struct UBP_Interactable_ManageWhitelist_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_ManageWhitelist(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

