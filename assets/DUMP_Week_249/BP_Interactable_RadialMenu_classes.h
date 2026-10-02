// BlueprintGeneratedClass BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C
struct UBP_Interactable_RadialMenu_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* LastInstigator; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FRadialMenuDataRowHandle RadialOptions; 
	struct UContextMenuWidget* CurrentRadialMenu; 

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetContextMenuInfo(struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RadialMenuClosed(enum class ERadialOptions Option, struct AIcarusPlayerCharacter* PlayerCharacter); // (BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void MenuItemSelected(struct FName ItemActionId, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_RadialMenu(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

