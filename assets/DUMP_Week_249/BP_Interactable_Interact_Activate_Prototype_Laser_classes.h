// BlueprintGeneratedClass BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C
struct UBP_Interactable_Interact_Activate_Prototype_Laser_C : UBP_Interactable_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

