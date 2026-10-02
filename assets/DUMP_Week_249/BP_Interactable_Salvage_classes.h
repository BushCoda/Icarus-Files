// BlueprintGeneratedClass BP_Interactable_Salvage.BP_Interactable_Salvage_C
struct UBP_Interactable_Salvage_C : UBP_Interactable_Pickup_Item_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Salvage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

