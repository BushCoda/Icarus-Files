// BlueprintGeneratedClass BP_Interactable_Butcher_Animal.BP_Interactable_Butcher_Animal_C
struct UBP_Interactable_Butcher_Animal_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; 
	float SkinningEfficiency; 
	float BaseSkinningDuration; 
	struct UAnimMontage* FPMontage; 
	struct UAnimMontage* TPMontage; 
	struct FTimerHandle ButcherTimer; 
	struct ABP_IcarusPlayerCharacterSurvival_C* HarvestingPlayer; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PreviousHarvester; 
	struct ABP_GOAP_Corpse_C* OwningCorpse; 

	void ProcessDurability(); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t CalculateDurabilityDamage(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetHarvestSpeedModifier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_HarvestingPlayer(); // (BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnButcherComplete(); // (BlueprintCallable|BlueprintEvent)
	void EndMontage(struct ABP_IcarusPlayerCharacterSurvival_C* Harvester); // (BlueprintCallable|BlueprintEvent)
	void OnInteractionAborted(); // (BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void Multi_Blood(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Butcher_Animal(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

