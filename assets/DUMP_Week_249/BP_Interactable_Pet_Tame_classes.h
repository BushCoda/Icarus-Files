// BlueprintGeneratedClass BP_Interactable_Pet_Tame.BP_Interactable_Pet_Tame_C
struct UBP_Interactable_Pet_Tame_C : UBP_Interactable_Enter_Seat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Multicast_PlayEffects(struct FVector ParticleLocation, struct AIcarusPlayerCharacter* Player); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Pet_Tame(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

