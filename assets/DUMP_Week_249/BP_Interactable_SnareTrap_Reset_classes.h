// BlueprintGeneratedClass BP_Interactable_SnareTrap_Reset.BP_Interactable_SnareTrap_Reset_C
struct UBP_Interactable_SnareTrap_Reset_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_SnareTrap_Reset(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

