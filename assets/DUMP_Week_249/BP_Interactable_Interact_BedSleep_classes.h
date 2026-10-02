// BlueprintGeneratedClass BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C
struct UBP_Interactable_Interact_BedSleep_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_BedBase_C* Bed; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_BedSleep(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

