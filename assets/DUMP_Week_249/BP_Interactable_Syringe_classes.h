// BlueprintGeneratedClass BP_Interactable_Syringe.BP_Interactable_Syringe_C
struct UBP_Interactable_Syringe_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FItemTemplateRowHandle ItemTemplate; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_Play_Pickup_Virus(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Syringe(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

