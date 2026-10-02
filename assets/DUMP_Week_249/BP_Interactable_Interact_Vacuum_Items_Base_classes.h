// BlueprintGeneratedClass BP_Interactable_Interact_Vacuum_Items_Base.BP_Interactable_Interact_Vacuum_Items_Base_C
struct UBP_Interactable_Interact_Vacuum_Items_Base_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployableBase_C* Deployable; 
	struct FItemsStaticRowHandle Item; 
	int32_t Count; 
	struct FInventoryIDEnum Inventory ID; 
	int32_t Max; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Vacuum_Items_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

