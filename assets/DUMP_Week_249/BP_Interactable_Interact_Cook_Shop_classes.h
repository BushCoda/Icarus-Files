// BlueprintGeneratedClass BP_Interactable_Interact_Cook_Shop.BP_Interactable_Interact_Cook_Shop_C
struct UBP_Interactable_Interact_Cook_Shop_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct ABP_DeployableBase_C* Deployable; 
	struct ABP_Mission_NPC_DH_EDEN_Cook_C* As BP Mission NPC DH EDEN Cook; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Cook_Shop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

