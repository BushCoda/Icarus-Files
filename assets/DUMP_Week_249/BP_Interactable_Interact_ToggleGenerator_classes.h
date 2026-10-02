// BlueprintGeneratedClass BP_Interactable_Interact_ToggleGenerator.BP_Interactable_Interact_ToggleGenerator_C
struct UBP_Interactable_Interact_ToggleGenerator_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ADeployable* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_ToggleGenerator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

