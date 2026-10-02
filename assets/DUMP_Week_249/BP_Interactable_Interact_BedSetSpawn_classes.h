// BlueprintGeneratedClass BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C
struct UBP_Interactable_Interact_BedSetSpawn_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_BedBase_C* Bed; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_BedSetSpawn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

