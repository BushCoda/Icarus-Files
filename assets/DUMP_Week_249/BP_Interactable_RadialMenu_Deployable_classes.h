// BlueprintGeneratedClass BP_Interactable_RadialMenu_Deployable.BP_Interactable_RadialMenu_Deployable_C
struct UBP_Interactable_RadialMenu_Deployable_C : UBP_Interactable_RadialMenu_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DeployableBase_C* Deployable; 
	enum class EHandedness Handedness; 

	void PickupItem(); // (Public|BlueprintCallable|BlueprintEvent)
	void PickupDeployable(); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void MULTI_PlayPickupFX(struct AIcarusPlayerCharacter* Target); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void RadialMenuClosed(enum class ERadialOptions Option, struct AIcarusPlayerCharacter* PlayerCharacter); // (BlueprintCallable|BlueprintEvent)
	void MenuItemSelected(struct FName ItemActionId, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_RadialMenu_Deployable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

