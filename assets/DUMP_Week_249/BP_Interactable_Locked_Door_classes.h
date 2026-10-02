// BlueprintGeneratedClass BP_Interactable_Locked_Door.BP_Interactable_Locked_Door_C
struct UBP_Interactable_Locked_Door_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FModifier WaterCoolingBuff; 
	struct UFMODEvent* InteractSound; 
	struct FAlterationsEnum Water Purity Alteration; 
	struct FAlterationsEnum Cooling Alteration; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Locked_Door(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

