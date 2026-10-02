// BlueprintGeneratedClass BP_Interactable_NPC_Pickup_Vehicle.BP_Interactable_NPC_Pickup_Vehicle_C
struct UBP_Interactable_NPC_Pickup_Vehicle_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FItemData Vehicle; 

	void GetItemisedVehicle(struct FItemData& Vehicle); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_NPC_Pickup_Vehicle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

