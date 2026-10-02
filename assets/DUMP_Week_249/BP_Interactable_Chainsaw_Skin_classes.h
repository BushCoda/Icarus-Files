// BlueprintGeneratedClass BP_Interactable_Chainsaw_Skin.BP_Interactable_Chainsaw_Skin_C
struct UBP_Interactable_Chainsaw_Skin_C : UInteractableBehaviour {
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
	struct UBP_ActionableBehaviour_Chainsaw_C* Actionable; 

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
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Chainsaw_Skin(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

