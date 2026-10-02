// BlueprintGeneratedClass BP_Interactable_Pickup_Deployable.BP_Interactable_Pickup_Deployable_C
struct UBP_Interactable_Pickup_Deployable_C : UBP_Interactable_Pickup_Item_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployableBase_C* Deployable; 

	void Pickup Item(bool& PickedUp); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Pickup_Deployable(int32_t EntryPoint); // (Final|UbergraphFunction)
};

