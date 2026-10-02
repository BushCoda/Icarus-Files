// BlueprintGeneratedClass BP_Interactable_Loot_Skinned_Pet.BP_Interactable_Loot_Skinned_Pet_C
struct UBP_Interactable_Loot_Skinned_Pet_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* Current_Player; 
	struct ABP_GOAP_Corpse_C* OwningCorpse; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Loot_Skinned_Pet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

