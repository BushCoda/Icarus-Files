// BlueprintGeneratedClass BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C
struct UBP_Interactable_Harvest_Animal_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; 
	float SkinningEfficiency; 
	float BaseSkinningDuration; 
	struct UAnimMontage* FPMontage; 
	struct UAnimMontage* TPMontage; 
	struct FTimerHandle SkinningTimer; 
	bool IsHarvested; 
	struct ABP_IcarusPlayerCharacterSurvival_C* HarvestingPlayer; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PreviousHarvester; 
	struct ABP_GOAP_Corpse_C* OwningCorpse; 

	void ConsumeFuel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GrantBestiaryProgress(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessDurability(); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t CalculateDurabilityDamage(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetHarvestSpeedModifier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_HarvestingPlayer(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsHarvested(); // (BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnInteractionAborted(); // (BlueprintCallable|BlueprintEvent)
	void OnSkinningComplete(); // (BlueprintCallable|BlueprintEvent)
	void EndHarvestMontage(struct ABP_IcarusPlayerCharacterSurvival_C* Harvester); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Harvest_Animal(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

