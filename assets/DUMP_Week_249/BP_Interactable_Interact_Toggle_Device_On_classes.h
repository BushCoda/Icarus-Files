// BlueprintGeneratedClass BP_Interactable_Interact_Toggle_Device_On.BP_Interactable_Interact_Toggle_Device_On_C
struct UBP_Interactable_Interact_Toggle_Device_On_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void PlaySwitchSound(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Toggle_Device_On(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

