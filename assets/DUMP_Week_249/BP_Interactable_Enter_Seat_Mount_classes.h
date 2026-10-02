// BlueprintGeneratedClass BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C
struct UBP_Interactable_Enter_Seat_Mount_C : UBP_Interactable_Enter_Seat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

