// WidgetBlueprintGeneratedClass UMG_Fishing_Trap.UMG_Fishing_Trap_C
struct UUMG_Fishing_Trap_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UVerticalBox* InventoryVertBox; 
	struct UUMG_InventoryItemSlow_C* LureSlot; 
	struct UBorder* MainBorder; 
	struct UUMG_IconTextButton_C* TakeAllButtonInput; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct FInventoryIDEnum Inventory ID; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Fishing_Trap_TakeAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Fishing_Trap(int32_t EntryPoint); // (Final|UbergraphFunction)
};

