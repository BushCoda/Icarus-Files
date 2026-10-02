// BlueprintGeneratedClass BP_Interactable_OpenClose_Window.BP_Interactable_OpenClose_Window_C
struct UBP_Interactable_OpenClose_Window_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_OpenClose_Window(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

