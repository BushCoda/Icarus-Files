// BlueprintGeneratedClass BP_Interactable_Shackle.BP_Interactable_Shackle_C
struct UBP_Interactable_Shackle_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Shackle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

