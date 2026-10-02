// BlueprintGeneratedClass BP_Interactable_Teleport_RetrieveLoot.BP_Interactable_Teleport_RetrieveLoot_C
struct UBP_Interactable_Teleport_RetrieveLoot_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector TargetLocation; 
	struct ABaseLevelTeleport* BaseLevelTeleport; 

	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void Confirm(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Teleport_RetrieveLoot(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

