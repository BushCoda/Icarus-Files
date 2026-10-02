// BlueprintGeneratedClass BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C
struct UBP_Interactable_Rain_Reservior_Drink_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t AmountToDrink; 
	int32_t AmountAllowedToDrink; 
	int32_t StoredUnits; 
	struct UFMODEvent* InteractSound; 

	void AddAlterations(struct AActor* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayInteractSound(struct AActor* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct AActor* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior_Drink(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

