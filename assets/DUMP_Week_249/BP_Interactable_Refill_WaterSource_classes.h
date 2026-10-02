// BlueprintGeneratedClass BP_Interactable_Refill_WaterSource.BP_Interactable_Refill_WaterSource_C
struct UBP_Interactable_Refill_WaterSource_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FModifier WaterCoolingBuff; 
	struct UFMODEvent* InteractSound; 
	struct FAlterationsEnum Water Purity Alteration; 
	struct FAlterationsEnum Cooling Alteration; 

	void RefillInteract(struct ABP_IcarusPlayerCharacterSurvival_C* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct ABP_IcarusPlayerCharacterSurvival_C* Player); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void PlayInteractFX(struct AIcarusPlayerCharacter* Player); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Refill_WaterSource(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

