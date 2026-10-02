// BlueprintGeneratedClass BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C
struct UBP_Interactable_Interact_ArmSatellite_C : UBP_Interactable_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player_1; 
	struct ABP_DeployableBase_C* Deployable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Interact_ArmSatellite(int32_t EntryPoint); // (Final|UbergraphFunction)
};

