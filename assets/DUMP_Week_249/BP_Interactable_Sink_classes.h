// BlueprintGeneratedClass BP_Interactable_Sink.BP_Interactable_Sink_C
struct UBP_Interactable_Sink_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t Effectiveness; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Sink(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

