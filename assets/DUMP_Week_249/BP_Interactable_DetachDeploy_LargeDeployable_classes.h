// BlueprintGeneratedClass BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C
struct UBP_Interactable_DetachDeploy_LargeDeployable_C : UBP_Interactable_Pickup_Item_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployableBase_C* Deployable; 
	struct AIcarusItem* HeldDeployable; 

	void OnDestroyFocusedDeployable(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void Pickup Item(bool& PickedUp); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_DetachDeploy_LargeDeployable(int32_t EntryPoint); // (Final|UbergraphFunction)
};

