// BlueprintGeneratedClass BP_Interactable_Take_Extinguisher.BP_Interactable_Take_Extinguisher_C
struct UBP_Interactable_Take_Extinguisher_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Take_Extinguisher(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

