// BlueprintGeneratedClass BP_Interactable_Interact_Trap_Release_Vesper.BP_Interactable_Interact_Trap_Release_Vesper_C
struct UBP_Interactable_Interact_Trap_Release_Vesper_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Trap_Release_Vesper(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

