// WidgetBlueprintGeneratedClass UMG_Aquarium.UMG_Aquarium_C
struct UUMG_Aquarium_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Aquarium(int32_t EntryPoint); // (Final|UbergraphFunction)
};

