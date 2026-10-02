// BlueprintGeneratedClass BP_Interactable_Sink_Fill_Container.BP_Interactable_Sink_Fill_Container_C
struct UBP_Interactable_Sink_Fill_Container_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODEvent* InteractSound; 

	void PlayInteractSound(struct AActor* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayInteractFX(struct AActor* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Sink_Fill_Container(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

