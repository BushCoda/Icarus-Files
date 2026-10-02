// BlueprintGeneratedClass BP_Interactable_Pickup_Corpse.BP_Interactable_Pickup_Corpse_C
struct UBP_Interactable_Pickup_Corpse_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; 
	struct ABP_GOAP_Corpse_C* OwningCorpse; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Pickup_Corpse(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

