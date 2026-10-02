// BlueprintGeneratedClass BP_Interactable_Vesper_Cage.BP_Interactable_Vesper_Cage_C
struct UBP_Interactable_Vesper_Cage_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct TMap<struct AActor*, struct FItemTemplateRowHandle> NPC; 
	struct FItemTemplateRowHandle ItemTemplate; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_Play_Pickup_NPC_Stasis_Audio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Vesper_Cage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

