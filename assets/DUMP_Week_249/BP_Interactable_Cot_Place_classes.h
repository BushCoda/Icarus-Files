// BlueprintGeneratedClass BP_Interactable_Cot_Place.BP_Interactable_Cot_Place_C
struct UBP_Interactable_Cot_Place_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Cot_Place(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

