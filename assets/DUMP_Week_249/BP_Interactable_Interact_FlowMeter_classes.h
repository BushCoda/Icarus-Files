// BlueprintGeneratedClass BP_Interactable_Interact_FlowMeter.BP_Interactable_Interact_FlowMeter_C
struct UBP_Interactable_Interact_FlowMeter_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployableBase_C* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_FlowMeter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

