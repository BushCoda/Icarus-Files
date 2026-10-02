// BlueprintGeneratedClass BP_Interactable_Revive_Grave.BP_Interactable_Revive_Grave_C
struct UBP_Interactable_Revive_Grave_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	bool ServerSideProxyCheckOverride; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Revive_Grave(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

