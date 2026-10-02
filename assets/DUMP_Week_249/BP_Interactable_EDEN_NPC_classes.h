// BlueprintGeneratedClass BP_Interactable_EDEN_NPC.BP_Interactable_EDEN_NPC_C
struct UBP_Interactable_EDEN_NPC_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_EDEN_NPC(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

