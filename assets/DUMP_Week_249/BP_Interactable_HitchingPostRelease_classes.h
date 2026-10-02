// BlueprintGeneratedClass BP_Interactable_HitchingPostRelease.BP_Interactable_HitchingPostRelease_C
struct UBP_Interactable_HitchingPostRelease_C : UBP_Interactable_SnareTrapRelease_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FItemData ItemData; 
	int32_t NumHitchedCreatures; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_HitchingPostRelease(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

