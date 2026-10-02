// BlueprintGeneratedClass BP_Interactable_Interact_Mission_DNA_Extract.BP_Interactable_Interact_Mission_DNA_Extract_C
struct UBP_Interactable_Interact_Mission_DNA_Extract_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 
	struct FSessionFlagsRowHandle Session Flag; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Mission_DNA_Extract(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

