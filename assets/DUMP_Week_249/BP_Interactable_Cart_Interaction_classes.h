// BlueprintGeneratedClass BP_Interactable_Cart_Interaction.BP_Interactable_Cart_Interaction_C
struct UBP_Interactable_Cart_Interaction_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ADeployable* TempDeployable; 
	struct ABP_Seat_Mount_Water_C* WaterCart; 
	int32_t CartMissingWater; 
	struct UInventory* SaddleInventory; 
	struct FItemData SaddleData; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Cart_Interaction(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

