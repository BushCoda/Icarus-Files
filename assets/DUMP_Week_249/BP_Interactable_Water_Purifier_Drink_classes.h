// BlueprintGeneratedClass BP_Interactable_Water_Purifier_Drink.BP_Interactable_Water_Purifier_Drink_C
struct UBP_Interactable_Water_Purifier_Drink_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t AmountToDrink; 
	int32_t AmountAllowedToDrink; 
	int32_t StoredUnits; 
	struct UFMODEvent* InteractSound; 
	struct FAlterationsEnum Alteration; 

	void PlayInteractSound(struct AActor* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct AActor* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Water_Purifier_Drink(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

