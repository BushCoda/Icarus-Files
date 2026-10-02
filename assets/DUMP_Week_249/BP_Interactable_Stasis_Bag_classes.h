// BlueprintGeneratedClass BP_Interactable_Stasis_Bag.BP_Interactable_Stasis_Bag_C
struct UBP_Interactable_Stasis_Bag_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FItemTemplateRowHandle ItemTemplate; 

	bool GetItem(struct FItemTemplateRowHandle& Value); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_Play_Pickup_NPC_Stasis_Audio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Stasis_Bag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

