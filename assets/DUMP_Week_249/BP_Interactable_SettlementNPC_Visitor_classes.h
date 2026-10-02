// BlueprintGeneratedClass BP_Interactable_SettlementNPC_Visitor.BP_Interactable_SettlementNPC_Visitor_C
struct UBP_Interactable_SettlementNPC_Visitor_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_SettlementNPC_Visitor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

