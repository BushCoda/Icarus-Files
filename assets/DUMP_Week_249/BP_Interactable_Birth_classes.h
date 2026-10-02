// BlueprintGeneratedClass BP_Interactable_Birth.BP_Interactable_Birth_C
struct UBP_Interactable_Birth_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FGameplayTag, struct FAISetupRowHandle> Children; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Birth(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

