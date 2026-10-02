// BlueprintGeneratedClass BP_Interactable_NPC_SimpleTalk.BP_Interactable_NPC_SimpleTalk_C
struct UBP_Interactable_NPC_SimpleTalk_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_NPC_SimpleTalk(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

