// BlueprintGeneratedClass BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C
struct UBP_Interactable_Claim_Tameable_C : UBP_Interactable_Enter_Seat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Claim_Tameable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

