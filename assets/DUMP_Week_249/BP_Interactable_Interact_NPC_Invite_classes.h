// BlueprintGeneratedClass BP_Interactable_Interact_NPC_Invite.BP_Interactable_Interact_NPC_Invite_C
struct UBP_Interactable_Interact_NPC_Invite_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 
	struct ABP_NPC_Trader_C* As BP NPC Trader; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_NPC_Invite(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

