// WidgetBlueprintGeneratedClass UMG_Vapour_Condenser.UMG_Vapour_Condenser_C
struct UUMG_Vapour_Condenser_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UInventory* Inventory; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Close(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Vapour_Condenser(int32_t EntryPoint); // (Final|UbergraphFunction)
};

