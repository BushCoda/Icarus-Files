// BlueprintGeneratedClass BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C
struct UBP_Interactable_Rain_Reservior_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODEvent* InteractSound; 

	void GetWaterModifiers(struct TArray<struct FAlterationsEnum>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayInteractSound(struct AActor* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct AActor* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

