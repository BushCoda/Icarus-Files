// BlueprintGeneratedClass BP_Interactable_Fertalize_CropPlot.BP_Interactable_Fertalize_CropPlot_C
struct UBP_Interactable_Fertalize_CropPlot_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 
	struct FItemData Fertilizer; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Fertalize_CropPlot(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

