// BlueprintGeneratedClass BP_Interactable_OpenMountInventory.BP_Interactable_OpenMountInventory_C
struct UBP_Interactable_OpenMountInventory_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_MountPreview_C* MountPreview; 
	struct UUMG_UserInterface_Base_C* UserInterfaceRef; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_OpenMountInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

