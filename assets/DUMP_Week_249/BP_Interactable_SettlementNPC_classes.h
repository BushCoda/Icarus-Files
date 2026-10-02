// BlueprintGeneratedClass BP_Interactable_SettlementNPC.BP_Interactable_SettlementNPC_C
struct UBP_Interactable_SettlementNPC_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_SettlementNPC(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

