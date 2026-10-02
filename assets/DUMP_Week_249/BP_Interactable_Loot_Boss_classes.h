// BlueprintGeneratedClass BP_Interactable_Loot_Boss.BP_Interactable_Loot_Boss_C
struct UBP_Interactable_Loot_Boss_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* Current_Player; 
	struct ABP_GOAP_Corpse_C* OwningCorpse; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Loot_Boss(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

