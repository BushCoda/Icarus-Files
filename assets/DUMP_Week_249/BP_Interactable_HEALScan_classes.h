// BlueprintGeneratedClass BP_Interactable_HEALScan.BP_Interactable_HEALScan_C
struct UBP_Interactable_HEALScan_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_HEALScan(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

