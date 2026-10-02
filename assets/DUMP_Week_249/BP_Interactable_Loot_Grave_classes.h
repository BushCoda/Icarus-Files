// BlueprintGeneratedClass BP_Interactable_Loot_Grave.BP_Interactable_Loot_Grave_C
struct UBP_Interactable_Loot_Grave_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Loot_Grave(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

