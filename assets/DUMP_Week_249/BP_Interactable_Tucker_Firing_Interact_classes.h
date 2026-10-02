// BlueprintGeneratedClass BP_Interactable_Tucker_Firing_Interact.BP_Interactable_Tucker_Firing_Interact_C
struct UBP_Interactable_Tucker_Firing_Interact_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Tucker_Firing_Interact(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

