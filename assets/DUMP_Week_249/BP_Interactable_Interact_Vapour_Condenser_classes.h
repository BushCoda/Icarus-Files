// BlueprintGeneratedClass BP_Interactable_Interact_Vapour_Condenser.BP_Interactable_Interact_Vapour_Condenser_C
struct UBP_Interactable_Interact_Vapour_Condenser_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_Torch_Floor_C* FloorTorch; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ADeployable* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Vapour_Condenser(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

