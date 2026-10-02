// BlueprintGeneratedClass BP_Interactable_NPC_Mission.BP_Interactable_NPC_Mission_C
struct UBP_Interactable_NPC_Mission_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_NPC_Mission(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

