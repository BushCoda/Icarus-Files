// BlueprintGeneratedClass BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle.BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle_C
struct UBP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle_C : UBP_Interactable_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FSessionFlagsRowHandle Session Flag; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

