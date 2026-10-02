// BlueprintGeneratedClass BP_Interactable_EDEN_NPC_Reward.BP_Interactable_EDEN_NPC_Reward_C
struct UBP_Interactable_EDEN_NPC_Reward_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_EDEN_NPC_Reward(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

