// BlueprintGeneratedClass BP_Interactable_EndContest.BP_Interactable_EndContest_C
struct UBP_Interactable_EndContest_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_EndContest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

