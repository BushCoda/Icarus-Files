// WidgetBlueprintGeneratedClass UMG_BagInventory.UMG_BagInventory_C
struct UUMG_BagInventory_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_ContainerInventory_C* UMG_ContainerInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct FItemData Item Data; 

	void GetLinkedActorContainerInventory(struct UInventory*& ContainerInventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetLinkedActorInventoryComponent(struct UInventoryComponent*& InventoryComponent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(struct FItemData Item Data); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BagInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

