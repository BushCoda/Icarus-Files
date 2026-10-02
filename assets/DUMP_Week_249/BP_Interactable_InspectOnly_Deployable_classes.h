// BlueprintGeneratedClass BP_Interactable_InspectOnly_Deployable.BP_Interactable_InspectOnly_Deployable_C
struct UBP_Interactable_InspectOnly_Deployable_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_InspectOnly_Deployable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

