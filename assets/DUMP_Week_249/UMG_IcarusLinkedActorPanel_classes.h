// WidgetBlueprintGeneratedClass UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C
struct UUMG_IcarusLinkedActorPanel_C : UIcarusLinkedActorPanelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* LinkedActor; 
	bool AutoCloseAtDistance; 
	float AutoCloseDistance; 
	struct FTimerHandle DistanceCheckTimer; 

	struct AActor* GetLinkedActor(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetLinkedActorContainerInventory(struct UInventory*& ContainerInventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetLinkedActorInventoryComponent(struct UInventoryComponent*& InventoryComponent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ClosePanel(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnOpened(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CheckDistanceToLinkedActor(); // (BlueprintCallable|BlueprintEvent)
	void OnPanelDisplayHidden(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_IcarusLinkedActorPanel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

